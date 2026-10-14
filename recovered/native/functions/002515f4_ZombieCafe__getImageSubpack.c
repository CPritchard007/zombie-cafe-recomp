/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002515f4 ZombieCafe::getImageSubpack */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00251644) */
/* WARNING: Removing unreachable block (ram,0x00251644) */
/* ZombieCafe::getImageSubpack(String) */

undefined4 __thiscall ZombieCafe::getImageSubpack(ZombieCafe *this,String *param_2)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_1c;
  StringUtil aSStack_18 [8];
  
  if (*(int *)(this + 0xc10) == 0) {
    return 0;
  }
  StringUtil::getEncodingString(aSStack_18,'\0');
  local_1c = (char *)String::getBytes(param_2,aSStack_18,0,0,0);
  String::~String((String *)aSStack_18);
  p_Var1 = std::priv::
           _Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
           ::_M_find<char*>(*(_Rb_tree<std::string,std::less<std::string>,std::pair<std::string_const,int>,std::priv::_Select1st<std::pair<std::string_const,int>>,std::priv::_MapTraitsT<std::pair<std::string_const,int>>,std::allocator<std::pair<std::string_const,int>>>
                              **)(this + 0xc10),&local_1c);
  if (p_Var1 == *(_Rb_tree_node_base **)(this + 0xc10)) {
    __android_log_print(3,DAT_002516a0 + 0x251676,DAT_002516a4 + 0x251678,local_1c);
LAB_0025167c:
    free(local_1c);
    return 0;
  }
  uVar2 = *(uint *)(p_Var1 + 0x28) >> 0x10;
  if (4 < uVar2) goto LAB_0025167c;
  switch(uVar2) {
  case 0:
    iVar4 = DAT_00251694;
    break;
  case 1:
    iVar4 = 0xa4;
    goto LAB_0025165c;
  case 2:
    iVar4 = DAT_00251698;
    break;
  case 3:
    iVar4 = 0xab;
LAB_0025165c:
    iVar4 = iVar4 << 3;
    break;
  case 4:
    iVar4 = DAT_0025169c;
  }
  uVar3 = PackedImage::createSubpack
                    (*(PackedImage **)(this + iVar4),
                     (uint)(byte)this[0x578] * (*(uint *)(p_Var1 + 0x28) & 0xffff),
                     (uint)(byte)this[0x578]);
  return uVar3;
}


