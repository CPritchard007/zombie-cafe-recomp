/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4ec2 MenuItem::unselect */

/* MenuItem::unselect() */

void __thiscall MenuItem::unselect(MenuItem *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x60);
  if ((piVar1 != (int *)0x0) && (this[0x65] == (MenuItem)0x0)) {
    (**(code **)(*piVar1 + 0x60))(piVar1);
  }
  return;
}


