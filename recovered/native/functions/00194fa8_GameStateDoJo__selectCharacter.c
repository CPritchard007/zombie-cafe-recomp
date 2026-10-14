/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00194fa8 GameStateDoJo::selectCharacter */

/* WARNING: Control flow encountered bad instruction data */
/* GameStateDoJo::selectCharacter(int, bool) */

void __thiscall GameStateDoJo::selectCharacter(GameStateDoJo *this,int param_1,bool param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  String *this_00;
  void *pvVar4;
  Vector<TrueTypeTextElement*> *this_01;
  undefined4 uVar5;
  TrueTypeTextElement *pTVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  code *pcVar12;
  Character *pCVar13;
  int in_r12;
  undefined4 *puVar14;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined4 in_cr15;
  float __x;
  float __x_00;
  float fVar19;
  undefined8 uVar20;
  undefined4 uStack_4;
  undefined4 *puVar15;
  
  iVar8 = iRam00195208;
  pcVar12 = (code *)(uint)param_2;
  puVar18 = &stack0xffffffec + iRam00195208;
  puVar17 = (undefined4 *)(&stack0xffffffec + iRam00195208);
  puVar16 = (undefined4 *)(&stack0xffffffec + iRam00195208);
  puVar14 = (undefined4 *)(&stack0xffffffec + iRam00195208);
  puVar15 = (undefined4 *)(&stack0xffffffec + iRam00195208);
  *(int *)(&stack0x0000000c + iRam00195208) = param_1;
  iVar10 = iRam0019520c + 0x194fb8;
  puVar9 = *(undefined4 **)(iVar10 + iRam00195210);
  *(undefined4 *)(&stack0x00000218 + iRam00195208) = *puVar9;
  unSelectCharacter(SUB41(this,0));
  *(undefined4 **)(&stack0x00000024 + iVar8) = puVar9;
  iVar7 = *(int *)(&stack0x0000000c + iVar8);
  if (pcVar12 != (code *)0x0) {
    iVar7 = *(int *)(this + (iVar7 + 0x186) * 4);
    *(int *)(this + 0x2c) = iVar7;
    if (iVar7 == 0) goto LAB_001951f4;
    iVar7 = *(int *)(&stack0x0000000c + iVar8);
    *(int *)(this + 0x28) = iVar7;
    String::String((String *)(&stack0x00000050 + iVar8),
                   (String *)
                   (DAT_00195214 + 0x19501a + (uint)(byte)this[(iVar7 + 0x348) * 2 + 4] * 0x24));
    piVar3 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x00000010 + iVar8) = *(undefined4 *)(*piVar3 + 0x2c);
    String::String((String *)(&stack0x00000030 + iVar8),(String *)(&stack0x00000050 + iVar8));
    iVar7 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar8) = *(undefined4 *)(DAT_00195218 + iVar7 * 4 + 0x19503e)
    ;
    iVar7 = SmDev();
    uVar2 = *(undefined4 *)(iVar7 * 4 + *(int *)(iVar10 + DAT_0019521c));
    *(int *)(&stack0x0000001c + iVar8) = *(int *)(iVar10 + DAT_0019521c);
    *(undefined4 *)(&stack0x00000018 + iVar8) = uVar2;
    pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
    uVar2 = *(undefined4 *)(&stack0x00000018 + iVar8);
    *puVar14 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar8) = 1;
    *(undefined4 *)(&stack0xfffffff8 + iVar8) = uVar2;
    *(undefined4 *)(&stack0xfffffff4 + iVar8) = 0;
    *(undefined4 *)((int)&uStack_4 + iVar8) = 0;
    *(undefined4 *)(&stack0x00000000 + iVar8) = 0x11;
    *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar6,&stack0x00000030 + iVar8,*(undefined4 *)(this + 0x1c),
               *(undefined4 *)(&stack0x00000014 + iVar8));
    *(TrueTypeTextElement **)(this + 100) = pTVar6;
    (**(code **)(&stack0x00000010 + iVar8))(piVar3,pTVar6);
    String::~String((String *)(&stack0x00000030 + iVar8));
    piVar11 = *(int **)(iVar10 + DAT_00195220);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 100));
    L_PrintLog((char *)(DAT_00195224 + 0x19507e),(char *)(DAT_00195228 + 0x195080));
    sprintf(&stack0x00000118 + iVar8,(char *)(DAT_0019522c + 0x19508e),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(DAT_00195230 + 0x19509a),&stack0x00000118 + iVar8);
    piVar3 = *(int **)(this + 100);
    *(undefined4 *)(&stack0x00000010 + iVar8) = *(undefined4 *)(*piVar3 + 0x14);
    iVar7 = SmDev();
    uVar2 = *(undefined4 *)(DAT_00195234 + iVar7 * 4 + 0x195128);
    iVar7 = SmDev();
    (**(code **)(&stack0x00000010 + iVar8))
              (piVar3,uVar2,*(undefined4 *)(DAT_00195238 + iVar7 * 4 + 0x1950d0));
    String::String((String *)(&stack0x00000070 + iVar8),
                   (String *)
                   (DAT_0019523c +
                    (uint)(byte)this[(*(int *)(&stack0x0000000c + iVar8) + 0x348) * 2 + 4] * 0x24 +
                   0x195108));
    String::String((String *)(&stack0x00000080 + iVar8),(char *)(DAT_00195240 + 0x1950f0));
    iVar7 = SmDev();
    MultiByteString::insertStringNextLine
              ((String *)(&stack0x00000080 + iVar8),(String *)(&stack0x00000070 + iVar8),
               *(int *)(DAT_00195244 + iVar7 * 4 + 0x195158));
    piVar3 = *(int **)(this + 0x14);
    *(undefined4 *)(&stack0x0000000c + iVar8) = *(undefined4 *)(*piVar3 + 0x2c);
    String::String((String *)(&stack0x00000038 + iVar8),(String *)(&stack0x00000080 + iVar8));
    iVar7 = SmDev();
    *(undefined4 *)(&stack0x00000010 + iVar8) = *(undefined4 *)(DAT_00195248 + iVar7 * 4 + 0x195144)
    ;
    iVar7 = SmDev();
    *(undefined4 *)(&stack0x00000014 + iVar8) =
         *(undefined4 *)(*(int *)(&stack0x0000001c + iVar8) + iVar7 * 4);
    pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
    uVar2 = *(undefined4 *)(&stack0x00000014 + iVar8);
    *puVar15 = 1;
    *(undefined4 *)(&stack0xfffffff0 + iVar8) = 1;
    *(undefined4 *)(&stack0xfffffff4 + iVar8) = 0;
    *(undefined4 *)(&stack0xfffffff8 + iVar8) = uVar2;
    *(undefined4 *)((int)&uStack_4 + iVar8) = 0;
    *(undefined4 *)(&stack0x00000000 + iVar8) = 0x11;
    *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar6,&stack0x00000038 + iVar8,*(undefined4 *)(this + 0x1c),
               *(undefined4 *)(&stack0x00000010 + iVar8));
    *(TrueTypeTextElement **)(this + 0x68) = pTVar6;
    goto LAB_00195164;
  }
  while( true ) {
    iVar8 = *(int *)(this + (iVar7 + 0x38) * 4);
    *(int *)(this + 0x2c) = iVar8;
    puVar17 = puVar16;
    if (iVar8 != 0) {
      *(undefined4 *)(this + 0x28) = puVar16[8];
      String::String((String *)(puVar16 + 0x15),(String *)(*(int *)(iVar8 + 0x8c) + 8));
      piVar3 = *(int **)(this + 0x14);
      puVar16[8] = *(undefined4 *)(*piVar3 + 0x2c);
      String::String((String *)(puVar16 + 0x17),(String *)(puVar16 + 0x15));
      iVar8 = SmDev();
      puVar16[9] = *(undefined4 *)(DAT_001953a4 + iVar8 * 4 + 0x1952b0);
      iVar8 = SmDev();
      uVar2 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar10 + DAT_001953a8));
      puVar16[0xb] = *(int *)(iVar10 + DAT_001953a8);
      puVar16[10] = uVar2;
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[3] = puVar16[10];
      puVar16[4] = 0;
      puVar16[5] = 0x11;
      puVar16[6] = 0;
      TrueTypeTextElement::TrueTypeTextElement
                (pTVar6,puVar16 + 0x17,*(undefined4 *)(this + 0x1c),puVar16[9]);
      *(TrueTypeTextElement **)(this + 100) = pTVar6;
      (*(code *)puVar16[8])(piVar3,pTVar6);
      String::~String((String *)(puVar16 + 0x17));
      piVar3 = *(int **)(iVar10 + DAT_001953ac);
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 100));
      L_PrintLog((char *)(DAT_001953b0 + 0x1952f2),(char *)(DAT_001953b4 + 0x1952f4));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_001953b8 + 0x195302),*(int *)(*piVar3 + 4) + 1);
      L_PrintLog((char *)(DAT_001953bc + 0x19530e),(char *)(puVar16 + 0x4b));
      piVar11 = *(int **)(this + 100);
      puVar16[8] = *(undefined4 *)(*piVar11 + 0x14);
      iVar8 = SmDev();
      puVar16[9] = *(undefined4 *)(DAT_001953c0 + iVar8 * 4 + 0x19535c);
      iVar8 = SmDev();
      (*(code *)puVar16[8])(piVar11,puVar16[9],*(undefined4 *)(DAT_001953c4 + iVar8 * 4 + 0x195386))
      ;
      String::String((String *)(puVar16 + 0x19));
      iVar8 = **(int **)(*(int *)(this + 0x2c) + 0x8c);
      iVar7 = (int)*(short *)(iVar8 + DAT_001953cc);
      if (((**(int **)(iVar10 + DAT_001953c8) == iVar7) ||
          (**(int **)(iVar10 + DAT_001953d0) == iVar7)) ||
         ((*(int **)(iVar10 + DAT_001953d0))[1] == iVar7)) {
        String::String((String *)(puVar16 + 0x1b),(String *)(iVar8 + DAT_001953d4));
        String::operator=((String *)(puVar16 + 0x19),puVar16 + 0x1b);
        String::~String((String *)(puVar16 + 0x1b));
        Vector<String>::elementAt((int)(puVar16 + 0x1d));
        String::operator+=((String *)(puVar16 + 0x19),puVar16 + 0x1d);
        this_00 = (String *)(puVar16 + 0x1d);
      }
      else {
        String::String((String *)(puVar16 + 0x1f),(String *)(iVar8 + DAT_00195794));
        String::operator=((String *)(puVar16 + 0x19),puVar16 + 0x1f);
        this_00 = (String *)(puVar16 + 0x1f);
      }
      String::~String(this_00);
      String::String((String *)(puVar16 + 0x21),(char *)(DAT_00195798 + 0x1953fc));
      iVar8 = SmDev();
      MultiByteString::insertStringNextLine
                ((String *)(puVar16 + 0x21),(String *)(puVar16 + 0x19),
                 *(int *)(DAT_0019579c + iVar8 * 4 + 0x195464));
      piVar11 = *(int **)(this + 0x14);
      puVar16[9] = *(undefined4 *)(*piVar11 + 0x2c);
      String::String((String *)(puVar16 + 0x23),(String *)(puVar16 + 0x21));
      iVar8 = SmDev();
      puVar16[10] = *(undefined4 *)(DAT_001957a0 + iVar8 * 4 + 0x195450);
      iVar8 = SmDev();
      puVar16[0xb] = *(undefined4 *)(puVar16[0xb] + iVar8 * 4);
      pvVar4 = operator_new(0xe4);
      puVar16[8] = pvVar4;
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[3] = puVar16[0xb];
      puVar16[4] = 0;
      puVar16[5] = 0x11;
      puVar16[6] = 0;
      TrueTypeTextElement::TrueTypeTextElement
                ((TrueTypeTextElement *)puVar16[8],puVar16 + 0x23,*(undefined4 *)(this + 0x18),
                 puVar16[10]);
      pcVar12 = (code *)puVar16[9];
      *(undefined4 *)(this + 0x68) = puVar16[8];
      (*pcVar12)(piVar11);
      String::~String((String *)(puVar16 + 0x23));
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x68));
      L_PrintLog((char *)(DAT_001957a4 + 0x19548a),(char *)(DAT_001957a8 + 0x19548c));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_001957ac + 0x19549a),*(int *)(*piVar3 + 4) + 1);
      L_PrintLog((char *)(DAT_001957b0 + 0x1954a6),(char *)(puVar16 + 0x4b));
      piVar3 = *(int **)(this + 0x68);
      puVar16[8] = *(undefined4 *)(*piVar3 + 0x14);
      iVar8 = SmDev();
      uVar2 = *(undefined4 *)(DAT_001957b4 + iVar8 * 4 + 0x195524);
      iVar8 = SmDev();
      (*(code *)puVar16[8])(piVar3,uVar2,*(undefined4 *)(iVar8 * 4 + DAT_001957b8 + 0x1954cc));
      String::String((String *)(puVar16 + 0x25),
                     (String *)
                     (DAT_001957bc + 0x195500 +
                     (uint)*(byte *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 0x36) * 0x24));
      iVar8 = SmDev();
      piVar3 = *(int **)(this + 0x14);
      puVar16[9] = *(undefined4 *)(DAT_001957c0 + iVar8 * 4 + 0x19552c);
      puVar16[8] = *(undefined4 *)(*piVar3 + 0x2c);
      Vector<String>::elementAt((int)(puVar16 + 0x27));
      String::valueOf((int)(puVar16 + 0x29));
      String::operator+((String *)(puVar16 + 0x2b),puVar16 + 0x27,puVar16 + 0x29);
      iVar8 = SmDev();
      uVar2 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar10 + DAT_001957cc));
      puVar16[0xf] = *(int *)(iVar10 + DAT_001957cc);
      puVar16[10] = uVar2;
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[3] = puVar16[10];
      puVar16[4] = 0;
      puVar16[6] = 0;
      puVar16[5] = 9;
      TrueTypeTextElement::TrueTypeTextElement
                (pTVar6,puVar16 + 0x2b,*(undefined4 *)(this + 0x18),0xffffffff);
      *(TrueTypeTextElement **)(this + 0x70) = pTVar6;
      (*(code *)puVar16[8])(piVar3,pTVar6);
      String::~String((String *)(puVar16 + 0x2b));
      String::~String((String *)(puVar16 + 0x29));
      String::~String((String *)(puVar16 + 0x27));
      pTVar6 = *(TrueTypeTextElement **)(this + 0x70);
      this_01 = (Vector<TrueTypeTextElement*> *)**(undefined4 **)(iVar10 + DAT_001957d0);
      puVar16[8] = *(undefined4 **)(iVar10 + DAT_001957d0);
      Vector<TrueTypeTextElement*>::addElement(this_01,pTVar6);
      L_PrintLog((char *)(DAT_001957d4 + 0x1955b0),(char *)(DAT_001957d8 + 0x1955b2));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_001957dc + 0x1955c0),
              *(int *)(*(int *)puVar16[8] + 4) + 1);
      L_PrintLog((char *)(DAT_001957e0 + 0x1955ce),(char *)(puVar16 + 0x4b));
      piVar3 = *(int **)(this + 0x70);
      puVar16[10] = *(undefined4 *)(*piVar3 + 0x14);
      iVar8 = SmDev();
      uVar2 = __floatsisf(puVar16[9]);
      puVar16[9] = uVar2;
      iVar8 = DAT_001957e4 + iVar8 * 4;
      uVar2 = __fixsfsi();
      (*(code *)puVar16[10])(piVar3,*(undefined4 *)(iVar8 + 0x195606),uVar2);
      uVar2 = (**(code **)(**(int **)(this + 0x70) + 0x4c))();
      piVar3 = *(int **)(this + 0x14);
      puVar16[0xb] = uVar2;
      iVar8 = *piVar3;
      puVar16[10] = piVar3;
      puVar16[0xc] = *(undefined4 *)(iVar8 + 0x2c);
      Vector<String>::elementAt((int)(puVar16 + 0x2d));
      pCVar13 = *(Character **)(*(int *)(this + 0x2c) + 0x8c);
      sVar1 = *(short *)(*(int *)pCVar13 + DAT_001957ec);
      uVar2 = Character::getRareValue(pCVar13);
      puVar16[0xd] = uVar2;
      uVar2 = __floatsisf((int)sVar1);
      uVar2 = __mulsf3(uVar2,*(undefined4 *)
                              (DAT_001957f0 + puVar16[0xd] * 0xe10 + *(int *)(pCVar13 + 0x28) * 0xc
                              + 0x195664));
      roundf(__x);
      uVar5 = Character::getRareValue(pCVar13);
      puVar16[0xd] = uVar5;
      iVar8 = Character::getSameZombiePowerupNum(pCVar13);
      __fixsfsi(uVar2);
      __fixsfsi(*(undefined4 *)(DAT_001957f4 + iVar8 * 0xc + puVar16[0xd] * 0x3c + 0x19570c));
      String::valueOf((int)(puVar16 + 0x2f));
      String::operator+((String *)(puVar16 + 0x31),puVar16 + 0x2d,puVar16 + 0x2f);
      iVar8 = SmDev();
      uVar5 = *(undefined4 *)(puVar16[0xf] + iVar8 * 4);
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[4] = 0;
      puVar16[6] = 0;
      puVar16[5] = 9;
      uVar2 = *(undefined4 *)(this + 0x18);
      puVar16[3] = uVar5;
      TrueTypeTextElement::TrueTypeTextElement(pTVar6,puVar16 + 0x31,uVar2,0xffffffff);
      *(TrueTypeTextElement **)(this + 0x74) = pTVar6;
      (*(code *)puVar16[0xc])(puVar16[10],pTVar6);
      String::~String((String *)(puVar16 + 0x31));
      String::~String((String *)(puVar16 + 0x2f));
      String::~String((String *)(puVar16 + 0x2d));
      piVar3 = (int *)puVar16[8];
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x74));
      L_PrintLog((char *)(DAT_001957f8 + 0x195710),(char *)(DAT_001957fc + 0x195712));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_00195800 + 0x195720),*(int *)(*piVar3 + 4) + 1);
      L_PrintLog((char *)(DAT_00195804 + 0x19572c),(char *)(puVar16 + 0x4b));
      piVar3 = *(int **)(this + 0x74);
      puVar16[10] = *(undefined4 *)(*piVar3 + 0x14);
      iVar8 = SmDev();
      uVar2 = __floatsisf(puVar16[0xb]);
      uVar2 = __addsf3(puVar16[9],uVar2);
      puVar16[8] = uVar2;
      iVar8 = DAT_00195808 + iVar8 * 4;
      uVar2 = __fixsfsi();
      (*(code *)puVar16[10])(piVar3,*(undefined4 *)(iVar8 + 0x19576c),uVar2);
      uVar2 = (**(code **)(**(int **)(this + 0x74) + 0x4c))();
      piVar3 = *(int **)(this + 0x14);
      puVar16[10] = uVar2;
      iVar8 = *piVar3;
      puVar16[9] = piVar3;
      puVar16[0xb] = *(undefined4 *)(iVar8 + 0x2c);
      Vector<String>::elementAt((int)(puVar16 + 0x33));
      pCVar13 = *(Character **)(*(int *)(this + 0x2c) + 0x8c);
      sVar1 = *(short *)(*(int *)pCVar13 + DAT_00195bd4);
      uVar2 = Character::getRareValue(pCVar13);
      puVar16[0xc] = uVar2;
      uVar2 = __floatsisf((int)sVar1);
      uVar2 = __mulsf3(uVar2,*(undefined4 *)
                              (DAT_00195bd8 + puVar16[0xc] * 0xe10 + *(int *)(pCVar13 + 0x28) * 0xc
                              + 0x195844));
      roundf(__x_00);
      puVar16[0xc] = uVar2;
      iVar8 = Character::getRareValue(pCVar13);
      iVar7 = Character::getSameZombiePowerupNum(pCVar13);
      __addsf3(puVar16[0xc],*(undefined4 *)(DAT_00195bdc + iVar7 * 0xc + iVar8 * 0x3c + 0x1958e2));
      __fixsfsi();
      String::valueOf((int)(puVar16 + 0x35));
      String::operator+((String *)(puVar16 + 0x37),puVar16 + 0x33,puVar16 + 0x35);
      iVar8 = SmDev();
      uVar5 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar10 + DAT_00195be0));
      puVar16[0xd] = *(int *)(iVar10 + DAT_00195be0);
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[4] = 0;
      puVar16[6] = 0;
      puVar16[5] = 9;
      uVar2 = *(undefined4 *)(this + 0x18);
      puVar16[3] = uVar5;
      TrueTypeTextElement::TrueTypeTextElement(pTVar6,puVar16 + 0x37,uVar2,0xffffffff);
      *(TrueTypeTextElement **)(this + 0x78) = pTVar6;
      (*(code *)puVar16[0xb])(puVar16[9],pTVar6);
      String::~String((String *)(puVar16 + 0x37));
      String::~String((String *)(puVar16 + 0x35));
      String::~String((String *)(puVar16 + 0x33));
      piVar3 = *(int **)(iVar10 + DAT_00195be4);
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x78));
      L_PrintLog((char *)(DAT_00195be8 + 0x1958f2),(char *)(DAT_00195bec + 0x1958f4));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_00195bf0 + 0x195902),*(int *)(*piVar3 + 4) + 1);
      L_PrintLog((char *)(DAT_00195bf4 + 0x19590e),(char *)(puVar16 + 0x4b));
      piVar11 = *(int **)(this + 0x78);
      puVar16[0xb] = *(undefined4 *)(*piVar11 + 0x14);
      uVar2 = SmDev();
      puVar16[0xc] = uVar2;
      uVar2 = __floatsisf(puVar16[10]);
      uVar2 = __addsf3(puVar16[8],uVar2);
      puVar16[9] = uVar2;
      puVar16[8] = *(undefined4 *)(DAT_00195bf8 + puVar16[0xc] * 4 + 0x19594e);
      uVar2 = __fixsfsi(puVar16[9]);
      (*(code *)puVar16[0xb])(piVar11,puVar16[8],uVar2);
      uVar2 = (**(code **)(**(int **)(this + 0x78) + 0x4c))();
      piVar11 = *(int **)(this + 0x14);
      puVar16[10] = uVar2;
      puVar16[0xb] = *(undefined4 *)(*piVar11 + 0x2c);
      Vector<String>::elementAt((int)(puVar16 + 0x39));
      String::valueOf((int)(puVar16 + 0x3b));
      String::operator+((String *)(puVar16 + 0x3d),puVar16 + 0x39,puVar16 + 0x3b);
      iVar8 = SmDev();
      puVar16[0xc] = *(undefined4 *)(puVar16[0xd] + iVar8 * 4);
      pvVar4 = operator_new(0xe4);
      puVar16[8] = pvVar4;
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[4] = 0;
      puVar16[6] = 0;
      puVar16[3] = puVar16[0xc];
      puVar16[5] = 9;
      TrueTypeTextElement::TrueTypeTextElement
                ((TrueTypeTextElement *)puVar16[8],puVar16 + 0x3d,*(undefined4 *)(this + 0x18),
                 0xffffffff);
      pcVar12 = (code *)puVar16[0xb];
      *(undefined4 *)(this + 0x7c) = puVar16[8];
      (*pcVar12)(piVar11);
      String::~String((String *)(puVar16 + 0x3d));
      String::~String((String *)(puVar16 + 0x3b));
      String::~String((String *)(puVar16 + 0x39));
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x7c));
      L_PrintLog((char *)(DAT_00195c04 + 0x1959f2),(char *)(DAT_00195c08 + 0x1959f4));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_00195c0c + 0x195a02),*(int *)(*piVar3 + 4) + 1);
      L_PrintLog((char *)(DAT_00195c10 + 0x195a0e),(char *)(puVar16 + 0x4b));
      piVar3 = *(int **)(this + 0x7c);
      puVar16[0xb] = *(undefined4 *)(*piVar3 + 0x14);
      iVar8 = SmDev();
      uVar2 = __floatsisf(puVar16[10]);
      uVar2 = __addsf3(puVar16[9],uVar2);
      puVar16[8] = uVar2;
      uVar5 = *(undefined4 *)(DAT_00195c14 + iVar8 * 4 + 0x195a4e);
      uVar2 = __fixsfsi();
      (*(code *)puVar16[0xb])(piVar3,uVar5,uVar2);
      uVar2 = (**(code **)(**(int **)(this + 0x7c) + 0x4c))();
      piVar3 = *(int **)(this + 0x14);
      puVar16[9] = uVar2;
      puVar16[10] = *(undefined4 *)(*piVar3 + 0x2c);
      Vector<String>::elementAt((int)(puVar16 + 0x3f));
      Character::getMaxEnergy();
      __fixsfsi();
      String::valueOf((int)(puVar16 + 0x41));
      String::operator+((String *)(puVar16 + 0x43),puVar16 + 0x3f,puVar16 + 0x41);
      iVar8 = SmDev();
      uVar2 = *(undefined4 *)(iVar8 * 4 + *(int *)(iVar10 + DAT_00195be0));
      puVar16[0xc] = *(int *)(iVar10 + DAT_00195be0);
      puVar16[0xb] = uVar2;
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[3] = puVar16[0xb];
      puVar16[4] = 0;
      puVar16[6] = 0;
      puVar16[5] = 9;
      TrueTypeTextElement::TrueTypeTextElement
                (pTVar6,puVar16 + 0x43,*(undefined4 *)(this + 0x18),0xffffffff);
      *(TrueTypeTextElement **)(this + 0x80) = pTVar6;
      (*(code *)puVar16[10])(piVar3,pTVar6);
      String::~String((String *)(puVar16 + 0x43));
      String::~String((String *)(puVar16 + 0x41));
      String::~String((String *)(puVar16 + 0x3f));
      piVar3 = *(int **)(iVar10 + DAT_00195be4);
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x80));
      L_PrintLog((char *)(DAT_00195c1c + 0x195afa),(char *)(DAT_00195c20 + 0x195afc));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_00195c24 + 0x195b0a),*(int *)(*piVar3 + 4) + 1);
      L_PrintLog((char *)(DAT_00195c28 + 0x195b16),(char *)(puVar16 + 0x4b));
      piVar11 = *(int **)(this + 0x80);
      puVar16[10] = *(undefined4 *)(*piVar11 + 0x14);
      uVar2 = SmDev();
      puVar16[0xb] = uVar2;
      uVar2 = __floatsisf(puVar16[9]);
      uVar2 = __addsf3(puVar16[8],uVar2);
      puVar16[8] = uVar2;
      puVar16[9] = *(undefined4 *)(DAT_00195c2c + puVar16[0xb] * 4 + 0x195b58);
      uVar2 = __fixsfsi(puVar16[8]);
      (*(code *)puVar16[10])(piVar11,puVar16[9],uVar2);
      uVar2 = (**(code **)(**(int **)(this + 0x80) + 0x4c))();
      piVar11 = *(int **)(this + 0x14);
      puVar16[9] = uVar2;
      puVar16[10] = *(undefined4 *)(*piVar11 + 0x2c);
      Vector<String>::elementAt((int)(puVar16 + 0x45));
      String::String((String *)(puVar16 + 0x47),(String *)(puVar16 + 0x25));
      String::operator+((String *)(puVar16 + 0x49),puVar16 + 0x45,puVar16 + 0x47);
      iVar8 = SmDev();
      puVar16[0xb] = *(undefined4 *)(puVar16[0xc] + iVar8 * 4);
      pTVar6 = (TrueTypeTextElement *)operator_new(0xe4);
      *puVar16 = 1;
      puVar16[1] = 1;
      puVar16[2] = 0;
      puVar16[4] = 0;
      puVar16[6] = 0;
      puVar16[3] = puVar16[0xb];
      puVar16[5] = 9;
      TrueTypeTextElement::TrueTypeTextElement
                (pTVar6,puVar16 + 0x49,*(undefined4 *)(this + 0x18),0xffffffff);
      *(TrueTypeTextElement **)(this + 0x84) = pTVar6;
      (*(code *)puVar16[10])(piVar11,pTVar6);
      String::~String((String *)(puVar16 + 0x49));
      String::~String((String *)(puVar16 + 0x47));
      String::~String((String *)(puVar16 + 0x45));
      Vector<TrueTypeTextElement*>::addElement
                ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(this + 0x84));
      L_PrintLog((char *)(DAT_00195e44 + 0x195c5e),(char *)(DAT_00195e48 + 0x195c60));
      sprintf((char *)(puVar16 + 0x4b),(char *)(DAT_00195e4c + 0x195c6e),*(int *)(*piVar3 + 4) + 1);
      L_PrintLog((char *)(DAT_00195e50 + 0x195c7a),(char *)(puVar16 + 0x4b));
      piVar3 = *(int **)(this + 0x84);
      pcVar12 = *(code **)(*piVar3 + 0x14);
      iVar8 = SmDev();
      uVar5 = *(undefined4 *)(DAT_00195e54 + iVar8 * 4 + 0x195caa);
      uVar2 = __floatsisf(puVar16[9]);
      __addsf3(puVar16[8],uVar2);
      uVar2 = __fixsfsi();
      (*pcVar12)(piVar3,uVar5,uVar2);
      redrawFavoriteButton(SUB41(this,0));
      String::~String((String *)(puVar16 + 0x25));
      String::~String((String *)(puVar16 + 0x21));
      String::~String((String *)(puVar16 + 0x19));
      fVar19 = (float)String::~String((String *)(puVar16 + 0x15));
      ZombieCafe::playEffect(*(int *)(this + 0xc),fVar19);
      FUN_00195e2c();
      return;
    }
LAB_001951f4:
    *(undefined4 *)(this + 0x28) = 0xffffffff;
    piVar3 = (int *)FUN_00195e2c();
    pTVar6 = *(TrueTypeTextElement **)((int)puVar17 + 0x264);
    coprocessor_storelong(0xf,in_cr15,in_r12 + 0x3fc);
    piVar11 = *(int **)((int)puVar17 + 0xc);
    puVar18 = (undefined1 *)((int)puVar17 + 0x14);
    if (piVar11 == (int *)0x0 || (int)piVar11 < 0 != SBORROW4((int)pcVar12,0xf1)) break;
LAB_00195164:
    (**(code **)(puVar18 + 0x20))(piVar3,pTVar6);
    String::~String((String *)(puVar18 + 0x4c));
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar11,*(TrueTypeTextElement **)(this + 0x68));
    L_PrintLog((char *)(DAT_0019524c + 0x19517e),(char *)(DAT_00195250 + 0x195180));
    sprintf(puVar18 + 300,(char *)(DAT_00195254 + 0x19518e),*(int *)(*piVar11 + 4) + 1);
    L_PrintLog((char *)(DAT_00195258 + 0x19519a),puVar18 + 300);
    piVar3 = *(int **)(this + 0x68);
    pcVar12 = *(code **)(*piVar3 + 0x14);
    iVar8 = SmDev();
    iVar10 = *(int *)(DAT_0019525c + iVar8 * 4 + 0x1951d6);
    iVar8 = SmDev();
    uVar20 = __floatsidf(*(undefined4 *)(DAT_00195260 + iVar8 * 4 + 0x1951fc));
    iVar7 = iRam00195204;
    __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uRam00195200);
    uVar2 = __fixdfsi();
    (*pcVar12)(piVar3,iVar10,uVar2);
    String::~String((String *)(puVar18 + 0x94));
    String::~String((String *)(puVar18 + 0x84));
    FUN_00195cca(puVar18 + 100);
    puVar16 = (undefined4 *)puVar18;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


