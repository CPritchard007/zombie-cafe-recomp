/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251ab4 std::priv::_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>::insert_unique */

/* std::priv::_Rb_tree<std::string, std::less<std::string >, std::pair<std::string const, int>,
   std::priv::_Select1st<std::pair<std::string const, int> >,
   std::priv::_MapTraitsT<std::pair<std::string const, int> >, std::allocator<std::pair<std::string
   const, int> > >::insert_unique(std::pair<std::string const, int> const&) */

pair * std::priv::
       _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
       ::insert_unique(pair *param_1)

{
  int iVar1;
  pair *in_r1;
  _Rb_tree_node_base *in_r2;
  pair *ppVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *local_28;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  iVar1 = 1;
  ppVar2 = in_r1;
  p_Var3 = *(_Rb_tree_node_base **)(in_r1 + 4);
  while (p_Var3 != (_Rb_tree_node_base *)0x0) {
    iVar1 = FUN_0025155a(in_r2,p_Var3 + 0x10);
    ppVar2 = (pair *)p_Var3;
    if (iVar1 == 0) {
      p_Var3 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
    }
    else {
      p_Var3 = *(_Rb_tree_node_base **)(p_Var3 + 8);
    }
  }
  local_28 = (_Rb_tree_node_base *)ppVar2;
  if (iVar1 != 0) {
    if (ppVar2 == (pair *)*(_Rb_tree_node_base **)(in_r1 + 8)) {
      _M_insert((_Rb_tree_node_base *)&local_20,in_r1,(_Rb_tree_node_base *)ppVar2,in_r2);
      goto LAB_00251b5a;
    }
    if ((*(_Rb_tree_node_base *)ppVar2 == (_Rb_tree_node_base)0x0) &&
       (*(_Rb_tree_node_base **)(*(int *)((_Rb_tree_node_base *)ppVar2 + 4) + 4) ==
        (_Rb_tree_node_base *)ppVar2)) {
      local_28 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)ppVar2 + 0xc);
    }
    else {
      p_Var3 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)ppVar2 + 8);
      if (*(_Rb_tree_node_base **)((_Rb_tree_node_base *)ppVar2 + 8) == (_Rb_tree_node_base *)0x0) {
        p_Var3 = (_Rb_tree_node_base *)ppVar2;
        for (local_28 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)ppVar2 + 4);
            p_Var3 == *(_Rb_tree_node_base **)(local_28 + 8);
            local_28 = *(_Rb_tree_node_base **)(local_28 + 4)) {
          p_Var3 = local_28;
        }
      }
      else {
        do {
          local_28 = p_Var3;
          p_Var3 = *(_Rb_tree_node_base **)(local_28 + 0xc);
        } while (*(_Rb_tree_node_base **)(local_28 + 0xc) != (_Rb_tree_node_base *)0x0);
      }
    }
  }
  iVar1 = FUN_0025155a(local_28 + 0x10,in_r2);
  if (iVar1 == 0) {
    param_1[4] = (pair)0x0;
    *(_Rb_tree_node_base **)param_1 = local_28;
    return param_1;
  }
  _M_insert((_Rb_tree_node_base *)local_1c,in_r1,(_Rb_tree_node_base *)ppVar2,in_r2);
  local_20 = local_1c[0];
LAB_00251b5a:
  *(undefined4 *)param_1 = local_20;
  param_1[4] = (pair)0x1;
  return param_1;
}


