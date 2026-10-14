/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4c5e Menu::selectPrevious */

/* Menu::selectPrevious() */

undefined8 Menu::selectPrevious(void)

{
  int in_r0;
  int *piVar1;
  CapcomOrderableList<ScreenElement*> *in_r1;
  int iVar2;
  int iVar3;
  CapcomOrderableList<ScreenElement*> *local_1c;
  
  iVar3 = *(int *)(in_r0 + 0x60);
  local_1c = in_r1;
  if (-1 < iVar3) {
    local_1c = (CapcomOrderableList<ScreenElement*> *)(in_r0 + 0x24);
    iVar2 = iVar3;
    do {
      iVar2 = iVar2 + -1;
      if ((iVar2 < 0) &&
         ((*(char *)(in_r0 + 0x68) == '\0' || (iVar2 = *(int *)(in_r0 + 0x38) + -1, iVar2 == iVar3))
         )) break;
      piVar1 = (int *)CapcomOrderableList<ScreenElement*>::get(local_1c,iVar2);
      if ((char)piVar1[0x19] != '\0') {
        local_1c = (CapcomOrderableList<ScreenElement*> *)(in_r0 + 0x6a);
        *local_1c = (CapcomOrderableList<ScreenElement*>)0x1;
        (**(code **)(**(int **)(in_r0 + 100) + 0x40))(*(int **)(in_r0 + 100),0);
        (**(code **)(*piVar1 + 0x40))(piVar1,1);
        *(int **)(in_r0 + 100) = piVar1;
        *(int *)(in_r0 + 0x60) = iVar2;
        *local_1c = (CapcomOrderableList<ScreenElement*>)0x0;
        break;
      }
    } while (iVar2 != iVar3);
  }
  return CONCAT44(local_1c,in_r0);
}


