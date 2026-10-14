/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c924 CFPathFinder::unlinkNodes */

/* CFPathFinder::unlinkNodes(int, int) */

void __thiscall CFPathFinder::unlinkNodes(CFPathFinder *this,int param_1,int param_2)

{
  unlinkLeft(this,param_1,param_2);
  unlinkLeft(this,param_2,param_1);
  return;
}


