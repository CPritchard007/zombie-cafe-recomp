/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239fa0 ZombieCafe::addToxin */

/* ZombieCafe::addToxin(int, bool) */

void __thiscall ZombieCafe::addToxin(ZombieCafe *this,int param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = DAT_00239fe4;
  iVar2 = param_1 + *(int *)(this + DAT_00239fe4);
  *(int *)(this + DAT_00239fe4) = iVar2;
  if (DAT_00239fe8 < iVar2) {
    *(int *)(this + uVar1) = DAT_00239fe8;
  }
  else if (iVar2 < 0) {
    *(undefined4 *)(this + uVar1) = 0;
  }
  if (param_2) {
    pvVar3 = (void *)(DAT_00239fec + 0x239fce);
    iVar2 = CCOptions::GetUInt(*(CCOptions **)(this + 0xa00),pvVar3,(char *)0x0,uVar1);
    CCOptions::SetUInt(*(CCOptions **)(this + 0xa00),pvVar3,(char *)(iVar2 + param_1),
                       (uint)*(CCOptions **)(this + 0xa00));
  }
  return;
}


