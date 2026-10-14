/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f8700 FrequentFryerDialog::setDescroptions */

/* FrequentFryerDialog::setDescroptions() */

void __thiscall FrequentFryerDialog::setDescroptions(FrequentFryerDialog *this)

{
  ImageElement *this_00;
  String *this_01;
  CImage *pCVar1;
  char *pcVar2;
  code *pcVar3;
  FrequentFryerDialog *pFVar4;
  int *piVar5;
  int local_8c;
  int local_80 [2];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  pcVar2 = (char *)(DAT_000f8918 + 0xf8716);
  pFVar4 = this + 0xe0;
  local_8c = 0;
  do {
    local_8c = local_8c + 1;
    getItemData((int)local_80);
    if (local_80[0] == 0) {
      piVar5 = *(int **)pFVar4;
      pcVar3 = *(code **)(*piVar5 + 0x44);
      String::String(aSStack_78,(char *)(DAT_000f891c + 0xf8740));
      String::valueOf((int)aSStack_70);
      String::operator+(aSStack_68,aSStack_78,aSStack_70);
      (*pcVar3)(piVar5,aSStack_68);
      String::~String(aSStack_68);
      String::~String(aSStack_70);
      String::~String(aSStack_78);
      this_00 = *(ImageElement **)(pFVar4 + -0x28);
      pCVar1 = *(CImage **)(this + 0x13c);
LAB_000f87b4:
      ImageElement::setImageAndResize(this_00,pCVar1);
    }
    else {
      if (local_80[0] == 1) {
        piVar5 = *(int **)pFVar4;
        pcVar3 = *(code **)(*piVar5 + 0x44);
        Vector<String>::elementAt((int)aSStack_60);
        (*pcVar3)(piVar5,aSStack_60);
        this_01 = aSStack_60;
LAB_000f87a4:
        String::~String(this_01);
        this_00 = *(ImageElement **)(pFVar4 + -0x28);
        pCVar1 = *(CImage **)(this + 0x138);
        goto LAB_000f87b4;
      }
      if (local_80[0] == 2) {
        piVar5 = *(int **)pFVar4;
        pcVar3 = *(code **)(*piVar5 + 0x44);
        String::valueOf((int)aSStack_58);
        Vector<String>::elementAt((int)aSStack_50);
        String::operator+(aSStack_48,aSStack_58,aSStack_50);
        (*pcVar3)(piVar5,aSStack_48);
        String::~String(aSStack_48);
        String::~String(aSStack_50);
        String::~String(aSStack_58);
        this_00 = *(ImageElement **)(pFVar4 + -0x28);
        pCVar1 = *(CImage **)(this + 0x140);
        goto LAB_000f87b4;
      }
      if (local_80[0] == 3) {
        piVar5 = *(int **)pFVar4;
        pcVar3 = *(code **)(*piVar5 + 0x44);
        Vector<String>::elementAt((int)aSStack_40);
        (*pcVar3)(piVar5,aSStack_40);
        this_01 = aSStack_40;
        goto LAB_000f87a4;
      }
      if (local_80[0] == 4) {
        piVar5 = *(int **)pFVar4;
        pcVar3 = *(code **)(*piVar5 + 0x44);
        String::valueOf((int)aSStack_38);
        String::String(aSStack_30,(char *)(DAT_000f8928 + 0xf8856));
        String::operator+(aSStack_28,aSStack_38,aSStack_30);
        (*pcVar3)(piVar5,aSStack_28);
        String::~String(aSStack_28);
        String::~String(aSStack_30);
        String::~String(aSStack_38);
        this_00 = *(ImageElement **)(pFVar4 + -0x28);
        pCVar1 = *(CImage **)(this + 0x148);
        goto LAB_000f87b4;
      }
      piVar5 = *(int **)pFVar4;
      pcVar3 = *(code **)(*piVar5 + 0x44);
      String::String(aSStack_20,pcVar2);
      (*pcVar3)(piVar5,aSStack_20);
      String::~String(aSStack_20);
    }
    pFVar4 = pFVar4 + 4;
    if (local_8c == 10) {
      return;
    }
  } while( true );
}


