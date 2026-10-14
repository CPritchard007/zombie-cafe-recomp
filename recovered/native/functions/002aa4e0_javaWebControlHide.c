/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa4e0 javaWebControlHide */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* javaWebControlHide() */

undefined8 javaWebControlHide(void)

{
  int iVar1;
  undefined4 in_r0;
  _jclass *in_r1;
  _jclass *local_c;
  
  iVar1 = DAT_002aa500;
  local_c = in_r1;
  FUN_002a8162(*(undefined4 *)(DAT_002aa500 + 0x2aa4ea),&local_c);
  _JNIEnv::CallStaticVoidMethod
            (local_c,*(_jmethodID **)(iVar1 + 0x2aa4f2),
             *(undefined4 *)((int)&DAT_002aa53c + DAT_002aa504));
  return CONCAT44(local_c,in_r0);
}


