/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251994 std::allocator<std::priv::_Rb_tree_node<std::pair<std::string_const,int>>>::allocate */

/* std::allocator<std::priv::_Rb_tree_node<std::pair<std::string const, int> > >::allocate(unsigned
   int, void const*) */

void std::allocator<std::priv::_Rb_tree_node<std::pair<std::string_const,int>>>::allocate
               (uint param_1,void *param_2)

{
  undefined4 uVar1;
  void *extraout_r1;
  void *local_c;
  
  if (DAT_002519d8 < param_2) {
    local_c = param_2;
    uVar1 = FUN_002e9164(4);
    FUN_002e9cb4();
    FUN_002e91e0(uVar1,*(undefined4 *)(DAT_002519dc + 0x2519b2),
                 *(undefined4 *)(DAT_002519e0 + 0x2519b4));
    param_2 = extraout_r1;
  }
  if (param_2 != (void *)0x0) {
    local_c = (void *)((int)param_2 * 0x2c);
    if (local_c < (void *)0x81) {
      __node_alloc::_M_allocate((uint *)&local_c);
    }
    else {
      operator_new((uint)local_c);
    }
  }
  return;
}


