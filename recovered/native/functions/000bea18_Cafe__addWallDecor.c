/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bea18 Cafe::addWallDecor */

/* Cafe::addWallDecor(CafeWall*, Furniture*) */

void Cafe::addWallDecor(CafeWall *param_1,Furniture *param_2)

{
  short sVar1;
  int iVar2;
  int *in_r2;
  int *piVar3;
  
  *(int **)(param_2 + 0x44) = in_r2;
  if (param_2[0x3a] == (Furniture)0x0) {
    *(undefined1 *)(in_r2 + 0xd) = 0;
    piVar3 = (int *)in_r2[0xe];
    sVar1 = (short)piVar3[0xf];
  }
  else {
    *(undefined1 *)(in_r2 + 0xd) = 1;
    piVar3 = (int *)in_r2[0xe];
    sVar1 = *(short *)((int)piVar3 + 0x3e);
  }
  iVar2 = CImage::getSize(*(CImage **)(sVar1 * 4 + *piVar3));
  in_r2[8] = iVar2;
  (**(code **)(*in_r2 + 0xc))
            (in_r2,((int)**(short **)(DAT_000bea80 + 0xbea5c) +
                    (int)**(short **)(DAT_000bea84 + 0xbea6a) >> 2) << 0x10 |
                   (int)*(short *)(param_2 + 0x20) >> 1 & 0xffffU);
  return;
}


