/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d191c FUN_000d191c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000d191c(void)

{
  int *piVar1;
  int iVar2;
  int unaff_r5;
  Character *unaff_r6;
  code *pcVar3;
  code *pcStack00000014;
  
  piVar1 = *(int **)(unaff_r5 + 0xf4);
  pcStack00000014 = *(code **)(*piVar1 + 0x44);
  Vector<String>::elementAt((int)&stack0x0000033c);
  String::String((String *)&stack0x00000344,(char *)(DAT_000d1c5c + 0xd193e));
  String::operator+((String *)&stack0x0000034c,&stack0x0000033c,&stack0x00000344);
  Vector<String>::elementAt((int)&stack0x00000354);
  String::operator+((String *)&stack0x0000035c,&stack0x0000034c,&stack0x00000354);
  String::String((String *)&stack0x00000364,(char *)(DAT_000d1c60 + 0xd196a));
  String::operator+((String *)&stack0x0000036c,&stack0x0000035c,&stack0x00000364);
  Vector<String>::elementAt((int)&stack0x00000374);
  String::operator+((String *)&stack0x0000037c,&stack0x0000036c,&stack0x00000374);
  String::String((String *)&stack0x00000384,(char *)(DAT_000d1c64 + 0xd1996));
  String::operator+((String *)&stack0x0000038c,&stack0x0000037c,&stack0x00000384);
  Vector<String>::elementAt((int)&stack0x00000394);
  String::operator+((String *)&stack0x0000039c,&stack0x0000038c,&stack0x00000394);
  String::String((String *)&stack0x000003a4,(char *)(DAT_000d1c68 + 0xd19c2));
  String::operator+((String *)&stack0x000003ac,&stack0x0000039c,&stack0x000003a4);
  String::String((String *)&stack0x000003b4,(char *)(DAT_000d1c6c + 0xd19d6));
  String::operator+((String *)&stack0x000003bc,&stack0x000003ac,&stack0x000003b4);
  (*pcStack00000014)(piVar1,&stack0x000003bc);
  String::~String((String *)&stack0x000003bc);
  String::~String((String *)&stack0x000003b4);
  String::~String((String *)&stack0x000003ac);
  String::~String((String *)&stack0x000003a4);
  String::~String((String *)&stack0x0000039c);
  String::~String((String *)&stack0x00000394);
  String::~String((String *)&stack0x0000038c);
  String::~String((String *)&stack0x00000384);
  String::~String((String *)&stack0x0000037c);
  String::~String((String *)&stack0x00000374);
  String::~String((String *)&stack0x0000036c);
  String::~String((String *)&stack0x00000364);
  String::~String((String *)&stack0x0000035c);
  String::~String((String *)&stack0x00000354);
  String::~String((String *)&stack0x0000034c);
  String::~String((String *)&stack0x00000344);
  String::~String((String *)&stack0x0000033c);
  piVar1 = *(int **)(unaff_r5 + 0xfc);
  pcVar3 = *(code **)(*piVar1 + 0x44);
  String::valueOf((int)&stack0x000003c4);
  String::String((String *)&stack0x000003cc,(char *)(DAT_000d1c74 + 0xd1a7c));
  String::operator+((String *)&stack0x000003d4,&stack0x000003c4,&stack0x000003cc);
  Character::getSpeedBaseParam(unaff_r6);
  String::valueOf((int)&stack0x000003dc);
  String::operator+((String *)&stack0x000003e4,&stack0x000003d4,&stack0x000003dc);
  String::String((String *)&stack0x000003ec,(char *)(DAT_000d1c78 + 0xd1aa8));
  String::operator+((String *)&stack0x000003f4,&stack0x000003e4,&stack0x000003ec);
  Character::getAttackBasePower();
  String::valueOf((int)&stack0x000003fc);
  String::operator+((String *)&stack0x00000404,&stack0x000003f4,&stack0x000003fc);
  String::String((String *)&stack0x0000040c,(char *)(DAT_000d1c7c + 0xd1ad8));
  String::operator+((String *)&stack0x00000414,&stack0x00000404,&stack0x0000040c);
  String::valueOf((int)&stack0x0000041c);
  String::operator+((String *)&stack0x00000424,&stack0x00000414,&stack0x0000041c);
  String::String((String *)&stack0x0000042c,(char *)(DAT_000d1c84 + 0xd1b12));
  String::operator+((String *)&stack0x00000434,&stack0x00000424,&stack0x0000042c);
  String::String((String *)&stack0x0000043c,(char *)(DAT_000d1c88 + 0xd1b2e));
  String::operator+((String *)&stack0x00000444,&stack0x00000434,&stack0x0000043c);
  (*pcVar3)(piVar1,&stack0x00000444);
  String::~String((String *)&stack0x00000444);
  String::~String((String *)&stack0x0000043c);
  String::~String((String *)&stack0x00000434);
  String::~String((String *)&stack0x0000042c);
  String::~String((String *)&stack0x00000424);
  String::~String((String *)&stack0x0000041c);
  String::~String((String *)&stack0x00000414);
  String::~String((String *)&stack0x0000040c);
  String::~String((String *)&stack0x00000404);
  String::~String((String *)&stack0x000003fc);
  String::~String((String *)&stack0x000003f4);
  String::~String((String *)&stack0x000003ec);
  String::~String((String *)&stack0x000003e4);
  String::~String((String *)&stack0x000003dc);
  String::~String((String *)&stack0x000003d4);
  String::~String((String *)&stack0x000003cc);
  String::~String((String *)&stack0x000003c4);
  iVar2 = 0;
  do {
    piVar1 = *(int **)(unaff_r5 + iVar2 + 0xb4);
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x14);
  (**(code **)(**(int **)(unaff_r5 + 0xf8) + 0x20))(*(int **)(unaff_r5 + 0xf8),0);
  (**(code **)(**(int **)(unaff_r5 + 0xa4) + 0x20))(*(int **)(unaff_r5 + 0xa4),1);
  (**(code **)(**(int **)(unaff_r5 + 0x9c) + 0x20))(*(int **)(unaff_r5 + 0x9c),0);
  (**(code **)(**(int **)(unaff_r5 + 0x98) + 0x20))(*(int **)(unaff_r5 + 0x98),0);
  (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x20))(*(int **)(unaff_r5 + 0x16c),0);
  (**(code **)(**(int **)(unaff_r5 + 0x170) + 0x20))(*(int **)(unaff_r5 + 0x170),0);
  (**(code **)(**(int **)(unaff_r5 + 0x17c) + 0x20))(*(int **)(unaff_r5 + 0x17c),0);
  (**(code **)(**(int **)(unaff_r5 + 0xa0) + 0x20))(*(int **)(unaff_r5 + 0xa0),0);
  (**(code **)(**(int **)(unaff_r5 + 0x180) + 0x20))(*(int **)(unaff_r5 + 0x180),0);
  String::~String((String *)&stack0x0000006c);
  FUN_000d261a(&stack0x0000004c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


