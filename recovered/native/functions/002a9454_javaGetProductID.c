/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a9454 javaGetProductID */

void javaGetProductID(void)

{
  int iVar1;
  _jbyteArray *p_Var2;
  int iVar3;
  _jbyteArray *p_Var4;
  int *piVar5;
  _jclass *local_120;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_002a94d8;
  piVar5 = *(int **)(DAT_002a94d4 + 0x2a9460);
  local_1c = *piVar5;
  FUN_002a8162(*(undefined4 *)(DAT_002a94d8 + 0x2a9464),&local_120);
  p_Var2 = (_jbyteArray *)
           _JNIEnv::CallStaticObjectMethod
                     (local_120,*(_jmethodID **)(iVar1 + 0x2a946c),
                      *(undefined4 *)(DAT_002a94dc + 0x2a9482));
  p_Var4 = p_Var2;
  if (p_Var2 != (_jbyteArray *)0x0) {
    iVar3 = _JNIEnv::GetArrayLength((_jarray *)local_120);
    p_Var4 = (_jbyteArray *)malloc(iVar3 + 1);
    _JNIEnv::GetByteArrayRegion((_JNIEnv *)local_120,p_Var2,0,iVar3,p_Var4);
    iVar1 = DAT_002a94e0;
    p_Var4[iVar3] = (_jbyteArray)0x0;
    sprintf(acStack_11c,(char *)(iVar1 + 0x2a94ae),p_Var4,iVar3);
    L_PrintLog((char *)(DAT_002a94e4 + 0x2a94be),acStack_11c);
  }
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(p_Var4);
  }
  return;
}


