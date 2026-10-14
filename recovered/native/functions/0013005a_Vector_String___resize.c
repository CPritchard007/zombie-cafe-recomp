/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013005a Vector<String>::resize */

/* Vector<String>::resize(int, int) */

void __thiscall Vector<String>::resize(Vector<String> *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  String *pSVar4;
  String *__s;
  int local_40;
  String *local_3c;
  String *local_38;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  local_40 = param_2;
  if (*(int *)(this + 4) < param_2) {
    local_40 = -1;
  }
  puVar1 = (undefined4 *)operator_new__((param_1 + 1) * 8);
  __s = (String *)(puVar1 + 2);
  *puVar1 = 8;
  puVar1[1] = param_1;
  local_38 = __s;
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -1;
    String::String(local_38);
    local_38 = local_38 + 8;
  } while (iVar2 != 0);
  memset(__s,0,param_1 << 3);
  iVar2 = *(int *)(this + 4) + 1;
  if (local_40 == -1) {
    local_40 = iVar2;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      local_40 = param_1;
    }
    local_3c = __s;
    for (iVar2 = 0; iVar2 < local_40; iVar2 = iVar2 + 1) {
      String::String(aSStack_30,(String *)(*(int *)(this + 8) + iVar2 * 8));
      String::operator=(local_3c,aSStack_30);
      String::~String(aSStack_30);
      local_3c = local_3c + 8;
    }
  }
  else {
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar2 = iVar2 - local_40;
    local_38 = __s;
    for (iVar3 = 0; iVar3 < local_40; iVar3 = iVar3 + 1) {
      String::String(aSStack_28,(String *)(*(int *)(this + 8) + iVar3 * 8));
      String::operator=(local_38,aSStack_28);
      String::~String(aSStack_28);
      local_38 = local_38 + 8;
    }
    iVar3 = local_40 << 3;
    for (local_40 = 0; local_40 < iVar2; local_40 = local_40 + 1) {
      String::String(aSStack_20,(String *)(*(int *)(this + 8) + iVar3));
      String::operator=((String *)((int)puVar1 + iVar3 + 0x10),aSStack_20);
      String::~String(aSStack_20);
      iVar3 = iVar3 + 8;
    }
  }
  iVar2 = *(int *)(this + 8);
  if (iVar2 != 0) {
    pSVar4 = (String *)(iVar2 + *(int *)(iVar2 + -4) * 8);
    while (pSVar4 != *(String **)(this + 8)) {
      String::~String(pSVar4 + -8);
      pSVar4 = pSVar4 + -8;
    }
    operator_delete__(pSVar4 + -8);
  }
  *(String **)(this + 8) = __s;
  *(int *)this = param_1;
  return;
}


