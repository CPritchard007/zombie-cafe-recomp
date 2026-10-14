/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9de8 javaSetMusicVolume */

void javaSetMusicVolume(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  _jclass *local_1c [2];
  
  iVar1 = DAT_002a9e20;
  FUN_002a8162(*(undefined4 *)(DAT_002a9e20 + 0x2a9df4),local_1c);
  uVar2 = *(undefined4 *)(DAT_002a9e24 + 0x2a9e1a);
  uVar3 = __extendsfdf2(param_2);
  _JNIEnv::CallStaticBooleanMethod
            (local_1c[0],*(_jmethodID **)(iVar1 + 0x2a9dfc),uVar2,param_1,(int)uVar3,
             (int)((ulonglong)uVar3 >> 0x20));
  return;
}


