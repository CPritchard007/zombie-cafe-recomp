/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00250d28 FUN_00250d28 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00250d82) */
/* WARNING: Removing unreachable block (ram,0x00250d82) */

void FUN_00250d28(int param_1,char *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Vector<String> *this;
  uint uVar5;
  void *pvVar6;
  ccTexture2D *pcVar7;
  int iVar8;
  char *pcVar9;
  Vector<FriendData> *pVVar10;
  char cVar11;
  int iVar12;
  undefined4 uStack_4;
  
  iVar2 = DAT_00251058;
  *(char **)(&stack0xfffffff0 + DAT_00251058) = param_2;
  L_PrintLog((char *)(DAT_0025105c + 0x250d38),param_2);
  iVar3 = DAT_00251064;
  L_PrintLog((char *)(DAT_00251060 + 0x250d46),param_3);
  iVar3 = CCServer::GetFriendIndexOfUniqueId
                    (*(void **)(param_1 + iVar3),*(char **)(&stack0xfffffff0 + iVar2));
  *(int *)(&stack0xfffffff4 + iVar2) = iVar3;
  if (iVar3 == -1) {
    return;
  }
  iVar3 = atoi(param_3);
  *(int *)(&stack0x00000008 + iVar2) = iVar3;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
  cVar11 = '\0';
  *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
  for (pcVar9 = param_3 + 2; pcVar9[-1] != '\0'; pcVar9 = pcVar9 + 1) {
    if (pcVar9[-1] == ':') {
      cVar11 = cVar11 + '\x01';
      switch(cVar11) {
      case '\x01':
        FUN_00238ef8(pcVar9);
        uVar4 = __truncdfsf2();
        *(undefined4 *)((int)&uStack_4 + iVar2) = uVar4;
        break;
      case '\x02':
        atoi(pcVar9);
        break;
      case '\x03':
        *(uint *)(&stack0x00000000 + iVar2) = (uint)(*pcVar9 == '1');
        break;
      case '\x06':
        iVar3 = atoi(pcVar9);
        *(int *)(&stack0xfffffff8 + iVar2) = iVar3;
      }
    }
  }
  FriendData::FriendData((FriendData *)(&stack0x00000088 + iVar2));
  FriendData::FriendData((FriendData *)(&stack0x000000e4 + iVar2));
  String::String((String *)(&stack0x00000010 + iVar2),param_3);
  this = (Vector<String> *)StringUtil::splitString(&stack0x00000010 + iVar2,0x3a);
  String::~String((String *)(&stack0x00000010 + iVar2));
  if (*(int *)(this + 4) < 4) {
    String::operator=((String *)(&stack0x000000b4 + iVar2),(char *)(DAT_00251068 + 0x250e0c));
  }
  else {
    Vector<String>::elementAt((int)(&stack0x00000018 + iVar2));
    String::operator=((String *)(&stack0x000000b4 + iVar2),&stack0x00000018 + iVar2);
    String::~String((String *)(&stack0x00000018 + iVar2));
  }
  if (*(int *)(this + 4) < 5) {
    String::operator=((String *)(&stack0x000000bc + iVar2),(char *)(DAT_0025106c + 0x250e36));
  }
  else {
    Vector<String>::elementAt((int)(&stack0x00000020 + iVar2));
    String::operator=((String *)(&stack0x000000bc + iVar2),&stack0x00000020 + iVar2);
    String::~String((String *)(&stack0x00000020 + iVar2));
  }
  Vector<String>::~Vector(this);
  operator_delete(this);
  L_PrintLog((char *)(DAT_00251070 + 0x250e4c),(char *)(DAT_00251074 + 0x250e4e));
  iVar3 = -1;
  for (iVar12 = 0; iVar8 = param_1 + DAT_00251078, iVar12 < *(int *)(iVar8 + 4) + 1;
      iVar12 = iVar12 + 1) {
    if (*(short *)(&stack0x000000ba + iVar2) < 1) {
LAB_00250f44:
      FriendData::FriendData
                ((FriendData *)(&stack0x000001f8 + iVar2),
                 (FriendData *)(*(int *)(param_1 + DAT_00251078 + 8) + iVar12 * 0x5c));
      iVar8 = *(int *)(&stack0x00000210 + iVar2);
      FriendData::~FriendData((FriendData *)(&stack0x000001f8 + iVar2));
      if (*(int *)(&stack0xfffffff4 + iVar2) == iVar8) goto LAB_00250f64;
    }
    else {
      *(int *)(&stack0x00000004 + iVar2) = iVar12 * 0x5c;
      FriendData::FriendData
                ((FriendData *)(&stack0x00000140 + iVar2),
                 (FriendData *)(*(int *)(iVar8 + 8) + *(int *)(&stack0x00000004 + iVar2)));
      String::String((String *)(&stack0x00000028 + iVar2),(String *)(&stack0x0000016c + iVar2));
      uVar5 = String::equals((String *)(&stack0x000000b4 + iVar2),&stack0x00000028 + iVar2);
      if (uVar5 != 0) {
        if (*(short *)(&stack0x000000c2 + iVar2) < 1) {
          uVar5 = 0;
        }
        else {
          FriendData::FriendData
                    ((FriendData *)(&stack0x0000019c + iVar2),
                     (FriendData *)
                     (*(int *)(param_1 + DAT_00251078 + 8) + *(int *)(&stack0x00000004 + iVar2)));
          String::String((String *)(&stack0x00000030 + iVar2),(String *)(&stack0x000001d0 + iVar2));
          uVar5 = String::equals((String *)(&stack0x000000bc + iVar2),&stack0x00000030 + iVar2);
          if (uVar5 != 0) {
            String::String((String *)(&stack0x00000038 + iVar2),(char *)(DAT_0025107c + 0x250ed4));
            iVar8 = String::equals((String *)(&stack0x000000bc + iVar2),&stack0x00000038 + iVar2);
            uVar5 = 1;
            if (iVar8 != 0) {
              String::String((String *)(&stack0x00000040 + iVar2),(char *)(DAT_00251080 + 0x250ef0))
              ;
              uVar5 = String::equals((String *)(&stack0x000000b4 + iVar2),&stack0x00000040 + iVar2);
              String::~String((String *)(&stack0x00000040 + iVar2));
              uVar5 = (uVar5 ^ 1) & 0xff;
            }
            String::~String((String *)(&stack0x00000038 + iVar2));
          }
          String::~String((String *)(&stack0x00000030 + iVar2));
          FriendData::~FriendData((FriendData *)(&stack0x0000019c + iVar2));
        }
      }
      String::~String((String *)(&stack0x00000028 + iVar2));
      FriendData::~FriendData((FriendData *)(&stack0x00000140 + iVar2));
      if (uVar5 == 0) goto LAB_00250f44;
LAB_00250f64:
      iVar3 = iVar12;
    }
  }
  if (iVar3 != -1) {
    FriendData::FriendData
              ((FriendData *)(&stack0x00000254 + iVar2),
               (FriendData *)(*(int *)(iVar8 + 8) + iVar3 * 0x5c));
    FriendData::operator=
              ((FriendData *)(&stack0x000000e4 + iVar2),(FriendData *)(&stack0x00000254 + iVar2));
    FriendData::~FriendData((FriendData *)(&stack0x00000254 + iVar2));
  }
  if ((**(char **)(&stack0xfffffff0 + iVar2) == 'G') &&
     ((*(char **)(&stack0xfffffff0 + iVar2))[1] == 'C')) {
    *(uint *)(&stack0x000000c4 + iVar2) = *(uint *)(&stack0x000000c4 + iVar2) | 2;
    pvVar6 = *(void **)(param_1 + DAT_00251064);
    *(uint *)(&stack0x000000a8 + iVar2) = *(uint *)(&stack0xfffffff4 + iVar2);
    pcVar9 = (char *)CCServer::GetFriendName(pvVar6,*(uint *)(&stack0xfffffff4 + iVar2));
    String::operator=((String *)(&stack0x00000098 + iVar2),pcVar9);
    if ((iVar3 == -1) || ((*(uint *)(&stack0x00000120 + iVar2) & 1) == 0)) {
      String::String((String *)(&stack0x00000068 + iVar2),(String *)(&stack0x00000098 + iVar2));
      String::operator=((String *)(&stack0x00000088 + iVar2),&stack0x00000068 + iVar2);
      String::~String((String *)(&stack0x00000068 + iVar2));
      *(undefined4 *)(&stack0x000000a0 + iVar2) = *(undefined4 *)(&stack0x000000a8 + iVar2);
      String::operator=((String *)(&stack0x000000ac + iVar2),*(char **)(&stack0xfffffff0 + iVar2));
      *(undefined4 *)(&stack0x000000c8 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
      *(undefined4 *)(&stack0x000000cc + iVar2) = *(undefined4 *)((int)&uStack_4 + iVar2);
      (&stack0x000000d4)[iVar2] = (&stack0x00000000)[iVar2];
      *(undefined4 *)(&stack0x000000d0 + iVar2) = *(undefined4 *)(&stack0xfffffff8 + iVar2);
    }
    else {
      *(uint *)(&stack0x000000c4 + iVar2) = *(uint *)(&stack0x000000c4 + iVar2) | 1;
      String::String((String *)(&stack0x00000048 + iVar2),(String *)(&stack0x00000110 + iVar2));
      String::operator=((String *)(&stack0x000000b4 + iVar2),&stack0x00000048 + iVar2);
      String::~String((String *)(&stack0x00000048 + iVar2));
      *(undefined4 *)(&stack0x000000a4 + iVar2) = *(undefined4 *)(&stack0x00000100 + iVar2);
      String::String((String *)(&stack0x00000050 + iVar2),(String *)(&stack0x000000ec + iVar2));
      String::operator=((String *)(&stack0x00000090 + iVar2),&stack0x00000050 + iVar2);
      String::~String((String *)(&stack0x00000050 + iVar2));
      String::String((String *)(&stack0x00000058 + iVar2),(String *)(&stack0x000000e4 + iVar2));
      String::operator=((String *)(&stack0x00000088 + iVar2),&stack0x00000058 + iVar2);
      String::~String((String *)(&stack0x00000058 + iVar2));
      *(undefined4 *)(&stack0x000000a0 + iVar2) = *(undefined4 *)(&stack0x000000fc + iVar2);
      String::String((String *)(&stack0x00000060 + iVar2),(String *)(&stack0x00000108 + iVar2));
      String::operator=((String *)(&stack0x000000ac + iVar2),&stack0x00000060 + iVar2);
      String::~String((String *)(&stack0x00000060 + iVar2));
      *(undefined4 *)(&stack0x000000c8 + iVar2) = *(undefined4 *)(&stack0x00000124 + iVar2);
      *(undefined4 *)(&stack0x000000cc + iVar2) = *(undefined4 *)(&stack0x00000128 + iVar2);
      (&stack0x000000d4)[iVar2] = (&stack0x00000130)[iVar2];
      *(undefined4 *)(&stack0x000000d0 + iVar2) = *(undefined4 *)(&stack0x0000012c + iVar2);
    }
    String::operator=((String *)(&stack0x000000bc + iVar2),*(char **)(&stack0xfffffff0 + iVar2));
    bVar1 = true;
    if (iVar3 == -1) {
LAB_002511d6:
      pcVar7 = (ccTexture2D *)malloc(0x2c);
      (&stack0x000000d5)[iVar2] = 0;
      *(ccTexture2D **)(&stack0x000000e0 + iVar2) = pcVar7;
      CCTexture2D::Init(pcVar7);
      FriendData::FriendData
                ((FriendData *)(&stack0x0000030c + iVar2),(FriendData *)(&stack0x00000088 + iVar2));
      pVVar10 = (Vector<FriendData> *)(param_1 + DAT_00251328);
      Vector<FriendData>::addElement(pVVar10,&stack0x0000030c + iVar2);
      FriendData::~FriendData((FriendData *)(&stack0x0000030c + iVar2));
      iVar3 = *(int *)(pVVar10 + 4);
      goto LAB_00251206;
    }
  }
  else {
    *(uint *)(&stack0x000000c4 + iVar2) = *(uint *)(&stack0x000000c4 + iVar2) | 1;
    pvVar6 = *(void **)(param_1 + DAT_00251324);
    *(uint *)(&stack0x000000a4 + iVar2) = *(uint *)(&stack0xfffffff4 + iVar2);
    pcVar9 = (char *)CCServer::GetFriendName(pvVar6,*(uint *)(&stack0xfffffff4 + iVar2));
    String::operator=((String *)(&stack0x00000090 + iVar2),pcVar9);
    String::String((String *)(&stack0x00000070 + iVar2),(String *)(&stack0x00000090 + iVar2));
    String::operator=((String *)(&stack0x00000088 + iVar2),&stack0x00000070 + iVar2);
    String::~String((String *)(&stack0x00000070 + iVar2));
    *(undefined4 *)(&stack0x000000a0 + iVar2) = *(undefined4 *)(&stack0x000000a4 + iVar2);
    String::operator=((String *)(&stack0x000000ac + iVar2),*(char **)(&stack0xfffffff0 + iVar2));
    String::operator=((String *)(&stack0x000000b4 + iVar2),*(char **)(&stack0xfffffff0 + iVar2));
    *(undefined4 *)(&stack0x000000c8 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
    *(undefined4 *)(&stack0x000000cc + iVar2) = *(undefined4 *)((int)&uStack_4 + iVar2);
    (&stack0x000000d4)[iVar2] = (&stack0x00000000)[iVar2];
    *(undefined4 *)(&stack0x000000d0 + iVar2) = *(undefined4 *)(&stack0xfffffff8 + iVar2);
    if (iVar3 == -1) {
      bVar1 = false;
      goto LAB_002511d6;
    }
    if ((*(uint *)(&stack0x00000120 + iVar2) & 2) != 0) {
      *(uint *)(&stack0x000000c4 + iVar2) = *(uint *)(&stack0x000000c4 + iVar2) | 2;
      String::String((String *)(&stack0x00000078 + iVar2),(String *)(&stack0x00000118 + iVar2));
      String::operator=((String *)(&stack0x000000bc + iVar2),&stack0x00000078 + iVar2);
      String::~String((String *)(&stack0x00000078 + iVar2));
      *(undefined4 *)(&stack0x000000a8 + iVar2) = *(undefined4 *)(&stack0x00000104 + iVar2);
      String::String((String *)(&stack0x00000080 + iVar2),(String *)(&stack0x000000f4 + iVar2));
      String::operator=((String *)(&stack0x00000098 + iVar2),&stack0x00000080 + iVar2);
      String::~String((String *)(&stack0x00000080 + iVar2));
    }
    bVar1 = false;
  }
  *(undefined4 *)(&stack0x000000e0 + iVar2) = *(undefined4 *)(&stack0x0000013c + iVar2);
  *(undefined4 *)(&stack0x000000dc + iVar2) = *(undefined4 *)(&stack0x00000138 + iVar2);
  *(undefined4 *)(&stack0x000000d8 + iVar2) = *(undefined4 *)(&stack0x00000134 + iVar2);
  (&stack0x000000d6)[iVar2] = (&stack0x00000132)[iVar2];
  if (((&stack0x00000132)[iVar2] != '\0') || (bVar1)) {
    (&stack0x000000d5)[iVar2] = (&stack0x00000131)[iVar2];
  }
  else {
    (&stack0x000000d5)[iVar2] = bVar1;
  }
  FriendData::FriendData
            ((FriendData *)(&stack0x000002b0 + iVar2),(FriendData *)(&stack0x00000088 + iVar2));
  if ((-1 < iVar3) && (iVar3 <= *(int *)(param_1 + DAT_00251328 + 4))) {
    FriendData::operator=
              ((FriendData *)(*(int *)(param_1 + DAT_00251328 + 8) + iVar3 * 0x5c),
               (FriendData *)(&stack0x000002b0 + iVar2));
  }
  FriendData::~FriendData((FriendData *)(&stack0x000002b0 + iVar2));
LAB_00251206:
  *(undefined1 *)(param_1 + DAT_0025132c) = 1;
  if (((&stack0x000000d6)[iVar2] == '\0') && (!bVar1)) {
    (&stack0x000000d6)[iVar2] = '\x01';
    FriendData::FriendData
              ((FriendData *)(&stack0x00000368 + iVar2),(FriendData *)(&stack0x00000088 + iVar2));
    if ((-1 < iVar3) && (iVar3 <= *(int *)(param_1 + DAT_00251328 + 4))) {
      FriendData::operator=
                ((FriendData *)(*(int *)(param_1 + DAT_00251328 + 8) + iVar3 * 0x5c),
                 (FriendData *)(&stack0x00000368 + iVar2));
    }
    FriendData::~FriendData((FriendData *)(&stack0x00000368 + iVar2));
  }
  FriendData::~FriendData((FriendData *)(&stack0x000000e4 + iVar2));
  FriendData::~FriendData((FriendData *)(&stack0x00000088 + iVar2));
  return;
}


