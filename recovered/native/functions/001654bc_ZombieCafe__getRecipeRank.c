/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001654bc ZombieCafe::getRecipeRank */

/* ZombieCafe::getRecipeRank(unsigned char*) */

undefined8 __thiscall ZombieCafe::getRecipeRank(ZombieCafe *this,uchar *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar4 = 0;
  iVar1 = 0;
  do {
    if ((int)(uint)(byte)this[DAT_00165514] <= iVar4) {
      iVar2 = **(int **)(DAT_00165518 + 0x165502);
      iVar1 = __divsi3(iVar2 * iVar1,(uint)(byte)this[DAT_00165514]);
      iVar2 = iVar2 + -1;
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      return CONCAT44(this,iVar1);
    }
    iVar3 = 0;
    do {
      iVar5 = iVar3 + iVar2 >> 3;
      if (((int)(uint)param_1[iVar5] >> (iVar3 + iVar2 + iVar5 * -8 & 0xffU) & 1U) != 0) {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 10);
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 10;
  } while( true );
}


