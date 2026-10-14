/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026cf38 FUN_0026cf38 */

undefined4 * FUN_0026cf38(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  pcVar3 = param_2;
  while( true ) {
    if (pcVar3 == (char *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar4 = *(undefined4 **)(pcVar3 + 0x14);
    if (puVar4 != (undefined4 *)0x0) break;
    cVar1 = *pcVar3;
    if ((*(int *)(pcVar3 + 0x28) != 0) &&
       ((((cVar1 == -0x68 || (cVar1 == -0x66)) || (cVar1 == '<')) || (cVar1 == -0x7c)))) {
      if (*(short *)(pcVar3 + 0x1c) < 0) {
        return (undefined4 *)0x0;
      }
      puVar4 = (undefined4 *)
               FUN_00261718(*param_1,*(undefined1 *)
                                      (*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
                            *(undefined4 *)
                             (*(int *)(*(int *)(pcVar3 + 0x28) + 0xc) +
                              *(short *)(pcVar3 + 0x1c) * 0x18 + 0x10),0,param_4);
      *(undefined4 **)(param_2 + 0x14) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      break;
    }
    if ((cVar1 != -99) && (cVar1 != '%')) {
      return (undefined4 *)0x0;
    }
    pcVar3 = *(char **)(pcVar3 + 8);
  }
  uVar5 = *puVar4;
  iVar2 = FUN_0026ce38(*param_1,*(undefined1 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
                       puVar4,uVar5);
  if (iVar2 != 0) {
    return puVar4;
  }
  FUN_00268e48(param_1,DAT_0026cfd0 + 0x26cfc0,uVar5);
  param_1[0x11] = param_1[0x11] + 1;
  return (undefined4 *)0x0;
}


