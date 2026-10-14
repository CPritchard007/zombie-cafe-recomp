/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247d08 Vector<Order*>::removeElementAt */

/* Vector<Order*>::removeElementAt(int) */

undefined4 __thiscall Vector<Order*>::removeElementAt(Vector<Order*> *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    puVar1 = (undefined4 *)(*(int *)(this + 8) + param_1 * 4);
    uVar2 = *puVar1;
    *puVar1 = 0;
    move(this,param_1 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
  }
  return uVar2;
}


