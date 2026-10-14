/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2514 StringUtil::splitString */

/* StringUtil::splitString(String, wchar_t) */

void StringUtil::splitString(String *param_1,undefined4 param_2)

{
  int iVar1;
  Vector<String> *this;
  char *pcVar2;
  void *__ptr;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_002a25f4;
  puVar7 = (uint *)(&stack0xffffffec + DAT_002a25f4);
  *(undefined4 *)(&stack0xffffffec + DAT_002a25f4) = param_2;
  puVar4 = *(undefined4 **)(DAT_002a25f8 + 0x2a2528);
  *(undefined4 *)(&stack0xffffffec + DAT_002a25fc + DAT_002a25f4) = *puVar4;
  this = (Vector<String> *)operator_new(0xc);
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = puVar4;
  Vector<String>::Vector(this);
  pcVar5 = (char *)(DAT_002a2600 + 0x2a2542);
  L_PrintLog(pcVar5,(char *)(DAT_002a2604 + 0x2a2544));
  if (*(short *)(param_1 + 6) == 0) {
    L_PrintLog(pcVar5,(char *)(DAT_002a2608 + 0x2a255a));
    this = (Vector<String> *)0x0;
  }
  else {
    pcVar2 = (char *)String::getBytes(param_1);
    L_PrintLog(pcVar5,pcVar2);
    malloc((int)*(short *)(param_1 + 6) + 1);
    __ptr = (void *)String::getBytes(param_1);
    iVar3 = 0;
    for (iVar6 = 0; iVar6 <= *(short *)(param_1 + 6); iVar6 = iVar6 + 1) {
      if ((iVar6 == *(short *)(param_1 + 6)) || ((uint)*(byte *)((int)__ptr + iVar6) == *puVar7)) {
        (&stack0x00000000 + iVar1)[iVar3] = '\0';
        String::String((String *)(&stack0xfffffff8 + iVar1),&stack0x00000000 + iVar1);
        Vector<String>::addElement(this,&stack0xfffffff8 + iVar1);
        String::~String((String *)(&stack0xfffffff8 + iVar1));
        iVar3 = 0;
      }
      else {
        (&stack0x00000000)[iVar3 + iVar1] = *(byte *)((int)__ptr + iVar6);
        iVar3 = iVar3 + 1;
      }
    }
    free(__ptr);
  }
  if (*(int *)(&stack0xffffffec + DAT_002a25fc + iVar1) != **(int **)(&stack0xfffffff0 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


