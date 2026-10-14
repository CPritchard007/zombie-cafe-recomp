/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c6f0 FUN_0026c6f0 */

undefined4 FUN_0026c6f0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  iVar2 = FUN_0026526c(param_1,0x20,0);
  uVar4 = 7;
  if (iVar2 == 0) {
    iVar2 = (uint)uVar1 << 0x1d;
    if (iVar2 < 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      iVar3 = DAT_0026c754 + 0x26c71c;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 8);
      uVar5 = *(undefined4 *)(param_1 + 0xc);
      iVar3 = DAT_0026c758 + 0x26c72a;
    }
    sqlite3_snprintf(0x20,*(undefined4 *)(param_1 + 4),iVar3,iVar2,uVar4,uVar5);
    uVar5 = FUN_0025b154(*(undefined4 *)(param_1 + 4));
    *(undefined1 *)(param_1 + 0x1f) = 1;
    uVar4 = DAT_0026c75c;
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | (ushort)uVar4;
    FUN_002653a4(param_1,param_2);
    uVar4 = 0;
  }
  return uVar4;
}


