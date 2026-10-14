/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ec14 ZombieCafe::sendPlaySecLog */

/* ZombieCafe::sendPlaySecLog() */

void __thiscall ZombieCafe::sendPlaySecLog(ZombieCafe *this)

{
  char *__s;
  int iVar1;
  SServer *pSVar2;
  int iVar3;
  void *__ptr;
  undefined4 uVar4;
  MALTAHoover *this_00;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  String *pSVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uStack_4;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint *puVar18;
  
  iVar1 = DAT_0023ee24;
  puVar11 = *(undefined4 **)(DAT_0023ee20 + 0x23ec20);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_0023ee24);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_0023ee24);
  piVar16 = (int *)(&stack0xffffffec + DAT_0023ee24);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_0023ee24);
  puVar18 = (uint *)(&stack0xffffffec + DAT_0023ee24);
  puVar10 = (undefined4 *)(DAT_0023ee28 + 0x23ec2e);
  *(undefined4 *)(&stack0x000003b8 + DAT_0023ee24) = *puVar11;
  memset(&stack0x00000038 + DAT_0023ee24,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar10 = (undefined4 *)*puVar10;
  MALTAHoover::getFBID(pSVar2,(char *)*puVar10);
  memset(&stack0x00000078 + iVar1,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar10);
  memset(&stack0x000000b8 + iVar1,0,0x80);
  pSVar12 = (String *)(this + 0x9b0);
  String::String((String *)(&stack0x00000020 + iVar1),pSVar12);
  *(undefined4 **)(&stack0x00000018 + iVar1) = puVar11;
  iVar3 = operator!=(&stack0x00000020 + iVar1,0);
  String::~String((String *)(&stack0x00000020 + iVar1));
  if (iVar3 == 0) {
    pcVar5 = (char *)(DAT_0023ee38 + 0x23ece4);
  }
  else {
    String::String((String *)(&stack0x00000028 + iVar1),(char *)(DAT_0023ee2c + 0x23ec8e));
    iVar3 = String::equals(pSVar12,&stack0x00000028 + iVar1);
    String::~String((String *)(&stack0x00000028 + iVar1));
    if (iVar3 == 0) {
      StringUtil::getEncodingString((StringUtil *)(&stack0x00000030 + iVar1),'\x01');
      *puVar14 = 0;
      __ptr = (void *)String::getBytes(pSVar12,&stack0x00000030 + iVar1,0,0);
      String::~String((String *)(&stack0x00000030 + iVar1));
      snprintf(&stack0x000000b8 + iVar1,0x80,(char *)(DAT_0023ee34 + 0x23ecd2),__ptr);
      free(__ptr);
      goto LAB_0023ecea;
    }
    pcVar5 = (char *)(DAT_0023ee30 + 0x23ecaa);
  }
  snprintf(&stack0x000000b8 + iVar1,0x80,pcVar5);
LAB_0023ecea:
  iVar3 = *(int *)(this + 0x5a4);
  pcVar5 = &stack0x00000138 + iVar1;
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(this + 0x5b8);
  memset(pcVar5,0,0x80);
  uVar4 = __fixsfsi(*(undefined4 *)(this + 0x50));
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar4;
  uVar4 = __fixsfsi(*(undefined4 *)(this + 0x54));
  *puVar15 = uVar4;
  uVar4 = __fixsfsi(*(undefined4 *)(this + 0x58));
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar4;
  uVar4 = __fixsfsi(*(undefined4 *)(this + 0x5c));
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar4;
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(int *)(&stack0xfffffff8 + iVar1) = iVar3 + 1;
  snprintf(pcVar5,0x80,(char *)(DAT_0023ee3c + 0x23ed2e),*(undefined4 *)(&stack0x00000010 + iVar1));
  __s = &stack0x000001b8 + iVar1;
  memset(__s,0,0x200);
  iVar3 = CCSecondsSince1970();
  iVar7 = *(int *)(this + 0x4c);
  *(int *)(&stack0x0000000c + iVar1) = iVar3;
  iVar3 = iVar3 - iVar7;
  *(int *)(&stack0x00000010 + iVar1) = iVar3;
  if ((iVar3 != 0) && (iVar7 != 0)) {
    uVar4 = MALTAHoover::GetInstance();
    iVar3 = DAT_0023ee40;
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar4;
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(*(MALTAHoover **)(&stack0x00000014 + iVar1),(char *)(DAT_0023ee44 + 0x23ed7c),
                      (char *)(iVar3 + 0x23ed76),(char *)(DAT_0023ee48 + 0x23ed7e));
    *piVar16 = (int)(&stack0x00000078 + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x000000b8 + iVar1;
    *(char **)((int)&uStack_4 + iVar1) = (char *)(iVar3 + 0x23ed76);
    *(char **)(&stack0x00000000 + iVar1) = pcVar5;
    snprintf(__s,0x200,(char *)(DAT_0023ee4c + 0x23ed9a),&stack0x00000038 + iVar1);
    uVar4 = MALTAHoover::GetInstance();
    uVar8 = *(undefined4 *)(this + 0x680);
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar4;
    *(undefined4 *)(&stack0x00000010 + iVar1) = uVar8;
    uVar4 = getToxin(this);
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar4;
    uVar8 = *(undefined4 *)(this + DAT_0023ee50);
    uVar13 = *(undefined4 *)(this + DAT_0023ee54);
    uVar4 = calUserRankId(this,(uint)(byte)this[DAT_0023ee58]);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar4;
    this_00 = *(MALTAHoover **)(&stack0x0000000c + iVar1);
    *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_0023ee5c + 0x23edda);
    uVar6 = *(uint *)(&stack0x00000010 + iVar1);
    uVar9 = *(uint *)(&stack0x00000014 + iVar1);
    *puVar17 = uVar8;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar13;
    *(char **)(&stack0xfffffff8 + iVar1) = __s;
    MALTAHoover::send(this_00,(char *)(DAT_0023ee60 + 0x23edde),uVar6,uVar9,*puVar18,
                      *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                      *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  }
  if (*(int *)(&stack0x000003b8 + iVar1) != **(int **)(&stack0x00000018 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


