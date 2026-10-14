/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b76dc L_ValidateResponse */

/* L_ValidateResponse(unsigned char const*, unsigned int, String, String) */

void L_ValidateResponse(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *__s;
  byte abStack_4 [4];
  
  iVar3 = DAT_002b7920;
  iVar7 = DAT_002b7920 + -0x14;
  *(undefined4 *)(&stack0x00000004 + DAT_002b7920) = param_4;
  *(undefined4 *)(&stack0x0000000c + DAT_002b7920) = param_3;
  uVar4 = **(undefined4 **)(DAT_002b7928 + 0x2b76f4);
  *(undefined4 **)(&stack0x00000000 + DAT_002b7920) = *(undefined4 **)(DAT_002b7928 + 0x2b76f4);
  *(undefined4 *)(abStack_4 + DAT_002b7924 + DAT_002b7920) = uVar4;
  if (param_1 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    *(byte **)(&stack0x00000010 + DAT_002b7920) = param_1 + param_2 + -1;
    *(uint *)(&stack0xffffffec + DAT_002b7920) = (uint)*param_1;
    __s = &stack0x00000060 + DAT_002b7920;
    bVar2 = **(byte **)(&stack0x00000010 + DAT_002b7920);
    *(byte **)(&stack0xfffffff4 + DAT_002b7920) = param_1;
    *(uint *)(&stack0xfffffff0 + DAT_002b7920) = (uint)bVar2;
    snprintf(__s,0x1000,(char *)(DAT_002b792c + 0x2b7716),param_2);
    __s[DAT_002b7930] = '\0';
    L_PrintLog((char *)(DAT_002b7934 + 0x2b7732),__s);
    uVar5 = (uint)*param_1;
    iVar7 = iVar7 - (uVar5 + 0xf & 0xfffffff8);
    pbVar1 = abStack_4 + iVar7 + 0x14;
    for (iVar6 = 0; iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
      pbVar1[iVar6] = param_1[iVar6 + 1];
    }
    pbVar1[uVar5] = 0;
    StringUtil::stringFromUtf8((StringUtil *)(&stack0x00000018 + iVar3),pbVar1);
    String::String((String *)(&stack0x00000020 + iVar3),(char *)(DAT_002b7938 + 0x2b776e));
    StringUtil::stringFromUtf8((StringUtil *)(&stack0x00000028 + iVar3),param_1,param_2);
    String::toLowerCase();
    String::String((String *)(&stack0x00000038 + iVar3),(char *)(DAT_002b793c + 0x2b7792));
    uVar4 = String::indexOf((String *)(&stack0x00000030 + iVar3),&stack0x00000038 + iVar3);
    *(undefined4 *)(&stack0x00000008 + iVar3) = uVar4;
    String::~String((String *)(&stack0x00000038 + iVar3));
    String::~String((String *)(&stack0x00000030 + iVar3));
    uVar5 = 0;
    if (*(int *)(&stack0x00000008 + iVar3) < 0) {
      String::String((String *)(&stack0x00000040 + iVar3),*(String **)(&stack0x0000000c + iVar3));
      iVar6 = String::indexOf((String *)(&stack0x00000018 + iVar3),&stack0x00000040 + iVar3);
      String::~String((String *)(&stack0x00000040 + iVar3));
      if (-1 < iVar6) {
        uVar5 = (uint)**(byte **)(&stack0x00000010 + iVar3);
        pbVar1 = abStack_4 + (iVar7 - (uVar5 + 0xf & 0xfffffff8)) + 0x14;
        for (iVar7 = 0; iVar7 < (int)uVar5; iVar7 = iVar7 + 1) {
          pbVar1[iVar7] = param_1[iVar7 + (param_2 - uVar5) + -1];
        }
        pbVar1[uVar5] = 0;
        StringUtil::stringFromUtf8((StringUtil *)(&stack0x00000048 + iVar3),pbVar1);
        String::operator=((String *)(&stack0x00000020 + iVar3),&stack0x00000048 + iVar3);
        String::~String((String *)(&stack0x00000048 + iVar3));
      }
      String::String((String *)(&stack0x00000050 + iVar3),*(String **)(&stack0x0000000c + iVar3));
      iVar7 = String::indexOf((String *)(&stack0x00000018 + iVar3),&stack0x00000050 + iVar3);
      if (iVar7 < 0) {
        uVar5 = 0;
      }
      else {
        String::String((String *)(&stack0x00000058 + iVar3),*(String **)(&stack0x00000004 + iVar3));
        uVar5 = String::indexOf((String *)(&stack0x00000020 + iVar3),&stack0x00000058 + iVar3);
        String::~String((String *)(&stack0x00000058 + iVar3));
        uVar5 = ~uVar5 >> 0x1f;
      }
      String::~String((String *)(&stack0x00000050 + iVar3));
      if (uVar5 != 0) {
        uVar5 = 1;
      }
    }
    String::~String((String *)(&stack0x00000028 + iVar3));
    String::~String((String *)(&stack0x00000020 + iVar3));
    String::~String((String *)(&stack0x00000018 + iVar3));
  }
  if (*(int *)(abStack_4 + DAT_002b7924 + iVar3) != **(int **)(&stack0x00000000 + iVar3)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


