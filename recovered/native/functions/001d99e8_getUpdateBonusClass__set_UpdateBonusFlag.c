/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d99e8 getUpdateBonusClass::set_UpdateBonusFlag */

/* getUpdateBonusClass::set_UpdateBonusFlag() */

void __thiscall getUpdateBonusClass::set_UpdateBonusFlag(getUpdateBonusClass *this)

{
  char *__ptr;
  Vector<String> *this_00;
  void *__ptr_00;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  char acStack_5c [64];
  int local_1c;
  
  piVar3 = *(int **)(DAT_001d9b68 + 0x1d99f4);
  local_1c = *piVar3;
  *this = (getUpdateBonusClass)0x0;
  __ptr = (char *)String::getBytes((String *)(this + 0x14));
  L_PrintLog((char *)(DAT_001d9b6c + 0x1d9a10),__ptr);
  free(__ptr);
  if (0 < *(short *)(this + 0x1a)) {
    String::String(aSStack_94,(String *)(this + 0x14));
    this_00 = (Vector<String> *)StringUtil::splitString(aSStack_94,10);
    iVar1 = DAT_001d9b70;
    String::~String(aSStack_94);
    iVar4 = 0;
    while (iVar4 < *(int *)(this_00 + 4) + 1) {
      String::String(aSStack_8c,(String *)(*(int *)(this_00 + 8) + iVar4 * 8));
      __ptr_00 = (void *)String::getBytes(aSStack_8c);
      iVar4 = iVar4 + 1;
      snprintf(acStack_5c,0x40,(char *)(iVar1 + 0x1d9a44),iVar4,__ptr_00);
      free(__ptr_00);
      L_PrintLog((char *)(DAT_001d9b74 + 0x1d9a76),acStack_5c);
      String::~String(aSStack_8c);
    }
    if (3 < *(int *)(this_00 + 4)) {
      String::String(aSStack_84,*(String **)(this_00 + 8));
      iVar1 = StringUtil::parseInt(aSStack_84);
      *this = (getUpdateBonusClass)(iVar1 == 1);
      String::~String(aSStack_84);
      String::String(aSStack_7c,(String *)(*(int *)(this_00 + 8) + 8));
      uVar2 = StringUtil::parseInt(aSStack_7c);
      *(undefined4 *)(this + 4) = uVar2;
      String::~String(aSStack_7c);
      String::String(aSStack_74,(String *)(*(int *)(this_00 + 8) + 0x10));
      uVar2 = StringUtil::parseInt(aSStack_74);
      *(undefined4 *)(this + 8) = uVar2;
      String::~String(aSStack_74);
      String::String(aSStack_6c,(String *)(*(int *)(this_00 + 8) + 0x18));
      uVar2 = StringUtil::parseInt(aSStack_6c);
      *(undefined4 *)(this + 0xc) = uVar2;
      String::~String(aSStack_6c);
      String::String(aSStack_64,(String *)(*(int *)(this_00 + 8) + 0x20));
      iVar1 = StringUtil::parseInt(aSStack_64);
      this[0x10] = (getUpdateBonusClass)(iVar1 == 1);
      String::~String(aSStack_64);
    }
    Vector<String>::~Vector(this_00);
    operator_delete(this_00);
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


