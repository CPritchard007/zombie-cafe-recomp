/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026e718 FUN_0026e718 */

undefined8 FUN_0026e718(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar4 + 0x10) + 0xc) + 0x4d);
  cVar1 = *(char *)(iVar4 + 0x7d);
  iVar2 = FUN_00261718(iVar4,uVar3,param_2,cVar1,param_2,uVar3,param_3);
  if ((cVar1 == '\0') &&
     (((iVar2 == 0 || (*(int *)(iVar2 + 0xc) == 0)) &&
      (iVar2 = FUN_0026ce38(iVar4,uVar3,iVar2,param_2), iVar2 == 0)))) {
    FUN_00268e48(param_1,DAT_0026e76c + 0x26e766,param_2);
  }
  return CONCAT44(param_2,iVar2);
}


