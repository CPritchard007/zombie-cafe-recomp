/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa888 javaLoadTexture */

void javaLoadTexture(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_121;
  _jclass *local_120;
  char acStack_11c [256];
  int local_1c;
  
  iVar5 = DAT_002aa91c;
  piVar4 = *(int **)(DAT_002aa918 + 0x2aa894);
  local_1c = *piVar4;
  FUN_002a8162(*(undefined4 *)(DAT_002aa91c + 0x2aa898),&local_120);
  uVar1 = _JNIEnv::NewStringUTF((char *)local_120);
  uVar1 = _JNIEnv::CallStaticObjectMethod
                    (local_120,*(_jmethodID **)(iVar5 + 0x2aa8a0),
                     *(undefined4 *)(DAT_002aa920 + 0x2aa8ee),uVar1,param_3);
  iVar5 = 0;
  local_121 = 0;
  uVar2 = _JNIEnv::GetArrayLength((_jarray *)local_120);
  sprintf(acStack_11c,(char *)(DAT_002aa924 + 0x2aa8dc),uVar2);
  L_PrintLog((char *)(DAT_002aa928 + 0x2aa8e8),acStack_11c);
  puVar3 = (undefined4 *)(**(code **)(*(int *)local_120 + 0x2ec))(local_120,uVar1,&local_121);
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
  } while (iVar5 != 6);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


