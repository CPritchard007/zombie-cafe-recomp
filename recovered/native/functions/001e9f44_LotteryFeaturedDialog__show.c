/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e9f44 LotteryFeaturedDialog::show */

/* LotteryFeaturedDialog::show(int, void (*)(void*), void*) */

void __thiscall
LotteryFeaturedDialog::show
          (LotteryFeaturedDialog *this,int param_1,_func_void_void_ptr *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  code *pcVar5;
  int *piVar6;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  pcVar4 = (char *)(DAT_001ea0c8 + 0x1e9f50);
  L_PrintLog(pcVar4,(char *)(DAT_001ea0cc + 0x1e9f56));
  setCharacter(this,param_1);
  L_PrintLog(pcVar4,(char *)(DAT_001ea0d0 + 0x1e9f6e));
  String::String(aSStack_40,(char *)(DAT_001ea0d4 + 0x1e9f78));
  String::operator=(aSStack_40,(char *)**(undefined4 **)(DAT_001ea0d8 + 0x1e9f82));
  piVar6 = *(int **)(this + 0x84);
  pcVar5 = *(code **)(*piVar6 + 0x44);
  String::String(aSStack_38,aSStack_40);
  (*pcVar5)(piVar6,aSStack_38);
  String::~String(aSStack_38);
  L_PrintLog((char *)(DAT_001ea0dc + 0x1e9fae),(char *)(DAT_001ea0e0 + 0x1e9fb0));
  String::String(aSStack_30,(char *)(DAT_001ea0e4 + 0x1e9fba));
  String::operator=(aSStack_30,(char *)**(undefined4 **)(DAT_001ea0e8 + 0x1e9fc4));
  iVar2 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_40,aSStack_30,*(int *)(DAT_001ea0ec + iVar2 * 4 + 0x1e9fec));
  piVar6 = *(int **)(this + 0x88);
  pcVar5 = *(code **)(*piVar6 + 0x44);
  String::String(aSStack_28,aSStack_40);
  (*pcVar5)(piVar6,aSStack_28);
  String::~String(aSStack_28);
  *(undefined1 *)(*(int *)(this + 0x88) + 0xc4) = 0;
  piVar6 = *(int **)(this + 0x88);
  pcVar5 = *(code **)(*piVar6 + 0x18);
  iVar2 = SmDev();
  (*pcVar5)(piVar6,*(undefined4 *)(DAT_001ea0f0 + iVar2 * 4 + 0x1ea06e),1000);
  L_PrintLog((char *)(DAT_001ea0f4 + 0x1ea02e),(char *)(DAT_001ea0f8 + 0x1ea030));
  piVar6 = *(int **)(this + 0x8c);
  pcVar5 = *(code **)(*piVar6 + 0x44);
  String::String(aSStack_20,(String *)(**(int **)(*(int *)(this + 0xa0) + 0x8c) + DAT_001ea0fc));
  (*pcVar5)(piVar6,aSStack_20);
  String::~String(aSStack_20);
  L_PrintLog((char *)(DAT_001ea100 + 0x1ea066),(char *)(DAT_001ea104 + 0x1ea068));
  *(_func_void_void_ptr **)(this + 0xb0) = param_2;
  *(void **)(this + 0xb4) = param_3;
  iVar1 = DAT_001ea110;
  iVar2 = DAT_001ea10c;
  puVar3 = *(undefined1 **)(DAT_001ea108 + 0x1ea07e);
  this[0x14] = (LotteryFeaturedDialog)0x1;
  *puVar3 = 1;
  L_PrintLog((char *)(iVar2 + 0x1ea088),(char *)(iVar1 + 0x1ea08a));
  String::~String(aSStack_30);
  String::~String(aSStack_40);
  return;
}


