/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ed28 LoadingGameState::paint */

/* LoadingGameState::paint(CapcomGraphics*) */

void __thiscall LoadingGameState::paint(LoadingGameState *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s3;
  String aSStack_20 [12];
  
  L_PrintLog((char *)(DAT_0029edec + 0x29ed38),(char *)(DAT_0029edf0 + 0x29ed3a));
  if (*(int *)(this + 0x10) < 1) {
    iVar1 = CapcomApp::getInstance();
    iVar1 = *(int *)(iVar1 + 4);
    CapcomGraphics::setColor(param_1,-0x1000000);
    iVar5 = *(int *)(iVar1 + 0x10);
    __floatsisf(iVar5 >> 0x10);
    uVar7 = __floatsisf((int)(short)iVar5);
    CapcomGraphics::fillRect
              (param_1,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2,extraout_s3);
    uVar6 = *(undefined4 *)(iVar1 + 0x10);
    uVar2 = (**(code **)(**(int **)(this + 0xc) + 8))();
    if (*(int *)(this + 0xc) != 0) {
      CapcomGraphics::setColor(param_1,-1);
      piVar4 = *(int **)(this + 0xc);
      pcVar3 = *(code **)(*piVar4 + 0x14);
      String::String(aSStack_20,(String *)(this + 0x18));
      uVar6 = __floatsisf((int)(short)uVar6);
      uVar2 = __subsf3(uVar6,uVar2);
      __mulsf3(uVar2,0x3f000000);
      uVar2 = __fixsfsi();
      (*pcVar3)(piVar4,param_1,aSStack_20,*(undefined4 *)(this + 0x20),uVar2,0,0,100,100);
      String::~String(aSStack_20);
    }
  }
  return;
}


