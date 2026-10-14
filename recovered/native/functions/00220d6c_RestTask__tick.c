/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220d6c RestTask::tick */

/* RestTask::tick(long) */

void __thiscall RestTask::tick(RestTask *this,long param_1)

{
  RestTask RVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  MoveTask *this_00;
  StatusNote *pSVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  uint extraout_r1;
  int extraout_r1_00;
  char *pcVar13;
  ushort *puVar14;
  undefined4 uVar15;
  Character *this_01;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  Cafe *pCVar21;
  float extraout_s0;
  float extraout_s0_00;
  float fVar22;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar18 = DAT_002210e0 + 0x220d78;
  if (((*(int *)(this + 0x24) == 0) && (this[0x38] != (RestTask)0x0)) &&
     (this[5] = (RestTask)0x0, this[4] == (RestTask)0x0)) {
    FUN_00220c60();
  }
  RVar1 = this[0x30];
  if (RVar1 == (RestTask)0x1) {
    (**(code **)(**(int **)(this + 0x24) + 0x14))(*(int **)(this + 0x24),param_1);
    if (*(char *)(*(int *)(this + 0x24) + 4) != '\0') {
      if ((this[0x38] != (RestTask)0x0) && (this[5] = (RestTask)0x0, this[4] == (RestTask)0x0)) {
        FUN_00220c60(this);
      }
      if (*(char *)(*(int *)(this + 0x24) + 5) == '\0') {
        this[0x30] = (RestTask)0x0;
      }
      else {
        *(undefined1 *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x4c) = 0;
        CharacterInstance::setCurrentAnimation
                  (*(CharacterInstance **)(this + 0x20),'\x01',0xff,false);
        pCVar21 = *(Cafe **)(this + 0x28);
        String::String(aSStack_28,(char *)(DAT_002210f0 + 0x220f1a));
        pSVar6 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote
                  (pSVar6,*(undefined4 *)(this + 0x20),7,aSStack_28,
                   **(undefined4 **)(iVar18 + DAT_002210f4),0xffffffff,0);
        Cafe::addStatusNote(pCVar21,pSVar6);
        String::~String(aSStack_28);
        *(undefined4 *)(this + 0x2c) = **(undefined4 **)(iVar18 + DAT_002210f8);
        this[0x30] = (RestTask)0x2;
        if (*(char *)(**(int **)(*(int *)(this + 0x20) + 0x8c) + DAT_002210fc) == '\0') {
          iVar18 = CapcomApp::getInstance();
          iVar18 = *(int *)(iVar18 + 4);
          fVar22 = extraout_s0_00;
        }
        else {
          iVar18 = CapcomApp::getInstance();
          iVar18 = *(int *)(iVar18 + 4);
          fVar22 = extraout_s0;
        }
        ZombieCafe::playEffect(iVar18,fVar22);
      }
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(this + 0x20),'\x01',
                 *(uchar *)(*(int *)(*(CharacterInstance **)(this + 0x20) + 0x8c) + 0x4c),false);
      if (*(int **)(this + 0x24) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x24) + 4))();
        *(undefined4 *)(this + 0x24) = 0;
      }
    }
  }
  else {
    if (RVar1 == (RestTask)0x0) {
      puVar14 = *(ushort **)(iVar18 + DAT_002210e4);
      do {
        uVar4 = *puVar14;
        uVar20 = (uint)*(byte *)(*(int *)(this + 0x28) + 0xa0);
        if (uVar20 != 0) {
          iVar7 = arc4random();
          __aeabi_idivmod(iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f,uVar20);
          uVar20 = extraout_r1;
        }
        uVar5 = **(ushort **)(iVar18 + DAT_002210e8);
        bVar2 = *(byte *)(*(int *)(this + 0x28) + 0xa1);
        iVar7 = arc4random();
        __aeabi_idivmod(iVar7 + (iVar7 >> 0x1f) ^ iVar7 >> 0x1f,5);
        uVar20 = ((uVar4 - 1) - uVar20) * 0x10000 |
                 (uint)uVar5 + (uint)bVar2 + 1 + extraout_r1_00 & 0xffff;
        iVar17 = *(int *)(this + 0x28);
        *(uint *)(this + 0x34) = uVar20;
        iVar7 = 0;
        while( true ) {
          if (*(int *)(iVar17 + 0xd0) < iVar7) {
            iVar16 = *(int *)(iVar17 + 0xcc);
            iVar7 = *(int *)(iVar17 + 0xd0) + 2;
            if (iVar16 < iVar7) {
              if (iVar7 + iVar16 * -2 < 0 != SBORROW4(iVar7,iVar16 * 2)) {
                iVar7 = iVar16 * 2;
              }
              Vector<long>::resize((Vector<long> *)(iVar17 + 0xcc),iVar7,-1);
            }
            iVar7 = *(int *)(iVar17 + 0xd0) + 1;
            *(int *)(iVar17 + 0xd0) = iVar7;
            *(uint *)(iVar7 * 4 + *(int *)(iVar17 + 0xd4)) = uVar20;
            iVar7 = Cafe::diamondToStaggeredCoords
                              (*(int *)(this + 0x34) >> 0x10,(int)(short)*(int *)(this + 0x34));
            iVar18 = **(int **)(iVar18 + DAT_002210ec);
            if (*(int **)(this + 0x24) != (int *)0x0) {
              (**(code **)(**(int **)(this + 0x24) + 4))();
              *(undefined4 *)(this + 0x24) = 0;
            }
            this_00 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(this_00,*(CharacterInstance **)(this + 0x20),*(Cafe **)(this + 0x28),
                               (iVar7 >> 0x10) + iVar18 * (short)iVar7,'\0',false);
            *(MoveTask **)(this + 0x24) = this_00;
            (**(code **)(*(int *)this_00 + 8))(this_00);
            iVar18 = (**(code **)(**(int **)(this + 0x24) + 0x34))();
            if ((iVar18 == 0) && (*(char *)(*(int *)(this + 0x24) + 5) == '\0')) {
              Vector<long>::removeElement
                        ((Vector<long> *)(*(int *)(this + 0x28) + 0xcc),*(long *)(this + 0x34));
              if (*(int **)(this + 0x24) != (int *)0x0) {
                (**(code **)(**(int **)(this + 0x24) + 4))();
                *(undefined4 *)(this + 0x24) = 0;
              }
            }
            if (*(int *)(this + 0x24) == 0) {
              return;
            }
            this[0x30] = (RestTask)0x1;
            return;
          }
          if (*(uint *)(iVar7 * 4 + *(int *)(iVar17 + 0xd4)) == uVar20) break;
          iVar7 = iVar7 + 1;
        }
      } while( true );
    }
    if (RVar1 == (RestTask)0x2) {
      iVar7 = Cafe::isInside(*(Cafe **)(this + 0x28),(int)*(short *)(*(int *)(this + 0x20) + 0x2c));
      if (iVar7 != 0) {
        Vector<long>::removeElement
                  ((Vector<long> *)(*(int *)(this + 0x28) + 0xcc),*(long *)(this + 0x34));
        this[0x30] = (RestTask)0x0;
      }
      iVar7 = *(int *)(this + 0x2c);
      *(int *)(this + 0x2c) = iVar7 - param_1;
      if (iVar7 - param_1 < 1) {
        pcVar13 = (char *)(DAT_00221100 + 0x220fea);
        *(undefined4 *)(this + 0x2c) = **(undefined4 **)(iVar18 + DAT_002210f8);
        pCVar21 = *(Cafe **)(this + 0x28);
        String::String(aSStack_20,pcVar13);
        pSVar6 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote
                  (pSVar6,*(undefined4 *)(this + 0x20),7,aSStack_20,
                   **(undefined4 **)(iVar18 + DAT_002210f4),0xffffffff,0);
        Cafe::addStatusNote(pCVar21,pSVar6);
        String::~String(aSStack_20);
      }
      iVar18 = DAT_00221104;
      uVar19 = *(undefined4 *)
                (*(int *)*(Character **)(*(int *)(this + 0x3c) + 0x590) + DAT_00221104);
      uVar8 = Character::getAdditionRegeneration(*(Character **)(*(int *)(this + 0x3c) + 0x590));
      uVar8 = __addsf3(uVar19,uVar8);
      uVar15 = *(undefined4 *)(*(int *)*(Character **)(*(int *)(this + 0x20) + 0x8c) + iVar18);
      uVar19 = Character::getAdditionRegeneration(*(Character **)(*(int *)(this + 0x20) + 0x8c));
      uVar3 = *(undefined1 *)(*(int *)(this + 0x28) + 0xcb);
      this_01 = *(Character **)(*(int *)(this + 0x20) + 0x8c);
      uVar9 = __floatsisf(param_1);
      uVar10 = __floatunsisf(uVar3);
      uVar11 = __floatsisf(uVar3);
      uVar10 = __addsf3(uVar10,uVar11);
      uVar8 = __addsf3(uVar10,uVar8);
      uVar19 = __addsf3(uVar15,uVar19);
      uVar8 = __addsf3(uVar8,uVar19);
      uVar8 = __subsf3(uVar8,0x3f800000);
      __mulsf3(uVar9,uVar8);
      lVar12 = __fixsfsi();
      Character::rest(this_01,lVar12);
    }
  }
  return;
}


