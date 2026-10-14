/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026136a FUN_0026136a */

undefined8 FUN_0026136a(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = param_1;
  puVar2 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = param_3;
    FUN_00261336(param_1,*param_2);
    FUN_00261336(param_1,param_2[0xc],param_3,param_4,iVar4,puVar2,uVar1);
    FUN_00261336(param_1,param_2[0xe],param_3,param_4);
    uVar1 = FUN_002612ac(param_1,param_2[0xd],param_3,param_4);
    param_2[0xd] = uVar1;
    uVar1 = FUN_002612ac(param_1,param_2[0xb],param_3,param_4);
    param_2[0xb] = uVar1;
    FUN_0026136a(param_1,param_2[0xf],param_3,param_4);
    psVar3 = (short *)param_2[10];
    if (psVar3 != (short *)0x0) {
      puVar2 = (undefined4 *)(int)*psVar3;
      psVar3 = psVar3 + 4;
      for (iVar4 = 0; 0 < (int)puVar2 - iVar4; iVar4 = iVar4 + 1) {
        FUN_0026136a(param_1,*(undefined4 *)(psVar3 + 8),param_3,param_4);
        psVar3 = psVar3 + 0x20;
      }
    }
  }
  return CONCAT44(puVar2,iVar4);
}


