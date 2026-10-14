/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251a3a std::priv::_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>::_M_insert */

/* std::priv::_Rb_tree<std::string, std::less<std::string >, std::pair<std::string const, int>,
   std::priv::_Select1st<std::pair<std::string const, int> >,
   std::priv::_MapTraitsT<std::pair<std::string const, int> >, std::allocator<std::pair<std::string
   const, int> > >::_M_insert(std::priv::_Rb_tree_node_base*, std::pair<std::string const, int>
   const&, std::priv::_Rb_tree_node_base*, std::priv::_Rb_tree_node_base*) */

_Rb_tree_node_base *
std::priv::
_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
::_M_insert(_Rb_tree_node_base *param_1,pair *param_2,_Rb_tree_node_base *param_3,
           _Rb_tree_node_base *param_4)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  int in_stack_00000000;
  int in_stack_00000004;
  
  if (param_3 == (_Rb_tree_node_base *)param_2) {
    p_Var1 = (_Rb_tree_node_base *)
             _M_create_node((_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                             *)param_3,(pair *)param_4);
    *(_Rb_tree_node_base **)(param_3 + 8) = p_Var1;
    *(_Rb_tree_node_base **)(param_3 + 4) = p_Var1;
    *(_Rb_tree_node_base **)(param_3 + 0xc) = p_Var1;
  }
  else if ((in_stack_00000004 == 0) &&
          ((in_stack_00000000 != 0 ||
           (iVar2 = FUN_0025155a(param_4,param_3 + 0x10,param_3,0,param_4), iVar2 != 0)))) {
    p_Var1 = (_Rb_tree_node_base *)
             _M_create_node((_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                             *)param_2,(pair *)param_4);
    *(_Rb_tree_node_base **)(param_3 + 8) = p_Var1;
    if (param_3 == *(_Rb_tree_node_base **)(param_2 + 8)) {
      *(_Rb_tree_node_base **)(param_2 + 8) = p_Var1;
    }
  }
  else {
    p_Var1 = (_Rb_tree_node_base *)
             _M_create_node((_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                             *)param_2,(pair *)param_4);
    *(_Rb_tree_node_base **)(param_3 + 0xc) = p_Var1;
    if (param_3 == *(_Rb_tree_node_base **)(param_2 + 0xc)) {
      *(_Rb_tree_node_base **)(param_2 + 0xc) = p_Var1;
    }
  }
  *(_Rb_tree_node_base **)(p_Var1 + 4) = param_3;
  _Rb_global<bool>::_Rebalance(p_Var1,(_Rb_tree_node_base **)(param_2 + 4));
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  *(_Rb_tree_node_base **)param_1 = p_Var1;
  return param_1;
}


