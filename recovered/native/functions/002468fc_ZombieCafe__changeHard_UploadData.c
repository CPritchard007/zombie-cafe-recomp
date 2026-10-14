/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002468fc ZombieCafe::changeHard_UploadData */

/* ZombieCafe::changeHard_UploadData(void (*)(void*), void (*)(void*, ccServerFailureCode), void*)
    */

void __thiscall
ZombieCafe::changeHard_UploadData
          (ZombieCafe *this,_func_void_void_ptr *param_1,
          _func_void_void_ptr_ccServerFailureCode *param_2,void *param_3)

{
  ZombieCafe ZVar1;
  int iVar2;
  int iVar3;
  InputStream *pIVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  ByteArrayOutputStream *this_00;
  uchar *puVar8;
  void *pvVar9;
  char *pcVar10;
  undefined4 uVar11;
  String *pSVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined8 uVar18;
  int iStack_4;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  iVar2 = DAT_00246bb8;
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_00246bb8);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_00246bb8);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_00246bb8);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_00246bb8);
  *(void **)(&stack0x0000001c + DAT_00246bb8) = param_3;
  *(_func_void_void_ptr_ccServerFailureCode **)(&stack0x00000018 + DAT_00246bb8) = param_2;
  *(_func_void_void_ptr **)(&stack0x00000014 + DAT_00246bb8) = param_1;
  uVar11 = **(undefined4 **)(DAT_00246bbc + 0x246910);
  *(undefined4 **)(&stack0x00000020 + DAT_00246bb8) = *(undefined4 **)(DAT_00246bbc + 0x246910);
  *(undefined4 *)(&stack0x000003c8 + DAT_00246bb8) = uVar11;
  if (this == (ZombieCafe *)0x0) {
    uVar7 = 0;
    goto LAB_00246b74;
  }
  L_PrintLog((char *)(DAT_00246bc0 + 0x246926),(char *)(DAT_00246bc4 + 0x246928));
  if (*(int *)(this + 0x7e8) == 0) {
    String::String((String *)(&stack0x00000028 + iVar2),(char *)(DAT_00246bc8 + 0x24693a));
    pIVar4 = (InputStream *)SaveDataInputStream::open(&stack0x00000028 + iVar2);
    String::~String((String *)(&stack0x00000028 + iVar2));
    if (pIVar4 == (InputStream *)0x0) {
      L_PrintLog((char *)(DAT_00246bcc + 0x246956),(char *)(DAT_00246bd0 + 0x246958));
      uVar7 = 0;
      goto LAB_00246b74;
    }
    if (0xf < *(int *)(pIVar4 + 0x14)) {
      iVar6 = Cafe::deserialize(pIVar4,false,(ZombieCafe *)0x0);
      if (iVar6 == 0) {
        Cafe::createForNewPlayer();
      }
      (**(code **)(*(int *)pIVar4 + 0xc))(pIVar4);
      (**(code **)(*(int *)pIVar4 + 4))(pIVar4);
      goto LAB_002469ac;
    }
    pcVar5 = (char *)(DAT_00246bd4 + 0x24696c);
    pcVar10 = (char *)(DAT_00246bd8 + 0x24696e);
  }
  else {
    if (1 < *(int *)(this + 0x680)) {
LAB_002469ac:
      L_PrintLog((char *)(DAT_00246be4 + 0x2469b4),(char *)(DAT_00246be8 + 0x2469b6));
      this_00 = (ByteArrayOutputStream *)operator_new(0x10);
      ByteArrayOutputStream::ByteArrayOutputStream(this_00);
      iVar6 = DAT_00246bec;
      serializeServerData(this,(OutputStream *)this_00);
      L_PrintLog((char *)(iVar6 + 0x2469d4),(char *)(DAT_00246bf0 + 0x2469d8));
      Cafe::serialize(*(Cafe **)(this + 0x7e8),(OutputStream *)this_00);
      L_PrintLog((char *)(iVar6 + 0x2469d4),(char *)(DAT_00246bf4 + 0x2469ec));
      puVar8 = (uchar *)ByteArrayOutputStream::toByteArray(this_00);
      setServerData(this,puVar8);
      uVar11 = ByteArrayOutputStream::size(this_00);
      *(undefined4 *)(this + 0x8c0) = uVar11;
      pvVar9 = (void *)getServerData(this);
      iVar6 = DAT_00246bfc;
      CCAssetManager::writeFile((char *)(DAT_00246bf8 + 0x246a18),pvVar9,*(uint *)(this + 0x8c0));
      (**(code **)(*(int *)this_00 + 8))(this_00);
      iVar3 = DAT_00246c00;
      (**(code **)(*(int *)this_00 + 4))(this_00);
      sprintf(&stack0x000000c8 + iVar2,(char *)(DAT_00246c04 + 0x246a38),
              *(undefined4 *)(this + 0x8c0));
      L_PrintLog((char *)(iVar3 + 0x246a36),(char *)(iVar6 + 0x246a22));
      L_PrintLog((char *)(DAT_00246c08 + 0x246a4c),&stack0x000000c8 + iVar2);
      L_PrintLog((char *)(iVar3 + 0x246a36),(char *)(iVar6 + 0x246a22));
      iVar6 = *(int *)(this + 0x490);
      *(int *)(&stack0x00000010 + iVar2) = iVar6;
      if (iVar6 == 0) {
        L_PrintLog((char *)(DAT_00246c0c + 0x246a6a),(char *)(DAT_00246c10 + 0x246a6c));
        uVar7 = *(uint *)(&stack0x00000010 + iVar2);
        goto LAB_00246b74;
      }
      uVar11 = getRecipeRank(this,*(uchar **)(this + 0x1c));
      uVar13 = *(undefined4 *)(this + 0x680);
      uVar18 = __extendsfdf2(*(undefined4 *)(this + 0x688));
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x7c;
      ZVar1 = this[0x950];
      *puVar14 = (int)uVar18;
      *(int *)(&stack0xfffffff0 + iVar2) = (int)((ulonglong)uVar18 >> 0x20);
      *(uint *)(&stack0xfffffff8 + iVar2) = (uint)(byte)ZVar1;
      *(undefined4 *)((int)&iStack_4 + iVar2) = uVar11;
      snprintf(&stack0x000001c8 + iVar2,0x200,(char *)(DAT_00246c14 + 0x246aa0),uVar13);
      memset(&stack0x00000048 + iVar2,0,0x80);
      pSVar12 = (String *)(this + 0x9b0);
      String::String((String *)(&stack0x00000030 + iVar2),pSVar12);
      iVar6 = operator!=(&stack0x00000030 + iVar2,0);
      String::~String((String *)(&stack0x00000030 + iVar2));
      if (iVar6 == 0) {
        pcVar5 = (char *)(DAT_00246c24 + 0x246b3a);
LAB_00246b38:
        snprintf(&stack0x00000048 + iVar2,0x80,pcVar5);
      }
      else {
        String::String((String *)(&stack0x00000038 + iVar2),(char *)(DAT_00246c18 + 0x246ae4));
        iVar6 = String::equals(pSVar12,&stack0x00000038 + iVar2);
        String::~String((String *)(&stack0x00000038 + iVar2));
        if (iVar6 != 0) {
          pcVar5 = (char *)(DAT_00246c1c + 0x246b00);
          goto LAB_00246b38;
        }
        StringUtil::getEncodingString((StringUtil *)(&stack0x00000040 + iVar2),'\x01');
        *puVar15 = 0;
        pvVar9 = (void *)String::getBytes(pSVar12,&stack0x00000040 + iVar2,0,0);
        String::~String((String *)(&stack0x00000040 + iVar2));
        snprintf(&stack0x00000048 + iVar2,0x80,(char *)(DAT_00246c20 + 0x246b28),pvVar9);
        free(pvVar9);
      }
      *puVar16 = *(undefined4 *)(&stack0x00000014 + iVar2);
      pvVar9 = *(void **)(this + DAT_00246c28);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x0000001c + iVar2);
      uVar7 = *(uint *)(this + 0x8c0);
      uVar11 = *(undefined4 *)(this + DAT_00246c2c);
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000018 + iVar2);
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
      *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
      *(undefined4 *)((int)&iStack_4 + iVar2) = uVar11;
      *(undefined1 **)(&stack0x00000004 + iVar2) = &stack0x00000048 + iVar2;
      iVar6 = CCServer::ChangeHardSaveMyGameState
                        (pvVar9,*(uchar **)(&stack0x00000010 + iVar2),&stack0x000001c8 + iVar2,uVar7
                         ,(_func_void_void_ptr *)*puVar17,
                         *(_func_void_void_ptr_ccServerFailureCode **)(&stack0xfffffff0 + iVar2),
                         *(void **)(&stack0xfffffff4 + iVar2),*(char **)(&stack0xfffffff8 + iVar2),
                         *(int *)((int)&iStack_4 + iVar2),(bool)(&stack0x00000000)[iVar2],
                         *(char **)(&stack0x00000004 + iVar2));
      uVar7 = (uint)(iVar6 != 0);
      goto LAB_00246b74;
    }
    pcVar5 = (char *)(DAT_00246bdc + 0x2469a4);
    pcVar10 = (char *)(DAT_00246be0 + 0x2469a6);
  }
  L_PrintLog(pcVar5,pcVar10);
  uVar7 = 0;
LAB_00246b74:
  if (*(int *)(&stack0x000003c8 + iVar2) != **(int **)(&stack0x00000020 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


