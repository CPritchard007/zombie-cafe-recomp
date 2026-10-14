/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c8ae CFPathFinder::unlinkLeft */

/* CFPathFinder::unlinkLeft(int, int) */

undefined8 __thiscall CFPathFinder::unlinkLeft(CFPathFinder *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_1 * *(int *)(this + 4);
  iVar2 = 0;
  bVar1 = *(byte *)(*(int *)(this + 0x14) + param_1);
  do {
    if ((int)(uint)bVar1 <= iVar2) {
LAB_0029c912:
      performSet(this,param_1);
      return CONCAT44(local_1c,this);
    }
    iVar3 = (iVar2 + local_1c) * 4;
    if (*(int *)(*(int *)(this + 8) + iVar3) == param_2) {
      *(byte *)(*(int *)(this + 0x14) + param_1) = bVar1 - 1;
      if (iVar2 < (int)(uint)*(byte *)(*(int *)(this + 0x14) + param_1)) {
        local_1c = (iVar2 + local_1c + 1) * 4;
        memmove((void *)(*(int *)(this + 8) + iVar3),(void *)(*(int *)(this + 8) + local_1c),
                ((uint)*(byte *)(*(int *)(this + 0x14) + param_1) - iVar2) * 4);
        memmove((void *)(*(int *)(this + 0xc) + iVar3),(void *)(*(int *)(this + 0xc) + local_1c),
                ((uint)*(byte *)(*(int *)(this + 0x14) + param_1) - iVar2) * 4);
      }
      goto LAB_0029c912;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


