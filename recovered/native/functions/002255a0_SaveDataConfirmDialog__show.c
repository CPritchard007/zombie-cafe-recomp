/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002255a0 SaveDataConfirmDialog::show */

/* SaveDataConfirmDialog::show(ZombieCafe*, void (*)(void*), void (*)(void*), void*) */

void __thiscall
SaveDataConfirmDialog::show
          (SaveDataConfirmDialog *this,ZombieCafe *param_1,_func_void_void_ptr *param_2,
          _func_void_void_ptr *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  SaveDataInfo *pSVar3;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (param_1 != (ZombieCafe *)0x0) {
    *(_func_void_void_ptr **)(this + 0xc0) = param_2;
    *(_func_void_void_ptr **)(this + 0xc4) = param_3;
    *(void **)(this + 200) = param_4;
    Vector<String>::elementAt((int)aSStack_58);
    String::valueOf((int)aSStack_50);
    String::operator+(aSStack_48,aSStack_58,aSStack_50);
    String::operator=((String *)(this + 0x90),aSStack_48);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    pSVar3 = *(SaveDataInfo **)(this + 0xa0);
    Vector<String>::elementAt((int)aSStack_40);
    SaveDataInfo::setSaveData(pSVar3,param_1,aSStack_40);
    String::~String(aSStack_40);
    iVar1 = CapcomApp::getInstance();
    uVar2 = *(undefined4 *)(iVar1 + 4);
    Vector<String>::elementAt((int)aSStack_38);
    String::valueOf((int)aSStack_30);
    String::operator+(aSStack_28,aSStack_38,aSStack_30);
    String::operator=((String *)(this + 0x98),aSStack_28);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    pSVar3 = *(SaveDataInfo **)(this + 0xa4);
    String::String(aSStack_20,(char *)(DAT_002256ec + 0x225686));
    SaveDataInfo::setSaveData(pSVar3,uVar2,aSStack_20);
    String::~String(aSStack_20);
    this[0x14] = (SaveDataConfirmDialog)0x1;
  }
  return;
}


