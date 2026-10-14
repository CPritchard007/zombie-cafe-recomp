package com.google.android.gms.internal;

import java.nio.ByteBuffer;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class or {

    /* renamed from: a, reason: collision with root package name */
    private final ok f514a;
    private final SecureRandom b;

    public or(ok okVar, SecureRandom secureRandom) {
        this.f514a = okVar;
        this.b = secureRandom;
    }

    static void a(byte[] bArr) {
        for (int i = 0; i < bArr.length; i++) {
            bArr[i] = (byte) (bArr[i] ^ 68);
        }
    }

    public byte[] a(String str) throws os {
        try {
            byte[] bArrA = this.f514a.a(str, false);
            if (bArrA.length != 32) {
                throw new os(this);
            }
            byte[] bArr = new byte[16];
            ByteBuffer.wrap(bArrA, 4, 16).get(bArr);
            a(bArr);
            return bArr;
        } catch (IllegalArgumentException e) {
            throw new os(this, e);
        }
    }

    public byte[] a(byte[] bArr, String str) throws NoSuchPaddingException, NoSuchAlgorithmException, os, InvalidKeyException, InvalidAlgorithmParameterException {
        if (bArr.length != 16) {
            throw new os(this);
        }
        try {
            byte[] bArrA = this.f514a.a(str, false);
            if (bArrA.length <= 16) {
                throw new os(this);
            }
            ByteBuffer byteBufferAllocate = ByteBuffer.allocate(bArrA.length);
            byteBufferAllocate.put(bArrA);
            byteBufferAllocate.flip();
            byte[] bArr2 = new byte[16];
            byte[] bArr3 = new byte[bArrA.length - 16];
            byteBufferAllocate.get(bArr2);
            byteBufferAllocate.get(bArr3);
            SecretKeySpec secretKeySpec = new SecretKeySpec(bArr, "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(2, secretKeySpec, new IvParameterSpec(bArr2));
            return cipher.doFinal(bArr3);
        } catch (IllegalArgumentException e) {
            throw new os(this, e);
        } catch (InvalidAlgorithmParameterException e2) {
            throw new os(this, e2);
        } catch (InvalidKeyException e3) {
            throw new os(this, e3);
        } catch (NoSuchAlgorithmException e4) {
            throw new os(this, e4);
        } catch (BadPaddingException e5) {
            throw new os(this, e5);
        } catch (IllegalBlockSizeException e6) {
            throw new os(this, e6);
        } catch (NoSuchPaddingException e7) {
            throw new os(this, e7);
        }
    }
}
