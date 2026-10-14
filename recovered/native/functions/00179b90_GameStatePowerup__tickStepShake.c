/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179b90 GameStatePowerup::tickStepShake */

/* GameStatePowerup::tickStepShake(long) */

void __thiscall GameStatePowerup::tickStepShake(GameStatePowerup *this,long param_1)

{
  uchar uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Character *pCVar5;
  int iVar6;
  CharacterInstance *pCVar7;
  int iVar8;
  uint uVar9;
  int extraout_r1;
  int extraout_r1_00;
  GameStatePowerup GVar10;
  code *pcVar11;
  ZombieCafe *this_00;
  int *piVar12;
  CImage *pCVar13;
  float extraout_s0;
  float extraout_s0_00;
  float fVar14;
  float extraout_s0_01;
  float extraout_s1;
  String aSStack_20 [12];
  
  this_00 = *(ZombieCafe **)(this + 0xc);
  iVar2 = ZombieCafe::touchUpEvent(this_00);
  if (((iVar2 == 0) ||
      ((int)**(short **)(DAT_00179d54 + 0x179baa) < *(int *)(this_00 + DAT_00179d58))) ||
     (iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xfc),*(long *)(this_00 + DAT_00179d5c),
                         extraout_s0,extraout_s1), iVar2 == 0)) {
    uVar3 = arc4random();
    uVar4 = arc4random();
    __aeabi_uidivmod(uVar4,10);
    __aeabi_uidivmod(uVar3,10);
    *(uint *)(this + DAT_00179d5c) = extraout_r1 - 5U & 0xffff | (extraout_r1_00 + -5) * 0x10000;
    iVar2 = *(int *)(this + 0x4b0);
    *(int *)(this + 0x4b0) = iVar2 - param_1;
    if (0 < iVar2 - param_1) {
      return;
    }
    String::String(aSStack_20,(char *)(DAT_00179d60 + 0x179c22));
    pCVar5 = (Character *)operator_new(0x6c);
    Character::Character
              (pCVar5,*(undefined4 *)(*(int *)(*(int *)(this + 0xc) + DAT_00179d64) + 0x220),2,1,
               aSStack_20);
    String::~String(aSStack_20);
    iVar6 = SmDev();
    iVar2 = DAT_00179d6c;
    fVar14 = (float)__mulsf3(*(undefined4 *)(DAT_00179d68 + iVar6 * 4 + 0x179c90),
                             *(undefined4 *)(this + DAT_00179d70));
    pCVar7 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar14);
    *(CharacterInstance **)(this + iVar2) = pCVar7;
    CharacterInstance::setCurrentAnimation(pCVar7,'\x04','\0',true);
    piVar12 = *(int **)(this + iVar2);
    pcVar11 = *(code **)(*piVar12 + 0xc);
    iVar6 = SmDev();
    __mulsf3(*(int *)(DAT_00179d74 + iVar6 * 4 + 0x179c9e) + -0x80000000,
             *(undefined4 *)(this + 0x530));
    iVar6 = __fixsfsi();
    iVar8 = SmDev();
    __mulsf3(*(undefined4 *)(DAT_00179d78 + iVar8 * 4 + 0x179ce6),
             *(undefined4 *)(this + DAT_00179d70));
    uVar9 = __fixsfsi();
    (*pcVar11)(piVar12,uVar9 & 0xffff | iVar6 << 0x10);
    uVar3 = PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00179d7c),0x8b,false)
    ;
    *(undefined4 *)(this + 0x498) = uVar3;
    CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + iVar2),0);
    pCVar13 = *(CImage **)(this + 0x498);
    pCVar7 = *(CharacterInstance **)(this + iVar2);
    uVar3 = **(undefined4 **)(DAT_00179d80 + 0x179cf4);
    iVar2 = SmDev();
    uVar1 = __mulsf3(uVar3,*(undefined4 *)((int)&DAT_00179d74 + DAT_00179d84 + iVar2 * 4));
    CharacterInstance::replaceInAnimation(pCVar7,0,pCVar13,extraout_s0_01,uVar1,false,false,0);
    uVar3 = DAT_00179d88;
    *(undefined4 *)(this + DAT_00179d5c) = 0;
    *(undefined4 *)(this + 0x4c0) = uVar3;
    *(undefined4 *)(this + DAT_00179d8c) = 0x8b;
    GVar10 = (GameStatePowerup)0x5;
  }
  else {
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
    endPowerup(this);
    GVar10 = (GameStatePowerup)0xa;
  }
  this[DAT_00179d90] = GVar10;
  return;
}


