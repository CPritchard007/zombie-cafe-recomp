/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aec64 CCGFX::Begin3D */

/* CCGFX::Begin3D() */

undefined8 CCGFX::Begin3D(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  float extraout_s2;
  
  iVar3 = *(int *)(DAT_002aeca8 + 0x2aec6e);
  uVar2 = __mulsf3(*(undefined4 *)(iVar3 + 0x1c),DAT_002aecac);
  uVar4 = __divsf3(uVar2,DAT_002aecb0);
  uVar1 = *(undefined8 *)(iVar3 + 0x20);
  SetupScreenPerspective
            (*(uint *)(iVar3 + 0x10),*(uint *)(iVar3 + 0x14),0,(float)uVar4,
             (float)((ulonglong)uVar4 >> 0x20),extraout_s2);
  SetModelView((ccMat3x4 *)0x0);
  glEnable(DAT_002aecb4);
  glEnable(DAT_002aecb8);
  return uVar1;
}


