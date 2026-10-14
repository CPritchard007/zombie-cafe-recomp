/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239204 ZombieCafe::paint */

/* ZombieCafe::paint(CapcomGraphics*) */

void __thiscall ZombieCafe::paint(ZombieCafe *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  ZombieCafe *local_12c;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_0023934c;
  piVar5 = *(int **)(DAT_00239348 + 0x239210);
  local_1c = *piVar5;
  this[DAT_0023934c] = (ZombieCafe)0x1;
  CapcomGraphics::setColor(param_1,-1);
  iVar6 = DAT_00239350;
  this[iVar1] = (ZombieCafe)0x0;
  snprintf(acStack_11c,0x100,(char *)(iVar6 + 0x239230),3);
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x48);
  iVar6 = 0;
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x50);
  local_12c = this;
  do {
    uVar7 = CCTextRenderer::Begin(*(void **)(local_12c + 0x4d8));
    if (iVar6 == 0) {
      pvVar4 = *(void **)(this + 0x4d8);
    }
    else {
      uVar7 = __mulsf3(uVar2,uVar3);
      pvVar4 = *(void **)(local_12c + 0x4d8);
    }
    CCTextRenderer::SetTextScale(pvVar4,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    iVar6 = iVar6 + 1;
    local_12c = local_12c + 4;
  } while (iVar6 != 3);
  if (this[DAT_00239354] == (ZombieCafe)0x0) {
    CapcomGame::paint((CapcomGraphics *)this);
    if (this[DAT_00239358] != (ZombieCafe)0x0) {
      this[DAT_00239358] = (ZombieCafe)0x0;
      CapcomGraphics::setColor(param_1,**(int **)(DAT_0023935c + 0x2392ac));
      iVar1 = *(int *)(this + 0x10);
      __floatsisf(iVar1 >> 0x10);
      uVar7 = __floatsisf((int)(short)iVar1);
      CapcomGraphics::fillRect
                (param_1,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2,extraout_s3);
    }
    iVar1 = CCFacebook::IsDialogVisible(*(void **)(this + DAT_00239360));
    if ((iVar1 != 0) && (iVar1 = SmDev(), iVar1 == 4)) {
      CapcomGraphics::setColor(param_1,**(int **)(DAT_00239364 + 0x2392ee));
      iVar1 = *(int *)(this + 0x10);
      __floatsisf(iVar1 >> 0x10);
      uVar7 = __floatsisf((int)(short)iVar1);
      CapcomGraphics::fillRect
                (param_1,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2_00,
                 extraout_s3_00);
    }
  }
  CCTextRenderer::Finish(*(void **)(this + 0x4d8),1);
  CCTextRenderer::Finish(*(void **)(this + DAT_00239368),1);
  CCTextRenderer::Finish(*(void **)(this + 0x4e0),1);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


