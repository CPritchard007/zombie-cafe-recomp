/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002407e0 ZombieCafe::sendToxinCheat */

/* ZombieCafe::sendToxinCheat() */

void __thiscall ZombieCafe::sendToxinCheat(ZombieCafe *this)

{
  undefined1 *__s;
  int iVar1;
  SServer *pSVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  _func_void_void_ptr_uchar_ptr_uint *p_Var7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_4;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  iVar1 = DAT_00240884;
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_00240884);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_00240884);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_00240884);
  __s = &stack0x00000018 + DAT_00240884;
  iVar9 = DAT_0024088c + 0x2407f4;
  puVar8 = *(undefined4 **)(iVar9 + DAT_00240888);
  *(undefined4 **)(&stack0x0000000c + DAT_00240884) = puVar8;
  *(undefined4 *)(&stack0x00000258 + DAT_00240884) = *puVar8;
  memset(__s,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar8 = *(undefined4 **)(iVar9 + DAT_00240890);
  MALTAHoover::getFBID(pSVar2,(char *)*puVar8);
  uVar3 = calUserRankId(this,(uint)(byte)this[DAT_00240894]);
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar3;
  uVar3 = getToxin(this);
  *puVar11 = __s;
  *(int *)(&stack0xfffffff0 + iVar1) = DAT_00240898 + 0x24082e;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(iVar9 + DAT_002408a0);
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 10;
  uVar6 = *(undefined4 *)(iVar9 + DAT_002408a8);
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar3;
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar6;
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  snprintf(&stack0x00000058 + iVar1,0x200,(char *)(DAT_0024089c + 0x240836),DAT_002408a4 + 0x24083a)
  ;
  iVar4 = javaIsConnected();
  piVar10 = *(int **)(&stack0x0000000c + iVar1);
  if (iVar4 != 0) {
    pvVar5 = (void *)*puVar8;
    p_Var7 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar9 + DAT_002408ac);
    *puVar12 = this;
    CCServer::SendToxinCheat
              (pvVar5,&stack0x00000058 + iVar1,p_Var7,(_func_void_void_ptr *)0x0,(void *)*puVar13);
  }
  if (*(int *)(&stack0x00000258 + iVar1) != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


