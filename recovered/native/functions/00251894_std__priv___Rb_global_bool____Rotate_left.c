/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251894 std::priv::_Rb_global<bool>::_Rotate_left */

/* std::priv::_Rb_global<bool>::_Rotate_left(std::priv::_Rb_tree_node_base*,
   std::priv::_Rb_tree_node_base*&) */

void std::priv::_Rb_global<bool>::_Rotate_left
               (_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  
  p_Var2 = *(_Rb_tree_node_base **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(p_Var2 + 8);
  if (*(int *)(p_Var2 + 8) != 0) {
    *(_Rb_tree_node_base **)(*(int *)(p_Var2 + 8) + 4) = param_1;
  }
  *(undefined4 *)(p_Var2 + 4) = *(undefined4 *)(param_1 + 4);
  if (param_1 == *param_2) {
    *param_2 = p_Var2;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (param_1 == *(_Rb_tree_node_base **)(iVar1 + 8)) {
      *(_Rb_tree_node_base **)(iVar1 + 8) = p_Var2;
    }
    else {
      *(_Rb_tree_node_base **)(iVar1 + 0xc) = p_Var2;
    }
  }
  *(_Rb_tree_node_base **)(p_Var2 + 8) = param_1;
  *(_Rb_tree_node_base **)(param_1 + 4) = p_Var2;
  return;
}


