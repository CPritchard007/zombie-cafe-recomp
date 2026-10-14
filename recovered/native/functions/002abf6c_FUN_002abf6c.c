/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abf6c FUN_002abf6c */

int FUN_002abf6c(void)

{
  undefined4 in_r3;
  
  if ((*(_JNIEnv **)(DAT_002abfac + 0x2abf74) != (_JNIEnv *)0x0) &&
     (*(_jobject **)(DAT_002abfac + 0x2abf78) != (_jobject *)0x0)) {
    if (*(char *)(DAT_002abfac + 0x2abf7c) == '\0') {
      jniGetFilesDir(*(_JNIEnv **)(DAT_002abfac + 0x2abf74),*(_jobject **)(DAT_002abfac + 0x2abf78),
                     (char *)(DAT_002abfac + 0x2abf7c),0x400);
    }
    return DAT_002abfb8 + 0x2abfb2;
  }
  __android_log_print(4,DAT_002abfb0 + 0x2abf88,DAT_002abfb4 + 0x2abf8a,in_r3,in_r3);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


