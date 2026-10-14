/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a614e TextMenuItem::findBreaks */

/* TextMenuItem::findBreaks() */

void __thiscall TextMenuItem::findBreaks(TextMenuItem *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_24;
  
  sVar6 = 0;
  if (0 < *(int *)(this + 0xc)) {
    clearBreaks(this);
    sVar1 = *(short *)(this + 0x6e);
    iVar8 = 0;
    local_24 = 0;
    local_2c = 0;
    for (iVar7 = 0; iVar7 < sVar1; iVar7 = iVar7 + 1) {
      iVar2 = String::charAt((String *)(this + 0x68),iVar7);
      if (iVar2 == 0x20) {
        iVar8 = iVar7;
      }
      uVar4 = (**(code **)**(undefined4 **)(this + 0x70))(*(undefined4 **)(this + 0x70),iVar2);
      uVar5 = (**(code **)(**(int **)(this + 0x70) + 0xc))();
      __addsf3(uVar4,uVar5);
      iVar3 = __fixsfsi();
      if ((*(int *)(this + 0xc) < local_2c + iVar3) || (iVar2 == 10)) {
        if ((iVar2 != 0x20) && ((iVar2 != 10 && (local_24 < iVar8)))) {
          iVar7 = iVar8 + 1;
        }
        sVar6 = sVar6 + 1;
        addBreak(this,iVar7);
        local_2c = 0;
        iVar8 = iVar7;
        local_24 = iVar7;
      }
      local_2c = local_2c + iVar3;
    }
  }
  if (this[0x78] != (TextMenuItem)0x0) {
    uVar4 = (**(code **)(**(int **)(this + 0x70) + 8))();
    uVar5 = __floatsisf(sVar6 + 1);
    __mulsf3(uVar4,uVar5);
    uVar4 = __fixsfsi();
    *(undefined4 *)(this + 0x10) = uVar4;
  }
  return;
}


