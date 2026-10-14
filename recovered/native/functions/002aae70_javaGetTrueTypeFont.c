/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aae70 javaGetTrueTypeFont */

undefined4 *
javaGetTrueTypeFont(undefined4 param_1,undefined4 param_2,_jclass *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  _jclass *local_18;
  int *local_14;
  
  iVar2 = DAT_002aaedc;
  puVar4 = (undefined4 *)(DAT_002aaedc + 0x2aae7c);
  local_18 = param_3;
  local_14 = param_4;
  FUN_002a8162(*puVar4,&local_18,param_3,param_4,param_1,param_2);
  uVar1 = _JNIEnv::NewStringUTF((char *)local_18);
  iVar2 = _JNIEnv::CallStaticObjectMethod
                    (local_18,*(_jmethodID **)(iVar2 + 0x2aae84),
                     *(undefined4 *)(&UNK_002aaed4 + DAT_002aaee0),uVar1,param_2);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)operator_new(8);
    *puVar3 = *puVar4;
    local_14 = (int *)0x0;
    puVar3[1] = 0;
    FUN_002a8162(*puVar3,&local_14);
    uVar1 = (**(code **)(*local_14 + 0x54))(local_14,iVar2);
    puVar3[1] = uVar1;
  }
  return puVar3;
}


