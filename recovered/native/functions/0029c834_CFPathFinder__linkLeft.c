/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c834 CFPathFinder::linkLeft */

/* CFPathFinder::linkLeft(int, int, float) */

undefined8 __thiscall
CFPathFinder::linkLeft(CFPathFinder *this,int param_1,int param_2,float param_3)

{
  undefined4 in_r3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_1c;
  
  uVar4 = (uint)*(byte *)(*(int *)(this + 0x14) + param_1);
  local_1c = param_1;
  if ((int)uVar4 < *(int *)(this + 4)) {
    iVar3 = param_1 * *(int *)(this + 4);
    iVar2 = 0;
    while( true ) {
      local_1c = *(int *)(this + 8);
      if ((int)uVar4 <= iVar2) break;
      iVar1 = (iVar2 + iVar3) * 4;
      if (*(int *)(local_1c + iVar1) == param_2) {
        *(undefined4 *)(*(int *)(this + 0xc) + iVar1) = in_r3;
        goto LAB_0029c884;
      }
      iVar2 = iVar2 + 1;
    }
    *(int *)(local_1c + (iVar3 + uVar4) * 4) = param_2;
    *(undefined4 *)
     ((iVar3 + (uint)*(byte *)(*(int *)(this + 0x14) + param_1)) * 4 + *(int *)(this + 0xc)) = in_r3
    ;
    *(char *)(*(int *)(this + 0x14) + param_1) = *(char *)(*(int *)(this + 0x14) + param_1) + '\x01'
    ;
LAB_0029c884:
    performSet(this,param_1);
  }
  return CONCAT44(local_1c,in_r3);
}


