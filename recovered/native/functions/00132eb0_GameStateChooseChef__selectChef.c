/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00132eb0 GameStateChooseChef::selectChef */

/* GameStateChooseChef::selectChef(int) */

void __thiscall GameStateChooseChef::selectChef(GameStateChooseChef *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TrueTypeTextElement *pTVar7;
  char *pcVar8;
  BitmapTextElement *pBVar9;
  int extraout_r1;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  Character *pCVar13;
  GameStateChooseChef *pGVar14;
  Vector<TrueTypeTextElement*> *this_00;
  code *pcVar15;
  ScreenElement *pSVar16;
  int iVar17;
  int *piVar18;
  CharacterInstance *this_01;
  undefined4 *puVar19;
  float fVar21;
  float __x;
  float __x_00;
  undefined4 uStack_4;
  undefined4 *puVar20;
  
  iVar4 = DAT_00132fac;
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_00132fac);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_00132fac);
  iVar17 = DAT_00132fb0 + 0x132ebe;
  *(int *)(&stack0x00000010 + DAT_00132fac) = param_1;
  uVar11 = **(undefined4 **)(iVar17 + DAT_00132fb4);
  *(undefined4 **)(&stack0x00000028 + DAT_00132fac) = *(undefined4 **)(iVar17 + DAT_00132fb4);
  *(undefined4 *)(&stack0x00000378 + DAT_00132fac) = uVar11;
  if (*(int *)(this + 0x90) != 0) {
    pCVar13 = *(Character **)(*(int *)(this + 0x90) + 0x8c);
    if (pCVar13 != (Character *)0x0) {
      Character::~Character(pCVar13);
      operator_delete(pCVar13);
    }
    if (*(int **)(this + 0x90) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x90) + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
    pGVar14 = this + 0x94;
    if (*(int *)pGVar14 != 0) {
      L_PrintLog((char *)(DAT_00132fb8 + 0x132f10),(char *)(DAT_00132fbc + 0x132f12));
      piVar18 = *(int **)(iVar17 + DAT_00132fc0);
      Vector<TrueTypeTextElement*>::removeElement
                ((Vector<TrueTypeTextElement*> *)*piVar18,*(TrueTypeTextElement **)pGVar14);
      (**(code **)(**(int **)(this + 0x14) + 0x34))(*(int **)(this + 0x14),*(undefined4 *)pGVar14);
      if (*(int **)pGVar14 != (int *)0x0) {
        (**(code **)(**(int **)pGVar14 + 4))();
      }
      *(undefined4 *)(this + 0x94) = 0;
      sprintf(&stack0x00000178 + iVar4,(char *)(DAT_00132fc4 + 0x132f4a),*(int *)(*piVar18 + 4) + 1)
      ;
      L_PrintLog((char *)(DAT_00132fc8 + 0x132f56),&stack0x00000178 + iVar4);
    }
    if (*(int *)(this + 0x98) != 0) {
      (**(code **)(**(int **)(this + 0x14) + 0x34))();
      piVar18 = *(int **)(this + 0x98);
      if (piVar18 != (int *)0x0) {
        (**(code **)(*piVar18 + 4))();
      }
      *(undefined4 *)(this + 0x98) = 0;
    }
  }
  if (*(int *)(&stack0x00000010 + iVar4) < 0) {
    this = this + 0x9c;
    (**(code **)(**(int **)this + 0x20))(*(int **)this,0);
    FUN_00133aba();
  }
  iVar5 = CapcomOrderableList<CharacterData*>::get
                    (*(CapcomOrderableList<CharacterData*> **)(this + 0xb0),
                     *(int *)(&stack0x00000010 + iVar4));
  iVar6 = DAT_00133394;
  for (iVar12 = 0; iVar12 <= *(int *)(this + 0xa8); iVar12 = iVar12 + 1) {
    if (*(int *)(iVar12 * 4 + *(int *)(this + 0xac)) == iVar5) goto LAB_00132fe0;
  }
  iVar12 = -1;
LAB_00132fe0:
  *(int *)(this + 0x5c) = iVar12;
  (**(code **)(**(int **)(this + 0x9c) + 0x20))
            (*(int **)(this + 0x9c),iVar12 < (int)(uint)*(ushort *)(*(int *)(this + 0xc) + iVar6));
  if (*(char *)(*(int *)(this + 0x9c) + 0x14) == '\0') {
    FUN_00133aba();
  }
  fVar21 = (float)SmDev();
  iVar6 = createCharacterInstance((int)this,fVar21);
  *(int *)(this + 0x90) = iVar6;
  iVar12 = DAT_0013339c;
  if ((char)(*(int **)(iVar6 + 0x8c))[1] == '\0') {
    iVar12 = 0xb10;
  }
  String::String((String *)(&stack0x0000002c + iVar4),(String *)(**(int **)(iVar6 + 0x8c) + iVar12))
  ;
  piVar18 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar4) = *(undefined4 *)(*piVar18 + 0x2c);
  String::String((String *)(&stack0x00000034 + iVar4),0);
  iVar12 = SmDev();
  *(undefined4 *)(&stack0x00000014 + iVar4) =
       *(undefined4 *)(iVar12 * 4 + *(int *)(iVar17 + DAT_001333a0));
  pTVar7 = (TrueTypeTextElement *)operator_new(0xe4);
  uVar11 = *(undefined4 *)(&stack0x00000014 + iVar4);
  uVar10 = *(undefined4 *)(this + 0x54);
  *puVar19 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar4) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar4) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar4) = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar4) = uVar11;
  *(undefined4 *)(&stack0x00000000 + iVar4) = 0x11;
  TrueTypeTextElement::TrueTypeTextElement(pTVar7,&stack0x00000034 + iVar4,uVar10,0xffffffff);
  *(TrueTypeTextElement **)(this + 0x94) = pTVar7;
  (**(code **)(&stack0x00000010 + iVar4))(piVar18,pTVar7);
  String::~String((String *)(&stack0x00000034 + iVar4));
  piVar18 = *(int **)(iVar17 + DAT_001333a4);
  this_00 = (Vector<TrueTypeTextElement*> *)*piVar18;
  iVar12 = *(int *)this_00;
  *(undefined4 *)(&stack0x00000010 + iVar4) = *(undefined4 *)(this + 0x94);
  iVar6 = *(int *)(this_00 + 4) + 2;
  if (iVar12 < iVar6) {
    iVar12 = iVar12 * 2;
    if (iVar12 < iVar6) {
      iVar12 = iVar6;
    }
    Vector<TrueTypeTextElement*>::resize(this_00,iVar12,-1);
  }
  iVar12 = DAT_001333a8;
  iVar5 = *(int *)(this_00 + 4);
  *(int *)(this_00 + 4) = iVar5 + 1;
  iVar6 = DAT_001333ac;
  *(undefined4 *)((iVar5 + 1) * 4 + *(int *)(this_00 + 8)) =
       *(undefined4 *)(&stack0x00000010 + iVar4);
  L_PrintLog((char *)(iVar12 + 0x1330e6),(char *)(iVar6 + 0x1330ea));
  sprintf(&stack0x00000178 + iVar4,(char *)(DAT_001333b0 + 0x1330f8),*(int *)(*piVar18 + 4) + 1);
  L_PrintLog((char *)(DAT_001333b4 + 0x133104),&stack0x00000178 + iVar4);
  String::String((String *)(&stack0x0000003c + iVar4),(char *)(DAT_001333b8 + 0x13310e));
  MultiByteString::insertStringNextLine
            ((String *)(&stack0x0000003c + iVar4),(String *)(&stack0x0000002c + iVar4),0xd);
  piVar18 = *(int **)(this + 0x94);
  pcVar15 = *(code **)(*piVar18 + 0x44);
  String::String((String *)(&stack0x00000044 + iVar4),(String *)(&stack0x0000003c + iVar4));
  (*pcVar15)(piVar18,&stack0x00000044 + iVar4);
  String::~String((String *)(&stack0x00000044 + iVar4));
  piVar18 = *(int **)(this + 0x94);
  pcVar15 = *(code **)(*piVar18 + 0x18);
  iVar12 = SmDev();
  (*pcVar15)(piVar18,*(undefined4 *)(iVar12 * 4 + *(int *)(iVar17 + DAT_001333bc)),200);
  iVar12 = SmDev();
  iVar6 = *(int *)(iVar17 + DAT_001333c0);
  uVar2 = *(ushort *)(*(int *)(this + 0x9c) + 8);
  *(undefined4 *)(&stack0x00000010 + iVar4) = *(undefined4 *)(iVar12 * 4 + iVar6);
  uVar11 = ScreenElement::globalToLocalCoords(*(ScreenElement **)(this + 0x28),(uint)uVar2);
  iVar12 = *(int *)(this + 0x9c);
  *(undefined4 *)(&stack0x00000020 + iVar4) = uVar11;
  *(undefined4 *)(&stack0x00000024 + iVar4) = *(undefined4 *)(iVar12 + 0x10);
  iVar12 = SmDev();
  uVar11 = *(undefined4 *)(this + 0x94);
  pSVar16 = *(ScreenElement **)(this + 0x28);
  *(undefined4 *)(&stack0x00000014 + iVar4) = *(undefined4 *)(iVar6 + iVar12 * 4);
  *(undefined4 *)(&stack0x00000018 + iVar4) = uVar11;
  uVar10 = *(undefined4 *)(pSVar16 + 0xc);
  uVar11 = SmDev();
  *(undefined4 *)(&stack0x0000001c + iVar4) = uVar11;
  uVar11 = __floatsisf(uVar10);
  uVar11 = __mulsf3(uVar11,*(undefined4 *)
                            (DAT_001333c4 + *(int *)(&stack0x0000001c + iVar4) * 4 + 0x1331b0));
  __mulsf3(uVar11,0x3f000000);
  iVar12 = __fixsfsi();
  uVar11 = ScreenElement::localToGlobalCoords
                     (pSVar16,*(int *)(&stack0x00000010 + iVar4) +
                              (((int)(short)*(undefined4 *)(&stack0x00000020 + iVar4) -
                               *(int *)(&stack0x00000024 + iVar4)) -
                              *(int *)(&stack0x00000014 + iVar4)) / 2 & 0xffffU | iVar12 << 0x10);
  FUN_00131c7c(*(undefined4 *)(&stack0x00000018 + iVar4),uVar11);
  sprintf(&stack0x00000278 + iVar4,(char *)(DAT_001333c8 + 0x133200),
          (int)*(short *)(*(int *)(this + 0x94) + 4),(int)*(short *)(*(int *)(this + 0x94) + 8));
  L_PrintLog((char *)(DAT_001333cc + 0x13320c),&stack0x00000278 + iVar4);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000015c + iVar4));
  Vector<String>::elementAt((int)(&stack0x0000004c + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000004c + iVar4);
  String::~String((String *)(&stack0x0000004c + iVar4));
  String::valueOf((int)(&stack0x00000054 + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000054 + iVar4);
  String::~String((String *)(&stack0x00000054 + iVar4));
  String::String((String *)(&stack0x0000005c + iVar4),(char *)(DAT_001333d8 + 0x133270));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000005c + iVar4);
  String::~String((String *)(&stack0x0000005c + iVar4));
  Vector<String>::elementAt((int)(&stack0x00000064 + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000064 + iVar4);
  String::~String((String *)(&stack0x00000064 + iVar4));
  pCVar13 = *(Character **)(*(int *)(this + 0x90) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar13 + DAT_001333e0);
  uVar11 = Character::getRareValue(pCVar13);
  *(undefined4 *)(&stack0x00000010 + iVar4) = uVar11;
  uVar11 = __floatsisf((int)sVar3);
  uVar11 = __mulsf3(uVar11,*(undefined4 *)
                            (DAT_001333e4 +
                             *(int *)(&stack0x00000010 + iVar4) * 0xe10 +
                             *(int *)(pCVar13 + 0x28) * 0xc + 0x1332e6));
  roundf(__x);
  uVar10 = Character::getRareValue(pCVar13);
  *(undefined4 *)(&stack0x00000010 + iVar4) = uVar10;
  iVar12 = Character::getSameZombiePowerupNum(pCVar13);
  __fixsfsi(uVar11);
  __fixsfsi(*(undefined4 *)
             (DAT_001333e8 + iVar12 * 0xc + *(int *)(&stack0x00000010 + iVar4) * 0x3c + 0x13338e));
  String::valueOf((int)(&stack0x0000006c + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000006c + iVar4);
  String::~String((String *)(&stack0x0000006c + iVar4));
  String::String((String *)(&stack0x00000074 + iVar4),(char *)(DAT_001333ec + 0x13333e));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000074 + iVar4);
  String::~String((String *)(&stack0x00000074 + iVar4));
  Vector<String>::elementAt((int)(&stack0x0000007c + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000007c + iVar4);
  String::~String((String *)(&stack0x0000007c + iVar4));
  pCVar13 = *(Character **)(*(int *)(this + 0x90) + 0x8c);
  sVar3 = *(short *)(*(int *)pCVar13 + DAT_001333f4);
  uVar11 = Character::getRareValue(pCVar13);
  *(undefined4 *)(&stack0x00000010 + iVar4) = uVar11;
  uVar11 = __floatsisf((int)sVar3);
  uVar11 = __mulsf3(uVar11,*(undefined4 *)
                            (DAT_001337bc +
                             *(int *)(&stack0x00000010 + iVar4) * 0xe10 +
                             *(int *)(pCVar13 + 0x28) * 0xc + 0x133414));
  roundf(__x_00);
  *(undefined4 *)(&stack0x00000010 + iVar4) = uVar11;
  iVar12 = Character::getRareValue(pCVar13);
  iVar6 = Character::getSameZombiePowerupNum(pCVar13);
  __addsf3(*(undefined4 *)(&stack0x00000010 + iVar4),
           *(undefined4 *)(DAT_001337c0 + iVar6 * 0xc + iVar12 * 0x3c + 0x1334b2));
  __fixsfsi();
  String::valueOf((int)(&stack0x00000084 + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000084 + iVar4);
  String::~String((String *)(&stack0x00000084 + iVar4));
  String::String((String *)(&stack0x0000008c + iVar4),(char *)(DAT_001337c4 + 0x133468));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000008c + iVar4);
  String::~String((String *)(&stack0x0000008c + iVar4));
  Vector<String>::elementAt((int)(&stack0x00000094 + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000094 + iVar4);
  String::~String((String *)(&stack0x00000094 + iVar4));
  Character::getMaxEnergy();
  __fixsfsi();
  String::valueOf((int)(&stack0x0000009c + iVar4));
  StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000009c + iVar4);
  String::~String((String *)(&stack0x0000009c + iVar4));
  StringBuffer::toString();
  pcVar8 = (char *)String::getBytes((String *)(&stack0x000000a4 + iVar4));
  L_PrintLog((char *)(DAT_001337cc + 0x1334da),pcVar8);
  free(pcVar8);
  iVar12 = __aeabi_fcmpeq(*(undefined4 *)(**(int **)(*(int *)(this + 0x90) + 0x8c) + 0xb30),
                          0x3f800000);
  if (iVar12 == 0) {
    String::String((String *)(&stack0x000000ac + iVar4),(char *)(DAT_001337d0 + 0x133508));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000ac + iVar4);
    String::~String((String *)(&stack0x000000ac + iVar4));
    Vector<String>::elementAt((int)(&stack0x000000b4 + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000b4 + iVar4);
    String::~String((String *)(&stack0x000000b4 + iVar4));
    String::String((String *)(&stack0x000000bc + iVar4),(char *)(DAT_001337d8 + 0x13353e));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000bc + iVar4);
    String::~String((String *)(&stack0x000000bc + iVar4));
    uVar11 = __divsf3(0x3f800000,*(undefined4 *)(**(int **)(*(int *)(this + 0x90) + 0x8c) + 0xb30));
    __mulsf3(uVar11,DAT_001337dc);
    __fixsfsi();
    uVar11 = __floatsisf();
    uVar11 = __divsf3(uVar11,DAT_001337dc);
    uVar11 = __subsf3(0x3f800000,uVar11);
    __mulsf3(uVar11,DAT_001337dc);
    __fixsfsi();
    String::valueOf((int)(&stack0x000000c4 + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000c4 + iVar4);
    String::~String((String *)(&stack0x000000c4 + iVar4));
    String::String((String *)(&stack0x000000cc + iVar4),(char *)(DAT_001337e0 + 0x1335aa));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000cc + iVar4);
    String::~String((String *)(&stack0x000000cc + iVar4));
  }
  iVar12 = DAT_001337e4;
  iVar6 = __aeabi_fcmpeq(*(undefined4 *)(**(int **)(*(int *)(this + 0x90) + 0x8c) + DAT_001337e4),
                         0x3f800000);
  if (iVar6 == 0) {
    String::String((String *)(&stack0x000000d4 + iVar4),(char *)(DAT_001337e8 + 0x1335de));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000d4 + iVar4);
    String::~String((String *)(&stack0x000000d4 + iVar4));
    Vector<String>::elementAt((int)(&stack0x000000dc + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000dc + iVar4);
    String::~String((String *)(&stack0x000000dc + iVar4));
    String::String((String *)(&stack0x000000e4 + iVar4),(char *)(DAT_001337f0 + 0x133614));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000e4 + iVar4);
    String::~String((String *)(&stack0x000000e4 + iVar4));
    uVar11 = __mulsf3(*(undefined4 *)(**(int **)(*(int *)(this + 0x90) + 0x8c) + iVar12),
                      DAT_001337dc);
    __subsf3(uVar11,DAT_001337dc);
    __fixsfsi();
    String::valueOf((int)(&stack0x000000ec + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000ec + iVar4);
    String::~String((String *)(&stack0x000000ec + iVar4));
    String::String((String *)(&stack0x000000f4 + iVar4),(char *)(DAT_001337f4 + 0x133660));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000f4 + iVar4);
    String::~String((String *)(&stack0x000000f4 + iVar4));
  }
  uVar11 = __floatsisf(*(undefined4 *)(**(int **)(*(int *)(this + 0x90) + 0x8c) + DAT_001337f8));
  iVar12 = __aeabi_fcmpeq(uVar11,0x3f800000);
  if (iVar12 == 0) {
    String::String((String *)(&stack0x000000fc + iVar4),(char *)(DAT_001337fc + 0x133698));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x000000fc + iVar4);
    String::~String((String *)(&stack0x000000fc + iVar4));
    Vector<String>::elementAt((int)(&stack0x00000104 + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000104 + iVar4);
    String::~String((String *)(&stack0x00000104 + iVar4));
    String::valueOf((int)(&stack0x0000010c + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000010c + iVar4);
    String::~String((String *)(&stack0x0000010c + iVar4));
    String::String((String *)(&stack0x00000114 + iVar4),(char *)(DAT_00133804 + 0x1336f0));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000114 + iVar4);
    String::~String((String *)(&stack0x00000114 + iVar4));
  }
  iVar12 = DAT_00133808;
  iVar6 = __aeabi_fcmpeq(*(undefined4 *)(**(int **)(*(int *)(this + 0x90) + 0x8c) + DAT_00133808),
                         0x3f800000);
  if (iVar6 == 0) {
    String::String((String *)(&stack0x0000011c + iVar4),(char *)(DAT_0013380c + 0x133726));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000011c + iVar4);
    String::~String((String *)(&stack0x0000011c + iVar4));
    Vector<String>::elementAt((int)(&stack0x00000124 + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000124 + iVar4);
    String::~String((String *)(&stack0x00000124 + iVar4));
    String::String((String *)(&stack0x0000012c + iVar4),(char *)(DAT_00133814 + 0x13375c));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000012c + iVar4);
    String::~String((String *)(&stack0x0000012c + iVar4));
    uVar11 = __mulsf3(*(undefined4 *)(**(int **)(*(int *)(this + 0x90) + 0x8c) + iVar12),
                      DAT_001337dc);
    __subsf3(uVar11,DAT_001337dc);
    __fixsfsi();
    String::valueOf((int)(&stack0x00000134 + iVar4));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x00000134 + iVar4);
    String::~String((String *)(&stack0x00000134 + iVar4));
    String::String((String *)(&stack0x0000013c + iVar4),(char *)(DAT_00133818 + 0x1337a8));
    StringBuffer::append(&stack0x0000015c + iVar4,&stack0x0000013c + iVar4);
    String::~String((String *)(&stack0x0000013c + iVar4));
  }
  StringBuffer::toString();
  pcVar8 = (char *)String::getBytes((String *)(&stack0x00000144 + iVar4));
  L_PrintLog((char *)(DAT_00133ad0 + 0x133834),pcVar8);
  free(pcVar8);
  String::String((String *)(&stack0x0000014c + iVar4),(char *)(DAT_00133ad4 + 0x133844));
  piVar18 = *(int **)(this + 0x14);
  *(undefined4 *)(&stack0x00000010 + iVar4) = *(undefined4 *)(*piVar18 + 0x2c);
  StringBuffer::toString();
  iVar6 = *(int *)(this + 0xc);
  iVar12 = SmDev();
  *(undefined4 *)(&stack0x00000014 + iVar4) =
       *(undefined4 *)((*(int *)(DAT_00133ad8 + iVar12 * 4 + 0x133888) + 0x136) * 4 + iVar6);
  pBVar9 = (BitmapTextElement *)operator_new(0xc0);
  *puVar20 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar4) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar4) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar4) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar4) = 0;
  BitmapTextElement::BitmapTextElement
            (pBVar9,&stack0x00000154 + iVar4,*(undefined4 *)(&stack0x00000014 + iVar4),0xffffffff);
  *(BitmapTextElement **)(this + 0x98) = pBVar9;
  (**(code **)(&stack0x00000010 + iVar4))(piVar18,pBVar9);
  String::~String((String *)(&stack0x00000154 + iVar4));
  pSVar16 = *(ScreenElement **)(this + 0x28);
  iVar12 = SmDev();
  iVar6 = *(int *)(iVar12 * 4 + *(int *)(iVar17 + DAT_00133adc));
  iVar12 = SmDev();
  uVar11 = ScreenElement::localToGlobalCoords
                     (pSVar16,(uint)*(ushort *)(*(int *)(iVar17 + DAT_00133ae0) + iVar12 * 4) |
                              iVar6 << 0x10);
  (**(code **)(**(int **)(this + 0x90) + 0xc))(*(int **)(this + 0x90),uVar11);
  uVar11 = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(&stack0x00000010 + iVar4) = *(undefined4 *)(this + 0x98);
  *(undefined4 *)(&stack0x00000014 + iVar4) = uVar11;
  iVar12 = SmDev();
  uVar11 = *(undefined4 *)(iVar12 * 4 + *(int *)(iVar17 + DAT_00133ae4));
  iVar12 = SmDev();
  uVar2 = *(ushort *)(*(int *)(iVar17 + DAT_00133ae8) + iVar12 * 4);
  iVar12 = __fixsfsi(uVar11);
  uVar11 = ScreenElement::localToGlobalCoords
                     (*(ScreenElement **)(&stack0x00000014 + iVar4),iVar12 << 0x10 | (uint)uVar2);
  FUN_00131c7c(*(undefined4 *)(&stack0x00000010 + iVar4),uVar11);
  this_01 = *(CharacterInstance **)(this + 0x90);
  iVar12 = **(int **)(iVar17 + DAT_00133aec);
  cVar1 = **(char **)(iVar17 + DAT_00133af0);
  if (cVar1 == '\0') {
    iVar17 = 0;
  }
  else {
    iVar17 = arc4random();
    __aeabi_idivmod(iVar17 + (iVar17 >> 0x1f) ^ iVar17 >> 0x1f,cVar1);
    iVar17 = extraout_r1;
  }
  CharacterInstance::setCurrentAnimation(this_01,*(uchar *)(iVar12 + iVar17),'\x01',true);
  String::~String((String *)(&stack0x0000014c + iVar4));
  String::~String((String *)(&stack0x00000144 + iVar4));
  String::~String((String *)(&stack0x000000a4 + iVar4));
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000015c + iVar4));
  String::~String((String *)(&stack0x0000003c + iVar4));
  String::~String((String *)(&stack0x0000002c + iVar4));
  FUN_00133aba();
  return;
}


