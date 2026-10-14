/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251570 std::priv::_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>::_M_find<char*> */

/* std::priv::_Rb_tree_node_base* std::priv::_Rb_tree<std::string, std::less<std::string >,
   std::pair<std::string const, int>, std::priv::_Select1st<std::pair<std::string const, int> >,
   std::priv::_MapTraitsT<std::pair<std::string const, int> >, std::allocator<std::pair<std::string
   const, int> > >::_M_find<char*>(char* const&) const */

_Rb_tree_node_base * __thiscall
std::priv::
_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
::_M_find<char*>(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                 *this,char **param_1)

{
  _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
  *p_Var1;
  int iVar2;
  int *piVar3;
  _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
  *p_Var4;
  _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
  *local_58;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002515f0 + 0x25157c);
  local_1c = *piVar3;
  p_Var1 = *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
             **)(this + 4);
  local_58 = this;
  while (p_Var4 = p_Var1,
        p_Var4 != (_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                   *)0x0) {
    FUN_0024aa7c(auStack_4c,*param_1);
    iVar2 = FUN_0025155a(p_Var4 + 0x10,auStack_4c);
    FUN_00245344(auStack_4c);
    if (iVar2 == 0) {
      p_Var1 = *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                 **)(p_Var4 + 8);
      local_58 = p_Var4;
    }
    else {
      p_Var1 = *(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                 **)(p_Var4 + 0xc);
    }
  }
  if (local_58 != this) {
    FUN_0024aa7c(auStack_34,*param_1);
    iVar2 = FUN_0025155a(auStack_34,local_58 + 0x10);
    FUN_00245344(auStack_34);
    if (iVar2 != 0) {
      local_58 = this;
    }
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Rb_tree_node_base *)local_58;
}


