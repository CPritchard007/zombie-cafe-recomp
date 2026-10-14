/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001608c0 GameStateLoading::init */

/* GameStateLoading::init() */

void __thiscall GameStateLoading::init(GameStateLoading *this)

{
  int iVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  int iVar3;
  int iVar4;
  int *piVar5;
  Vector<CImage*> *this_01;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_001609c4 + 0x1608cc);
  local_1c = *piVar5;
  iVar1 = SmDev();
  String::String(aSStack_124,(String *)(iVar1 * 8 + *(int *)(DAT_001609c8 + 0x1608de)));
  pCVar2 = (CImage *)CImage::createImage(aSStack_124,0);
  puVar7 = (undefined4 *)(DAT_001609cc + 0x1608f8);
  String::~String(aSStack_124);
  piVar8 = (int *)*puVar7;
  this_01 = (Vector<CImage*> *)*piVar8;
  iVar1 = *(int *)(this_01 + 4) + 2;
  if (*(int *)this_01 < iVar1) {
    iVar3 = *(int *)this_01 * 2;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    Vector<CImage*>::resize(this_01,iVar3,-1);
  }
  iVar1 = DAT_001609d0;
  iVar4 = *(int *)(this_01 + 4);
  *(int *)(this_01 + 4) = iVar4 + 1;
  iVar3 = DAT_001609d4;
  *(CImage **)((iVar4 + 1) * 4 + *(int *)(this_01 + 8)) = pCVar2;
  L_PrintLog((char *)(iVar3 + 0x16092e),(char *)(iVar1 + 0x160932));
  sprintf(acStack_11c,(char *)(DAT_001609d8 + 0x160940),*(int *)(*piVar8 + 4) + 1);
  L_PrintLog((char *)(iVar3 + 0x16092e),acStack_11c);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,'\x12',true);
  *(ImageElement **)(this + 0x28) = this_00;
  pcVar6 = (char *)(DAT_001609dc + 0x160968);
  L_PrintLog(pcVar6,pcVar6);
  L_PrintLog(pcVar6,pcVar6);
  L_PrintLog((char *)(DAT_001609e0 + 0x16097c),(char *)(DAT_001609e0 + 0x16097c));
  iVar1 = CapcomApp::getInstance();
  *(undefined1 *)(*(int *)(iVar1 + 4) + DAT_001609e4) = 1;
  L_PrintLog(pcVar6,pcVar6);
  L_PrintLog(pcVar6,pcVar6);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


