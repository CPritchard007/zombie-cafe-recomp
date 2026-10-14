/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4e04 CCServer::SaveMyLinkedGameState */

/* CCServer::SaveMyLinkedGameState(void*, unsigned char const*, char const*, unsigned int, void
   (*)(void*), void (*)(void*, ccServerFailureCode, char const*, char const*, unsigned int), void*,
   unsigned int, unsigned int, unsigned int, char const*) */

void CCServer::SaveMyLinkedGameState
               (void *param_1,uchar *param_2,char *param_3,uint param_4,_func_void_void_ptr *param_5
               ,_func_void_void_ptr_ccServerFailureCode_char_ptr_char_ptr_uint *param_6,
               void *param_7,uint param_8,uint param_9,uint param_10,char *param_11)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_4;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  
  iVar1 = DAT_002b4fe0;
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002b4fe0);
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002b4fe0);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002b4fe0);
  piVar10 = (int *)(&stack0xffffffec + DAT_002b4fe0);
  piVar11 = (int *)(&stack0xffffffec + DAT_002b4fe0);
  *(uchar **)((int)&param_6 + DAT_002b4fe0) = param_2;
  uVar2 = *(undefined4 *)(&stack0xffffffec + DAT_002b4fe4 + DAT_002b4fe0);
  *(uint *)((int)&param_7 + DAT_002b4fe0) = param_4;
  *(undefined4 *)((int)&param_9 + DAT_002b4fe0) = uVar2;
  *(undefined4 *)((int)&param_8 + DAT_002b4fe0) = *(undefined4 *)(&stack0x00000a3c + DAT_002b4fe0);
  puVar3 = *(undefined4 **)(DAT_002b4fec + 0x2b4e2e);
  iVar5 = *(int *)(&stack0xffffffec + DAT_002b4ff0 + DAT_002b4fe0);
  *(undefined4 *)((int)&param_10 + DAT_002b4fe0) =
       *(undefined4 *)(&stack0xffffffec + DAT_002b4fe8 + DAT_002b4fe0);
  *(undefined4 *)(&stack0xffffffec + DAT_002b4ff4 + DAT_002b4fe0) = *puVar3;
  iVar6 = *(int *)((int)param_1 + 0x284);
  uVar2 = 0;
  *(undefined4 **)((int)&param_11 + DAT_002b4fe0) = puVar3;
  if (iVar6 == 0) {
    if ((int)*(void **)((int)param_1 + 4) - 1U < 0xfffffffe) {
      iVar6 = CCGameCenter::IsConnected(*(void **)((int)param_1 + 4));
      if (iVar6 == 0) {
        uVar2 = 0;
      }
      else if (*(char *)((int)param_1 + 0x198) == '\0') {
        uVar2 = 0;
      }
      else if (*(int *)((int)param_1 + 0x3a8) == 0 &&
               *(int *)(&stack0xffffffec + DAT_002b4ff8 + iVar1) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)((int)param_1 + 0x14);
        if (iVar5 == 0) {
          *puVar7 = *(undefined4 *)((int)param_1 + 0xc);
          *(int *)(&stack0xfffffff0 + iVar1) = (int)param_1 + 0x98;
          *(char **)(&stack0xfffffff4 + iVar1) = param_3;
          *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
          snprintf(&stack0x00000220 + iVar1,0x400,(char *)(DAT_002b4ffc + 0x2b4e9e),uVar2);
        }
        else {
          *puVar8 = *(undefined4 *)((int)param_1 + 0xc);
          *(int *)(&stack0xfffffff0 + iVar1) = (int)param_1 + 0x98;
          *(int *)(&stack0xfffffff4 + iVar1) = iVar5;
          *(char **)(&stack0xfffffff8 + iVar1) = param_3;
          *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
          snprintf(&stack0x00000220 + iVar1,0x400,(char *)(DAT_002b5000 + 0x2b4eba),uVar2);
        }
                    /* WARNING: Load size is inaccurate */
        iVar5 = CCFacebook::IsLoggedIn(*param_1);
        if (iVar5 != 0) {
          snprintf(&stack0x000000a0 + iVar1,0x80,(char *)(DAT_002b5004 + 0x2b4eda),
                   (int)param_1 + 0x118);
          strncat(&stack0x00000220 + iVar1,&stack0x000000a0 + iVar1,0x400);
        }
        uVar2 = javaGetDeviceInfoForURL();
        *puVar9 = *(undefined4 *)(&stack0x00000a4c + iVar1);
        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
             *(undefined4 *)(&stack0xffffffec + DAT_002b5008 + iVar1);
        *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar2;
        snprintf(&stack0x00000120 + iVar1,0x80,(char *)(DAT_002b500c + 0x2b4f12),
                 (char *)((int)param_1 + 0x198));
        strncat(&stack0x00000220 + iVar1,&stack0x00000120 + iVar1,0x400);
        if (*(int *)(&stack0xffffffec + DAT_002b4ff8 + iVar1) != 0) {
          strcat(&stack0x00000220 + iVar1,(char *)(DAT_002b5010 + 0x2b4f38));
        }
        L_MangleGCId(&stack0x000001a0 + iVar1,(char *)((int)param_1 + 0x198),0x80);
        CCFileMd5(&stack0x00000020 + iVar1,0x40,*(uchar **)((int)&param_6 + iVar1),
                  *(uint *)((int)&param_7 + iVar1));
        *piVar10 = (int)(&stack0x00000220 + iVar1);
        *(undefined1 **)(&stack0xfffffff4 + iVar1) = &stack0x00000020 + iVar1;
        *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x000001a0 + iVar1;
        snprintf(&stack0xffffffec + DAT_002b5018 + iVar1,0x400,(char *)(DAT_002b5014 + 0x2b4f68),
                 (int)param_1 + 0x26c);
        CCMd5(&stack0x00000060 + iVar1,0x40,&stack0xffffffec + DAT_002b5018 + iVar1);
        *piVar11 = (int)(&stack0x00000220 + iVar1);
        *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000060 + iVar1;
        snprintf(&stack0xffffffec + DAT_002b5018 + iVar1,0x400,(char *)(DAT_002b501c + 0x2b4f92),
                 (int)param_1 + 0x18);
        CCEscapeWithPercent(&stack0x00000220 + iVar1,0x400,&stack0xffffffec + DAT_002b5018 + iVar1);
        uVar2 = *(undefined4 *)((int)&param_9 + iVar1);
        *(undefined4 *)((int)param_1 + 0x28c) = *(undefined4 *)((int)&param_8 + iVar1);
        uVar4 = *(undefined4 *)((int)&param_10 + iVar1);
        *(undefined4 *)((int)param_1 + 0x294) = uVar2;
        *(undefined4 *)((int)param_1 + 0x298) = uVar4;
        uVar2 = *(undefined4 *)((int)param_1 + 0x284);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  if (*(int *)(&stack0xffffffec + DAT_002b4ff4 + iVar1) == **(int **)((int)&param_11 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


