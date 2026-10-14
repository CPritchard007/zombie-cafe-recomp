/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdf90 ImageMap::getPoint */

/* ImageMap::getPoint(short, unsigned char) const */

void ImageMap::getPoint(short param_1,uchar param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = (int)param_1;
  pcVar2 = *(code **)(iVar1 + 0x10);
  iVar3 = *(int *)(iVar1 + 0x14) >> 1;
  if (*(int *)(iVar1 + 0x14) << 0x1f < 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(iVar1 + iVar3));
  }
  (*pcVar2)(iVar1 + iVar3,param_2);
  return;
}


