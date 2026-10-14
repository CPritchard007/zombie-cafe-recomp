/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029628e FUN_0029628e */

void FUN_0029628e(void)

{
  int iVar1;
  TrueTypeTextElement *pTVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  int *piVar6;
  int *in_stack_00000024;
  int in_stack_0000033c;
  
  String::String((String *)&stack0x00000168,(String *)(*(int *)(unaff_r4 + 0x38) + 0x2c));
  piVar6 = *(int **)(unaff_r5 + 0x18);
  pcVar4 = *(code **)(*piVar6 + 0x2c);
  String::String((String *)&stack0x00000150,(String *)&stack0x00000168);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)(DAT_002964e8 + iVar1 * 4 + 0x2962c0);
  pTVar2 = (TrueTypeTextElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar2,&stack0x00000150,*(undefined4 *)(unaff_r5 + 0x20),uVar5);
  *(TrueTypeTextElement **)(unaff_r5 + 0x30) = pTVar2;
  (*pcVar4)(piVar6,pTVar2);
  String::~String((String *)&stack0x00000150);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*unaff_r6,*(TrueTypeTextElement **)(unaff_r5 + 0x30));
  L_PrintLog((char *)(DAT_002964ec + 0x2962fa),(char *)(DAT_002964f0 + 0x2962fc));
  sprintf(&stack0x0000023c,(char *)(DAT_002964f4 + 0x29630a),*(int *)(*unaff_r6 + 4) + 1);
  L_PrintLog((char *)(DAT_002964f8 + 0x296316),&stack0x0000023c);
  piVar6 = *(int **)(unaff_r5 + 0x30);
  pcVar4 = *(code **)(*piVar6 + 0x14);
  iVar1 = SmDev();
  uVar5 = *(undefined4 *)(DAT_002964fc + iVar1 * 4 + 0x296394);
  iVar1 = SmDev();
  (*pcVar4)(piVar6,uVar5,*(undefined4 *)(iVar1 * 4 + DAT_00296500 + 0x29633e));
  String::String((String *)&stack0x00000184,(String *)(*(int *)(unaff_r4 + 0x38) + 100));
  String::String((String *)&stack0x000001a0,(char *)(DAT_00296504 + 0x296356));
  String::String((String *)&stack0x00000158,(String *)&stack0x00000184);
  iVar1 = operator!=(&stack0x00000158,0);
  String::~String((String *)&stack0x00000158);
  if (iVar1 != 0) {
    iVar1 = SmDev();
    MultiByteString::insertStringNextLine
              ((String *)&stack0x000001a0,(String *)&stack0x00000184,
               *(int *)(DAT_00296508 + iVar1 * 4 + 0x2963a6));
    piVar6 = *(int **)(unaff_r5 + 0x18);
    pcVar4 = *(code **)(*piVar6 + 0x2c);
    String::String((String *)&stack0x00000160,(String *)&stack0x000001a0);
    iVar1 = SmDev();
    uVar5 = *(undefined4 *)(DAT_0029650c + iVar1 * 4 + 0x2963b2);
    pTVar2 = (TrueTypeTextElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar2,&stack0x00000160,*(undefined4 *)(unaff_r5 + 0x1c),uVar5);
    *(TrueTypeTextElement **)(unaff_r5 + 0x34) = pTVar2;
    (*pcVar4)(piVar6,pTVar2);
    String::~String((String *)&stack0x00000160);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*unaff_r6,*(TrueTypeTextElement **)(unaff_r5 + 0x34))
    ;
    L_PrintLog((char *)(DAT_00296510 + 0x2963ea),(char *)(DAT_00296514 + 0x2963ec));
    sprintf(&stack0x0000023c,(char *)(DAT_00296518 + 0x2963fa),*(int *)(*unaff_r6 + 4) + 1);
    L_PrintLog((char *)(DAT_0029651c + 0x296406),&stack0x0000023c);
    piVar6 = *(int **)(unaff_r5 + 0x34);
    pcVar4 = *(code **)(*piVar6 + 0x14);
    iVar1 = SmDev();
    uVar5 = *(undefined4 *)(DAT_00296520 + iVar1 * 4 + 0x296432);
    iVar1 = SmDev();
    uVar5 = __fixsfsi(uVar5);
    uVar3 = __fixsfsi(*(undefined4 *)(&UNK_00296462 + DAT_00296524 + iVar1 * 4));
    (*pcVar4)(piVar6,uVar5,uVar3);
  }
  String::~String((String *)&stack0x000001a0);
  String::~String((String *)&stack0x00000184);
  String::~String((String *)&stack0x00000168);
  if (in_stack_0000033c == *in_stack_00000024) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


