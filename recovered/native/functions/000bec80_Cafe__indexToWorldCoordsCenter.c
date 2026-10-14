/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bec80 Cafe::indexToWorldCoordsCenter */

/* Cafe::indexToWorldCoordsCenter(int) */

uint __thiscall Cafe::indexToWorldCoordsCenter(Cafe *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  iVar1 = param_1 * 8;
  return ((int)*(short *)(param_1 * 0x10 + iVar2) + (int)*(short *)((iVar1 + 6) * 2 + iVar2) >> 1)
         << 0x10 | (int)*(short *)((iVar1 + 1) * 2 + iVar2) +
                   (int)*(short *)((iVar1 + 7) * 2 + iVar2) >> 1 & 0xffffU;
}


