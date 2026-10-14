/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022eac0 Stove::exist */

/* Stove::exist(long) */

void __thiscall Stove::exist(Stove *this,long param_1)

{
  Stove SVar1;
  int iVar2;
  StatusNote *pSVar3;
  int *piVar4;
  Furniture *pFVar5;
  Cafe *this_00;
  Stove *pSVar6;
  uint uVar7;
  int iVar8;
  code *local_28;
  String aSStack_20 [12];
  
  pSVar6 = this + 0x80;
  SVar1 = *pSVar6;
  *pSVar6 = (Stove)((char)SVar1 + -1);
  if ((byte)((char)SVar1 + -1) < 2) {
    *(undefined4 *)(this + 0x7c) = 0;
    *pSVar6 = (Stove)0x1;
  }
  uVar7 = (uint)(byte)this[0x81];
  if (((uVar7 != 0) && (uVar7 = (uint)(byte)this[0x2e], uVar7 != 0)) &&
     (uVar7 = *(uint *)(this + 100), uVar7 != 0)) {
    uVar7 = (uint)((DAT_0022ec70 & *(uint *)(this + 0x80)) == 1);
  }
  this[0x46] = SUB41(uVar7,0);
  iVar2 = CapcomApp::getInstance();
  iVar8 = *(int *)(iVar2 + 4);
  iVar2 = isBurned(this);
  if ((iVar2 == 0) &&
     (iVar2 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar8 + DAT_0022ec74),'\x05')
     , iVar2 != 0)) {
    *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + param_1;
    iVar2 = isBurned(this);
    if (iVar2 != 0) {
      iVar2 = CapcomApp::getInstance();
      iVar2 = *(int *)(iVar2 + 4);
      removeStatusNote(this);
      if (this[0x81] != (Stove)0x0) {
        this_00 = *(Cafe **)(iVar2 + 0x7e8);
        String::String(aSStack_20,0);
        pSVar3 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote(pSVar3,this,0xc,aSStack_20,DAT_0022ec78,0xffffffff,1);
        *(StatusNote **)(this + 0x88) = pSVar3;
        Cafe::addStatusNote(this_00,pSVar3);
        String::~String(aSStack_20);
      }
      piVar4 = (int *)(**(code **)(*(int *)this + 0x20))(this);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      if (*(short *)(this + 0x84) == 1) {
        local_28 = *(code **)(*(int *)this + 0x1c);
        pFVar5 = (Furniture *)operator_new(100);
        Furniture::Furniture
                  (pFVar5,*(FurnitureData **)(*(int *)(*(int *)(iVar2 + 0x7e8) + 0x94) + 0x840));
      }
      else {
        SVar1 = this[0x34];
        local_28 = *(code **)(*(int *)this + 0x1c);
        if (*(int *)(*(int *)(this + 0x68) + 0x24) == DAT_0022ec7c) {
          pFVar5 = (Furniture *)operator_new(100);
          Furniture::Furniture
                    (pFVar5,*(FurnitureData **)
                             (*(int *)(*(int *)(iVar2 + 0x7e8) + 0x94) + DAT_0022ec80));
          iVar2 = (*local_28)(this,pFVar5);
          if (iVar2 == 0) {
            return;
          }
          Furniture::setOrientation(*(Furniture **)(this + 0x3c),(uchar)SVar1);
          return;
        }
        pFVar5 = (Furniture *)operator_new(100);
        Furniture::Furniture
                  (pFVar5,*(FurnitureData **)
                           (**(int **)(DAT_0022ec84 + 0x22ec32) * 4 +
                           *(int *)(*(int *)(iVar2 + 0x7e8) + 0x94)));
      }
      (*local_28)(this,pFVar5);
    }
  }
  return;
}


