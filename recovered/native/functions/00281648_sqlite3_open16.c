/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00281648 sqlite3_open16 */

int sqlite3_open16(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_1c;
  
  *param_2 = 0;
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    uVar2 = FUN_0025f066(0);
    iVar3 = 3 - (uint)(*(char *)(DAT_002816d0 + 0x2816ac) != '\0');
    FUN_00265900(uVar2,0xffffffff,param_1,iVar3,0);
    iVar1 = FUN_0026c760(uVar2,1);
    iVar4 = 7;
    if ((iVar1 != 0) && (iVar4 = FUN_002812a0(iVar1,param_2,6,0), iVar4 == 0)) {
      iVar1 = *(int *)(*(int *)(*param_2 + 0x10) + 0xc);
      if (-1 < (int)((uint)*(ushort *)(iVar1 + 0x4e) << 0x1f)) {
        local_1c = (undefined1)iVar3;
        *(undefined1 *)(iVar1 + 0x4d) = local_1c;
      }
    }
    FUN_00263758(uVar2);
    iVar1 = FUN_002685e0(0,iVar4);
  }
  return iVar1;
}


