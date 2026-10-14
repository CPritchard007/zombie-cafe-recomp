/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002518f4 std::priv::_Rb_global<bool>::_Rebalance */

/* std::priv::_Rb_global<bool>::_Rebalance(std::priv::_Rb_tree_node_base*,
   std::priv::_Rb_tree_node_base*&) */

void std::priv::_Rb_global<bool>::_Rebalance
               (_Rb_tree_node_base *param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base _Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  
  *param_1 = (_Rb_tree_node_base)0x0;
  do {
    while( true ) {
      if ((param_1 == *param_2) ||
         (p_Var3 = *(_Rb_tree_node_base **)(param_1 + 4), *p_Var3 != (_Rb_tree_node_base)0x0)) {
        **param_2 = (_Rb_tree_node_base)0x1;
        return;
      }
      p_Var2 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 8);
      if (p_Var3 != p_Var2) break;
      p_Var2 = *(_Rb_tree_node_base **)(*(int *)(p_Var3 + 4) + 0xc);
      if ((p_Var2 == (_Rb_tree_node_base *)0x0) ||
         (_Var1 = *p_Var2, _Var1 != (_Rb_tree_node_base)0x0)) {
        if (param_1 == *(_Rb_tree_node_base **)(p_Var3 + 0xc)) {
          _Rotate_left(p_Var3,param_2);
          param_1 = p_Var3;
        }
        **(undefined1 **)(param_1 + 4) = 1;
        **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
        _Rotate_right(*(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4),param_2);
      }
      else {
LAB_00251940:
        *p_Var3 = (_Rb_tree_node_base)0x1;
        *p_Var2 = (_Rb_tree_node_base)0x1;
        **(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4) = _Var1;
        param_1 = *(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4);
      }
    }
    if ((p_Var2 != (_Rb_tree_node_base *)0x0) && (_Var1 = *p_Var2, _Var1 == (_Rb_tree_node_base)0x0)
       ) goto LAB_00251940;
    if (param_1 == *(_Rb_tree_node_base **)(p_Var3 + 8)) {
      _Rotate_right(p_Var3,param_2);
      param_1 = p_Var3;
    }
    **(undefined1 **)(param_1 + 4) = 1;
    **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
    _Rotate_left(*(_Rb_tree_node_base **)(*(int *)(param_1 + 4) + 4),param_2);
  } while( true );
}


