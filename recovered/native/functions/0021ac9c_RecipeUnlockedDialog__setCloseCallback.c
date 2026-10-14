/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021ac9c RecipeUnlockedDialog::setCloseCallback */

/* RecipeUnlockedDialog::setCloseCallback(void (*)(void*), void*) */

void __thiscall
RecipeUnlockedDialog::setCloseCallback
          (RecipeUnlockedDialog *this,_func_void_void_ptr *param_1,void *param_2)

{
  *(_func_void_void_ptr **)(this + 0x9c) = param_1;
  *(void **)(this + 0xa0) = param_2;
  return;
}


