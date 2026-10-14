/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dc8f0 HudElement::setButtonsVisible */

/* HudElement::setButtonsVisible(bool) */

void __thiscall HudElement::setButtonsVisible(HudElement *this,bool param_1)

{
  int iVar1;
  int iVar2;
  HudElement *pHVar3;
  int iVar4;
  int *piVar5;
  HudElement *pHVar6;
  undefined1 auStack_3c [8];
  int *local_34;
  undefined1 auStack_30 [8];
  int local_28;
  undefined1 auStack_24 [8];
  int *local_1c;
  
  if (param_1) {
    pHVar6 = this;
    for (iVar4 = 0; iVar4 < *(int *)(this + 0x70) + 1; iVar4 = iVar4 + 1) {
      piVar5 = *(int **)(iVar4 * 4 + *(int *)(this + 0x74));
      (**(code **)(*piVar5 + 0x20))(piVar5,pHVar6[0x130]);
      Vector<HudElement::NewIndicator>::elementAt((int)auStack_3c);
      (**(code **)(*local_34 + 0x20))(local_34,pHVar6[DAT_001dca14]);
      if (iVar4 == 0x11) {
        piVar5 = *(int **)(this + 0xdc);
        iVar2 = *piVar5;
        iVar1 = DAT_001dca18;
LAB_001dc97c:
        (**(code **)(iVar2 + 0x20))(piVar5,this[iVar1]);
      }
      else {
        if (iVar4 == 0x10) {
          piVar5 = *(int **)(this + 0xd8);
          iVar1 = 0xa0;
          iVar2 = *piVar5;
LAB_001dc97a:
          iVar1 = iVar1 << 1;
          goto LAB_001dc97c;
        }
        if (iVar4 == 0x17) {
          piVar5 = *(int **)(this + 0xe0);
          iVar2 = *piVar5;
          iVar1 = DAT_001dca1c;
          goto LAB_001dc97c;
        }
        if (iVar4 == 0x12) {
          piVar5 = *(int **)(this + 0xe4);
          iVar1 = 0xa1;
          iVar2 = *piVar5;
          goto LAB_001dc97a;
        }
      }
      pHVar6 = pHVar6 + 1;
    }
  }
  else {
    pHVar6 = this;
    for (iVar4 = 0; iVar4 < *(int *)(this + 0x70) + 1; iVar4 = iVar4 + 1) {
      piVar5 = (int *)(*(int *)(this + 0x74) + iVar4 * 4);
      pHVar6[0x130] = *(HudElement *)(*piVar5 + 0x14);
      Vector<HudElement::NewIndicator>::elementAt((int)auStack_30);
      pHVar6[DAT_001dca14] = *(HudElement *)(local_28 + 0x14);
      piVar5 = (int *)*piVar5;
      (**(code **)(*piVar5 + 0x20))(piVar5,0);
      Vector<HudElement::NewIndicator>::elementAt((int)auStack_24);
      (**(code **)(*local_1c + 0x20))(local_1c,0);
      if (iVar4 == 0x11) {
        pHVar3 = this + 0xdc;
LAB_001dc9fa:
        (**(code **)(**(int **)pHVar3 + 0x20))(*(int **)pHVar3,0);
      }
      else {
        if (iVar4 == 0x10) {
          pHVar3 = this + 0xd8;
          goto LAB_001dc9fa;
        }
        if (iVar4 == 0x17) {
          pHVar3 = this + 0xe0;
          goto LAB_001dc9fa;
        }
        if (iVar4 == 0x12) {
          pHVar3 = this + 0xe4;
          goto LAB_001dc9fa;
        }
      }
      pHVar6 = pHVar6 + 1;
    }
  }
  return;
}


