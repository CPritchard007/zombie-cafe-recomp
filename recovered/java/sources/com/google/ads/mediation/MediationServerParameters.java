package com.google.ads.mediation;

import com.google.android.gms.internal.ig;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.lang.reflect.Field;
import java.util.HashMap;
import java.util.Map;

@Deprecated
/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class MediationServerParameters {

    public final class MappingException extends Exception {
        public MappingException(String str) {
            super(str);
        }
    }

    @Target({ElementType.FIELD})
    @Retention(RetentionPolicy.RUNTIME)
    public @interface Parameter {
        String name();

        boolean required() default true;
    }

    protected void a() {
    }

    public void load(Map map) throws IllegalAccessException, SecurityException, MappingException, IllegalArgumentException {
        HashMap map2 = new HashMap();
        for (Field field : getClass().getFields()) {
            Parameter parameter = (Parameter) field.getAnnotation(Parameter.class);
            if (parameter != null) {
                map2.put(parameter.name(), field);
            }
        }
        if (map2.isEmpty()) {
            ig.e("No server options fields detected. To suppress this message either add a field with the @Parameter annotation, or override the load() method.");
        }
        for (Map.Entry entry : map.entrySet()) {
            Field field2 = (Field) map2.remove(entry.getKey());
            if (field2 != null) {
                try {
                    field2.set(this, entry.getValue());
                } catch (IllegalAccessException e) {
                    ig.e("Server option \"" + ((String) entry.getKey()) + "\" could not be set: Illegal Access");
                } catch (IllegalArgumentException e2) {
                    ig.e("Server option \"" + ((String) entry.getKey()) + "\" could not be set: Bad Type");
                }
            } else {
                ig.a("Unexpected server option: " + ((String) entry.getKey()) + " = \"" + ((String) entry.getValue()) + "\"");
            }
        }
        StringBuilder sb = new StringBuilder();
        for (Field field3 : map2.values()) {
            if (((Parameter) field3.getAnnotation(Parameter.class)).required()) {
                ig.e("Required server option missing: " + ((Parameter) field3.getAnnotation(Parameter.class)).name());
                if (sb.length() > 0) {
                    sb.append(", ");
                }
                sb.append(((Parameter) field3.getAnnotation(Parameter.class)).name());
            }
        }
        if (sb.length() > 0) {
            throw new MappingException("Required server option(s) missing: " + sb.toString());
        }
        a();
    }
}
