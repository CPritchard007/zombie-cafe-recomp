/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029950e CFRectangle::intersectsBig */

/* CFRectangle::intersectsBig(_cfRectangleBig, _cfRectangleBig) */

bool CFRectangle::intersectsBig
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
               int param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_5 < param_1 + param_3 + -1) && (param_1 < param_5 + param_7 + -1)) &&
     (param_6 < param_2 + param_4 + -1)) {
    bVar1 = param_2 < param_6 + param_8 + -1;
  }
  return bVar1;
}


