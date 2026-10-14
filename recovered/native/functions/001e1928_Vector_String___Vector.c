/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e1928 Vector<String>::Vector */

/* Vector<String>::Vector() */

undefined8 __thiscall Vector<String>::Vector(Vector<String> *this)

{
  undefined4 *puVar1;
  String *__s;
  int iVar2;
  bool bVar3;
  String *local_1c;
  
  *(undefined4 *)this = 10;
  puVar1 = (undefined4 *)operator_new__(0x58);
  puVar1[1] = 10;
  __s = (String *)(puVar1 + 2);
  *puVar1 = 8;
  iVar2 = 9;
  local_1c = __s;
  do {
    String::String(local_1c);
    local_1c = local_1c + 8;
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  *(String **)(this + 8) = __s;
  memset(__s,0,*(int *)this << 3);
  *(int *)(this + 4) = iVar2;
  return CONCAT44(this,this);
}


