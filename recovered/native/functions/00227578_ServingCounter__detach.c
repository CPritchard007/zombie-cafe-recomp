/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00227578 ServingCounter::detach */

/* ServingCounter::detach() */

undefined4 __thiscall ServingCounter::detach(ServingCounter *this)

{
  int *piVar1;
  
  piVar1 = (int *)Furniture::detach((Furniture *)this);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return 0;
}


