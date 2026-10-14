/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001406c8 Vector<FoodStack*>::insertElementAt */

/* Vector<FoodStack*>::insertElementAt(FoodStack*, int) */

void __thiscall
Vector<FoodStack*>::insertElementAt(Vector<FoodStack*> *this,FoodStack *param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 + 1 < *(int *)this) {
      if (param_2 <= iVar1) {
        FUN_0013bffc(this,param_2,1);
      }
    }
    else {
      resize(this,iVar1 << 1,param_2);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(FoodStack **)(param_2 * 4 + *(int *)(this + 8)) = param_1;
  }
  return;
}


