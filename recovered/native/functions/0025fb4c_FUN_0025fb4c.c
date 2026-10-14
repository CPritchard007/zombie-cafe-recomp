/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fb4c FUN_0025fb4c */

int FUN_0025fb4c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar3 = *param_1;
  iVar1 = FUN_0025f3a8(*(undefined4 *)(iVar3 + 4));
  iVar2 = 7;
  if (iVar1 != 0) {
    iVar2 = (**(code **)(iVar3 + 0x18))(iVar3,0,iVar1,DAT_0025fb88,auStack_1c);
    if (iVar2 == 0) {
      *param_2 = iVar1;
    }
    else {
      sqlite3_free(iVar1);
    }
  }
  return iVar2;
}


