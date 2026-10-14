/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f4c64 MessageElement::show */

/* MessageElement::show(String, int, int, int) */

void __thiscall
MessageElement::show(MessageElement *this,String *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (param_3 < 1) {
    if (param_4 < 1) {
      if (0 < param_5) {
        piVar5 = *(int **)(this + 0x80);
        pcVar3 = *(code **)(*piVar5 + 0x44);
        String::valueOf((int)aSStack_28);
        (*pcVar3)(piVar5,aSStack_28);
        String::~String(aSStack_28);
        (**(code **)(**(int **)(this + 0x70) + 0x14))
                  (*(int **)(this + 0x70),
                   *(int *)(*(int *)(this + 0x80) + 4) - *(int *)(*(int *)(this + 0x80) + 0xc),
                   *(undefined4 *)(*(int *)(this + 0x68) + 8));
        (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),1);
        (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
        (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
        piVar5 = *(int **)(this + 0x70);
        uVar2 = 1;
        pcVar3 = *(code **)(*piVar5 + 0x20);
        goto LAB_001f4d82;
      }
      (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
      piVar5 = *(int **)(this + 0x80);
      uVar2 = 0;
      pcVar3 = *(code **)(*piVar5 + 0x20);
      goto LAB_001f4d6e;
    }
    piVar5 = *(int **)(this + 0x80);
    pcVar3 = *(code **)(*piVar5 + 0x44);
    String::valueOf((int)aSStack_30);
    (*pcVar3)(piVar5,aSStack_30);
    String::~String(aSStack_30);
    (**(code **)(**(int **)(this + 0x6c) + 0x14))
              (*(int **)(this + 0x6c),
               *(int *)(*(int *)(this + 0x80) + 4) - *(int *)(*(int *)(this + 0x80) + 0xc),
               *(undefined4 *)(*(int *)(this + 0x68) + 8));
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),1);
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
    piVar5 = *(int **)(this + 0x68);
  }
  else {
    piVar5 = *(int **)(this + 0x80);
    pcVar3 = *(code **)(*piVar5 + 0x44);
    String::valueOf((int)aSStack_38);
    (*pcVar3)(piVar5,aSStack_38);
    String::~String(aSStack_38);
    piVar5 = *(int **)(this + 0x68);
    (**(code **)(*piVar5 + 0x14))
              (piVar5,*(int *)(*(int *)(this + 0x80) + 4) - *(int *)(*(int *)(this + 0x80) + 0xc),
               piVar5[2]);
    (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),1);
    piVar5 = *(int **)(this + 0x80);
    uVar2 = 1;
    pcVar3 = *(code **)(*piVar5 + 0x20);
LAB_001f4d6e:
    (*pcVar3)(piVar5,uVar2);
    piVar5 = *(int **)(this + 0x6c);
  }
  (**(code **)(*piVar5 + 0x20))(piVar5,0);
  piVar5 = *(int **)(this + 0x70);
  uVar2 = 0;
  pcVar3 = *(code **)(*piVar5 + 0x20);
LAB_001f4d82:
  fVar6 = (float)(*pcVar3)(piVar5,uVar2);
  ZombieCafe::playEffect(*(int *)(this + 0x84),fVar6);
  piVar5 = *(int **)(this + 0x7c);
  pcVar3 = *(code **)(*piVar5 + 0x44);
  String::String(aSStack_20,param_2);
  (*pcVar3)(piVar5,aSStack_20);
  String::~String(aSStack_20);
  iVar4 = *(int *)(this + 0x7c);
  iVar1 = SmDev();
  *(char *)(iVar4 + 0x86) = (char)*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_001f4e0c + 0x1f4dbc));
  this[0x14] = (MessageElement)0x1;
  *(undefined4 *)(this + 0x88) = **(undefined4 **)(DAT_001f4e10 + 0x1f4dd2);
  setButtonVisibilities();
  *(int *)(this + 0x8c) = (int)**(short **)(DAT_001f4e14 + 0x1f4de2);
  return;
}


