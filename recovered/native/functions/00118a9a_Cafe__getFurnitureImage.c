/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118a9a Cafe::getFurnitureImage */

/* Cafe::getFurnitureImage(int, unsigned char) const */

undefined4 __thiscall Cafe::getFurnitureImage(Cafe *this,int param_1,uchar param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 * 4 + *(int *)(this + 0x94));
  return *(undefined4 *)(*(short *)((int)piVar1 + (param_2 + 0x1c) * 2 + 4) * 4 + *piVar1);
}


