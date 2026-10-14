/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00253a70 ZombieCafe::initData */

/* ZombieCafe::initData() */

undefined4 __thiscall ZombieCafe::initData(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(int *)(DAT_00253afc + 0x253a82) != (int)*(short *)(this + 0x418)) {
    *(int *)(DAT_00253afc + 0x253a82) = (int)*(short *)(this + 0x418);
    uVar6 = L_CurrentTimeMillis();
    iVar2 = DAT_00253b08;
    iVar1 = DAT_00253b04;
    *(undefined8 *)(DAT_00253b00 + 0x253aae) = uVar6;
    __android_log_print(4,iVar1 + 0x253a9c,iVar2 + 0x253aa0,(int)*(short *)(this + 0x418),uVar6);
  }
  uVar4 = doInitDataInternal(this);
  piVar5 = (int *)(DAT_00253b0c + 0x253aba);
  if (*piVar5 != (int)*(short *)(this + 0x418)) {
    uVar6 = L_CurrentTimeMillis();
    iVar1 = DAT_00253b10;
    uVar7 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),
                     *(undefined4 *)(DAT_00253b10 + 0x253ae4),
                     *(undefined4 *)(DAT_00253b10 + 0x253ae8));
    iVar3 = DAT_00253b18;
    iVar2 = DAT_00253b14;
    *(undefined8 *)(iVar1 + 0x253ae4) = uVar6;
    __android_log_print(4,iVar3 + 0x253ae4,iVar2 + 0x253ae6,*piVar5,uVar6,uVar7);
  }
  return uVar4;
}


