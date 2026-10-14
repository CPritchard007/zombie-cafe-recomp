/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a311e ImageButton::paintComponent */

/* ImageButton::paintComponent(CapcomGraphics*) */

undefined8 __thiscall ImageButton::paintComponent(ImageButton *this,CapcomGraphics *param_1)

{
  int *piVar1;
  ImageButton *pIVar2;
  CapcomGraphics *pCVar3;
  
  if (this[0x87] == (ImageButton)0x0) {
    if (this[0x86] == (ImageButton)0x0) {
LAB_002a314c:
      pIVar2 = this;
      pCVar3 = param_1;
      if ((this[0x86] != (ImageButton)0x0) ||
         ((this[0x85] != (ImageButton)0x0 && (*(int *)(this + 0x68) != 0)))) goto LAB_002a3188;
    }
  }
  else if ((this[0x86] == (ImageButton)0x0) ||
          ((this[0x84] != (ImageButton)0x0 && (*(int *)(this + 100) != 0)))) goto LAB_002a314c;
  pIVar2 = *(ImageButton **)(this + 0x6c);
  pCVar3 = *(CapcomGraphics **)(this + 0x70);
  (**(code **)(**(int **)(this + 0x60) + 0x14))
            (*(int **)(this + 0x60),param_1,0,0,pIVar2,pCVar3,this[0x89],9);
LAB_002a3188:
  if (((this[0x87] != (ImageButton)0x0) && (this[0x86] != (ImageButton)0x0)) &&
     (piVar1 = *(int **)(this + 100), piVar1 != (int *)0x0)) {
    pIVar2 = *(ImageButton **)(this + 0x6c);
    pCVar3 = *(CapcomGraphics **)(this + 0x70);
    (**(code **)(*piVar1 + 0x14))
              (piVar1,param_1,*(undefined4 *)(this + 0x74),*(undefined4 *)(this + 0x78),pIVar2,
               pCVar3,this[0x89],9);
  }
  if ((this[0x86] == (ImageButton)0x0) && (piVar1 = *(int **)(this + 0x68), piVar1 != (int *)0x0)) {
    pIVar2 = *(ImageButton **)(this + 0x6c);
    pCVar3 = *(CapcomGraphics **)(this + 0x70);
    (**(code **)(*piVar1 + 0x14))
              (piVar1,param_1,*(undefined4 *)(this + 0x7c),*(undefined4 *)(this + 0x80),pIVar2,
               pCVar3,this[0x89],9);
  }
  return CONCAT44(pCVar3,pIVar2);
}


