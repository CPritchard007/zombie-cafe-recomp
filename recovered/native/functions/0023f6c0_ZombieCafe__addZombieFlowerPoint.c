/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f6c0 ZombieCafe::addZombieFlowerPoint */

/* ZombieCafe::addZombieFlowerPoint(float) */

void __thiscall ZombieCafe::addZombieFlowerPoint(ZombieCafe *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  
  iVar2 = __aeabi_fcmplt(in_r1,0);
  if (iVar2 == 0) {
    iVar2 = checkZombieFlowerEventBoost();
    if (iVar2 != 0) {
      in_r1 = __addsf3(in_r1,in_r1);
    }
    if (*(short *)(this + 0x364) == 1) {
      uVar3 = __addsf3(in_r1,*(undefined4 *)(this + 0x368));
      uVar1 = DAT_0023f724;
      *(undefined4 *)(this + 0x368) = uVar3;
      iVar2 = __aeabi_fcmpge(uVar3,uVar1);
      if (iVar2 != 0) {
        *(undefined4 *)(this + 0x368) = DAT_0023f728;
      }
      uVar1 = DAT_0023f728;
      iVar2 = __aeabi_fcmpge(*(undefined4 *)(this + 0x368),DAT_0023f728);
      if (iVar2 != 0) {
        *(undefined4 *)(this + 0x368) = uVar1;
      }
    }
  }
  return;
}


