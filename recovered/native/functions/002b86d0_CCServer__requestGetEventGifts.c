/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b86d0 CCServer::requestGetEventGifts */

/* CCServer::requestGetEventGifts(void*, void (*)(void*, unsigned char const*, unsigned int), void
   (*)(void*, ccServerFailureCode), void*) */

void CCServer::requestGetEventGifts
               (void *param_1,_func_void_void_ptr_uchar_ptr_uint *param_2,
               _func_void_void_ptr_ccServerFailureCode *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ZombieCafe *this;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b87a4;
  piVar5 = *(int **)(DAT_002b87a0 + 0x2b86dc);
  piVar6 = (int *)(&stack0xffffffec + DAT_002b87a4);
  *(void **)(&stack0x00000020 + DAT_002b87a4) = param_4;
  *(int *)(&stack0x00000428 + DAT_002b87a4) = *piVar5;
  iVar4 = *(int *)((int)param_1 + 0x538);
  *(_func_void_void_ptr_uchar_ptr_uint **)(&stack0x00000018 + DAT_002b87a4) = param_2;
  *(_func_void_void_ptr_ccServerFailureCode **)(&stack0x0000001c + DAT_002b87a4) = param_3;
  if (iVar4 == 0) {
    iVar4 = CapcomApp::getInstance();
    this = *(ZombieCafe **)(iVar4 + 4);
    uVar2 = ZombieCafe::getGiftBoxCount(this);
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar2;
    ZombieCafe::getColaboEventIdRenew(this);
    uVar2 = ZombieCafe::getColaboEventId(this);
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar2;
    uVar2 = CCGetDeviceID();
    uVar3 = CCGetDeviceID();
    *(int *)(&stack0xfffffff0 + iVar1) = DAT_002b87a8 + 0x2b872a;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar3;
    *piVar6 = DAT_002b87ac + 0x2b8734;
    uVar3 = *(undefined4 *)(DAT_002b87b4 + 0x2b8738);
    *(int *)(&stack0x00000004 + iVar1) = DAT_002b87ac + 0x2b8734;
    *(undefined4 *)((int)&uStack_4 + iVar1) = uVar3;
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000014 + iVar1);
    *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar2;
    snprintf(&stack0x00000028 + iVar1,0x400,(char *)(DAT_002b87b0 + 0x2b874c),
             DAT_002b87b8 + 0x2b874a);
    CCEscapeWithPercent(&stack0x00000028 + iVar1,0x400,&stack0x00000028 + iVar1);
    *(undefined4 *)((int)param_1 + 0x540) = *(undefined4 *)(&stack0x00000018 + iVar1);
    uVar2 = *(undefined4 *)(&stack0x00000020 + iVar1);
    *(undefined4 *)((int)param_1 + DAT_002b87bc) = *(undefined4 *)(&stack0x0000001c + iVar1);
    *(undefined4 *)((int)param_1 + 0x548) = uVar2;
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000028 + iVar1,0x43,param_1);
    *(undefined4 *)((int)param_1 + 0x538) = uVar2;
  }
  if (*(int *)(&stack0x00000428 + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


