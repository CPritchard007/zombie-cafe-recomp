/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024f6fc std::priv::_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>::_M_erase */

/* std::priv::_Rb_tree<std::string, std::less<std::string >, std::pair<std::string const, int>,
   std::priv::_Select1st<std::pair<std::string const, int> >,
   std::priv::_MapTraitsT<std::pair<std::string const, int> >, std::allocator<std::pair<std::string
   const, int> > >::_M_erase(std::priv::_Rb_tree_node_base*) */

void __thiscall
std::priv::
_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
::_M_erase(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
           *this,_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *p_Var1;
  
  while (param_1 != (_Rb_tree_node_base *)0x0) {
    _M_erase(this,*(_Rb_tree_node_base **)(param_1 + 0xc));
    p_Var1 = *(_Rb_tree_node_base **)(param_1 + 8);
    FUN_00245344(param_1 + 0x10);
    __node_alloc::_M_deallocate(param_1,0x2c);
    param_1 = p_Var1;
  }
  return;
}


