/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c892 CFPathFinder::linkNodes */

/* CFPathFinder::linkNodes(int, int, float) */

void __thiscall CFPathFinder::linkNodes(CFPathFinder *this,int param_1,int param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)linkLeft(this,param_1,param_2,param_3);
  linkLeft(this,param_2,param_1,fVar1);
  return;
}


