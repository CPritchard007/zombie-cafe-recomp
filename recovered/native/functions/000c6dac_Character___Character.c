/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6dac Character::~Character */

/* Character::~Character() */

void __thiscall Character::~Character(Character *this)

{
  char *__ptr;
  int *piVar1;
  char acStack_11c [256];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000c6e24 + 0xc6db8);
  local_1c = *piVar1;
  L_PrintLog((char *)(DAT_000c6e2c + 0xc6dc2),(char *)(DAT_000c6e28 + 0xc6dc4));
  sprintf(acStack_11c,(char *)(DAT_000c6e30 + 0xc6dd4),(int)*(short *)(this + 0xe));
  L_PrintLog((char *)(DAT_000c6e34 + 0xc6dde),acStack_11c);
  __ptr = (char *)String::getBytes((String *)(this + 8));
  L_PrintLog((char *)(DAT_000c6e38 + 0xc6df4),__ptr);
  free(__ptr);
  String::~String((String *)(this + 8));
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


