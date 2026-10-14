/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024f726 ZombieCafe::termImageSubpack */

/* ZombieCafe::termImageSubpack() */

void __thiscall ZombieCafe::termImageSubpack(ZombieCafe *this)

{
  _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
  *p_Var1;
  
  p_Var1 = *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
             **)(this + 0xc10);
  if (p_Var1 != (_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                 *)0x0) {
    if (*(int *)(p_Var1 + 0x10) != 0) {
      std::priv::
      _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
      ::_M_erase(p_Var1,*(_Rb_tree_node_base **)(p_Var1 + 4));
      *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
        **)(p_Var1 + 8) = p_Var1;
      *(undefined4 *)(p_Var1 + 4) = 0;
      *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
        **)(p_Var1 + 0xc) = p_Var1;
      *(undefined4 *)(p_Var1 + 0x10) = 0;
    }
    p_Var1 = *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
               **)(this + 0xc10);
    if (p_Var1 != (_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                   *)0x0) {
      if (*(int *)(p_Var1 + 0x10) != 0) {
        std::priv::
        _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
        ::_M_erase(p_Var1,*(_Rb_tree_node_base **)(p_Var1 + 4));
        *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
          **)(p_Var1 + 8) = p_Var1;
        *(undefined4 *)(p_Var1 + 4) = 0;
        *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
          **)(p_Var1 + 0xc) = p_Var1;
        *(undefined4 *)(p_Var1 + 0x10) = 0;
      }
      operator_delete(p_Var1);
      *(undefined4 *)(this + 0xc10) = 0;
    }
  }
  return;
}


