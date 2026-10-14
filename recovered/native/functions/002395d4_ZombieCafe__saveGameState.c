/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002395d4 ZombieCafe::saveGameState */

/* ZombieCafe::saveGameState(bool) */

void __thiscall ZombieCafe::saveGameState(ZombieCafe *this,bool param_1)

{
  ZombieCafe ZVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  char *__format;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  String *pSVar9;
  undefined4 *puVar10;
  undefined8 uVar17;
  int iStack_4;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  
  iVar2 = DAT_0023981c;
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_0023981c);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0023981c);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_0023981c);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_0023981c);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_0023981c);
  piVar15 = (int *)(&stack0xffffffec + DAT_0023981c);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_0023981c);
  *(uint *)(&stack0x00000020 + DAT_0023981c) = (uint)param_1;
  puVar7 = *(undefined4 **)(DAT_00239824 + 0x2395e8);
  *(undefined4 *)(&stack0x000002d8 + DAT_0023981c) = *puVar7;
  L_PrintLog((char *)(DAT_00239820 + 0x2395ec),(char *)(DAT_00239828 + 0x2395ee));
  iVar6 = *(int *)(this + 0x490);
  *(undefined4 **)(&stack0x00000028 + iVar2) = puVar7;
  *(int *)(&stack0x00000010 + iVar2) = iVar6;
  if (iVar6 == 0) {
    L_PrintLog((char *)(DAT_0023982c + 0x23960a),(char *)(DAT_00239830 + 0x23960c));
    uVar8 = *(uint *)(&stack0x00000010 + iVar2);
    goto LAB_002397d8;
  }
  if ((*(int *)(&stack0x00000020 + iVar2) == 0) &&
     (iVar6 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(this + DAT_00239834),'\x16'),
     iVar6 == 0)) {
    L_PrintLog((char *)(DAT_00239838 + 0x23962e),(char *)(DAT_0023983c + 0x239630));
    uVar8 = 0;
    goto LAB_002397d8;
  }
  StringUtil::getEncodingString((StringUtil *)(&stack0x00000030 + iVar2),'\x01');
  *puVar10 = 0;
  uVar3 = String::getBytes((String *)(this + 0x9a0),&stack0x00000030 + iVar2,0);
  *(undefined4 *)(&stack0x00000018 + iVar2) = uVar3;
  String::~String((String *)(&stack0x00000030 + iVar2));
  StringUtil::getEncodingString((StringUtil *)(&stack0x00000038 + iVar2),'\x01');
  *puVar11 = 0;
  uVar3 = String::getBytes((String *)(this + DAT_00239840),&stack0x00000038 + iVar2,0);
  *(undefined4 *)(&stack0x0000001c + iVar2) = uVar3;
  String::~String((String *)(&stack0x00000038 + iVar2));
  memset(&stack0x00000058 + iVar2,0,0x80);
  pSVar9 = (String *)(this + 0x9b0);
  String::String((String *)(&stack0x00000040 + iVar2),pSVar9);
  iVar6 = operator!=(&stack0x00000040 + iVar2,0);
  String::~String((String *)(&stack0x00000040 + iVar2));
  if (iVar6 == 0) {
    __format = (char *)(DAT_00239850 + 0x239700);
LAB_002396fe:
    snprintf(&stack0x00000058 + iVar2,0x80,__format);
  }
  else {
    String::String((String *)(&stack0x00000048 + iVar2),(char *)(DAT_00239844 + 0x2396aa));
    iVar6 = String::equals(pSVar9,&stack0x00000048 + iVar2);
    String::~String((String *)(&stack0x00000048 + iVar2));
    if (iVar6 != 0) {
      __format = (char *)(DAT_00239848 + 0x2396c6);
      goto LAB_002396fe;
    }
    StringUtil::getEncodingString((StringUtil *)(&stack0x00000050 + iVar2),'\x01');
    *puVar12 = 0;
    pvVar4 = (void *)String::getBytes(pSVar9,&stack0x00000050 + iVar2,0,0);
    String::~String((String *)(&stack0x00000050 + iVar2));
    snprintf(&stack0x00000058 + iVar2,0x80,(char *)(DAT_0023984c + 0x2396ee),pvVar4);
    free(pvVar4);
  }
  uVar3 = getRecipeRank(this,*(uchar **)(this + 0x1c));
  uVar5 = *(undefined4 *)(this + 0x680);
  *(undefined4 *)(&stack0x00000014 + iVar2) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x688);
  *(undefined4 *)(&stack0x00000024 + iVar2) = uVar5;
  uVar17 = __extendsfdf2(uVar3);
  *puVar13 = (int)uVar17;
  *(int *)(&stack0xfffffff0 + iVar2) = (int)((ulonglong)uVar17 >> 0x20);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x7c;
  *(uint *)(&stack0xfffffff8 + iVar2) = (uint)(byte)this[0x950];
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(&stack0x00000014 + iVar2);
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(&stack0x00000018 + iVar2);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(&stack0x0000001c + iVar2);
  snprintf(&stack0x000000d8 + iVar2,0x200,(char *)(DAT_00239854 + 0x23973e),
           *(undefined4 *)(&stack0x00000024 + iVar2));
  uVar3 = getRecipeRank(this,*(uchar **)(this + 0x1c));
  *(undefined4 *)(&stack0x00000014 + iVar2) = uVar3;
  uVar17 = __extendsfdf2(*(undefined4 *)(this + 0x688));
  *puVar14 = (int)uVar17;
  *(int *)(&stack0xfffffff0 + iVar2) = (int)((ulonglong)uVar17 >> 0x20);
  ZVar1 = this[0x950];
  uVar3 = *(undefined4 *)(this + 0x680);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x7c;
  *(uint *)(&stack0xfffffff8 + iVar2) = (uint)(byte)ZVar1;
  *(undefined4 *)((int)&iStack_4 + iVar2) = *(undefined4 *)(&stack0x00000014 + iVar2);
  snprintf(&stack0x000000d8 + iVar2,0x200,(char *)(DAT_00239858 + 0x239778),uVar3);
  uVar3 = *(undefined4 *)(&stack0x00000020 + iVar2);
  *piVar15 = DAT_0023985c + 0x239792;
  pvVar4 = *(void **)(this + DAT_00239860);
  *(int *)(&stack0xfffffff0 + iVar2) = DAT_00239864 + 0x23979c;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  uVar8 = *(uint *)(this + 0x8c0);
  uVar5 = *(undefined4 *)(this + DAT_00239868);
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar3;
  *(undefined4 *)((int)&iStack_4 + iVar2) = uVar5;
  *(undefined1 **)(&stack0x00000004 + iVar2) = &stack0x00000058 + iVar2;
  *(ZombieCafe **)(&stack0xfffffff4 + iVar2) = this;
  iVar6 = CCServer::SaveMyGameState
                    (pvVar4,*(uchar **)(&stack0x00000010 + iVar2),&stack0x000000d8 + iVar2,uVar8,
                     (_func_void_void_ptr *)*puVar16,
                     *(_func_void_void_ptr_ccServerFailureCode **)(&stack0xfffffff0 + iVar2),
                     *(void **)(&stack0xfffffff4 + iVar2),*(char **)(&stack0xfffffff8 + iVar2),
                     *(int *)((int)&iStack_4 + iVar2),(bool)(&stack0x00000000)[iVar2],
                     *(char **)(&stack0x00000004 + iVar2));
  free(*(void **)(&stack0x00000018 + iVar2));
  free(*(void **)(&stack0x0000001c + iVar2));
  uVar8 = (uint)(iVar6 != 0);
  L_PrintLog((char *)(DAT_0023986c + 0x2397d4),(char *)(DAT_00239870 + 0x2397d6));
LAB_002397d8:
  if (*(int *)(&stack0x000002d8 + iVar2) != **(int **)(&stack0x00000028 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


