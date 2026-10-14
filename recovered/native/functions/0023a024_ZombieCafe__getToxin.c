/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a024 ZombieCafe::getToxin */

/* ZombieCafe::getToxin() */

int __thiscall ZombieCafe::getToxin(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0023a060;
  iVar1 = DAT_0023a05c;
  if (DAT_0023a060 < *(int *)(this + DAT_0023a05c)) {
    *(int *)(this + DAT_0023a05c) = DAT_0023a060;
  }
  else if (*(int *)(this + DAT_0023a05c) < 0) {
    *(undefined4 *)(this + DAT_0023a05c) = 0;
  }
  iVar3 = DAT_0023a060;
  if (*(int *)(this + 0x498) <= iVar2) {
    if (-1 < *(int *)(this + 0x498)) goto LAB_0023a052;
    iVar3 = 0;
  }
  *(int *)(this + 0x498) = iVar3;
LAB_0023a052:
  return *(int *)(this + iVar1) + *(int *)(this + 0x498);
}


