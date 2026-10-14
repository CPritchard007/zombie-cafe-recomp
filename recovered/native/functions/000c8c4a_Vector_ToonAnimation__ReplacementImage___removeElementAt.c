/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8c4a Vector<ToonAnimation::ReplacementImage>::removeElementAt */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Vector<ToonAnimation::ReplacementImage>::removeElementAt(int) */

int Vector<ToonAnimation::ReplacementImage>::removeElementAt(int param_1)

{
  Vector<ToonAnimation::ReplacementImage> *in_r1;
  undefined4 *puVar1;
  int in_r2;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if ((-1 < in_r2) && (in_r2 <= *(int *)(in_r1 + 4))) {
    puVar1 = (undefined4 *)(*(int *)(in_r1 + 8) + in_r2 * 0x14);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar3 = puVar1[3];
    uVar6 = puVar1[4];
    *puVar1 = local_2c;
    puVar1[1] = uStack_28;
    puVar1[2] = uStack_24;
    puVar1[3] = local_20;
    puVar1[4] = uStack_1c;
    move(in_r1,in_r2 + 1,-1);
    *(int *)(in_r1 + 4) = *(int *)(in_r1 + 4) + -1;
    *(undefined4 *)param_1 = uVar2;
    *(undefined4 *)(param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar5;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar6;
  }
  return param_1;
}


