/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166204 GameStateMap::bossCheck */

/* GameStateMap::bossCheck() */

undefined8 GameStateMap::bossCheck(void)

{
  byte bVar1;
  int *in_r0;
  int iVar2;
  undefined4 in_r1;
  int extraout_r1;
  int extraout_r1_00;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = in_r0;
  uStack_14 = in_r1;
  iVar2 = arc4random();
  CapcomDate::now((CapcomDate *)&piStack_18);
  *(undefined4 *)(in_r0[3] + DAT_0016628c) = 0xff;
  __aeabi_idivmod(iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f,100);
  if (extraout_r1 <
      *(int *)((*(int *)(in_r0[3] + 0x680) + -1) * 4 + **(int **)(DAT_00166290 + 0x166232))) {
    memcpy((void *)(in_r0[3] + 0x8a0),(CapcomDate *)&piStack_18,7);
    *(undefined4 *)(in_r0[0x11] * 4 + *(int *)(in_r0[3] + 0x698)) =
         **(undefined4 **)(DAT_00166294 + 0x16625a);
    bVar1 = **(byte **)(DAT_00166298 + 0x16626c);
    __aeabi_idivmod(*(int *)(in_r0[3] + 0x680) + 1,(uint)bVar1);
    clearEnemyData(extraout_r1_00 + (uint)bVar1);
    (**(code **)(*in_r0 + 0x6c))(in_r0,1);
  }
  return CONCAT44(uStack_14,piStack_18);
}


