/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d1c8c FUN_000d1c8c */

void FUN_000d1c8c(void)

{
  int iVar1;
  CharacterDetails CVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  int iVar6;
  int *piVar7;
  CharacterDetails *pCVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  CharacterDetails *unaff_r5;
  Character *unaff_r6;
  CharacterDetails *pCVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double in_stack_00000000;
  int in_stack_00000010;
  
  (**(code **)(**(int **)(unaff_r5 + 0xa4) + 0x20))(*(int **)(unaff_r5 + 0xa4),0);
  (**(code **)(**(int **)(unaff_r5 + 0x9c) + 0x20))(*(int **)(unaff_r5 + 0x9c),1);
  (**(code **)(**(int **)(unaff_r5 + 0x98) + 0x20))(*(int **)(unaff_r5 + 0x98),1);
  String::String((String *)&stack0x0000044c,(char *)(DAT_000d1f9c + 0xd1cc0));
  String::String((String *)&stack0x00000454,(String *)(*(int *)unaff_r6 + 0xb10));
  String::operator=((String *)&stack0x0000044c,&stack0x00000454);
  String::~String((String *)&stack0x00000454);
  String::String((String *)&stack0x0000045c,(char *)(DAT_000d1fa0 + 0xd1cf0));
  iVar1 = SmDev();
  MultiByteString::insertStringNextLine
            ((String *)&stack0x0000045c,(String *)&stack0x0000044c,
             *(int *)(iVar1 * 4 + DAT_000d1fa4 + 0xd1d00));
  piVar7 = *(int **)(unaff_r5 + 0xec);
  pcVar11 = *(code **)(*piVar7 + 0x44);
  String::String((String *)&stack0x00000464,(String *)&stack0x0000045c);
  (*pcVar11)(piVar7,&stack0x00000464);
  String::~String((String *)&stack0x00000464);
  if ((unaff_r6[5] == (Character)0x3) || (unaff_r6[5] == (Character)0x1)) {
    piVar7 = *(int **)(unaff_r5 + 0xf4);
    pcVar11 = *(code **)(*piVar7 + 0x44);
    Vector<String>::elementAt((int)&stack0x0000046c);
    String::String((String *)&stack0x00000474,(char *)(DAT_000d1fa8 + 0xd1d64));
    String::operator+((String *)&stack0x0000047c,&stack0x0000046c,&stack0x00000474);
    Vector<String>::elementAt((int)&stack0x00000484);
    String::operator+((String *)&stack0x0000048c,&stack0x0000047c,&stack0x00000484);
    String::String((String *)&stack0x00000494,(char *)(DAT_000d1fac + 0xd1da0));
    String::operator+((String *)&stack0x0000049c,&stack0x0000048c,&stack0x00000494);
    Vector<String>::elementAt((int)&stack0x000004a4);
    String::operator+((String *)&stack0x000004ac,&stack0x0000049c,&stack0x000004a4);
    (*pcVar11)(piVar7,&stack0x000004ac);
    String::~String((String *)&stack0x000004ac);
    String::~String((String *)&stack0x000004a4);
    String::~String((String *)&stack0x0000049c);
    String::~String((String *)&stack0x00000494);
    String::~String((String *)&stack0x0000048c);
    String::~String((String *)&stack0x00000484);
    String::~String((String *)&stack0x0000047c);
    String::~String((String *)&stack0x00000474);
    String::~String((String *)&stack0x0000046c);
    piVar7 = *(int **)(unaff_r5 + 0xfc);
    pcVar11 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)&stack0x000004b4);
    String::String((String *)&stack0x000004bc,(char *)(DAT_000d1fb4 + 0xd1e54));
    String::operator+((String *)&stack0x000004c4,&stack0x000004b4,&stack0x000004bc);
    Character::getSpeedBaseParam(unaff_r6);
    String::valueOf((int)&stack0x000004cc);
    String::operator+((String *)&stack0x000004d4,&stack0x000004c4,&stack0x000004cc);
    String::String((String *)&stack0x000004dc,(char *)(DAT_000d1fb8 + 0xd1e90));
    String::operator+((String *)&stack0x000004e4,&stack0x000004d4,&stack0x000004dc);
    Character::getAttackBasePower();
    String::valueOf((int)&stack0x000004ec);
    String::operator+((String *)&stack0x000004f4,&stack0x000004e4,&stack0x000004ec);
    String::String((String *)((int)&stack0x00000000 + DAT_000d1fc0),(char *)(DAT_000d1fbc + 0xd1eca)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d1fc4),&stack0x000004f4,
                      (int)&stack0x00000000 + DAT_000d1fc0);
    String::valueOf((int)&stack0x00000000 + DAT_000d1fcc);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d1fd0),
                      (int)&stack0x00000000 + DAT_000d1fc4,(int)&stack0x00000000 + DAT_000d1fcc);
    String::String((String *)((int)&stack0x00000000 + DAT_000d1fd8),(char *)(DAT_000d1fd4 + 0xd1f04)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d1fdc),
                      (int)&stack0x00000000 + DAT_000d1fd0,(int)&stack0x00000000 + DAT_000d1fd8);
    (*pcVar11)(piVar7,(int)&stack0x00000000 + DAT_000d1fdc);
    String::~String((String *)((int)&stack0x00000000 + DAT_000d1fdc));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d1fd8));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d1fd0));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d1fcc));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d1fc4));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d1fc0));
    String::~String((String *)&stack0x000004f4);
    String::~String((String *)&stack0x000004ec);
    String::~String((String *)&stack0x000004e4);
    String::~String((String *)&stack0x000004dc);
    String::~String((String *)&stack0x000004d4);
    String::~String((String *)&stack0x000004cc);
    String::~String((String *)&stack0x000004c4);
    String::~String((String *)&stack0x000004bc);
    String::~String((String *)&stack0x000004b4);
  }
  else {
    piVar7 = *(int **)(unaff_r5 + 0xf4);
    pcVar11 = *(code **)(*piVar7 + 0x44);
    Vector<String>::elementAt((int)&stack0x00000000 + DAT_000d23b4);
    String::String((String *)((int)&stack0x00000000 + DAT_000d23bc),(char *)(DAT_000d23b8 + 0xd2002)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d23c0),
                      (int)&stack0x00000000 + DAT_000d23b4,(int)&stack0x00000000 + DAT_000d23bc);
    Vector<String>::elementAt((int)&stack0x00000000 + DAT_000d23c4);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d23c8),
                      (int)&stack0x00000000 + DAT_000d23c0,(int)&stack0x00000000 + DAT_000d23c4);
    String::String((String *)((int)&stack0x00000000 + DAT_000d23d0),(char *)(DAT_000d23cc + 0xd203e)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d23d4),
                      (int)&stack0x00000000 + DAT_000d23c8,(int)&stack0x00000000 + DAT_000d23d0);
    Vector<String>::elementAt((int)&stack0x00000000 + DAT_000d23d8);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d23dc),
                      (int)&stack0x00000000 + DAT_000d23d4,(int)&stack0x00000000 + DAT_000d23d8);
    String::String((String *)((int)&stack0x00000000 + DAT_000d23e4),(char *)(DAT_000d23e0 + 0xd207a)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d23e8),
                      (int)&stack0x00000000 + DAT_000d23dc,(int)&stack0x00000000 + DAT_000d23e4);
    String::String((String *)((int)&stack0x00000000 + DAT_000d23f0),(char *)(DAT_000d23ec + 0xd2096)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d23f4),
                      (int)&stack0x00000000 + DAT_000d23e8,(int)&stack0x00000000 + DAT_000d23f0);
    Vector<String>::elementAt((int)&stack0x00000000 + DAT_000d23fc);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2400),
                      (int)&stack0x00000000 + DAT_000d23f4,(int)&stack0x00000000 + DAT_000d23fc);
    String::String((String *)((int)&stack0x00000000 + DAT_000d2408),(char *)(DAT_000d2404 + 0xd20d6)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d240c),
                      (int)&stack0x00000000 + DAT_000d2400,(int)&stack0x00000000 + DAT_000d2408);
    Vector<String>::elementAt((int)&stack0x00000000 + DAT_000d2410);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2418),
                      (int)&stack0x00000000 + DAT_000d240c,(int)&stack0x00000000 + DAT_000d2410);
    String::String((String *)((int)&stack0x00000000 + DAT_000d2420),(char *)(DAT_000d241c + 0xd2116)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2424),
                      (int)&stack0x00000000 + DAT_000d2418,(int)&stack0x00000000 + DAT_000d2420);
    Vector<String>::elementAt((int)&stack0x00000000 + DAT_000d242c);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2430),
                      (int)&stack0x00000000 + DAT_000d2424,(int)&stack0x00000000 + DAT_000d242c);
    (*pcVar11)(piVar7,(int)&stack0x00000000 + DAT_000d2430);
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2430));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d242c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2424));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2420));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2418));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2410));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d240c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2408));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2400));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23fc));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23f4));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23f0));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23e8));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23e4));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23dc));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23d8));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23d4));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23d0));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23c8));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23c4));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23c0));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23bc));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d23b4));
    piVar7 = *(int **)(unaff_r5 + 0xfc);
    pcVar11 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)&stack0x00000000 + DAT_000d2438);
    String::String((String *)((int)&stack0x00000000 + DAT_000d2440),(char *)(DAT_000d243c + 0xd2242)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2444),
                      (int)&stack0x00000000 + DAT_000d2438,(int)&stack0x00000000 + DAT_000d2440);
    Character::getSpeedBaseParam(unaff_r6);
    String::valueOf((int)&stack0x00000000 + DAT_000d2448);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d244c),
                      (int)&stack0x00000000 + DAT_000d2444,(int)&stack0x00000000 + DAT_000d2448);
    String::String((String *)((int)&stack0x00000000 + DAT_000d2454),(char *)(DAT_000d2450 + 0xd227e)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2458),
                      (int)&stack0x00000000 + DAT_000d244c,(int)&stack0x00000000 + DAT_000d2454);
    Character::getAttackBasePower();
    String::valueOf((int)&stack0x00000000 + DAT_000d245c);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2460),
                      (int)&stack0x00000000 + DAT_000d2458,(int)&stack0x00000000 + DAT_000d245c);
    String::String((String *)((int)&stack0x00000000 + DAT_000d2468),(char *)(DAT_000d2464 + 0xd22ba)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d246c),
                      (int)&stack0x00000000 + DAT_000d2460,(int)&stack0x00000000 + DAT_000d2468);
    String::String((String *)((int)&stack0x00000000 + DAT_000d2474),(char *)(DAT_000d2470 + 0xd22d6)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2478),
                      (int)&stack0x00000000 + DAT_000d246c,(int)&stack0x00000000 + DAT_000d2474);
    __floatsidf(*(undefined4 *)(unaff_r6 + 0x10));
    Platform::getFormattedDate(in_stack_00000000);
    String::toUpperCase();
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2484),
                      (int)&stack0x00000000 + DAT_000d2478,(int)&stack0x00000000 + DAT_000d2480);
    String::String((String *)((int)&stack0x00000000 + DAT_000d248c),(char *)(DAT_000d2488 + 0xd2320)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d2490),
                      (int)&stack0x00000000 + DAT_000d2484,(int)&stack0x00000000 + DAT_000d248c);
    uVar13 = Platform::getAppTime();
    uVar14 = __floatsidf(*(undefined4 *)(unaff_r6 + 0x10));
    uVar13 = __subdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                      (int)((ulonglong)uVar14 >> 0x20));
    uVar14 = __floatsidf(**(undefined4 **)(in_stack_00000010 + DAT_000d2494));
    __divdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
             (int)((ulonglong)uVar14 >> 0x20));
    __fixdfsi();
    String::valueOf((int)&stack0x00000000 + DAT_000d2498);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d249c),
                      (int)&stack0x00000000 + DAT_000d2490,(int)&stack0x00000000 + DAT_000d2498);
    String::String((String *)((int)&stack0x00000000 + DAT_000d24a4),(char *)(DAT_000d24a0 + 0xd2394)
                  );
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d24a8),
                      (int)&stack0x00000000 + DAT_000d249c,(int)&stack0x00000000 + DAT_000d24a4);
    String::valueOf((int)&stack0x00000000 + DAT_000d24ac);
    String::operator+((String *)((int)&stack0x00000000 + DAT_000d284c),
                      (int)&stack0x00000000 + DAT_000d2850,(int)&stack0x00000000 + DAT_000d2854);
    (*pcVar11)(piVar7,(int)&stack0x00000000 + DAT_000d284c);
    String::~String((String *)((int)&stack0x00000000 + DAT_000d284c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2854));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2850));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2858));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d285c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2860));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2864));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2868));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d286c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2870));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2874));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2878));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d287c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2880));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2884));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2888));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d288c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2890));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2894));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d2898));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d289c));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d28a0));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d28a4));
    String::~String((String *)((int)&stack0x00000000 + DAT_000d28a8));
    CVar2 = unaff_r5[0x84];
    if (CVar2 != (CharacterDetails)0x0) {
      CVar2 = unaff_r5[0x174];
    }
    (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x20))(*(int **)(unaff_r5 + 0x16c),CVar2);
    CVar2 = unaff_r5[0x84];
    if (CVar2 != (CharacterDetails)0x0) {
      CVar2 = unaff_r5[0x174];
    }
    (**(code **)(**(int **)(unaff_r5 + 0x170) + 0x20))(*(int **)(unaff_r5 + 0x170),CVar2);
    piVar7 = *(int **)(unaff_r5 + 0x170);
    pcVar11 = *(code **)(*piVar7 + 0x44);
    Vector<String>::elementAt((int)&stack0x00000000 + DAT_000d28ac);
    (*pcVar11)(piVar7,(int)&stack0x00000000 + DAT_000d28ac);
    String::~String((String *)((int)&stack0x00000000 + DAT_000d28ac));
    (**(code **)(**(int **)(unaff_r5 + 0x17c) + 0x20))(*(int **)(unaff_r5 + 0x17c),0);
    (**(code **)(**(int **)(unaff_r5 + 0x180) + 0x20))(*(int **)(unaff_r5 + 0x180),0);
  }
  String::~String((String *)&stack0x0000045c);
  String::~String((String *)&stack0x0000044c);
  pCVar8 = unaff_r5 + 0xec;
  piVar7 = *(int **)pCVar8;
  pcVar11 = *(code **)(*piVar7 + 0x18);
  iVar1 = SmDev();
  (*pcVar11)(piVar7,*(undefined4 *)(iVar1 * 4 + *(int *)(in_stack_00000010 + DAT_000d28b4)),0);
  pCVar12 = unaff_r5 + 0xf4;
  piVar7 = *(int **)pCVar12;
  (**(code **)(*piVar7 + 0x18))(piVar7,*(undefined4 *)(*(int *)(unaff_r5 + 0x108) + 0xc),piVar7[4]);
  piVar7 = *(int **)(unaff_r5 + 0xfc);
  (**(code **)(*piVar7 + 0x18))
            (piVar7,*(undefined4 *)(*(int *)(unaff_r5 + 0x108) + 0xc),
             *(undefined4 *)(*(int *)pCVar12 + 0x10));
  piVar7 = *(int **)pCVar12;
  pcVar11 = *(code **)(*piVar7 + 0x14);
  iVar6 = *(int *)(*(int *)pCVar8 + 8);
  iVar9 = *(int *)(*(int *)pCVar8 + 0x10);
  iVar1 = SmDev();
  iVar4 = DAT_000d28b8 + 0xd2688;
  (*pcVar11)(piVar7,0,iVar6 + iVar9 + *(int *)(iVar4 + iVar1 * 4 + 0x10));
  piVar7 = *(int **)(unaff_r5 + 0xfc);
  pcVar11 = *(code **)(*piVar7 + 0x14);
  uVar10 = *(undefined4 *)(*(int *)(unaff_r5 + 0x104) + 0xc);
  iVar6 = *(int *)(*(int *)pCVar8 + 8);
  iVar9 = *(int *)(*(int *)pCVar8 + 0x10);
  iVar1 = SmDev();
  (*pcVar11)(piVar7,uVar10,iVar6 + iVar9 + *(int *)(iVar4 + iVar1 * 4 + 0x10));
  (**(code **)(**(int **)(unaff_r5 + 0x108) + 0x18))
            (*(int **)(unaff_r5 + 0x108),*(undefined4 *)(*(int *)(unaff_r5 + 0x104) + 0xc),
             *(int *)(*(int *)pCVar12 + 8) + *(int *)(*(int *)pCVar12 + 0x10));
  if (unaff_r6[0x35] == (Character)0x0) {
    Character::getMaxEnergy();
  }
  else {
    unaff_r6[0x35] = (Character)0x0;
    uVar10 = *(undefined4 *)(*(int *)unaff_r6 + DAT_000d28bc);
    iVar1 = Character::getRareValue(unaff_r6);
    __mulsf3(uVar10,*(undefined4 *)
                     ((*(int *)(unaff_r6 + 0x28) - 1U &
                      (int)~(*(int *)(unaff_r6 + 0x28) - 1U) >> 0x1f) * 0xc + iVar1 * 0xe10 +
                     DAT_000d28c0 + 0xd2712));
  }
  uVar10 = __fixsfsi();
  *(undefined4 *)(unaff_r5 + 0x11c) = uVar10;
  CharacterDetails::layout(unaff_r5);
  pCVar8 = unaff_r5 + 0x60;
  uVar5 = (uint)(byte)*pCVar8;
  if (uVar5 != 0) {
    FUN_000d2f52();
    uVar5 = extraout_r1;
  }
  if (unaff_r6[5] == (Character)0x2) {
    uVar5 = (uint)((*(int *)(unaff_r5 + 0x8c) >> 0x1f) - *(int *)(unaff_r5 + 0x8c)) >> 0x1f;
  }
  (**(code **)(*(int *)**(undefined4 **)(pCVar8 + 0xd8) + 0x20))
            ((int *)**(undefined4 **)(pCVar8 + 0xd8),uVar5);
  bVar3 = false;
  if (unaff_r6[5] == (Character)0x2) {
    bVar3 = *(int *)(unaff_r5 + 0x8c) < *(int *)(*(int *)(unaff_r5 + 0x74) + 4);
  }
  (**(code **)(*(int *)**(undefined4 **)(unaff_r5 + 0x13c) + 0x20))
            ((int *)**(undefined4 **)(unaff_r5 + 0x13c),bVar3);
  FUN_000d2f52();
  return;
}


