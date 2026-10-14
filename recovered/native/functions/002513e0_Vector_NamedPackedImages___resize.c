/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002513e0 Vector<NamedPackedImages>::resize */

/* Vector<NamedPackedImages>::resize(int, int) */

void __thiscall
Vector<NamedPackedImages>::resize(Vector<NamedPackedImages> *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  String *pSVar4;
  NamedPackedImages *__s;
  int local_2c;
  NamedPackedImages *local_28;
  String *local_24;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  local_2c = param_2;
  if (*(int *)(this + 4) < param_2) {
    local_2c = -1;
  }
  puVar1 = (undefined4 *)operator_new__(param_1 * 0x18 + 8);
  *puVar1 = 0x18;
  __s = (NamedPackedImages *)(puVar1 + 2);
  puVar1[1] = param_1;
  local_24 = (String *)__s;
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -1;
    String::String(local_24);
    local_24 = local_24 + 0x18;
  } while (iVar2 != 0);
  memset(__s,0,param_1 * 0x18);
  iVar2 = *(int *)(this + 4) + 1;
  if (local_2c == -1) {
    local_2c = iVar2;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      local_2c = param_1;
    }
    local_28 = __s;
    for (iVar2 = 0; iVar2 < local_2c; iVar2 = iVar2 + 1) {
      NamedPackedImages::operator=
                (local_28,(NamedPackedImages *)(*(int *)(this + 8) + iVar2 * 0x18));
      local_28 = local_28 + 0x18;
    }
  }
  else {
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar2 = iVar2 - local_2c;
    local_24 = (String *)__s;
    for (iVar3 = 0; iVar3 < local_2c; iVar3 = iVar3 + 1) {
      NamedPackedImages::operator=
                ((NamedPackedImages *)local_24,
                 (NamedPackedImages *)(*(int *)(this + 8) + iVar3 * 0x18));
      local_24 = local_24 + 0x18;
    }
    iVar3 = local_2c * 0x18;
    for (local_2c = 0; local_2c < iVar2; local_2c = local_2c + 1) {
      NamedPackedImages::operator=
                ((NamedPackedImages *)((int)puVar1 + iVar3 + 0x20),
                 (NamedPackedImages *)(*(int *)(this + 8) + iVar3));
      iVar3 = iVar3 + 0x18;
    }
  }
  iVar2 = *(int *)(this + 8);
  if (iVar2 != 0) {
    pSVar4 = (String *)(iVar2 + *(int *)(iVar2 + -4) * 0x18);
    while (pSVar4 != *(String **)(this + 8)) {
      String::~String(pSVar4 + -0x18);
      pSVar4 = pSVar4 + -0x18;
    }
    operator_delete__(pSVar4 + -8);
  }
  *(NamedPackedImages **)(this + 8) = __s;
  *(int *)this = param_1;
  return;
}


