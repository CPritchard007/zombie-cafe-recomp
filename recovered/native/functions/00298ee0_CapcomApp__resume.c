/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298ee0 CapcomApp::resume */

/* CapcomApp::resume() */

void __thiscall CapcomApp::resume(CapcomApp *this)

{
  int *piVar1;
  
  this[0x60] = (CapcomApp)0x0;
  piVar1 = *(int **)(this + 4);
  if ((piVar1 != (int *)0x0) && (*(int *)this == 0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  return;
}


