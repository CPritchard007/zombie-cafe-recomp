/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f17e8 FUN_001f17e8 */

void FUN_001f17e8(void)

{
  ScreenElement *pSVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *in_r3;
  int iVar8;
  int *unaff_r4;
  ScreenElement *unaff_r5;
  int *piVar9;
  int *piVar10;
  undefined4 in_stack_00000038;
  int in_stack_0000003c;
  undefined4 in_stack_00000044;
  int *in_stack_0000004c;
  int in_stack_0000030c;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000348;
  
  piVar10 = *(int **)(in_stack_0000003c + DAT_001f180c);
  if (*in_r3 == '\0') {
    StringBuffer::StringBuffer((StringBuffer *)&stack0x000001d4);
    String::String((String *)&stack0x000001b4,(char *)(DAT_001f1618 + 0x1f129a));
    StringBuffer::append(&stack0x000001d4,&stack0x000001b4);
    String::~String((String *)&stack0x000001b4);
    StringBuffer::toString();
    pSVar1 = (ScreenElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar1,&stack0x000001bc,in_stack_00000044,0xffffffff);
    *(ScreenElement **)(unaff_r5 + 0x7c) = pSVar1;
    ScreenElement::addChild(unaff_r5,pSVar1);
    String::~String((String *)&stack0x000001bc);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*unaff_r4,*(TrueTypeTextElement **)(unaff_r5 + 0x7c))
    ;
    L_PrintLog((char *)(DAT_001f161c + 0x1f12f4),(char *)(DAT_001f1620 + 0x1f12f6));
    sprintf(&stack0x0000020c,(char *)(DAT_001f1624 + 0x1f1304),*(int *)(*unaff_r4 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1628 + 0x1f1310),&stack0x0000020c);
    piVar9 = *(int **)(unaff_r5 + 0x7c);
    pcVar3 = *(code **)(*piVar9 + 0x14);
    uVar4 = *(undefined4 *)(*(int *)(unaff_r5 + 100) + 0xc);
    iVar2 = SmDev();
    uVar5 = *(undefined4 *)(DAT_001f162c + iVar2 * 4 + 0x1f1384);
    uVar6 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
    iVar2 = SmDev();
    uVar4 = __floatsisf(uVar4);
    uVar5 = __floatsisf(uVar5);
    uVar5 = __mulsf3(uVar5,uVar6);
    __addsf3(uVar4,uVar5);
    uVar4 = __fixsfsi();
    uVar5 = __floatsisf(*(int *)(DAT_001f1630 + iVar2 * 4 + 0x1f13b0) + -0xf);
    __mulsf3(uVar5,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
    uVar5 = __fixsfsi();
    (*pcVar3)(piVar9,uVar4,uVar5);
    StringBuffer::StringBuffer((StringBuffer *)&stack0x000001f0);
    String::String((String *)&stack0x000001c4,(char *)(DAT_001f1634 + 0x1f1398));
    StringBuffer::append(&stack0x000001f0,&stack0x000001c4);
    String::~String((String *)&stack0x000001c4);
    StringBuffer::toString();
    pSVar1 = (ScreenElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar1,&stack0x000001cc,in_stack_00000038,0xffffffff);
    *(ScreenElement **)(unaff_r5 + 0x80) = pSVar1;
    ScreenElement::addChild(unaff_r5,pSVar1);
    String::~String((String *)&stack0x000001cc);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*unaff_r4,*(TrueTypeTextElement **)(unaff_r5 + 0x80))
    ;
    L_PrintLog((char *)(DAT_001f1638 + 0x1f13f6),(char *)(DAT_001f163c + 0x1f13f8));
    sprintf(&stack0x0000020c,(char *)(DAT_001f1640 + 0x1f1406),*(int *)(*piVar10 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1644 + 0x1f1412),&stack0x0000020c);
    piVar10 = *(int **)(unaff_r5 + 0x80);
    pcVar3 = *(code **)(*piVar10 + 0x14);
    uVar5 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
    iVar2 = SmDev();
    uVar6 = *(undefined4 *)(DAT_001f1648 + iVar2 * 4 + 0x1f1438);
    uVar7 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
    iVar2 = SmDev();
    uVar4 = __floatsisf(in_stack_00000348);
    uVar5 = __mulsf3(uVar5,DAT_001f164c);
    uVar4 = __subsf3(uVar4,uVar5);
    uVar5 = __floatsisf(uVar6);
    uVar5 = __mulsf3(uVar5,uVar7);
    __subsf3(uVar4,uVar5);
    uVar4 = __fixsfsi();
    uVar5 = __floatsisf(*(int *)(DAT_001f1650 + iVar2 * 4 + 0x1f14c6) + -0xf);
    __mulsf3(uVar5,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
    uVar5 = __fixsfsi();
    (*pcVar3)(piVar10,uVar4,uVar5);
    (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),0);
    piVar10 = *(int **)(unaff_r5 + 0x84);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0x20))(piVar10,0);
    }
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001f0);
  }
  else {
    StringBuffer::StringBuffer((StringBuffer *)&stack0x000001d4);
    String::String((String *)&stack0x00000194,(char *)(DAT_001f1250 + 0x1f1070));
    StringBuffer::append(&stack0x000001d4,&stack0x00000194);
    String::~String((String *)&stack0x00000194);
    StringBuffer::toString();
    pSVar1 = (ScreenElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar1,&stack0x0000019c,in_stack_00000044,DAT_001f1254);
    *(ScreenElement **)(unaff_r5 + 0x7c) = pSVar1;
    ScreenElement::addChild(unaff_r5,pSVar1);
    String::~String((String *)&stack0x0000019c);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*unaff_r4,*(TrueTypeTextElement **)(unaff_r5 + 0x7c))
    ;
    L_PrintLog((char *)(DAT_001f1258 + 0x1f10c8),(char *)(DAT_001f125c + 0x1f10ca));
    sprintf(&stack0x0000020c,(char *)(DAT_001f1260 + 0x1f10d8),*(int *)(*unaff_r4 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1264 + 0x1f10e4),&stack0x0000020c);
    piVar9 = *(int **)(unaff_r5 + 0x7c);
    pcVar3 = *(code **)(*piVar9 + 0x14);
    uVar4 = *(undefined4 *)(*(int *)(unaff_r5 + 100) + 0xc);
    iVar2 = SmDev();
    uVar5 = *(undefined4 *)(DAT_001f1268 + iVar2 * 4 + 0x1f1158);
    uVar6 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
    iVar2 = SmDev();
    uVar4 = __floatsisf(uVar4);
    uVar5 = __floatsisf(uVar5);
    uVar5 = __mulsf3(uVar5,uVar6);
    __addsf3(uVar4,uVar5);
    uVar4 = __fixsfsi();
    uVar5 = __floatsisf(*(int *)(DAT_001f126c + iVar2 * 4 + 0x1f1184) + -0xf);
    __mulsf3(uVar5,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
    uVar5 = __fixsfsi();
    (*pcVar3)(piVar9,uVar4,uVar5);
    StringBuffer::StringBuffer((StringBuffer *)&stack0x000001f0);
    String::String((String *)&stack0x000001a4,(char *)(DAT_001f1270 + 0x1f116c));
    StringBuffer::append(&stack0x000001f0,&stack0x000001a4);
    String::~String((String *)&stack0x000001a4);
    StringBuffer::toString();
    pSVar1 = (ScreenElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar1,&stack0x000001ac,in_stack_00000038,0xffffffff);
    *(ScreenElement **)(unaff_r5 + 0x80) = pSVar1;
    ScreenElement::addChild(unaff_r5,pSVar1);
    String::~String((String *)&stack0x000001ac);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*unaff_r4,*(TrueTypeTextElement **)(unaff_r5 + 0x80))
    ;
    L_PrintLog((char *)(DAT_001f1274 + 0x1f11ca),(char *)(DAT_001f1278 + 0x1f11cc));
    sprintf(&stack0x0000020c,(char *)(DAT_001f127c + 0x1f11da),*(int *)(*piVar10 + 4) + 1);
    L_PrintLog((char *)(DAT_001f1280 + 0x1f11e6),&stack0x0000020c);
    piVar10 = *(int **)(unaff_r5 + 0x80);
    pcVar3 = *(code **)(*piVar10 + 0x14);
    iVar2 = SmDev();
    iVar8 = *(int *)(DAT_001f1284 + iVar2 * 4 + 0x1f1204);
    iVar2 = SmDev();
    (*pcVar3)(piVar10,(in_stack_00000348 + -0xa9) - iVar8,
              *(int *)((int)&DAT_001f1254 + DAT_001f1288 + iVar2 * 4) + -0xf);
    (**(code **)(**(int **)(unaff_r5 + 0x80) + 0x20))(*(int **)(unaff_r5 + 0x80),0);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001f0);
  }
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001d4);
  iVar2 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(&UNK_001f151e + DAT_001f1654 + iVar2 * 4));
  __mulsf3(uVar4,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
  iVar2 = __fixsfsi();
  ScreenElement::setSize(unaff_r5,in_stack_00000348,iVar2);
  if (in_stack_0000030c == *in_stack_0000004c) {
                    /* WARNING: Could not recover jumptable at 0x001f1808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_r5);
}


