/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdef0 CFPathFinder::CFPathFinder */

/* CFPathFinder::CFPathFinder(int, int) */

void __thiscall CFPathFinder::CFPathFinder(CFPathFinder *this,int param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  uint __n;
  int iVar3;
  uint __n_00;
  
  uVar1 = CCPathFinding::Init(param_1);
  *(int *)(this + 4) = param_2;
  __n_00 = param_1 * param_2 * 4;
  *(undefined4 *)this = uVar1;
  pvVar2 = operator_new__(__n_00);
  *(void **)(this + 8) = pvVar2;
  pvVar2 = operator_new__(__n_00);
  *(void **)(this + 0xc) = pvVar2;
  pvVar2 = operator_new__(param_1 * 4);
  *(void **)(this + 0x10) = pvVar2;
  pvVar2 = operator_new__(param_1);
  __n = param_1 + 7 >> 3;
  *(void **)(this + 0x14) = pvVar2;
  pvVar2 = operator_new__(__n);
  *(void **)(this + 0x18) = pvVar2;
  memset(*(void **)(this + 8),-1,__n_00);
  uVar1 = DAT_000bdf8c;
  for (iVar3 = 0; iVar3 < param_1 * param_2; iVar3 = iVar3 + 1) {
    *(undefined4 *)(iVar3 * 4 + *(int *)(this + 0xc)) = uVar1;
  }
  memset(*(void **)(this + 0x10),0,param_1 * 4);
  memset(*(void **)(this + 0x14),0,param_1);
  memset(*(void **)(this + 0x18),0xff,__n);
  for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
    performSet(this,iVar3);
  }
  return;
}


