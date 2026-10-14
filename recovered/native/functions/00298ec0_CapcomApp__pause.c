/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298ec0 CapcomApp::pause */

/* CapcomApp::pause() */

void __thiscall CapcomApp::pause(CapcomApp *this)

{
  int *piVar1;
  
  this[0x60] = (CapcomApp)0x1;
  piVar1 = *(int **)(this + 4);
  if ((piVar1 != (int *)0x0) && (*(int *)this == 0)) {
    (**(code **)(*piVar1 + 0x2c))(piVar1);
  }
  return;
}


