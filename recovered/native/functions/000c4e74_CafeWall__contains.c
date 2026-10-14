/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4e74 CafeWall::contains */

/* CafeWall::contains(long) */

void CafeWall::contains(long param_1)

{
  CFRectangle *this;
  int iVar1;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  this = *(CFRectangle **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 4) >> 0x10;
  if (*(char *)(param_1 + 0x3a) != '\0') {
    iVar1 = iVar1 - ((int)this >> 0x10);
  }
  CFRectangle::contains
            (this,CONCAT44(in_lr,unaff_r4),
             *(int *)(param_1 + 4) - (int)this & 0xffffU | iVar1 << 0x10);
  return;
}


