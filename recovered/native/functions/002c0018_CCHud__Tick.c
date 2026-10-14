/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0018 CCHud::Tick */

/* CCHud::Tick(void*) */

void CCHud::Tick(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = CCGetTimeMS();
  iVar3 = *(int *)((int)param_1 + 0x10);
  *(int *)((int)param_1 + 0x10) = iVar1;
  if (*(int *)((int)param_1 + 8) != 0) {
    uVar2 = __floatunsisf(iVar1 - iVar3);
    uVar2 = __mulsf3(uVar2,DAT_002c0050);
    uVar2 = __addsf3(uVar2,*(undefined4 *)((int)param_1 + 0xc));
    *(undefined4 *)((int)param_1 + 0xc) = uVar2;
    iVar1 = __aeabi_fcmpge(uVar2,0x3f800000);
    if (iVar1 != 0) {
      *(undefined4 *)((int)param_1 + 0xc) = 0;
    }
  }
  return;
}


