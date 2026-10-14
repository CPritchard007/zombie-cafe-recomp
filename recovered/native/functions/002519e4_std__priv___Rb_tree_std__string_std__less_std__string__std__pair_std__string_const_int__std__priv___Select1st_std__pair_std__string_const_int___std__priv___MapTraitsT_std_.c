/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002519e4 std::priv::_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>::_M_create_node */

/* std::priv::_Rb_tree<std::string, std::less<std::string >, std::pair<std::string const, int>,
   std::priv::_Select1st<std::pair<std::string const, int> >,
   std::priv::_MapTraitsT<std::pair<std::string const, int> >, std::allocator<std::pair<std::string
   const, int> > >::_M_create_node(std::pair<std::string const, int> const&) */

int __thiscall
std::priv::
_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
::_M_create_node(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                 *this,pair *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = allocator<std::priv::_Rb_tree_node<std::pair<std::string_const,int>>>::allocate
                    ((uint)this,(void *)0x1);
  pcVar2 = (char *)(iVar1 + 0x10);
  if (pcVar2 != (char *)0x0) {
    *(char **)(iVar1 + 0x20) = pcVar2;
    *(char **)(iVar1 + 0x24) = pcVar2;
    string::_M_range_initialize(pcVar2,*(char **)(param_1 + 0x14));
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return iVar1;
}


