/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010cf70 CharacterData::~CharacterData */

/* CharacterData::~CharacterData() */

void __thiscall CharacterData::~CharacterData(CharacterData *this)

{
  char *__ptr;
  String *this_00;
  int *piVar1;
  char acStack_114 [256];
  int local_14;
  
  piVar1 = *(int **)(DAT_0010d084 + 0x10cf7c);
  local_14 = *piVar1;
  if (this[0xae0] == (CharacterData)0x0) {
    if (*(CImage ***)(this + 0x568) != (CImage **)0x0) {
      PackedImage::destroyImages(*(PackedImage **)(this + 0x560),*(CImage ***)(this + 0x568));
    }
    if (*(CImage ***)(this + DAT_0010d088) != (CImage **)0x0) {
      PackedImage::destroyImages
                (*(PackedImage **)(this + DAT_0010d08c),*(CImage ***)(this + DAT_0010d088));
    }
    this_00 = (String *)(this + DAT_0010d090);
    sprintf(acStack_114,(char *)(DAT_0010d094 + 0x10cfba),(int)*(short *)(this_00 + 6));
    L_PrintLog((char *)(DAT_0010d098 + 0x10cfc8),acStack_114);
    __ptr = (char *)String::getBytes(this_00);
    L_PrintLog((char *)(DAT_0010d09c + 0x10cfda),__ptr);
    free(__ptr);
    L_PrintLog((char *)(DAT_0010d0a0 + 0x10cfea),(char *)(DAT_0010d0a4 + 0x10cfec));
  }
  if (*(void **)(this + DAT_0010d0a8 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + DAT_0010d0a8 + 8));
  }
  String::~String((String *)(this + 0xb50));
  String::~String((String *)(this + DAT_0010d0ac));
  String::~String((String *)(this + DAT_0010d0b0));
  String::~String((String *)(this + 0xb10));
  String::~String((String *)(this + DAT_0010d090));
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


