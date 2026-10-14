/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002408cc ZombieCafe::loadGetEntryInfo */

/* ZombieCafe::loadGetEntryInfo() */

void __thiscall ZombieCafe::loadGetEntryInfo(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  _func_void_void_ptr_uchar_ptr_uint *p_Var5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_4;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar1 = DAT_00240940;
  puVar7 = (undefined4 *)(&stack0xfffffff4 + DAT_00240940);
  puVar8 = (undefined4 *)(&stack0xfffffff4 + DAT_00240940);
  puVar9 = (undefined4 *)(&stack0xfffffff4 + DAT_00240940);
  piVar6 = *(int **)(DAT_00240944 + 0x2408da);
  *(int *)(&stack0x00000208 + DAT_00240940) = *piVar6;
  uVar2 = CCGetDeviceID();
  *(int *)(&stack0xfffffff8 + iVar1) = DAT_00240948 + 0x2408ec;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0x4e;
  *puVar7 = uVar2;
  snprintf(&stack0x00000008 + iVar1,0x200,(char *)(DAT_0024094c + 0x2408f6),DAT_00240950 + 0x2408f8)
  ;
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    GetEntryInfoFailed(this);
  }
  else {
    p_Var5 = *(_func_void_void_ptr_uchar_ptr_uint **)(DAT_00240958 + 0x240916);
    pvVar4 = (void *)**(undefined4 **)(DAT_00240954 + 0x240912);
    *puVar8 = this;
    CCServer::GetEntryData
              (pvVar4,&stack0x00000008 + iVar1,p_Var5,
               *(_func_void_void_ptr **)(DAT_0024095c + 0x240920),(void *)*puVar9);
  }
  if (*(int *)(&stack0x00000208 + iVar1) != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


