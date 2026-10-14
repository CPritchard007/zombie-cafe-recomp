/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029954e CFRectangle::intersectBig */

/* CFRectangle::intersectBig(_cfRectangleBig, _cfRectangleBig) */

int * CFRectangle::intersectBig
                (int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = intersectsBig(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (iVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    iVar3 = param_2;
    if (param_2 < param_6) {
      iVar3 = param_6;
    }
    iVar4 = param_3;
    if (param_3 < param_7) {
      iVar4 = param_7;
    }
    iVar1 = param_6 + param_8;
    if (param_2 + param_4 < param_6 + param_8) {
      iVar1 = param_2 + param_4;
    }
    iVar2 = param_7 + param_9;
    if (param_3 + param_5 < param_7 + param_9) {
      iVar2 = param_3 + param_5;
    }
    *param_1 = iVar3;
    param_1[1] = iVar4;
    param_1[2] = iVar1 - iVar3;
    param_1[3] = iVar2 - iVar4;
  }
  return param_1;
}


