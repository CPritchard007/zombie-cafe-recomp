/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00181ef8 GameStateRaid::init */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00182c70) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00181f50) */
/* WARNING: Removing unreachable block (ram,0x00182c70) */
/* WARNING: Removing unreachable block (ram,0x00181f50) */
/* GameStateRaid::init() */

void __thiscall GameStateRaid::init(GameStateRaid *this)

{
  byte bVar1;
  GameStateRaid GVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  undefined2 uVar6;
  short sVar7;
  undefined4 uVar8;
  short *psVar9;
  ZombieCafe *this_00;
  Furniture *pFVar10;
  ServingCounter *this_01;
  FoodStack *this_02;
  Furniture *pFVar11;
  DataInputStream *this_03;
  uint uVar12;
  CharacterData *pCVar13;
  Character *pCVar14;
  CharacterInstance *pCVar15;
  Cafe *pCVar16;
  undefined4 uVar17;
  ScreenElement *this_04;
  NoticeDialog *this_05;
  HudElement *this_06;
  ConfirmDialog *pCVar18;
  CharacterDetails *this_07;
  ObjectiveCompleteDialog *this_08;
  ObjectiveDialog *this_09;
  MessageElement *this_10;
  BuyToxinDialog *this_11;
  CharacterCommandBar *this_12;
  long lVar19;
  TutorialArrow *this_13;
  ImageElement *this_14;
  BitmapTextElement *pBVar20;
  uchar uVar21;
  CImage *pCVar22;
  int iVar23;
  CImage *pCVar24;
  int iVar25;
  undefined4 *puVar26;
  CImage *pCVar27;
  int iVar28;
  CFPathFinder *pCVar29;
  GameStateRaid *pGVar30;
  code *pcVar31;
  undefined1 *puVar32;
  Data *pDVar33;
  int *piVar34;
  CharacterData *this_15;
  int iVar35;
  int *piVar36;
  float fVar45;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  undefined4 uStack_4;
  undefined4 *puVar37;
  undefined4 *puVar38;
  int *piVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  
  iVar5 = DAT_00182164;
  piVar36 = (int *)(&stack0xffffffec + DAT_00182164);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_00182164);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_00182164);
  piVar39 = (int *)(&stack0xffffffec + DAT_00182164);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_00182164);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_00182164);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_00182164);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_00182164);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_00182164);
  *(int *)(&stack0x0000000c + DAT_00182164) = DAT_00182168 + 0x181f06;
  iVar23 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x000003b8 + DAT_00182164) =
       **(undefined4 **)(DAT_00182168 + 0x181f06 + DAT_0018216c);
  *(undefined4 *)(iVar23 + DAT_00182170) = 9;
  sprintf(&stack0x000002b8 + iVar5,(char *)(DAT_00182174 + 0x181f20),*(undefined4 *)(this + 0x50));
  L_PrintLog((char *)(DAT_00182178 + 0x181f2a),&stack0x000002b8 + iVar5);
  this[0x12] = (GameStateRaid)0x0;
  this[0x13] = (GameStateRaid)0x0;
  this[0x14] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  this[0xa0] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  switch(*(undefined4 *)(this + 0x50)) {
  case 8:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0;
    break;
  case 9:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 1;
    break;
  case 10:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 2;
    break;
  case 0xb:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 3;
    break;
  case 0xc:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 4;
    break;
  case 0xd:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 5;
    break;
  case 0xe:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 6;
    break;
  case 0xf:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 7;
    break;
  case 0x10:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 8;
    break;
  case 0x11:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 9;
    break;
  case 0x12:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 10;
    break;
  case 0x13:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xb;
    break;
  case 0x14:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xc;
    break;
  case 0x15:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xd;
    break;
  case 0x16:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xe;
    break;
  case 0x17:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xf;
    break;
  case 0x18:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x10;
    break;
  case 0x19:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x11;
    break;
  case 0x1a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x12;
    break;
  case 0x1b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x13;
    break;
  case 0x1c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x14;
    break;
  case 0x1d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x15;
    break;
  case 0x1e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x16;
    break;
  case 0x1f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x17;
    break;
  case 0x20:
    this[0x12] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x18;
    break;
  case 0x21:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x19;
    break;
  case 0x22:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x1a;
    break;
  case 0x23:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x1b;
    break;
  case 0x24:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x1c;
    break;
  case 0x25:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x1d;
    break;
  case 0x26:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x1e;
    break;
  case 0x27:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x1f;
    break;
  case 0x28:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x20;
    break;
  case 0x29:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x21;
    break;
  case 0x2a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x22;
    break;
  case 0x2b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x23;
    break;
  case 0x2c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x24;
    break;
  case 0x2d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x25;
    break;
  case 0x2e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x26;
    break;
  case 0x2f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x27;
    break;
  case 0x30:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x28;
    break;
  case 0x31:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x29;
    break;
  case 0x32:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x2a;
    break;
  case 0x33:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x2b;
    break;
  case 0x34:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x2c;
    break;
  case 0x35:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x2d;
    break;
  case 0x36:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x2e;
    break;
  case 0x37:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x2f;
    break;
  case 0x38:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x30;
    break;
  case 0x39:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x31;
    break;
  case 0x3a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x32;
    break;
  case 0x3b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x33;
    break;
  case 0x3c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x34;
    break;
  case 0x3d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x35;
    break;
  case 0x3e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x36;
    break;
  case 0x3f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x37;
    break;
  case 0x40:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x38;
    break;
  case 0x41:
    this[0x14] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x39;
    break;
  case 0x42:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x3a;
    break;
  case 0x43:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x3b;
    break;
  case 0x44:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x3c;
    break;
  case 0x45:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x3d;
    break;
  case 0x46:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x3e;
    break;
  case 0x47:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x3f;
    break;
  case 0x48:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x40;
    break;
  case 0x49:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x41;
    break;
  case 0x4a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x42;
    break;
  case 0x4b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x43;
    break;
  case 0x4c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x44;
    break;
  case 0x4d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x45;
    break;
  case 0x4e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x46;
    break;
  case 0x4f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x47;
    break;
  case 0x50:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x48;
    break;
  case 0x51:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x49;
    break;
  case 0x52:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x4a;
    break;
  case 0x53:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x4b;
    break;
  case 0x54:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x4c;
    break;
  case 0x55:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x4d;
    break;
  case 0x56:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x4e;
    break;
  case 0x57:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x4f;
    break;
  case 0x58:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x50;
    break;
  case 0x59:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x51;
    break;
  case 0x5a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x52;
    break;
  case 0x5b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x53;
    break;
  case 0x5c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x54;
    break;
  case 0x5d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x55;
    break;
  case 0x5e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x56;
    break;
  case 0x5f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x57;
    break;
  case 0x60:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x58;
    break;
  case 0x61:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x59;
    break;
  case 0x62:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x5a;
    break;
  case 99:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x5b;
    break;
  case 100:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x5c;
    break;
  case 0x65:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x5d;
    break;
  case 0x66:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x5e;
    break;
  case 0x67:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x5f;
    break;
  case 0x68:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x60;
    break;
  case 0x69:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x61;
    break;
  case 0x6a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x62;
    break;
  case 0x6b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 99;
    break;
  case 0x6c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 100;
    break;
  case 0x6d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x65;
    break;
  case 0x6e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x66;
    break;
  case 0x6f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x67;
    break;
  case 0x70:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x68;
    break;
  case 0x71:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x69;
    break;
  case 0x72:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x6a;
    break;
  case 0x73:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x6b;
    break;
  case 0x74:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x6c;
    break;
  case 0x75:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x6d;
    break;
  case 0x76:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x6e;
    break;
  case 0x77:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x6f;
    break;
  case 0x78:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x70;
    break;
  case 0x79:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x71;
    break;
  case 0x7a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x72;
    break;
  case 0x7b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x73;
    break;
  case 0x7c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x74;
    break;
  case 0x7d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x75;
    break;
  case 0x7e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x76;
    break;
  case 0x7f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x77;
    break;
  case 0x80:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x78;
    break;
  case 0x81:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x79;
    break;
  case 0x82:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x7a;
    break;
  case 0x83:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x7b;
    break;
  case 0x84:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x7c;
    break;
  case 0x85:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x7d;
    break;
  case 0x86:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x7e;
    break;
  case 0x87:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x7f;
    break;
  case 0x88:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x80;
    break;
  case 0x89:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x81;
    break;
  case 0x8a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x82;
    break;
  case 0x8b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x83;
    break;
  case 0x8c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x84;
    break;
  case 0x8d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x85;
    break;
  case 0x8e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x86;
    break;
  case 0x8f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x87;
    break;
  case 0x90:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x88;
    break;
  case 0x91:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x89;
    break;
  case 0x92:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x8a;
    break;
  case 0x93:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x8b;
    break;
  case 0x94:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x8c;
    break;
  case 0x95:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x8d;
    break;
  case 0x96:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x8e;
    break;
  case 0x97:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x8f;
    break;
  case 0x98:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x90;
    break;
  case 0x99:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x91;
    break;
  case 0x9a:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x92;
    break;
  case 0x9b:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x93;
    break;
  case 0x9c:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x94;
    break;
  case 0x9d:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x95;
    break;
  case 0x9e:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x96;
    break;
  case 0x9f:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x97;
    break;
  case 0xa0:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x98;
    break;
  case 0xa1:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x99;
    break;
  case 0xa2:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x9a;
    break;
  case 0xa3:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x9b;
    break;
  case 0xa4:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x9c;
    break;
  case 0xa5:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x9d;
    break;
  case 0xa6:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x9e;
    break;
  case 0xa7:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0x9f;
    break;
  case 0xa8:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa0;
    break;
  case 0xa9:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa1;
    break;
  case 0xaa:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa2;
    break;
  case 0xab:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa3;
    break;
  case 0xac:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa4;
    break;
  case 0xad:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa5;
    break;
  case 0xae:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa6;
    break;
  case 0xaf:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa7;
    break;
  case 0xb0:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa8;
    break;
  case 0xb1:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xa9;
    break;
  case 0xb2:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xaa;
    break;
  case 0xb3:
    this[0x13] = (GameStateRaid)0x1;
    *(undefined4 *)(this + 0x24) = 0xab;
  }
  if ((this[0x16] != (GameStateRaid)0x0) || (this[0x15] != (GameStateRaid)0x0)) {
    this[0x13] = (GameStateRaid)0x0;
    this[0x12] = (GameStateRaid)0x0;
  }
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadRecipeImages(*(ZombieCafe **)(this + 0xc));
  ZombieCafe::loadFurnitureImages(*(ZombieCafe **)(this + 0xc));
  uVar8 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00182968),false);
  *(undefined4 *)(this + 0x7c) = uVar8;
  uVar8 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x80) = uVar8;
  EnemyLayouts::load();
  EnemyItems::load();
  this[100] = (GameStateRaid)0x0;
  puVar32 = *(undefined1 **)(*(int *)(&stack0x0000000c + iVar5) + DAT_0018296c);
  __divsi3(*(undefined4 *)(this + 0x54),*puVar32);
  uVar8 = __floatsisf();
  *(undefined4 *)(this + 0x68) = uVar8;
  this[0x6c] = (GameStateRaid)0x0;
  iVar23 = *(int *)(this + 0xc);
  *(undefined1 **)(&stack0x0000001c + iVar5) = puVar32;
  iVar23 = *(int *)(iVar23 + DAT_00182970 + 4);
  *(GameStateRaid **)(&stack0x00000010 + iVar5) = this + 0xe0;
  *(int *)(this + 0xd0) = iVar23 + 1;
  for (iVar23 = 0; iVar23 < *(int *)(*(int *)(this + 0xc) + DAT_00182970 + 4) + 1;
      iVar23 = iVar23 + 1) {
    iVar28 = iVar23 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xd4),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00182970 + 8) + iVar28)
                              + 0x44));
    Vector<long>::addElement
              (*(Vector<long> **)(&stack0x00000010 + iVar5),
               *(long *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00182970 + 8) + iVar28) + 0x48
                        ));
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xec),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00182970 + 8) + iVar28)
                              + 0x4c));
  }
  *(undefined4 *)(this + 0x158) = 0;
  if (this[0x12] == (GameStateRaid)0x0) {
    GVar2 = this[0x14];
    *(undefined4 *)(&stack0x00000010 + iVar5) = 0;
    if (((GVar2 == (GameStateRaid)0x0) &&
        (GVar2 = this[0x15], *(undefined4 *)(&stack0x00000010 + iVar5) = 0,
        GVar2 == (GameStateRaid)0x0)) &&
       (GVar2 = this[0x16], *(undefined4 *)(&stack0x00000010 + iVar5) = 0,
       GVar2 == (GameStateRaid)0x0)) {
      sprintf(&stack0x000000b8 + iVar5,(char *)(DAT_0018297c + 0x182750),
              *(undefined4 *)(this + 0x4c));
      String::String((String *)(&stack0x0000004c + iVar5),&stack0x000000b8 + iVar5);
      uVar8 = SaveDataInputStream::open(&stack0x0000004c + iVar5);
      *(undefined4 *)(&stack0x00000010 + iVar5) = uVar8;
      puVar32 = &stack0x0000004c;
      goto LAB_00182764;
    }
  }
  else {
    sprintf(&stack0x000000b8 + iVar5,(char *)(DAT_00182978 + 0x182712),
            (uint)**(byte **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182974) +
            *(int *)(this + 0x4c));
    String::String((String *)(&stack0x00000044 + iVar5),&stack0x000000b8 + iVar5);
    uVar8 = SaveDataInputStream::open(&stack0x00000044 + iVar5);
    *(undefined4 *)(&stack0x00000010 + iVar5) = uVar8;
    puVar32 = &stack0x00000044;
LAB_00182764:
    String::~String((String *)(puVar32 + iVar5));
    if (*(InputStream **)(&stack0x00000010 + iVar5) != (InputStream *)0x0) {
      iVar28 = *(int *)(this + 0xc);
      iVar23 = Cafe::deserialize(*(InputStream **)(&stack0x00000010 + iVar5),true,(ZombieCafe *)0x0)
      ;
      *(int *)(this + 0x78) = iVar23;
      *(int *)(iVar28 + 0x7e8) = iVar23;
      if (iVar23 != 0) {
        FUN_001843b8();
      }
    }
  }
  if (((this[0x12] == (GameStateRaid)0x0) && (this[0x13] == (GameStateRaid)0x0)) &&
     ((this[0x14] == (GameStateRaid)0x0 &&
      ((this[0x16] == (GameStateRaid)0x0 && (this[0x15] == (GameStateRaid)0x0)))))) {
    CapcomMath::random(2);
  }
  iVar23 = 0;
  sVar7 = **(short **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182980);
  *(short **)(&stack0x0000003c + iVar5) =
       *(short **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182980);
  if (0 < sVar7) {
    iVar23 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182984);
  }
  iVar28 = *(int *)(this + 0xc);
  uVar8 = Cafe::createForNewRaid(*(int *)(iVar23 + 0xc),*(int *)(iVar23 + 0x10));
  *(undefined4 *)(this + 0x78) = uVar8;
  *(undefined4 *)(iVar28 + 0x7e8) = uVar8;
  iVar28 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x00000038 + iVar5) = *(undefined4 *)(iVar23 + 8);
  iVar28 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(iVar28 + DAT_00182988),',');
  if (iVar28 == 0) {
    *(undefined4 *)(this + 0x5c) = 3;
    *(undefined4 *)(this + 0x60) = 0;
  }
  else {
    Vector<int>::Vector((Vector<int> *)(&stack0x00000094 + iVar5));
    for (iVar28 = 0; this_00 = *(ZombieCafe **)(this + 0xc),
        iVar28 < (int)(uint)(byte)this_00[DAT_00182990]; iVar28 = iVar28 + 1) {
      iVar35 = *(int *)(this_00 + 0x4e8);
      *(int *)(&stack0x00000008 + iVar5) = iVar28 * 0x1c;
      if (((((uint)*(byte *)(iVar35 + iVar28 * 0x1c + 0x17) == *(uint *)(this + 0x50)) ||
           ((this[0x13] != (GameStateRaid)0x0 &&
            (iVar35 = ZombieCafe::isEventRecipe(this_00,iVar28), iVar35 == 0)))) ||
          ((this[0x15] != (GameStateRaid)0x0 &&
           (iVar35 = ZombieCafe::isEventRecipe(*(ZombieCafe **)(this + 0xc),iVar28), iVar35 == 0))))
         || (((this[0x16] != (GameStateRaid)0x0 &&
              (iVar35 = ZombieCafe::isEventRecipe(*(ZombieCafe **)(this + 0xc),iVar28), iVar35 == 0)
              ) || ((this[0x14] != (GameStateRaid)0x0 &&
                    (iVar35 = ZombieCafe::isEventRecipe(*(ZombieCafe **)(this + 0xc),iVar28),
                    iVar35 == 0)))))) {
        *(uint *)(&stack0x00000018 + iVar5) = (uint)**(byte **)(&stack0x0000001c + iVar5);
        iVar35 = iVar28 * 10 >> 3;
        *(int *)(&stack0x00000014 + iVar5) = iVar28 * 10 + iVar35 * -8;
        puVar26 = *(undefined4 **)(*(int *)(&stack0x0000000c + iVar5) + DAT_0018298c);
        *(int *)(&stack0x00000024 + iVar5) = iVar23;
        psVar9 = (short *)*puVar26;
        bVar4 = false;
        for (iVar23 = 0; iVar23 < *(int *)(&stack0x00000018 + iVar5); iVar23 = iVar23 + 1) {
          if ((*psVar9 == iVar28) &&
             (((int)(uint)*(byte *)(*(int *)(*(int *)(this + 0xc) + 0x1c) + iVar35) >>
               (*(uint *)(&stack0x00000014 + iVar5) & 0xff) & 1U) == 0)) {
            bVar4 = true;
          }
          psVar9 = psVar9 + 1;
        }
        iVar23 = *(int *)(&stack0x00000024 + iVar5);
        if ((((this[0x12] == (GameStateRaid)0x0) && (this[0x15] == (GameStateRaid)0x0)) &&
            (this[0x16] == (GameStateRaid)0x0)) &&
           (1 < *(byte *)(*(int *)(*(int *)(this + 0xc) + 0x4e8) +
                          *(int *)(&stack0x00000008 + iVar5) + 0x18))) {
          bVar4 = true;
        }
        iVar35 = *(int *)(*(int *)(this + 0xc) + 0x4e8) + *(int *)(&stack0x00000008 + iVar5);
        if (*(uint *)(&stack0x00000018 + iVar5) < (uint)*(byte *)(iVar35 + 0x16)) {
          bVar4 = true;
        }
        if ((((this[0x13] != (GameStateRaid)0x0) || (this[0x14] != (GameStateRaid)0x0)) ||
            ((this[0x16] != (GameStateRaid)0x0 || (this[0x15] != (GameStateRaid)0x0)))) &&
           ((2 < *(byte *)(iVar35 + 0x17) || (*(char *)(iVar35 + 0x18) != '\0')))) {
          bVar4 = true;
        }
        if (((*(int *)(this + 0x50) != 0x7f) && (*(char *)(iVar35 + 0x17) != '\x7f')) && (!bVar4)) {
          Vector<int>::addElement((Vector<int> *)(&stack0x00000094 + iVar5),iVar28);
        }
      }
    }
    if (*(int *)(&stack0x00000098 + iVar5) == -1) {
      *(undefined4 *)(this + 0x5c) = 3;
      *(undefined4 *)(this + 0x60) = 0;
    }
    else {
      *(undefined4 *)(this + 0x5c) = 0xffffffff;
      if ((((this[0x14] == (GameStateRaid)0x0) && (this[0x13] == (GameStateRaid)0x0)) &&
          ((this[0x15] == (GameStateRaid)0x0 &&
           ((this[0x16] == (GameStateRaid)0x0 && (this[0x12] == (GameStateRaid)0x0)))))) &&
         (iVar28 = CapcomMath::random(100),
         iVar28 < **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182994))) {
        Vector<int>::Vector((Vector<int> *)(&stack0x000000a0 + iVar5));
        for (iVar28 = 0; iVar35 = *(int *)(this + 0xc),
            iVar28 < (int)(uint)*(byte *)(iVar35 + DAT_00182ce4); iVar28 = iVar28 + 1) {
          iVar25 = *(int *)(iVar35 + 0x4e8) + iVar28 * 0x1c;
          if (((((uint)*(byte *)(iVar25 + 0x17) == *(uint *)(this + 0x50)) &&
               (*(char *)(iVar25 + 0x18) == '\x02')) && (*(byte *)(iVar25 + 0x17) != 0x7f)) &&
             ((int)(uint)*(byte *)(iVar25 + 0x16) <= *(int *)(iVar35 + 0x680))) {
            Vector<int>::addElement((Vector<int> *)(&stack0x000000a0 + iVar5),iVar28);
          }
        }
        if (-1 < *(int *)(&stack0x000000a4 + iVar5)) {
          iVar28 = CapcomMath::random(*(int *)(&stack0x000000a4 + iVar5) + 1);
          *(undefined4 *)(this + 0x5c) =
               *(undefined4 *)(iVar28 * 4 + *(int *)(&stack0x000000a8 + iVar5));
        }
        Vector<int>::~Vector((Vector<int> *)(&stack0x000000a0 + iVar5));
      }
      if (*(int *)(this + 0x5c) == -1) {
        iVar28 = CapcomMath::random(*(int *)(&stack0x00000098 + iVar5) + 1);
        *(undefined4 *)(this + 0x5c) =
             *(undefined4 *)(iVar28 * 4 + *(int *)(&stack0x0000009c + iVar5));
      }
    }
    if (((this[0x13] != (GameStateRaid)0x0) || (this[0x16] != (GameStateRaid)0x0)) ||
       (this[0x15] != (GameStateRaid)0x0)) {
      iVar28 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182ce8);
      if (iVar28 == 0) {
        iVar28 = *(int *)(this + 0x50);
        if (iVar28 == 0x24) {
          uVar8 = 0x83;
        }
        else if (iVar28 == 0x25) {
          uVar8 = 0x84;
        }
        else {
          if (iVar28 == 0x27) {
            iVar28 = CapcomMath::random(100);
            uVar8 = 0x85;
          }
          else {
            if (iVar28 != 0x2d) {
              if (iVar28 == 0x36) {
                uVar8 = 0x89;
              }
              else if (iVar28 - 0x49U < 2) {
                uVar8 = 0x8c;
              }
              else {
                if (iVar28 != 0x5d) goto LAB_00182abe;
                uVar8 = 0x95;
              }
              goto LAB_00182abc;
            }
            iVar28 = CapcomMath::random(100);
            uVar8 = 0x87;
          }
          if (0x1d < iVar28) goto LAB_00182abe;
        }
      }
      else {
        if (iVar28 == 1000) {
          iVar28 = CapcomMath::random(0x27);
          iVar28 = *(int *)(DAT_00182cec + iVar28 * 4 + 0x182a54);
        }
        else if (iVar28 == DAT_00182cf0) {
          iVar28 = CapcomMath::random(4);
          iVar28 = *(int *)(DAT_00182cf4 + iVar28 * 4 + 0x182a88);
        }
        *(int *)(this + 0x5c) = iVar28;
        if (*(int *)(this + 0x5c) < (int)(uint)*(byte *)(*(int *)(this + 0xc) + DAT_00182ce4))
        goto LAB_00182abe;
        uVar8 = 0;
      }
LAB_00182abc:
      *(undefined4 *)(this + 0x5c) = uVar8;
    }
LAB_00182abe:
    iVar28 = *(int *)(this + 0x5c) * 10 >> 3;
    if (((int)(uint)*(byte *)(*(int *)(*(int *)(this + 0xc) + 0x1c) + iVar28) >>
         (*(int *)(this + 0x5c) * 10 + iVar28 * -8 & 0xffU) & 1U) == 0) {
      *(undefined4 *)(this + 0x60) = 0;
    }
    else {
      iVar28 = CapcomMath::random(100);
      piVar34 = (int *)**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182cfc);
      for (iVar35 = 0; iVar35 < **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182cf8);
          iVar35 = iVar35 + 1) {
        iVar25 = *piVar34;
        piVar34 = piVar34 + 1;
        if (iVar28 < iVar25) {
          *(int *)(this + 0x60) = iVar35;
          break;
        }
      }
    }
    Vector<int>::~Vector((Vector<int> *)(&stack0x00000094 + iVar5));
  }
  iVar28 = chooseWall((int)this);
  for (iVar35 = 0; iVar25 = *(int *)(iVar23 + 0xc), iVar35 < iVar25; iVar35 = iVar35 + 1) {
    *(undefined4 *)(&stack0x00000008 + iVar5) = *(undefined4 *)(this + 0x78);
    lVar19 = Cafe::diamondToStaggeredCoords
                       ((**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d00) - iVar25) +
                        iVar35,**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d04) + 1);
    iVar25 = Cafe::staggeredCoordsToIndex(lVar19);
    iVar25 = *(int *)(*(int *)(iVar25 * 4 + **(int **)(&stack0x00000008 + iVar5)) + 0xc);
    *(undefined2 *)(iVar25 + 0x38) = *(undefined2 *)(iVar28 + 0x3c);
    *(undefined4 *)(iVar25 + 0x40) = *(undefined4 *)(iVar28 + 0x48);
  }
  for (iVar35 = 0; iVar25 = *(int *)(iVar23 + 0x10), iVar35 < iVar25; iVar35 = iVar35 + 1) {
    *(undefined4 *)(&stack0x00000008 + iVar5) = *(undefined4 *)(this + 0x78);
    lVar19 = Cafe::diamondToStaggeredCoords
                       (**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d00) + -1,
                        (iVar25 + **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d04)) -
                        iVar35);
    iVar25 = Cafe::staggeredCoordsToIndex(lVar19);
    iVar25 = *(int *)(*(int *)(iVar25 * 4 + **(int **)(&stack0x00000008 + iVar5)) + 0x10);
    *(undefined2 *)(iVar25 + 0x38) = *(undefined2 *)(iVar28 + 0x3c);
    *(undefined4 *)(iVar25 + 0x40) = *(undefined4 *)(iVar28 + 0x48);
  }
  iVar28 = chooseFloor((int)this);
  *(undefined4 *)(&stack0x00000008 + iVar5) = 0;
  while (*(int *)(&stack0x00000008 + iVar5) < *(int *)(iVar23 + 0xc)) {
    for (iVar35 = 0; iVar25 = *(int *)(iVar23 + 0x10), iVar35 < iVar25; iVar35 = iVar35 + 1) {
      *(undefined4 *)(&stack0x00000018 + iVar5) = *(undefined4 *)(this + 0x78);
      lVar19 = Cafe::diamondToStaggeredCoords
                         ((**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d00) -
                          *(int *)(iVar23 + 0xc)) + *(int *)(&stack0x00000008 + iVar5),
                          (iVar25 + **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d04)) -
                          iVar35);
      iVar25 = Cafe::staggeredCoordsToIndex(lVar19);
      Cafe::setTileImageIndex
                (*(Cafe **)(&stack0x00000018 + iVar5),iVar25,(int)*(short *)(iVar28 + 0x3c),
                 *(long *)(iVar28 + 0x48));
    }
    *(int *)(&stack0x00000008 + iVar5) = *(int *)(&stack0x00000008 + iVar5) + 1;
  }
  *(undefined4 *)(&stack0x00000018 + iVar5) = 1;
  *(undefined4 *)(&stack0x00000020 + iVar5) = 0;
  *(undefined4 *)(&stack0x0000002c + iVar5) = 0;
  *(undefined4 *)(&stack0x00000028 + iVar5) = 0;
  *(undefined4 *)(&stack0x00000024 + iVar5) = 0;
  *(int *)(&stack0x00000030 + iVar5) = DAT_00182d08 + 0x182c02;
  *(int *)(&stack0x00000040 + iVar5) = iVar23;
  while (*(int *)(&stack0x00000018 + iVar5) <= *(int *)(&stack0x00000038 + iVar5)) {
    iVar23 = *(int *)(&stack0x00000018 + iVar5);
    pDVar33 = (Data *)0x0;
    if ((-1 < iVar23) && (iVar23 < **(short **)(&stack0x0000003c + iVar5))) {
      pDVar33 = (Data *)(**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d0c) +
                        iVar23 * 0x14);
    }
    iVar23 = chooseFurniture(this,pDVar33,*(int *)(this + 0x50));
    *(int *)(&stack0x00000008 + iVar5) = iVar23;
    if (iVar23 == 0) goto switchD_00182c70_caseD_5;
    *(int *)(&stack0x00000014 + iVar5) =
         (**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d00) -
         *(int *)(*(int *)(&stack0x00000040 + iVar5) + 0xc)) + *(int *)(pDVar33 + 0xc);
    *(int *)(&stack0x0000001c + iVar5) =
         **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00182d04) + *(int *)(pDVar33 + 0x10) +
         1;
    switch(*(undefined1 *)(*(int *)(&stack0x00000008 + iVar5) + 0x44)) {
    case 0:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
      pFVar11 = (Furniture *)operator_new(100);
      Furniture::Furniture(pFVar11,*(FurnitureData **)(&stack0x00000008 + iVar5));
      lVar19 = Cafe::diamondToStaggeredCoords
                         (*(int *)(&stack0x00000014 + iVar5),*(int *)(&stack0x0000001c + iVar5));
      sVar7 = Cafe::staggeredCoordsToIndex(lVar19);
      *(short *)(pFVar11 + 0x2c) = sVar7;
      pcVar31 = *(code **)(*(int *)pFVar11 + 0xc);
      uVar8 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)sVar7);
      (*pcVar31)(pFVar11,uVar8);
      Furniture::setOrientation(pFVar11,(uchar)pDVar33[8]);
      pFVar11[0x54] = (Furniture)0x0;
      goto LAB_00182f18;
    case 1:
      L_PrintLog(*(char **)(&stack0x00000030 + iVar5),(char *)(DAT_001830c4 + 0x182da4));
      pFVar11 = (Furniture *)operator_new(0x8c);
      Furniture::Furniture(pFVar11,*(FurnitureData **)(&stack0x00000008 + iVar5));
      uVar8 = *(undefined4 *)(&stack0x00000008 + iVar5);
      *(int *)pFVar11 = *(int *)(*(int *)(&stack0x0000000c + iVar5) + DAT_001830c8) + 8;
      pFVar11[0x81] = (Furniture)0x1;
      *(undefined4 *)(pFVar11 + 0x68) = uVar8;
      *(undefined4 *)(pFVar11 + 0x6c) = 0;
      *(undefined4 *)(pFVar11 + 0x78) = 0;
      *(undefined4 *)(pFVar11 + 0x70) = 0;
      *(undefined4 *)(pFVar11 + 0x74) = 0;
      *(undefined4 *)(pFVar11 + 100) = 0;
      *(undefined4 *)(pFVar11 + 0x88) = 0;
      *(undefined4 *)(pFVar11 + 0x7c) = 0;
      pFVar11[0x80] = (Furniture)0x1;
      pFVar11[0x82] = (Furniture)0x0;
      pFVar11[0x83] = (Furniture)0x0;
      *(undefined2 *)(pFVar11 + 0x84) = 0;
      *(Furniture **)(&stack0x00000034 + iVar5) = pFVar11 + 0x81;
      lVar19 = Cafe::diamondToStaggeredCoords
                         (*(int *)(&stack0x00000014 + iVar5),*(int *)(&stack0x0000001c + iVar5));
      sVar7 = Cafe::staggeredCoordsToIndex(lVar19);
      *(short *)(pFVar11 + 0x2c) = sVar7;
      pCVar16 = *(Cafe **)(this + 0x78);
      *(undefined4 *)(&stack0x00000008 + iVar5) = *(undefined4 *)(*(int *)pFVar11 + 0xc);
      uVar8 = Cafe::indexToWorldCoordsCenter(pCVar16,(int)sVar7);
      (**(code **)(&stack0x00000008 + iVar5))(pFVar11,uVar8);
      Furniture::setOrientation(pFVar11,(uchar)pDVar33[8]);
      **(undefined1 **)(&stack0x00000034 + iVar5) = 0;
      Cafe::addFurniture(*(Cafe **)(this + 0x78),pFVar11);
      if (*(int *)(this + 0x160) == 0) {
        *(Furniture **)(this + 0x160) = pFVar11;
        uVar8 = Cafe::getNextTile((int)*(short *)(pFVar11 + 0x2c),*(int *)(pDVar33 + 8));
        *(undefined4 *)(this + 0x44) = uVar8;
        pFVar10 = (Furniture *)operator_new(100);
        Furniture::Furniture
                  (pFVar10,*(FurnitureData **)
                            (**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001830cc) * 4 +
                            *(int *)(*(int *)(this + 0x78) + 0x94)));
        Stove::startCooking((Stove *)pFVar11,'\x01','\0',pFVar10);
      }
      break;
    case 2:
      if (*(int *)(&stack0x0000002c + iVar5) == 0) {
        *(undefined4 *)(&stack0x0000002c + iVar5) = *(undefined4 *)(&stack0x00000008 + iVar5);
      }
      this_01 = (ServingCounter *)operator_new(0x7c);
      ServingCounter::ServingCounter(this_01,*(FurnitureData **)(&stack0x0000002c + iVar5));
      lVar19 = Cafe::diamondToStaggeredCoords
                         (*(int *)(&stack0x00000014 + iVar5),*(int *)(&stack0x0000001c + iVar5));
      sVar7 = Cafe::staggeredCoordsToIndex(lVar19);
      *(short *)(this_01 + 0x2c) = sVar7;
      pcVar31 = *(code **)(*(int *)this_01 + 0xc);
      uVar8 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)sVar7);
      (*pcVar31)(this_01,uVar8);
      Furniture::setOrientation((Furniture *)this_01,(uchar)pDVar33[8]);
      Cafe::addFurniture(*(Cafe **)(this + 0x78),(Furniture *)this_01);
      if (*(int *)(&stack0x00000020 + iVar5) == 0) {
        this_02 = (FoodStack *)operator_new(0x24);
        FoodStack::FoodStack
                  (this_02,(uchar)*(undefined4 *)(this + 0x5c),(uchar)*(undefined4 *)(this + 0x60));
        ServingCounter::addFood(this_01,this_02);
        uVar8 = Cafe::getNewRandomFoodStack(*(Cafe **)(this + 0x78),false);
        *(undefined4 *)(this + 0x58) = uVar8;
        *(undefined4 *)(&stack0x00000020 + iVar5) = 1;
        *(ServingCounter **)(this + 300) = this_01;
      }
      break;
    case 3:
      if (*(int *)(&stack0x00000028 + iVar5) == 0) {
        *(undefined4 *)(&stack0x00000028 + iVar5) = *(undefined4 *)(&stack0x00000008 + iVar5);
      }
      pFVar11 = (Furniture *)operator_new(100);
      Furniture::Furniture(pFVar11,*(FurnitureData **)(&stack0x00000028 + iVar5));
      goto LAB_00182ea4;
    case 4:
      if (*(int *)(&stack0x00000024 + iVar5) == 0) {
        *(undefined4 *)(&stack0x00000024 + iVar5) = *(undefined4 *)(&stack0x00000008 + iVar5);
      }
      pFVar11 = (Furniture *)operator_new(100);
      Furniture::Furniture(pFVar11,*(FurnitureData **)(&stack0x00000024 + iVar5));
LAB_00182ea4:
      lVar19 = Cafe::diamondToStaggeredCoords
                         (*(int *)(&stack0x00000014 + iVar5),*(int *)(&stack0x0000001c + iVar5));
      sVar7 = Cafe::staggeredCoordsToIndex(lVar19);
      *(short *)(pFVar11 + 0x2c) = sVar7;
      pcVar31 = *(code **)(*(int *)pFVar11 + 0xc);
      uVar8 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)sVar7);
      (*pcVar31)(pFVar11,uVar8);
      Furniture::setOrientation(pFVar11,(uchar)pDVar33[8]);
LAB_00182f18:
      Cafe::addFurniture(*(Cafe **)(this + 0x78),pFVar11);
      break;
    case 6:
      if (*(uint *)(pDVar33 + 8) < 2) {
        piVar34 = *(int **)(this + 0x78);
        lVar19 = Cafe::diamondToStaggeredCoords
                           (*(int *)(&stack0x00000014 + iVar5),*(int *)(&stack0x0000001c + iVar5));
        iVar23 = Cafe::staggeredCoordsToIndex(lVar19);
        iVar23 = *(int *)(iVar23 * 4 + *piVar34);
        if (((iVar23 != 0) &&
            (pFVar11 = *(Furniture **)(iVar23 + (*(int *)(pDVar33 + 8) + 2) * 4 + 4),
            pFVar11 != (Furniture *)0x0)) && (*(int *)(pFVar11 + 0x44) == 0)) {
          pFVar10 = (Furniture *)operator_new(100);
          Furniture::Furniture(pFVar10,*(FurnitureData **)(&stack0x00000008 + iVar5));
          Cafe::addWallDecor(*(CafeWall **)(this + 0x78),pFVar11);
        }
      }
    }
switchD_00182c70_caseD_5:
    *(int *)(&stack0x00000018 + iVar5) = *(int *)(&stack0x00000018 + iVar5) + 1;
  }
  if (*(int *)(&stack0x00000010 + iVar5) != 0) {
    piVar34 = *(int **)(&stack0x00000010 + iVar5);
    (**(code **)(*piVar34 + 0xc))(piVar34);
    (**(code **)(*piVar34 + 4))(*(undefined4 *)(&stack0x00000010 + iVar5));
  }
  if (this[0x12] == (GameStateRaid)0x0) {
    sprintf(&stack0x000001b8 + iVar5,(char *)(DAT_001832ec + 0x1830e0),*(int *)(this + 0x4c));
    String::String((String *)(&stack0x0000005c + iVar5),&stack0x000001b8 + iVar5);
    uVar8 = SaveDataInputStream::open(&stack0x0000005c + iVar5);
    *(undefined4 *)(&stack0x00000018 + iVar5) = uVar8;
    puVar32 = &stack0x0000005c;
  }
  else {
    sprintf(&stack0x000001b8 + iVar5,(char *)(DAT_001830d4 + 0x1830a8),
            (uint)**(byte **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001830d0) +
            *(int *)(this + 0x4c));
    String::String((String *)(&stack0x00000054 + iVar5),&stack0x000001b8 + iVar5);
    uVar8 = SaveDataInputStream::open(&stack0x00000054 + iVar5);
    *(undefined4 *)(&stack0x00000018 + iVar5) = uVar8;
    puVar32 = &stack0x00000054;
  }
  String::~String((String *)(puVar32 + iVar5));
  L_PrintLog((char *)(DAT_001832f0 + 0x183100),(char *)(DAT_001832f4 + 0x183102));
  this_03 = (DataInputStream *)operator_new(8);
  *(DataInputStream **)(&stack0x00000010 + iVar5) = this_03;
  DataInputStream::DataInputStream(this_03,*(InputStream **)(&stack0x00000018 + iVar5));
  if ((((*(int *)(&stack0x00000018 + iVar5) != 0) &&
       (uVar12 = DataInputStream::readByte(*(DataInputStream **)(&stack0x00000010 + iVar5)),
       0x16 < uVar12)) &&
      ((this[0x13] == (GameStateRaid)0x0 &&
       ((this[0x14] == (GameStateRaid)0x0 && (this[0x15] == (GameStateRaid)0x0)))))) &&
     (this[0x16] == (GameStateRaid)0x0)) {
    FUN_001843ce();
  }
  iVar28 = *(int *)(*(int *)(this + 0xc) + DAT_001832f8);
  iVar23 = *(int *)(this + 0x50);
  bVar1 = **(byte **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001832fc);
  *(byte **)(&stack0x00000020 + iVar5) =
       *(byte **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001832fc);
  this_15 = *(CharacterData **)(((uint)bVar1 + iVar23 + 10) * 4 + iVar28);
  if (this[0x16] == (GameStateRaid)0x0) {
    if ((((this[0x12] != (GameStateRaid)0x0) || (this[0x13] != (GameStateRaid)0x0)) ||
        (this[0x14] != (GameStateRaid)0x0)) || (this[0x15] != (GameStateRaid)0x0)) {
      iVar23 = *(int *)(this + 0x24);
      if (iVar23 == 0x7b) {
        iVar35 = DAT_00183318;
        if ((*(int *)(this + 0x48) != 4) && (*(int *)(this + 0x48) != 3)) {
          iVar35 = DAT_0018331c;
        }
        goto LAB_00183356;
      }
      iVar35 = DAT_00183664;
      if (iVar23 < 0x7c) {
        if (iVar23 == 0x18) {
          iVar23 = CapcomMath::random(7);
          this_15 = *(CharacterData **)((iVar23 + 0x1b0) * 4 + iVar28);
          goto LAB_00183358;
        }
        if (0x18 < iVar23) {
          if (iVar23 < 0x76) {
            if ((0x39 < iVar23) || (iVar35 = DAT_00183348, iVar23 < 0x39)) goto LAB_00183238;
          }
          else {
            if (iVar23 != 0x76) goto LAB_00183238;
            iVar35 = DAT_00183310;
            if ((*(int *)(this + 0x48) != 4) && (*(int *)(this + 0x48) != 3)) {
              iVar35 = DAT_00183314;
            }
          }
          goto LAB_00183356;
        }
        if (iVar23 == 4) {
          iVar23 = 0xf5;
        }
        else if (iVar23 < 5) {
          if (iVar23 == 2) {
            iVar23 = 0xd9;
          }
          else if (iVar23 < 3) {
            if (iVar23 != 1) goto LAB_0018334e;
            iVar23 = 0x89;
          }
          else {
            iVar23 = 0xe0;
          }
        }
        else {
          iVar35 = DAT_00183304;
          if (iVar23 == 6) goto LAB_00183356;
          if (6 < iVar23) goto LAB_00183238;
          iVar23 = 0xfc;
        }
LAB_00183354:
        iVar35 = iVar23 << 2;
      }
      else {
        if (iVar23 < 0x8e) {
          if (iVar23 < 0x89) {
            if (0x86 < iVar23) {
              if (iVar23 == 0x87) {
                iVar35 = DAT_00183324;
                if ((*(int *)(this + 0x48) != 4) &&
                   (iVar35 = DAT_00183328, *(int *)(this + 0x48) == 3)) {
                  iVar35 = 0xb1;
LAB_001832a0:
                  iVar35 = iVar35 << 5;
                }
              }
              else {
                if (iVar23 != 0x88) goto LAB_0018334e;
                if ((*(int *)(this + 0x48) == 4) ||
                   (iVar35 = DAT_0018332c, *(int *)(this + 0x48) == 3)) {
                  iVar35 = 0xb3;
                  goto LAB_001832a0;
                }
              }
              goto LAB_00183356;
            }
            if ((iVar23 < 0x84) && (0x82 < iVar23)) {
              iVar23 = *(int *)(this + 0x48);
              iVar35 = DAT_00183320;
              goto joined_r0x001832c8;
            }
          }
LAB_00183238:
          iVar35 = DAT_0018330c;
          if (this[0x15] == (GameStateRaid)0x0) {
LAB_0018334e:
            iVar23 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + iVar35);
          }
          else {
            iVar23 = *(int *)(*(int *)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183308) + 0xc);
          }
          goto LAB_00183354;
        }
        if (iVar23 < 0x95) {
          if ((0x90 < iVar23) || (iVar23 == 0x8f)) goto LAB_00183238;
          if (iVar23 < 0x90) {
            iVar35 = DAT_00183334;
            if (*(int *)(this + 0x48) - 3U < 2) {
              iVar35 = DAT_00183330;
            }
          }
          else {
            iVar35 = DAT_0018333c;
            if (*(int *)(this + 0x48) - 3U < 2) {
              iVar35 = DAT_00183338;
            }
          }
        }
        else {
          if (iVar23 != 0x95) {
            if (iVar23 < 0xac) goto LAB_00183238;
            goto LAB_0018334e;
          }
          iVar23 = *(int *)(this + 0x48);
          iVar35 = DAT_00183340;
joined_r0x001832c8:
          if ((iVar23 != 4) && (iVar23 != 3)) {
            iVar35 = DAT_00183344;
          }
        }
      }
LAB_00183356:
      this_15 = *(CharacterData **)(iVar35 + iVar28);
    }
  }
  else {
    iVar23 = 0;
    do {
      iVar28 = ZombieCafe::getWeekRaid_getHatoID
                         (*(ZombieCafe **)(this + 0xc),iVar23,*(int *)(this + 0x48) + -1);
      if (1 < iVar28 + 1U) break;
      iVar23 = iVar23 + 1;
      iVar28 = DAT_00183300;
    } while (iVar23 != 4);
    this_15 = *(CharacterData **)(iVar28 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001832f8));
  }
LAB_00183358:
  pCVar13 = (CharacterData *)CharacterData::copy(this_15);
  memcpy(pCVar13 + 0xaf0,this_15 + 0xaf0,0x18);
  setEnemyStatus(this,pCVar13,true);
  String::String((String *)(&stack0x00000064 + iVar5),(char *)(DAT_00183668 + 0x183380));
  pCVar14 = (Character *)operator_new(0x6c);
  *piVar36 = (int)(&stack0x00000064 + iVar5);
  Character::Character(pCVar14,pCVar13,0,0);
  String::~String((String *)(&stack0x00000064 + iVar5));
  uVar8 = *(undefined4 *)(*(int *)pCVar14 + DAT_0018366c);
  *(int *)(&stack0x00000008 + iVar5) = *(int *)pCVar14;
  uVar8 = __fixsfsi(uVar8);
  *(undefined4 *)(&stack0x00000014 + iVar5) = uVar8;
  iVar23 = __fixsfsi(*(undefined4 *)(pCVar14 + 0x40));
  if (*(int *)(&stack0x00000014 + iVar5) < iVar23) {
    iVar23 = *(int *)(&stack0x00000014 + iVar5);
  }
  uVar8 = __floatsisf(iVar23);
  iVar23 = DAT_00183670;
  iVar28 = *(int *)(&stack0x00000008 + iVar5);
  *(undefined4 *)(pCVar14 + 0x40) = uVar8;
  CharacterData::getRandomName
            ((CharacterData *)(&stack0x0000006c + iVar5),*(bool *)(iVar28 + iVar23),0);
  String::operator=((String *)(pCVar14 + 8),&stack0x0000006c + iVar5);
  String::~String((String *)(&stack0x0000006c + iVar5));
  pCVar29 = *(CFPathFinder **)(*(int *)(this + 0x78) + 0x5c);
  pCVar15 = (CharacterInstance *)operator_new(0xdc);
  *(CharacterInstance **)(&stack0x00000008 + iVar5) = pCVar15;
  CharacterInstance::CharacterInstance(pCVar15,pCVar14,pCVar29);
  pGVar30 = this + 0xf8;
  *(undefined4 *)pGVar30 = *(undefined4 *)(&stack0x00000008 + iVar5);
  *(short *)(*(int *)(&stack0x00000008 + iVar5) + 0x2c) = (short)*(undefined4 *)(this + 0x44);
  piVar34 = *(int **)pGVar30;
  pCVar16 = *(Cafe **)(this + 0x78);
  iVar23 = *piVar34;
  *(int **)(&stack0x00000008 + iVar5) = piVar34;
  *(undefined4 *)(&stack0x00000014 + iVar5) = *(undefined4 *)(iVar23 + 0xc);
  uVar8 = Cafe::indexToWorldCoordsCenter(pCVar16,(int)(short)piVar34[0xb]);
  (**(code **)(&stack0x00000014 + iVar5))(*(undefined4 *)(&stack0x00000008 + iVar5),uVar8);
  *(undefined1 *)(*(int *)pGVar30 + 0x84) = 1;
  if (this[0x13] != (GameStateRaid)0x0) {
    puVar26 = *(undefined4 **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183674);
    *(undefined4 *)(&stack0x00000014 + iVar5) = *(undefined4 *)pGVar30;
    uVar8 = *puVar26;
    *(undefined4 *)(&stack0x00000008 + iVar5) = uVar8;
    uVar8 = __mulsf3(uVar8,DAT_00183678);
    __divsi3(*(byte *)(*(int *)(this + 0xc) + 0x48) + 1,5);
    uVar17 = __floatsisf();
    uVar8 = __mulsf3(uVar8,uVar17);
    fVar45 = (float)__addsf3(*(undefined4 *)(&stack0x00000008 + iVar5),uVar8);
    CharacterInstance::setScale(*(CharacterInstance **)(&stack0x00000014 + iVar5),fVar45);
  }
  Cafe::addCafeObject(*(Cafe **)(this + 0x78),*(CafeObject **)(this + 0xf8));
  iVar23 = __aeabi_fcmpgt(*(undefined4 *)(pCVar14 + 0x40),0);
  if (iVar23 != 0) {
    addDefenderTotalHp(extraout_s0);
  }
  if (*(int *)(this + 0x24) == 0x18) {
    uVar3 = *(ushort *)(*(int *)pCVar14 + DAT_0018367c);
    uVar12 = 0x1b0;
    iVar23 = 0;
    do {
      if (uVar12 != uVar3) {
        *(uint *)(&stack0x000000a0 + iVar23 * 4 + iVar5) = uVar12;
        iVar23 = iVar23 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != DAT_00183680);
    iVar23 = 0x1e;
    do {
      iVar28 = CapcomMath::random(6);
      iVar35 = CapcomMath::random(6);
      uVar8 = *(undefined4 *)(&stack0x000000a0 + iVar28 * 4 + iVar5);
      iVar23 = iVar23 + -1;
      *(undefined4 *)(&stack0x000000a0 + iVar28 * 4 + iVar5) =
           *(undefined4 *)(&stack0x000000a0 + iVar35 * 4 + iVar5);
      *(undefined4 *)(&stack0x000000a0 + iVar35 * 4 + iVar5) = uVar8;
    } while (iVar23 != 0);
    uVar12 = *(uint *)(*(int *)(this + 0xc) + 0x680);
    *(undefined4 *)(&stack0x00000008 + iVar5) = 6;
    if ((((int)uVar12 < 0x28) && (*(undefined4 *)(&stack0x00000008 + iVar5) = 5, (int)uVar12 < 0x1e)
        ) && (*(undefined4 *)(&stack0x00000008 + iVar5) = 4, (int)uVar12 < 0x14)) {
      *(uint *)(&stack0x00000008 + iVar5) = 3 - ((uint)(uVar12 < 10) - ((int)uVar12 >> 0x1f));
    }
  }
  else if (this[0x15] == (GameStateRaid)0x0) {
    GVar2 = this[0x16];
    *(undefined4 *)(&stack0x00000008 + iVar5) = 6;
    if (GVar2 == (GameStateRaid)0x0) {
      iVar23 = *(int *)((*(int *)(this + 0x54) + -1) * 4 +
                       **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183684));
      GVar2 = this[0x13];
      *(int *)(&stack0x00000008 + iVar5) = iVar23;
      if ((GVar2 != (GameStateRaid)0x0) && (6 < iVar23)) goto LAB_00183554;
    }
  }
  else {
    iVar23 = *(int *)(this + 0x48);
    *(undefined4 *)(&stack0x00000008 + iVar5) = 5;
    if ((iVar23 != 2) &&
       ((*(undefined4 *)(&stack0x00000008 + iVar5) = 6, iVar23 != 3 &&
        (*(undefined4 *)(&stack0x00000008 + iVar5) = 4, iVar23 == 4)))) {
LAB_00183554:
      *(undefined4 *)(&stack0x00000008 + iVar5) = 6;
    }
  }
  *(undefined4 *)(&stack0x00000014 + iVar5) = 0;
  if (*(int *)(&stack0x00000008 + iVar5) <= *(int *)(&stack0x00000014 + iVar5)) {
    Cafe::populateWithCustomers(*(Cafe **)(this + 0x78),this);
    piVar34 = *(int **)(&stack0x00000010 + iVar5);
    if (piVar34 != (int *)0x0) {
      (**(code **)(*piVar34 + 4))(piVar34);
    }
    piVar34 = *(int **)(&stack0x00000018 + iVar5);
    if (piVar34 != (int *)0x0) {
      (**(code **)(*piVar34 + 0xc))(piVar34);
      (**(code **)(*piVar34 + 4))(*(undefined4 *)(&stack0x00000018 + iVar5));
    }
    *(undefined4 *)(this + 0x94) = 0;
    iVar28 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183d38);
    iVar23 = SmDev();
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(iVar23 * 4 + iVar28);
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    this[0x130] = (GameStateRaid)0x0;
    this[0x15c] = (GameStateRaid)0x0;
    this_04 = (ScreenElement *)operator_new(0x60);
    ScreenElement::ScreenElement(this_04,(ScreenElement *)0x0);
    *(ScreenElement **)(this + 0x134) = this_04;
    this_05 = (NoticeDialog *)operator_new(0x90);
    NoticeDialog::NoticeDialog
              (this_05,*(CImage **)(*(int *)(this + 0x80) + 0x14),
               *(CImage **)(*(int *)(this + 0x7c) + 0x28),extraout_s0_00);
    *(NoticeDialog **)(this + 0x30) = this_05;
    ScreenElement::setOrder((ScreenElement *)this_05,0x62);
    (**(code **)(**(int **)(this + 0x30) + 0x1c))(*(int **)(this + 0x30),0x12);
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x30));
    this_06 = (HudElement *)operator_new(0x16c);
    HudElement::HudElement
              (this_06,*(_func_bool_void_ptr_int **)
                        (*(int *)(&stack0x0000000c + iVar5) + DAT_00183d3c),this,false);
    *(HudElement **)(this + 0x138) = this_06;
    HudElement::setButtonAvailability((int)this_06,false);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    iVar23 = DAT_00183d40;
    iVar28 = *(int *)(this + 0xc);
    if (((*(char *)(iVar28 + DAT_00183d40) == '\0') || (*(char *)(iVar28 + 0x9e0) != '\0')) &&
       ((*(char *)(iVar28 + DAT_00183d44) == '\0' || (*(char *)(iVar28 + DAT_00183d48) != '\0')))) {
      iVar28 = *(int *)(this + 0x138);
    }
    else {
      iVar28 = *(int *)(this + 0x138);
    }
    HudElement::setButtonAvailability(iVar28,true);
    iVar28 = DAT_00183d4c;
    iVar35 = *(int *)(this + 0xc);
    if (((*(char *)(iVar35 + DAT_00183d4c) == '\0') || (*(char *)(iVar35 + DAT_00183d50) != '\0'))
       && ((*(char *)(iVar35 + DAT_00183d54) == '\0' || (*(char *)(iVar35 + DAT_00183d58) != '\0')))
       ) {
      iVar35 = *(int *)(this + 0x138);
    }
    else {
      iVar35 = *(int *)(this + 0x138);
    }
    HudElement::setButtonAvailability(iVar35,true);
    if ((*(char *)(*(int *)(this + 0xc) + DAT_00183d5c) == '\0') ||
       (*(char *)(*(int *)(this + 0xc) + DAT_00183d60) != '\0')) {
      iVar35 = *(int *)(this + 0x138);
    }
    else {
      iVar35 = *(int *)(this + 0x138);
    }
    HudElement::setButtonAvailability(iVar35,true);
    iVar35 = *(int *)(this + 0xc);
    if (((((*(char *)(iVar35 + iVar23) == '\0') || (*(char *)(iVar35 + 0x9e0) != '\0')) &&
         ((*(char *)(iVar35 + DAT_00183d44) == '\0' || (*(char *)(iVar35 + DAT_00183d48) != '\0'))))
        && ((*(char *)(iVar35 + iVar28) == '\0' || (*(char *)(iVar35 + DAT_00183d50) != '\0')))) &&
       ((*(char *)(iVar35 + DAT_00183d54) == '\0' || (*(char *)(iVar35 + DAT_00183d58) != '\0')))) {
      iVar23 = *(int *)(this + 0x138);
    }
    else {
      iVar23 = *(int *)(this + 0x138);
    }
    HudElement::setButtonAvailability(iVar23,true);
    iVar23 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_001840f8),'&');
    if (iVar23 != 0) {
      HudElement::setButtonAvailability(*(int *)(this + 0x138),true);
    }
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x138));
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x138),
               (int)**(char **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001840fc));
    HudElement::invisibleAddToxinButton(*(HudElement **)(this + 0x138));
    pCVar18 = (ConfirmDialog *)operator_new(0x9c);
    pCVar22 = *(CImage **)(*(int *)(this + 0x80) + 0x14);
    pCVar24 = *(CImage **)(*(int *)(this + 0x7c) + 0x28);
    pCVar27 = *(CImage **)(*(int *)(this + 0x7c) + 0x44);
    *puVar38 = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar5) = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar5) = 0x40000000;
    ConfirmDialog::ConfirmDialog
              (pCVar18,pCVar22,pCVar24,pCVar27,*piVar39,extraout_s0_01,
               *(CImage **)(&stack0xfffffff0 + iVar5));
    *(ConfirmDialog **)(this + 0x164) = pCVar18;
    ScreenElement::setOrder((ScreenElement *)pCVar18,99);
    (**(code **)(**(int **)(this + 0x164) + 0x1c))(*(int **)(this + 0x164),0x12);
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x164));
    this_07 = (CharacterDetails *)operator_new(0x194);
    iVar23 = *(int *)(this + 0xc);
    pCVar18 = *(ConfirmDialog **)(this + 0x164);
    *(undefined4 *)(&stack0xfffffff4 + iVar5) = 2;
    *puVar40 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar5) = 0;
    *(undefined4 *)(&stack0xfffffff8 + iVar5) = 0;
    CharacterDetails::CharacterDetails
              (this_07,(Vector *)(iVar23 + DAT_00184100),false,pCVar18,(NoticeDialog *)*puVar41,
               *(GameStateCafe **)(&stack0xfffffff0 + iVar5),(&stack0xfffffff4)[iVar5],
               (bool)(&stack0xfffffff8)[iVar5]);
    *(CharacterDetails **)(this + 0x140) = this_07;
    (**(code **)(*(int *)this_07 + 0x1c))(this_07,0x12);
    iVar23 = *(int *)(*(int *)(this + 0xc) + 0x10);
    (**(code **)(**(int **)(this + 0x140) + 0x14))
              (*(int **)(this + 0x140),(iVar23 >> 0x10) - (iVar23 >> 0x1f) >> 1,
               (int)(short)iVar23 / 2);
    (**(code **)(**(int **)(this + 0x140) + 0x20))(*(int **)(this + 0x140),0);
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x140),
               (int)**(char **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00184104));
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x140));
    this_08 = (ObjectiveCompleteDialog *)operator_new(0xb4);
    ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_08);
    *(ObjectiveCompleteDialog **)(this + 0x16c) = this_08;
    (**(code **)(*(int *)this_08 + 0x1c))(this_08,0x12);
    (**(code **)(**(int **)(this + 0x16c) + 0x14))
              (*(int **)(this + 0x16c),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
               (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x16c),
               (int)**(char **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00184108));
    (**(code **)(**(int **)(this + 0x16c) + 0x20))(*(int **)(this + 0x16c),0);
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x16c));
    this_09 = (ObjectiveDialog *)operator_new(0x16c);
    ObjectiveDialog::ObjectiveDialog
              (this_09,*(ConfirmDialog **)(this + 0x164),*(ObjectiveCompleteDialog **)(this + 0x16c)
               ,*(BuyToxinDialog **)(this + 0x168));
    *(ObjectiveDialog **)(this + 0x170) = this_09;
    (**(code **)(*(int *)this_09 + 0x1c))(this_09,0x12);
    (**(code **)(**(int **)(this + 0x170) + 0x14))
              (*(int **)(this + 0x170),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
               (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x170),
               (int)**(char **)(*(int *)(&stack0x0000000c + iVar5) + DAT_0018410c));
    (**(code **)(**(int **)(this + 0x170) + 0x20))(*(int **)(this + 0x170),0);
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x170));
    this_10 = (MessageElement *)operator_new(0x90);
    MessageElement::MessageElement(this_10,*(CImage ***)(this + 0x7c),'\f');
    *(MessageElement **)(this + 0x14c) = this_10;
    ScreenElement::setOrder((ScreenElement *)this_10,100);
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x14c));
    this_11 = (BuyToxinDialog *)operator_new(0xe4);
    BuyToxinDialog::BuyToxinDialog(this_11);
    iVar23 = DAT_00184110;
    iVar28 = *(int *)(&stack0x0000000c + iVar5);
    *(BuyToxinDialog **)(this + 0x168) = this_11;
    ScreenElement::setOrder((ScreenElement *)this_11,(int)**(char **)(iVar28 + iVar23));
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x168));
    (**(code **)(**(int **)(this + 0x168) + 0x1c))(*(int **)(this + 0x168),0x12);
    (**(code **)(**(int **)(this + 0x168) + 0x20))(*(int **)(this + 0x168),0);
    this_12 = (CharacterCommandBar *)operator_new(0xd8);
    CharacterCommandBar::CharacterCommandBar
              (this_12,*(ConfirmDialog **)(this + 0x164),*(BuyToxinDialog **)(this + 0x168));
    iVar23 = DAT_00184114;
    iVar28 = *(int *)(&stack0x0000000c + iVar5);
    *(CharacterCommandBar **)(this + 0x13c) = this_12;
    CharacterCommandBar::addInfoButton
              (this_12,*(_func_void_void_ptr_ScreenElement_ptr **)(iVar28 + iVar23),this);
    uVar8 = CharacterCommandBar::addAttackButton(*(CharacterCommandBar **)(this + 0x13c));
    iVar23 = DAT_00184118;
    iVar28 = *(int *)(&stack0x0000000c + iVar5);
    *(undefined4 *)(this + 0x154) = uVar8;
    uVar8 = CharacterCommandBar::addHealButton
                      (*(CharacterCommandBar **)(this + 0x13c),
                       *(_func_void_void_ptr_ScreenElement_ptr **)(iVar28 + iVar23),this);
    *(undefined4 *)(this + 0x144) = uVar8;
    CharacterCommandBar::layout(*(CharacterCommandBar **)(this + 0x13c));
    (**(code **)(**(int **)(this + 0x13c) + 0x1c))(*(int **)(this + 0x13c),0x11);
    iVar23 = *(int *)(*(int *)(this + 0xc) + 0x10);
    (**(code **)(**(int **)(this + 0x13c) + 0x14))
              (*(int **)(this + 0x13c),(iVar23 >> 0x10) - (iVar23 >> 0x1f) >> 1,(int)(short)iVar23);
    iVar23 = 0;
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x13c),
               (int)**(char **)(*(int *)(&stack0x0000000c + iVar5) + DAT_0018411c));
    (**(code **)(**(int **)(this + 0x134) + 0x2c))
              (*(int **)(this + 0x134),*(undefined4 *)(this + 0x13c));
    *(GameStateRaid **)(&stack0x00000008 + iVar5) = this + 0xac;
    while( true ) {
      iVar35 = *(int *)(this + 0xc);
      iVar28 = iVar35 + DAT_00184100;
      if (*(int *)(iVar28 + 4) + 1 <= iVar23) break;
      pCVar14 = *(Character **)(iVar23 * 4 + *(int *)(iVar28 + 8));
      if (pCVar14[0x44] != (Character)0x6) {
        *(undefined4 *)(&stack0x00000010 + iVar5) = *(undefined4 *)(*(int *)(this + 0x78) + 0x5c);
        pCVar15 = (CharacterInstance *)operator_new(0xdc);
        CharacterInstance::CharacterInstance
                  (pCVar15,pCVar14,*(CFPathFinder **)(&stack0x00000010 + iVar5));
        Vector<CharacterInstance*>::addElement
                  (*(Vector<CharacterInstance*> **)(&stack0x00000008 + iVar5),pCVar15);
        uVar12 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00184124) - 5;
        lVar19 = Cafe::diamondToStaggeredCoords
                           ((int)(uVar12 & 0xffff |
                                 ((**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00184120) +
                                  -4) - iVar23) * 0x10000) >> 0x10,(int)(short)uVar12);
        sVar7 = Cafe::staggeredCoordsToIndex(lVar19);
        *(short *)(pCVar15 + 0x2c) = sVar7;
        pcVar31 = *(code **)(*(int *)pCVar15 + 0xc);
        uVar8 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)sVar7);
        (*pcVar31)(pCVar15,uVar8);
        CharacterInstance::setCurrentAnimation(pCVar15,'\x01','\0',false);
        Cafe::addCafeObject(*(Cafe **)(this + 0x78),(CafeObject *)pCVar15);
        pCVar15[0x84] = (CharacterInstance)0x1;
        *(undefined1 *)(*(int *)(pCVar15 + 0x8c) + 0x44) = 0;
        iVar28 = *(int *)(pCVar15 + 0x8c);
        *(int *)(iVar28 + 0x18) = *(int *)(iVar28 + 0x18) + 1;
      }
      iVar23 = iVar23 + 1;
    }
    *(undefined4 *)(this + 0x114) = 0;
    if (*(int *)(this + 0xb0) < 0) {
      *(undefined4 *)(this + 0x94) = 0;
    }
    else {
      uVar8 = __floatsisf((int)*(short *)(**(int **)(this + 0xb4) + 6));
      uVar8 = __mulsf3(uVar8,*(undefined4 *)(this + 0x98));
      __divsi3((int)*(short *)(iVar35 + 0x12),3);
      uVar17 = __floatsisf();
      iVar23 = __subsf3(uVar8,uVar17);
      iVar23 = __fixsfsi(iVar23 + -0x80000000);
      *(int *)(this + 0x94) = iVar23 << 0x10;
    }
    piVar34 = *(int **)(this + 0x134);
    pcVar31 = *(code **)(*piVar34 + 0x2c);
    this_13 = (TutorialArrow *)operator_new(0x7c);
    *(TutorialArrow **)(&stack0x00000010 + iVar5) = this_13;
    TutorialArrow::TutorialArrow(this_13);
    uVar8 = *(undefined4 *)(&stack0x00000010 + iVar5);
    *(undefined4 *)(this + 0x150) = *(undefined4 *)(&stack0x00000010 + iVar5);
    (*pcVar31)(piVar34,uVar8);
    iVar23 = DAT_00184464;
    ScreenElement::setOrder
              (*(ScreenElement **)(this + 0x150),
               (int)**(char **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00184460));
    iVar28 = *(int *)(*(int *)(this + 0xc) + iVar23);
    uVar8 = *(undefined4 *)(this + 0x150);
    iVar35 = *(int *)(&stack0x0000000c + iVar5);
    *(undefined4 *)(iVar28 + DAT_00184468) = *(undefined4 *)(this + 0x14c);
    *(undefined4 *)(iVar28 + 0x788) = uVar8;
    *(undefined4 *)(iVar28 + 0x778) = *(undefined4 *)(iVar35 + DAT_0018446c);
    *(GameStateRaid **)(iVar28 + DAT_00184470) = this;
    iVar28 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar23),'&');
    uVar21 = '\x1f';
    if (iVar28 != 0) {
      uVar21 = 'B';
      iVar28 = 0;
    }
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar23),uVar21,SUB41(iVar28,0));
    piVar34 = *(int **)(this + 0x134);
    pcVar31 = *(code **)(*piVar34 + 0x2c);
    this_14 = (ImageElement *)operator_new(0x98);
    pCVar22 = *(CImage **)(*(int *)(this + 0x80) + 0x14);
    *puVar42 = 0x12;
    *(undefined4 *)(&stack0xfffffff0 + iVar5) = 1;
    ImageElement::ImageElement(this_14,pCVar22,extraout_s0_02,extraout_s1,'\0',false);
    *(ImageElement **)(this + 0x18) = this_14;
    (*pcVar31)(piVar34,this_14);
    (**(code **)(**(int **)(this + 0x18) + 0x20))(*(int **)(this + 0x18),0);
    piVar34 = *(int **)(this + 0x18);
    *(undefined4 *)(&stack0x00000010 + iVar5) = *(undefined4 *)(*piVar34 + 0x2c);
    String::String((String *)(&stack0x00000084 + iVar5),(char *)(DAT_00184474 + 0x1841e4));
    iVar28 = *(int *)(this + 0xc);
    iVar23 = SmDev();
    uVar8 = *(undefined4 *)((*(int *)(DAT_00184478 + iVar23 * 4 + 0x184238) + 0x136) * 4 + iVar28);
    pBVar20 = (BitmapTextElement *)operator_new(0xc0);
    *puVar43 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar5) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar5) = 0x12;
    *(undefined4 *)(&stack0xfffffff8 + iVar5) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar5) = 0;
    BitmapTextElement::BitmapTextElement(pBVar20,&stack0x00000084 + iVar5,uVar8,0xffffff92);
    *(BitmapTextElement **)(this + 0x1c) = pBVar20;
    (**(code **)(&stack0x00000010 + iVar5))(piVar34,pBVar20);
    String::~String((String *)(&stack0x00000084 + iVar5));
    piVar34 = *(int **)(this + 0x18);
    *(undefined4 *)(&stack0x00000010 + iVar5) = *(undefined4 *)(*piVar34 + 0x2c);
    String::String((String *)(&stack0x0000008c + iVar5),(char *)(DAT_0018447c + 0x184242));
    iVar28 = *(int *)(this + 0xc);
    iVar23 = SmDev();
    uVar8 = *(undefined4 *)((*(int *)(DAT_00184480 + iVar23 * 4 + 0x184296) + 0x136) * 4 + iVar28);
    pBVar20 = (BitmapTextElement *)operator_new(0xc0);
    *puVar44 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar5) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar5) = 0x12;
    *(undefined4 *)(&stack0xfffffff8 + iVar5) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar5) = 0;
    BitmapTextElement::BitmapTextElement(pBVar20,&stack0x0000008c + iVar5,uVar8,0xffffffff);
    *(BitmapTextElement **)(this + 0x20) = pBVar20;
    (**(code **)(&stack0x00000010 + iVar5))(piVar34,pBVar20);
    String::~String((String *)(&stack0x0000008c + iVar5));
    (**(code **)(**(int **)(this + 0x1c) + 0x20))(*(int **)(this + 0x1c),0);
    (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
    this[DAT_00184484] = (GameStateRaid)0x0;
    this[0x15e] = (GameStateRaid)0x0;
    this[0x38] = (GameStateRaid)0x0;
    *(undefined4 *)(this + 0x74) = 0;
    saveData(this);
    uVar8 = CCSecondsSince1970();
    *(undefined4 *)(this + 0x178) = uVar8;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    if (*(int *)(&stack0x000003b8 + iVar5) !=
        **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00184488)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(1);
    }
    return;
  }
  iVar28 = *(int *)(*(int *)(this + 0xc) + DAT_00183688);
  bVar1 = **(byte **)(&stack0x00000020 + iVar5);
  iVar23 = CapcomMath::random(9);
  pCVar13 = (CharacterData *)
            CharacterData::copy(*(CharacterData **)((bVar1 + 1 + iVar23) * 4 + iVar28));
  if (this[0x16] == (GameStateRaid)0x0) {
    if ((((this[0x12] == (GameStateRaid)0x0) && (this[0x13] == (GameStateRaid)0x0)) &&
        (this[0x14] == (GameStateRaid)0x0)) && (this[0x15] == (GameStateRaid)0x0))
    goto LAB_00183742;
    iVar23 = CapcomMath::random(5);
    iVar28 = *(int *)(this + 0x24);
    if (iVar28 == 0x76) {
      if ((1 < *(int *)(this + 0x48) - 3U) || (iVar35 = DAT_00183a08, iVar23 < 2))
      goto LAB_0018371c;
      goto LAB_00183732;
    }
    if (0x76 < iVar28) {
      if (iVar28 < 0x87) {
        if (iVar28 < 0x84) {
          if (iVar28 == 0x7b) goto LAB_0018371c;
          if ((0x7a < iVar28) && (iVar35 = DAT_00183a00, 0x82 < iVar28)) goto LAB_00183732;
        }
      }
      else if (iVar28 < 0x95) {
        if (iVar28 < 0x89) {
          if (iVar28 == 0x87) {
            iVar35 = DAT_00183a0c;
            if ((*(int *)(this + 0x48) == 4) && (1 < iVar23)) {
              iVar35 = 0x588;
            }
            goto LAB_00183732;
          }
          if (iVar28 != 0x88) goto LAB_00183700;
LAB_0018371c:
          iVar28 = 0x81;
LAB_0018371e:
          iVar35 = iVar28 << 1;
          goto LAB_00183732;
        }
      }
      else {
        if (iVar28 == 0x95) goto LAB_0018371c;
        if (0xab < iVar28) {
LAB_00183700:
          iVar28 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001839fc);
          iVar23 = CapcomMath::random(4);
          iVar35 = iVar28 + 1 + iVar23;
          goto LAB_00183732;
        }
      }
      goto LAB_001836aa;
    }
    if (iVar28 < 0x18) {
      if (6 < iVar28) goto LAB_001836aa;
      if (iVar28 == 3) {
        iVar28 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183690);
        iVar23 = CapcomMath::random(**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183694) +
                                    -1);
        iVar35 = *(int *)(iVar23 * 4 + iVar28);
      }
      else if (iVar28 < 4) {
        if (iVar28 == 1) {
          iVar35 = 0x8c - (uint)(iVar23 != 0);
        }
        else {
          if (iVar28 != 2) goto LAB_00183700;
          iVar35 = 0xdb - (uint)(iVar23 == 0);
        }
      }
      else if (iVar28 == 5) {
        iVar35 = 0xf7;
        if (iVar23 < 2) {
          iVar35 = 0xfa;
        }
      }
      else if (iVar28 < 6) {
        iVar35 = 0xf0;
        if (iVar23 < 2) {
          iVar35 = 0xf1;
        }
      }
      else {
        iVar28 = 0x96;
        iVar35 = DAT_00183a04;
        if (iVar23 < 2) goto LAB_0018371e;
      }
    }
    else if (iVar28 < 0x39) {
      if (iVar28 < 0x19) {
        iVar35 = *(int *)(&stack0x000000a0 + *(int *)(&stack0x00000014 + iVar5) * 4 + iVar5);
      }
      else {
LAB_001836aa:
        if (this[0x15] == (GameStateRaid)0x0) {
          if (iVar23 < 2) {
            iVar35 = **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001839f4);
          }
          else {
            iVar35 = (*(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_001839f4))[1];
          }
        }
        else if (iVar23 < 2) {
          iVar35 = *(int *)(*(int *)(*(int *)(&stack0x0000000c + iVar5) + DAT_001839f0) + 0x10);
        }
        else {
          iVar35 = *(int *)(*(int *)(*(int *)(&stack0x0000000c + iVar5) + DAT_001839f0) + 0x14);
        }
      }
    }
    else {
      if (iVar28 != 0x39) goto LAB_001836aa;
      iVar35 = DAT_00183a10;
      if (iVar23 < 2) {
        iVar35 = DAT_001839f8;
      }
    }
LAB_00183732:
    pCVar13 = *(CharacterData **)(iVar35 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00183a14));
  }
  else {
    pCVar13 = *(CharacterData **)
               (((uint)((*(uint *)(&stack0x00000014 + iVar5) & 1) == 0) + DAT_0018368c) * 4 +
               *(int *)(*(int *)(this + 0xc) + DAT_00183688));
  }
  pCVar13 = (CharacterData *)CharacterData::copy(pCVar13);
LAB_00183742:
  setEnemyStatus(this,pCVar13,false);
  String::String((String *)(&stack0x00000074 + iVar5),(char *)(DAT_00183a18 + 0x183756));
  pCVar14 = (Character *)operator_new(0x6c);
  *(Character **)(&stack0x0000001c + iVar5) = pCVar14;
  *puVar37 = (String *)(&stack0x00000074 + iVar5);
  Character::Character(pCVar14,pCVar13,3,0);
  pCVar29 = *(CFPathFinder **)(*(int *)(this + 0x78) + 0x5c);
  pCVar15 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar15,*(Character **)(&stack0x0000001c + iVar5),pCVar29);
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0xc4),pCVar15);
  String::~String((String *)(&stack0x00000074 + iVar5));
  piVar34 = *(int **)(pCVar15 + 0x8c);
  *(int **)(&stack0x0000001c + iVar5) = piVar34;
  iVar28 = __fixsfsi(*(undefined4 *)(*piVar34 + DAT_00183a1c));
  iVar23 = __fixsfsi(*(undefined4 *)(*(int *)(&stack0x0000001c + iVar5) + 0x40));
  if (iVar28 < iVar23) {
    iVar23 = iVar28;
  }
  uVar8 = __floatsisf(iVar23);
  *(undefined4 *)(*(int *)(&stack0x0000001c + iVar5) + 0x40) = uVar8;
  iVar23 = *(int *)(pCVar15 + 0x8c);
  CharacterData::getRandomName
            ((CharacterData *)(&stack0x0000007c + iVar5),(bool)this_15[DAT_00183a20],0);
  String::operator=((String *)(iVar23 + 8),&stack0x0000007c + iVar5);
  String::~String((String *)(&stack0x0000007c + iVar5));
  *(undefined2 *)(pCVar15 + 0x2c) = 0;
  do {
    iVar23 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar15 + 0x2c));
    if ((iVar23 != 0) &&
       (iVar23 = Cafe::getFurniture(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar15 + 0x2c)),
       iVar23 == 0)) {
      FUN_001843e0();
    }
    uVar6 = CapcomMath::random(**(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183a24) *
                               **(int **)(*(int *)(&stack0x0000000c + iVar5) + DAT_00183a28));
    *(undefined2 *)(pCVar15 + 0x2c) = uVar6;
  } while( true );
}


