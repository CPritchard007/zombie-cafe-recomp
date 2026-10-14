/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aa724 javaFile_Copy */

void javaFile_Copy(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  _jclass *local_120;
  char acStack_11c [256];
  int local_1c;
  
  piVar7 = *(int **)(DAT_002aa7fc + 0x2aa730);
  local_1c = *piVar7;
  FUN_002a8162(*(undefined4 *)(DAT_002aa800 + 0x2aa73e),&local_120);
  uVar2 = _JNIEnv::NewStringUTF((char *)local_120);
  uVar3 = _JNIEnv::NewStringUTF((char *)local_120);
  iVar4 = javaFile_Exist(param_1);
  if (iVar4 == 0) {
    pcVar5 = (char *)(DAT_002aa804 + 0x2aa768);
  }
  else {
    iVar4 = javaFile_Exist(param_2);
    if (iVar4 == 0) {
      L_PrintLog((char *)(DAT_002aa808 + 0x2aa77a),param_2);
    }
    iVar4 = DAT_002aa814;
    L_PrintLog((char *)(DAT_002aa80c + 0x2aa786),(char *)(DAT_002aa810 + 0x2aa788));
    iVar1 = DAT_002aa818;
    L_PrintLog(param_1,param_2);
    iVar6 = _JNIEnv::CallStaticObjectMethod
                      (local_120,*(_jmethodID **)(iVar4 + 0x2aa79c),
                       *(undefined4 *)((int)&DAT_002aa804 + iVar1 + 2),uVar3);
    if (iVar6 != 0) {
      uVar3 = _JNIEnv::GetArrayLength((_jarray *)local_120);
      sprintf(acStack_11c,(char *)(DAT_002aa820 + 0x2aa7c8),uVar3);
      L_PrintLog((char *)(DAT_002aa824 + 0x2aa7d4),acStack_11c);
      uVar2 = _JNIEnv::CallStaticBooleanMethod
                        (local_120,*(_jmethodID **)(iVar4 + 0x2aa79c),
                         *(undefined4 *)((int)&DAT_002aa808 + iVar1 + 2),uVar2,0,uVar3,iVar6);
      goto LAB_002aa7ea;
    }
    pcVar5 = (char *)(DAT_002aa81c + 0x2aa7ae);
  }
  L_PrintLog(pcVar5,param_1);
  uVar2 = 0;
LAB_002aa7ea:
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


