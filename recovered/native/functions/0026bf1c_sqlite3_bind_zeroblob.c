/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026bf1c sqlite3_bind_zeroblob */

int sqlite3_bind_zeroblob(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0026be30();
  if (iVar2 == 0) {
    iVar3 = param_1[0x11] + (param_2 + -1) * 0x28;
    FUN_00263730(iVar3);
    uVar1 = DAT_0026bf60;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(short *)(iVar3 + 0x1c) = (short)uVar1;
    *(undefined1 *)(iVar3 + 0x1e) = 4;
    *(uint *)(iVar3 + 0x10) = param_3 & (int)~param_3 >> 0x1f;
    *(undefined1 *)(iVar3 + 0x1f) = 1;
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  return iVar2;
}


