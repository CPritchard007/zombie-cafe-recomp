/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f5644 MoveTask::tick */

/* MoveTask::tick(long) */

undefined8 __thiscall MoveTask::tick(MoveTask *this,long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  code *pcVar3;
  CharacterInstance *this_00;
  int iVar4;
  MoveTask MVar5;
  uchar uVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  code *local_1c;
  
  local_1c = (code *)param_1;
  if (this[4] != (MoveTask)0x0) goto LAB_001f5836;
  piVar8 = *(int **)(this + 0x30);
  if (piVar8 != (int *)0x0) {
    if (((char)piVar8[1] != '\0') && (iVar4 = (**(code **)(*piVar8 + 0x1c))(piVar8), iVar4 == 0)) {
      (**(code **)(*piVar8 + 8))(piVar8,param_1);
    }
    piVar8 = *(int **)(this + 0x20);
    iVar10 = piVar8[1];
    local_1c = *(code **)(*piVar8 + 0xc);
    iVar4 = PathTween::getCurrentPosition(*(PathTween **)(this + 0x30));
    (*local_1c)(piVar8,iVar4);
    iVar9 = *(int *)(this + 0x20);
    uVar2 = PathTween::getCurrentNodeIndex(*(PathTween **)(this + 0x30));
    *(undefined4 *)(this + 0x24) = uVar2;
    *(short *)(iVar9 + 0x2c) = (short)uVar2;
    iVar9 = *(int *)(this + 0x20);
    uVar2 = PathTween::getNextNodeIndex(*(PathTween **)(this + 0x30));
    *(undefined4 *)(iVar9 + 0x94) = uVar2;
    iVar9 = Cafe::isInside(*(Cafe **)(this + 0x40),(int)*(short *)(*(int *)(this + 0x20) + 0x2c));
    if ((((iVar9 == 0) ||
         (iVar9 = Cafe::isInside(*(Cafe **)(this + 0x40),*(int *)(*(int *)(this + 0x20) + 0x94)),
         iVar9 != 0)) &&
        ((iVar9 = Cafe::isInside(*(Cafe **)(this + 0x40),
                                 (int)*(short *)(*(int *)(this + 0x20) + 0x2c)), iVar9 != 0 ||
         (iVar9 = Cafe::isInside(*(Cafe **)(this + 0x40),*(int *)(*(int *)(this + 0x20) + 0x94)),
         iVar9 == 0)))) || (this[0x44] != (MoveTask)0x0)) {
      if (this[0x44] != (MoveTask)0x0) {
        local_1c = (code *)Cafe::isInside(*(Cafe **)(this + 0x40),
                                          (int)*(short *)(*(int *)(this + 0x20) + 0x2c));
        pcVar3 = (code *)Cafe::isInside(*(Cafe **)(this + 0x40),
                                        *(int *)(*(int *)(this + 0x20) + 0x94));
        if (local_1c == pcVar3) {
          this[0x44] = (MoveTask)0x0;
          piVar8 = (int *)(*(int *)(this + 0x40) + 0xe0);
          iVar9 = *piVar8 + -1;
          goto LAB_001f5820;
        }
      }
    }
    else {
      this[0x44] = (MoveTask)0x1;
      piVar8 = (int *)(*(int *)(this + 0x40) + 0xe0);
      iVar9 = *piVar8 + 1;
LAB_001f5820:
      *piVar8 = iVar9;
    }
    iVar9 = iVar4 >> 0x10;
    iVar11 = iVar10 >> 0x10;
    bVar1 = iVar9 < iVar11;
    sVar7 = (short)iVar10;
    if (sVar7 < (short)iVar4) {
      if (iVar11 < iVar9) {
        uVar6 = '\0';
        MVar5 = this[0x35];
        this_00 = *(CharacterInstance **)(this + 0x20);
        bVar1 = false;
      }
      else {
        if (!bVar1) goto LAB_001f5792;
        MVar5 = this[0x35];
        this_00 = *(CharacterInstance **)(this + 0x20);
        uVar6 = '\x01';
        bVar1 = iVar11 < iVar9;
      }
LAB_001f578e:
      CharacterInstance::setCurrentAnimation(this_00,(uchar)MVar5,uVar6,bVar1);
    }
    else if ((short)iVar4 < sVar7) {
      if (bVar1) {
        MVar5 = this[0x35];
        this_00 = *(CharacterInstance **)(this + 0x20);
        uVar6 = '\x02';
        bVar1 = false;
      }
      else {
        if (iVar9 <= iVar11) goto LAB_001f5792;
        this_00 = *(CharacterInstance **)(this + 0x20);
        MVar5 = this[0x35];
        uVar6 = '\x03';
      }
      goto LAB_001f578e;
    }
LAB_001f5792:
    if (this[0x3d] != (MoveTask)0x0) {
      uVar2 = Character::getSpeedMultiplier(*(Character **)(*(int *)(this + 0x20) + 0x8c));
      fVar12 = (float)__addsf3(uVar2,uVar2);
      ToonAnimation::setSpeedMultiplier(fVar12);
    }
  }
  if (((*(int **)(this + 0x30) != (int *)0x0) &&
      ((this[0x34] == (MoveTask)0x0 ||
       (iVar4 = (**(code **)(**(int **)(this + 0x30) + 0x1c))(), iVar4 == 0)))) ||
     (iVar4 = (**(code **)(*(int *)this + 0x34))(this), iVar4 != 0)) {
    if ((*(int **)(this + 0x30) == (int *)0x0) ||
       (iVar4 = (**(code **)(**(int **)(this + 0x30) + 0x1c))(), iVar4 == 0)) goto LAB_001f5836;
    this[5] = (MoveTask)((byte)this[0x3c] ^ 1);
  }
  if (this[4] == (MoveTask)0x0) {
    FUN_001f5598(this);
  }
LAB_001f5836:
  return CONCAT44(local_1c,this);
}


