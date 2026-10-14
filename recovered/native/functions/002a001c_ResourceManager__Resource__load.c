/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a001c ResourceManager::Resource::load */

/* ResourceManager::Resource::load() */

void __thiscall ResourceManager::Resource::load(Resource *this)

{
  char *__src;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  String aSStack_58 [8];
  String aSStack_50 [8];
  char acStack_48 [52];
  int local_14;
  
  piVar3 = *(int **)(DAT_002a00b4 + 0x2a0028);
  local_14 = *piVar3;
  if (this[0x12] == (Resource)0x0) {
    __src = (char *)String::getBytes((String *)(this + 8));
    strcpy(acStack_48,__src);
    L_PrintLog((char *)(DAT_002a00b8 + 0x2a0048),acStack_48);
    iVar1 = getSize(acStack_48,(int)*(short *)(this + 0x10));
    *(int *)(this + 0x18) = iVar1;
    if (iVar1 < 0) {
      String::String(aSStack_58,(char *)(DAT_002a00bc + 0x2a0062));
      String::operator+(aSStack_50,(char *)aSStack_58);
      CapcomDebug::print(aSStack_50);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
    }
    uVar2 = load(acStack_48,(int)*(short *)(this + 0x10));
    *(undefined4 *)(this + 0x14) = uVar2;
    this[0x12] = (Resource)0x1;
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


