/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1e3c StringUtil::stringFromUtf8 */

/* StringUtil::stringFromUtf8(unsigned char const*) */

void __thiscall StringUtil::stringFromUtf8(StringUtil *this,uchar *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint auStack_158 [14];
  byte abStack_120 [260];
  int local_1c;
  
  piVar6 = *(int **)(DAT_002a1ee0 + 0x2a1e48);
  local_1c = *piVar6;
  iVar4 = -(*(int *)(DAT_002a1ee4 + 0x2a1e5a) + 0xeU & 0xfffffff8);
  pbVar1 = abStack_120 + iVar4;
  for (iVar5 = 0; bVar3 = param_1[iVar5], pbVar1[iVar5] = bVar3, bVar3 != 0; iVar5 = iVar5 + 1) {
  }
  bVar3 = *pbVar1;
  bVar2 = abStack_120[iVar4 + 1];
  *(uint *)((int)auStack_158 + iVar4) = (uint)abStack_120[iVar4 + 2];
  *(uint *)((int)auStack_158 + iVar4 + 4) = (uint)abStack_120[iVar4 + 3];
  *(uint *)((int)auStack_158 + iVar4 + 8) = (uint)abStack_120[iVar4 + 4];
  *(uint *)((int)auStack_158 + iVar4 + 0xc) = (uint)abStack_120[iVar4 + 5];
  *(uint *)((int)auStack_158 + iVar4 + 0x10) = (uint)abStack_120[iVar4 + 6];
  *(uint *)((int)auStack_158 + iVar4 + 0x14) = (uint)abStack_120[iVar4 + 7];
  *(uint *)((int)auStack_158 + iVar4 + 0x18) = (uint)abStack_120[iVar4 + 8];
  *(uint *)((int)auStack_158 + iVar4 + 0x1c) = (uint)abStack_120[iVar4 + 9];
  *(uint *)((int)auStack_158 + iVar4 + 0x20) = (uint)abStack_120[iVar4 + 10];
  *(uint *)((int)auStack_158 + iVar4 + 0x24) = (uint)abStack_120[iVar4 + 0xb];
  *(uint *)((int)auStack_158 + iVar4 + 0x28) = (uint)abStack_120[iVar4 + 0xc];
  *(uint *)((int)auStack_158 + iVar4 + 0x2c) = (uint)abStack_120[iVar4 + 0xd];
  *(uint *)((int)auStack_158 + iVar4 + 0x30) = (uint)abStack_120[iVar4 + 0xe];
  *(uint *)((int)auStack_158 + iVar4 + 0x34) = (uint)abStack_120[iVar4 + 0xf];
  sprintf((char *)(abStack_120 + 4),(char *)(DAT_002a1ee8 + 0x2a1e88),(uint)bVar3,(uint)bVar2);
  String::String((String *)this,(char *)pbVar1);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


