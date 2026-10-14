/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229358 Slider::tick */

/* Slider::tick(long) */

void Slider::tick(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_00229400;
  iVar4 = *(int *)(param_1 + 0x60);
  if ((((*(char *)(iVar4 + DAT_002293fc) == '\0') && (iVar3 = *(int *)(iVar4 + 0x4b8), iVar3 != 0))
      && (*(int *)(iVar4 + DAT_00229400) == 0)) &&
     (iVar4 = ScreenElement::contains((ScreenElement *)param_1,iVar3 >> 0x10,(int)(short)iVar3),
     iVar4 != 0)) {
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x60) + iVar5) != 0) &&
          (*(int *)(*(int *)(param_1 + 0x60) + 0x4b8) == 0)) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    iVar4 = ScreenElement::globalToLocalCoords
                      ((ScreenElement *)param_1,*(long *)(*(int *)(param_1 + 0x60) + 0x4b8));
    iVar4 = iVar4 >> 0x10;
    piVar1 = *(int **)(param_1 + 0x68);
    iVar5 = 0;
    if ((-1 < iVar4) && (iVar3 = *(int *)(param_1 + 0xc) - piVar1[3], iVar5 = iVar4, iVar3 < iVar4))
    {
      iVar5 = iVar3;
    }
    (**(code **)(*piVar1 + 0x14))(piVar1,iVar5,piVar1[2]);
    uVar2 = __divsi3(iVar5 * 100,*(int *)(param_1 + 0xc) - *(int *)(*(int *)(param_1 + 0x68) + 0xc))
    ;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
  }
  return;
}


