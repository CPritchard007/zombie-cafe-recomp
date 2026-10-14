/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfbf4 Cafe::allCollectXpDollar */

/* Cafe::allCollectXpDollar(bool, bool, long) */

void __thiscall Cafe::allCollectXpDollar(Cafe *this,bool param_1,bool param_2,long param_3)

{
  short sVar1;
  int iVar2;
  ZombieCafe *this_00;
  StatusNote *pSVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  sVar1 = *(short *)(this + 0x7e);
  if (0 < sVar1) {
    uVar7 = sVar1 + 1;
    *(ushort *)(this + 0x7e) = uVar7;
    *(int *)(this + 0x80) = *(int *)(this + 0x80) + param_3;
    uVar8 = uVar7 & 1;
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
      iVar2 = CapcomApp::getInstance();
      this_00 = *(ZombieCafe **)(iVar2 + 4);
      while (piVar5 = (int *)CapcomOrderableList<CafeObject*>::nextItem
                                       ((CapcomOrderableList<CafeObject*> *)(this + 0x20)),
            piVar5 != (int *)0x0) {
        if ((*(short *)(this + 0x7c) <= (short)uVar8) &&
           (iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5), iVar2 == 1)) {
          fVar9 = extraout_s0;
          cVar6 = param_2;
          if (param_2) {
            if (*(short *)((int)piVar5 + 0x42) < 1) {
              cVar6 = '\0';
            }
            else {
              ZombieCafe::addCash(this_00,(int)*(short *)((int)piVar5 + 0x42));
              String::valueOf((int)aSStack_28);
              pSVar3 = (StatusNote *)operator_new(0x30);
              StatusNote::StatusNote
                        (pSVar3,piVar5,0,aSStack_28,**(undefined4 **)(DAT_000bfd78 + 0xbfc86),
                         0xffffffff,0);
              addStatusNote(this,pSVar3);
              fVar9 = (float)String::~String(aSStack_28);
              *(undefined2 *)((int)piVar5 + 0x42) = 0;
              cVar6 = '\x01';
            }
          }
          if ((param_1) && (iVar2 = piVar5[0x11], 0 < (short)iVar2)) {
            iVar4 = ZombieCafe::checkCafeLevelMax(this_00);
            fVar9 = extraout_s0_00;
            if (iVar4 == 0) {
              String::valueOf((int)aSStack_20);
              pSVar3 = (StatusNote *)operator_new(0x30);
              StatusNote::StatusNote
                        (pSVar3,piVar5,1,aSStack_20,**(undefined4 **)(DAT_000bfd7c + 0xbfcec),
                         0xffffffff,0);
              addStatusNote(this,pSVar3);
              String::~String(aSStack_20);
              fVar9 = (float)ZombieCafe::addXp(this_00,(int)(short)iVar2);
            }
            *(undefined2 *)(piVar5 + 0x11) = 0;
LAB_000bfd24:
            *(ushort *)(this + 0x7c) = uVar8 + 1;
            ZombieCafe::playEffect((int)this_00,fVar9);
            return;
          }
          if (cVar6 != '\0') goto LAB_000bfd24;
        }
        uVar8 = uVar8 + 1;
      }
      allCollectInit(this);
    }
  }
  return;
}


