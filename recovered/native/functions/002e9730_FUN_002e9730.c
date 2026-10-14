/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9730 FUN_002e9730 */

int FUN_002e9730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  
  fprintf((FILE *)(*(int *)(iRam002e9778 + 0x2e973c) + 0xa8),(char *)(iRam002e977c + 0x2e9740),
          param_1,param_4,param_4);
  iVar2 = dlopen(iRam002e9780 + 0x2e974e,0);
  if (iVar2 != 0) {
    pcVar3 = (code *)dlsym(iVar2,iRam002e9784 + 0x2e975c);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(7,iRam002e9788 + 0x2e976a,param_1);
    }
    dlclose(iVar2);
  }
  uVar1 = FUN_002ea13c();
  *(undefined1 *)(iVar2 + 0xe) = uVar1;
  software_interrupt(0xac);
  software_interrupt(0xb2);
  software_interrupt(0xb0);
  software_interrupt(0xb6);
  FUN_002e9254();
  piVar4 = (int *)FUN_002ea13c();
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + (int)piVar4);
  }
  return iVar2;
}


