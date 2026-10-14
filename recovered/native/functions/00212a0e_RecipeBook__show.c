/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212a0e RecipeBook::show */

/* RecipeBook::show(void (*)(void*, int, int, bool, short), void*) */

undefined8 __thiscall
RecipeBook::show(RecipeBook *this,_func_void_void_ptr_int_int_bool_short *param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  ImageElement *this_00;
  code *pcVar3;
  int iVar4;
  _func_void_void_ptr_int_int_bool_short *local_1c;
  
  *(_func_void_void_ptr_int_int_bool_short **)(this + 0x158) = param_1;
  *(void **)(this + 0x15c) = param_2;
  local_1c = param_1;
  if (this[0x14] != (RecipeBook)0x0) goto LAB_00212ab6;
  this[0x14] = (RecipeBook)0x1;
  iVar1 = ZombieCafe::isExperienceBoost(*(ZombieCafe **)(this + 0x60));
  if (iVar1 != 0) {
    local_1c = (_func_void_void_ptr_int_int_bool_short *)ZombieCafe::getExperienceBoostType();
    if (local_1c == (_func_void_void_ptr_int_int_bool_short *)0x1) {
      ImageElement::setImageAndResize
                (*(ImageElement **)(this + 0xf8),*(CImage **)(*(int *)(this + 0x138) + 0x398));
      piVar2 = *(int **)(this + 0xf8);
      pcVar3 = *(code **)(*piVar2 + 0x20);
    }
    else {
      iVar1 = ZombieCafe::getExperienceBoostType();
      if (iVar1 == 2) {
        this_00 = *(ImageElement **)(this + 0xf8);
        iVar1 = *(int *)(this + 0x138);
        iVar4 = 0xeb;
      }
      else {
        iVar1 = ZombieCafe::getExperienceBoostType();
        if (iVar1 == 3) {
          this_00 = *(ImageElement **)(this + 0xf8);
          iVar1 = *(int *)(this + 0x138);
          iVar4 = 0xec;
        }
        else {
          iVar1 = ZombieCafe::getExperienceBoostType();
          if (iVar1 != 4) goto LAB_00212aa8;
          this_00 = *(ImageElement **)(this + 0xf8);
          iVar1 = *(int *)(this + 0x138);
          iVar4 = 0xed;
        }
      }
      ImageElement::setImageAndResize(this_00,*(CImage **)(iVar1 + iVar4 * 4));
      piVar2 = *(int **)(this + 0xf8);
      pcVar3 = *(code **)(*piVar2 + 0x20);
    }
    (*pcVar3)(piVar2,1);
  }
LAB_00212aa8:
  *(undefined2 *)(this + 0x172) = 0;
  pageFlip();
LAB_00212ab6:
  return CONCAT44(local_1c,this);
}


