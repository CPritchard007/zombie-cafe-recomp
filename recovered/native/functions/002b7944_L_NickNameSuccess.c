/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b7944 L_NickNameSuccess */

/* L_NickNameSuccess(void*, unsigned char const*, unsigned int) */

void L_NickNameSuccess(void *param_1,uchar *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  ByteArrayInputStream *this;
  DataInputStream *this_00;
  void *pvVar3;
  String *this_01;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  String *pSVar9;
  undefined4 *puVar10;
  undefined1 local_d0 [8];
  uchar auStack_c8 [4];
  int *local_c4;
  void *local_c0;
  undefined1 *local_bc;
  uchar *local_b8;
  uint local_b4;
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  StringUtil aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [6];
  short sStack_7e;
  String aSStack_7c [6];
  short sStack_76;
  String aSStack_74 [6];
  short sStack_6e;
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringUtil aSStack_34 [8];
  String aSStack_2c [8];
  StringUtil aSStack_24 [8];
  int iStack_1c;
  
  piVar8 = *(int **)(DAT_002b7c64 + 0x2b7950);
  iStack_1c = *piVar8;
  local_c0 = param_1;
  local_b8 = param_2;
  local_b4 = param_3;
  L_PrintLog((char *)(DAT_002b7c6c + 0x2b7966),(char *)(DAT_002b7c68 + 0x2b7962));
  String::String(aSStack_ac,(char *)(DAT_002b7c70 + 0x2b7972));
  local_c4 = piVar8;
  String::String(aSStack_a4,(char *)(DAT_002b7c74 + 0x2b797e));
  iVar2 = L_ValidateResponse(local_b8,local_b4,aSStack_ac,aSStack_a4);
  String::~String(aSStack_a4);
  String::~String(aSStack_ac);
  if (iVar2 != 0) {
    L_PrintLog((char *)(DAT_002b7c78 + 0x2b79b2),(char *)(DAT_002b7c7c + 0x2b79b4));
    this = (ByteArrayInputStream *)operator_new(0x18);
    ByteArrayInputStream::ByteArrayInputStream(this,local_b8,local_b4,false);
    String::String(aSStack_9c,(char *)(DAT_002b7c80 + 0x2b79d2));
    puVar10 = (undefined4 *)local_d0;
    if (this != (ByteArrayInputStream *)0x0) {
      local_bc = local_d0;
      L_PrintLog((char *)(DAT_002b7c84 + 0x2b79e2),(char *)(DAT_002b7c88 + 0x2b79e4));
      this_00 = (DataInputStream *)operator_new(8);
      DataInputStream::DataInputStream(this_00,(InputStream *)this);
      iVar2 = DataInputStream::readByte(this_00);
      (**(code **)(*(int *)this_00 + 0x28))(this_00,iVar2);
      local_b4 = ((local_b4 - 2) - (uint)local_b8[local_b4 - 1]) - iVar2;
      local_b8 = auStack_c8 + -(local_b4 + 0xf & 0xfffffff8);
      (**(code **)(*(int *)this_00 + 0x20))(this_00,local_b8,0,local_b4);
      local_b8[local_b4] = '\0';
      StringUtil::stringFromUtf8(aSStack_94,local_b8);
      String::operator=(aSStack_9c,aSStack_94);
      String::~String((String *)aSStack_94);
      (**(code **)(*(int *)this_00 + 0xc))(this_00);
      (**(code **)(*(int *)this_00 + 4))(this_00);
      (**(code **)(*(int *)this + 4))(this);
      puVar10 = (undefined4 *)local_bc;
    }
    String::String(aSStack_8c,aSStack_9c);
    pvVar3 = (void *)StringUtil::splitString(aSStack_8c,10);
    String::~String(aSStack_8c);
    if (*(int *)((int)pvVar3 + 4) == -1) {
      L_PrintLog((char *)(DAT_002b7c8c + 0x2b7aaa),(char *)(DAT_002b7c90 + 0x2b7aac));
      iVar2 = *(int *)((int)pvVar3 + 8);
      if (iVar2 != 0) {
        pSVar9 = (String *)(iVar2 + *(int *)(iVar2 + -4) * 8);
        while (this_01 = pSVar9 + -8, pSVar9 != *(String **)((int)pvVar3 + 8)) {
          String::~String(this_01);
          pSVar9 = this_01;
        }
        operator_delete__(this_01);
      }
      operator_delete(pvVar3);
      String::~String(aSStack_9c);
      goto LAB_002b7e2c;
    }
    String::String(aSStack_84,(char *)(DAT_002b7c94 + 0x2b7aec));
    String::String(aSStack_7c,(char *)(DAT_002b7c98 + 0x2b7af8));
    for (iVar2 = 0; iVar2 < *(int *)((int)pvVar3 + 4) + 1; iVar2 = iVar2 + 1) {
      local_b4 = iVar2 * 8;
      String::String(aSStack_74,(String *)(*(int *)((int)pvVar3 + 8) + local_b4));
      sVar1 = sStack_6e;
      String::~String(aSStack_74);
      if (sVar1 != 0) {
        String::String(aSStack_6c,(String *)(*(int *)((int)pvVar3 + 8) + local_b4));
        String::String(aSStack_64,(char *)(DAT_002b7c9c + 0x2b7b34));
        iVar4 = String::equals(aSStack_6c,aSStack_64);
        String::~String(aSStack_64);
        String::~String(aSStack_6c);
        if (iVar4 == 0) {
          String::String(aSStack_5c,(String *)(*(int *)((int)pvVar3 + 8) + local_b4));
          String::String(aSStack_54,(char *)(DAT_002b7ca0 + 0x2b7b70));
          iVar4 = String::equals(aSStack_5c,aSStack_54);
          String::~String(aSStack_54);
          String::~String(aSStack_5c);
          if (iVar4 == 0) {
            String::String(aSStack_4c,(String *)(*(int *)((int)pvVar3 + 8) + local_b4));
            String::operator=(aSStack_84,aSStack_4c);
            String::~String(aSStack_4c);
            String::String(aSStack_44,(String *)(*(int *)((int)pvVar3 + 8) + (iVar2 + 1) * 8));
            String::operator=(aSStack_7c,aSStack_44);
            String::~String(aSStack_44);
            break;
          }
        }
      }
    }
    pcVar7 = (char *)(DAT_002b7ca8 + 0x2b7bfa);
    **(undefined1 **)(DAT_002b7ca4 + 0x2b7bf4) = 1;
    String::String(aSStack_3c,pcVar7);
    iVar5 = String::equals(aSStack_84,aSStack_3c);
    String::~String(aSStack_3c);
    iVar4 = DAT_002b7e48;
    iVar2 = DAT_002b7e44;
    pcVar7 = *(char **)(DAT_002b7cac + 0x2b7c1c);
    if (iVar5 == 0) {
      strncpy(pcVar7,(char *)(DAT_002b7cb0 + 0x2b7c2a),0x80);
      StringUtil::getEncodingString(aSStack_34,'\x01');
      *puVar10 = 0;
      pcVar6 = (char *)String::getBytes(aSStack_84,aSStack_34,0);
      strncpy(pcVar7,pcVar6,(int)sStack_7e);
      String::~String((String *)aSStack_34);
      pcVar6 = (char *)((int)&DAT_002b7c64 + DAT_002b7cb4);
    }
    else {
      *pcVar7 = '0';
      pcVar6 = (char *)(iVar2 + 0x2b7cc4);
      pcVar7 = (char *)(iVar4 + 0x2b7cc6);
    }
    L_PrintLog(pcVar6,pcVar7);
    String::String(aSStack_2c,(char *)(DAT_002b7e4c + 0x2b7cd2));
    iVar2 = String::equals(aSStack_7c,aSStack_2c);
    String::~String(aSStack_2c);
    if (iVar2 == 0) {
      pcVar6 = *(char **)(DAT_002b7e50 + 0x2b7cf8);
      strncpy(pcVar6,(char *)(DAT_002b7e54 + 0x2b7cfc),0x80);
      StringUtil::getEncodingString(aSStack_24,'\x01');
      *puVar10 = 0;
      pcVar7 = (char *)String::getBytes(aSStack_7c,aSStack_24,0);
      strncpy(pcVar6,pcVar7,(int)sStack_76);
      String::~String((String *)aSStack_24);
      L_PrintLog((char *)(DAT_002b7e58 + 0x2b7d38),pcVar6);
    }
    String::~String(aSStack_7c);
    String::~String(aSStack_84);
    String::~String(aSStack_9c);
  }
  *(undefined4 *)((int)local_c0 + 0x408) = 0;
  L_PrintLog((char *)(DAT_002b7e5c + 0x2b7d64),(char *)(DAT_002b7e60 + 0x2b7d66));
LAB_002b7e2c:
  if (iStack_1c == *local_c4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


