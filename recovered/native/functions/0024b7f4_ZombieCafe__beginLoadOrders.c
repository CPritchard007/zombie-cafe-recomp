/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024b7f4 ZombieCafe::beginLoadOrders */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0024b84a) */
/* WARNING: Removing unreachable block (ram,0x0024b84a) */
/* ZombieCafe::beginLoadOrders(bool) */

void __thiscall ZombieCafe::beginLoadOrders(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  String *this_00;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  iVar2 = DAT_0024b954;
  iVar1 = DAT_0024b950;
  puVar5 = *(undefined4 **)(DAT_0024b94c + 0x24b800);
  *(undefined4 *)(&stack0x00000428 + DAT_0024b950) = *puVar5;
  pvVar3 = *(void **)(this + DAT_0024b958);
  *(uint *)(&stack0xffffffec + DAT_0024b950) = (uint)param_1;
  GiftManager::CheckForGifts
            (pvVar3,*(_func_void_void_ptr **)(DAT_0024b960 + 0x24b81c),
             *(_func_void_void_ptr **)(DAT_0024b95c + 0x24b818),this,
             (bool)(&stack0xffffffec)[DAT_0024b950]);
  *(undefined4 **)(&stack0xfffffff8 + iVar1) = puVar5;
LAB_0024b8e2:
  do {
    iVar4 = CCMarketing_PopAppMessage(*(undefined4 *)(this + iVar2),&stack0x00000028 + iVar1,0x400);
    if (iVar4 == 0) {
      L_PrintLog((char *)(DAT_0024b968 + 0x24b8fc),(char *)(DAT_0024b96c + 0x24b8fe));
      endLoadOrders(this);
      if (*(int *)(&stack0x00000428 + iVar1) != **(int **)(&stack0xfffffff8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while (((((&stack0x00000028)[iVar1] != 'Z') || ((&stack0x00000029)[iVar1] != '_')) ||
           ((&stack0x0000002b)[iVar1] != '_')) || (4 < (byte)(&stack0x0000002a)[iVar1] - 0x41));
  pcVar6 = *(code **)(this + 0x440);
  switch((&stack0x0000002a)[iVar1]) {
  case 0x41:
    if (pcVar6 != (code *)0x0) {
      uVar7 = *(undefined4 *)(this + DAT_0024b964);
      String::String((String *)(&stack0x00000000 + iVar1),&stack0x0000002c + iVar1);
      (*pcVar6)(uVar7,&stack0x00000000 + iVar1,1);
      this_00 = (String *)(&stack0x00000000 + iVar1);
      break;
    }
    goto LAB_0024b8e2;
  case 0x42:
    if (pcVar6 == (code *)0x0) goto LAB_0024b8e2;
    uVar7 = *(undefined4 *)(this + DAT_0024b964);
    String::String((String *)(&stack0x00000008 + iVar1),&stack0x0000002c + iVar1);
    (*pcVar6)(uVar7,&stack0x00000008 + iVar1,5);
    this_00 = (String *)(&stack0x00000008 + iVar1);
    break;
  case 0x43:
    if (pcVar6 == (code *)0x0) goto LAB_0024b8e2;
    uVar7 = *(undefined4 *)(this + DAT_0024b964);
    String::String((String *)(&stack0x00000010 + iVar1),&stack0x0000002c + iVar1);
    (*pcVar6)(uVar7,&stack0x00000010 + iVar1,10);
    this_00 = (String *)(&stack0x00000010 + iVar1);
    break;
  case 0x44:
    if (pcVar6 == (code *)0x0) goto LAB_0024b8e2;
    uVar7 = *(undefined4 *)(this + DAT_0024b964);
    String::String((String *)(&stack0x00000018 + iVar1),&stack0x0000002c + iVar1);
    (*pcVar6)(uVar7,&stack0x00000018 + iVar1,0x19);
    this_00 = (String *)(&stack0x00000018 + iVar1);
    break;
  case 0x45:
    goto switchD_0024b84a_caseD_45;
  }
  goto LAB_0024b8de;
switchD_0024b84a_caseD_45:
  if (pcVar6 == (code *)0x0) goto LAB_0024b8e2;
  uVar7 = *(undefined4 *)(this + DAT_0024b964);
  String::String((String *)(&stack0x00000020 + iVar1),&stack0x0000002c + iVar1);
  (*pcVar6)(uVar7,&stack0x00000020 + iVar1,100);
  this_00 = (String *)(&stack0x00000020 + iVar1);
LAB_0024b8de:
  String::~String(this_00);
  goto LAB_0024b8e2;
}


