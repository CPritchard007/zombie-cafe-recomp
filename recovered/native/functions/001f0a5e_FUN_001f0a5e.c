/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f0a5e FUN_001f0a5e */

void FUN_001f0a5e(void)

{
  CImage *pCVar1;
  ImageElement *pIVar2;
  int *piVar3;
  int iVar4;
  ScreenElement *pSVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *unaff_r4;
  ScreenElement *unaff_r5;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ZombieCafe *in_stack_00000034;
  undefined4 in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int *in_stack_0000004c;
  undefined4 in_stack_000001d8;
  int in_stack_0000030c;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000348;
  
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001f0);
  if (*(int *)(unaff_r5 + 0xa0) == 1) {
    if (unaff_r5[0x99] != (ScreenElement)0x0) goto LAB_001f0b4e;
    pCVar1 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(in_stack_00000040 + 0x60) + DAT_001f0aec),8,false
                       );
    pIVar2 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar2,pCVar1,'\x14',false);
    *(ImageElement **)(unaff_r5 + 0x6c) = pIVar2;
    ScreenElement::addChild(unaff_r5,(ScreenElement *)pIVar2);
    uVar12 = __mulsf3(*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac),DAT_001f0af0);
    ImageElement::setScale
              (*(ImageElement **)(unaff_r5 + 0x6c),(float)uVar12,(float)((ulonglong)uVar12 >> 0x20))
    ;
    piVar3 = *(int **)(unaff_r5 + 0x6c);
  }
  else {
    if (*(int *)(unaff_r5 + 0xa0) != 2) goto LAB_001f0b4e;
    pCVar1 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(in_stack_00000040 + 0x60) + DAT_001f0ec8),9,false
                       );
    pIVar2 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar2,pCVar1,'\x14',false);
    *(ImageElement **)(unaff_r5 + 0x70) = pIVar2;
    ScreenElement::addChild(unaff_r5,(ScreenElement *)pIVar2);
    uVar12 = __mulsf3(*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac),DAT_001f0ecc);
    ImageElement::setScale
              (*(ImageElement **)(unaff_r5 + 0x70),(float)uVar12,(float)((ulonglong)uVar12 >> 0x20))
    ;
    piVar3 = *(int **)(unaff_r5 + 0x70);
  }
  iVar4 = *(int *)(unaff_r5 + 100);
  (**(code **)(*piVar3 + 0x14))
            (piVar3,*(undefined4 *)(iVar4 + 4),*(int *)(iVar4 + 8) - *(int *)(iVar4 + 0x10));
LAB_001f0b4e:
  if ((*(int *)(unaff_r5 + 0xa0) == 1) && (unaff_r5[0x99] == (ScreenElement)0x0)) {
    CapcomDate::from1970Offset
              ((CapcomDate *)&stack0x000001d4,
               *(ulong *)(*(int *)(in_stack_0000003c + DAT_001f0ed0) + 4));
    CapcomDate::addSeconds((int)&stack0x000001d4);
    CapcomDate::addDays((CapcomDate *)&stack0x000001d4,2);
    StringBuffer::StringBuffer((StringBuffer *)&stack0x000001f0);
    String::valueOf((int)&stack0x0000010c);
    StringBuffer::append(&stack0x000001f0,&stack0x0000010c);
    String::~String((String *)&stack0x0000010c);
    String::String((String *)&stack0x00000114,(char *)(DAT_001f0ed8 + 0x1f0baa));
    StringBuffer::append(&stack0x000001f0,&stack0x00000114);
    String::~String((String *)&stack0x00000114);
    String::valueOf((int)&stack0x0000011c);
    StringBuffer::append(&stack0x000001f0,&stack0x0000011c);
    String::~String((String *)&stack0x0000011c);
    String::String((String *)&stack0x00000124,(char *)(DAT_001f0edc + 0x1f0bda));
    StringBuffer::append(&stack0x000001f0,&stack0x00000124);
    String::~String((String *)&stack0x00000124);
    String::valueOf((int)&stack0x0000012c);
    StringBuffer::append(&stack0x000001f0,&stack0x0000012c);
    String::~String((String *)&stack0x0000012c);
    String::String((String *)&stack0x00000134,(char *)(DAT_001f0ee0 + 0x1f0c0a));
    StringBuffer::append(&stack0x000001f0,&stack0x00000134);
    String::~String((String *)&stack0x00000134);
    if (in_stack_000001d8._1_1_ < 10) {
      String::valueOf((int)&stack0x0000013c);
      StringBuffer::append(&stack0x000001f0,&stack0x0000013c);
      String::~String((String *)&stack0x0000013c);
    }
    String::valueOf((int)&stack0x00000144);
    StringBuffer::append(&stack0x000001f0,&stack0x00000144);
    String::~String((String *)&stack0x00000144);
    String::String((String *)&stack0x0000014c,(char *)(DAT_001f0ee4 + 0x1f0c58));
    StringBuffer::append(&stack0x000001f0,&stack0x0000014c);
    String::~String((String *)&stack0x0000014c);
    StringBuffer::toString();
    pSVar5 = (ScreenElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement
              ((TrueTypeTextElement *)pSVar5,&stack0x00000154,in_stack_00000038,DAT_001f0ee8);
    *(ScreenElement **)(unaff_r5 + 0x84) = pSVar5;
    ScreenElement::addChild(unaff_r5,pSVar5);
    String::~String((String *)&stack0x00000154);
    piVar3 = *(int **)(in_stack_0000003c + DAT_001f0eec);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(unaff_r5 + 0x84));
    L_PrintLog((char *)(DAT_001f0ef0 + 0x1f0cbe),(char *)(DAT_001f0ef4 + 0x1f0cc0));
    sprintf(&stack0x0000020c,(char *)(DAT_001f0ef8 + 0x1f0cce),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_001f0efc + 0x1f0cda),&stack0x0000020c);
    piVar3 = *(int **)(unaff_r5 + 0x84);
    pcVar6 = *(code **)(*piVar3 + 0x14);
    uVar10 = *(undefined4 *)(*(int *)(unaff_r5 + 100) + 0xc);
    iVar4 = SmDev();
    uVar11 = *(undefined4 *)(DAT_001f0f00 + iVar4 * 4 + 0x1f0d50);
    uVar7 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
    iVar4 = SmDev();
    uVar10 = __floatsisf(uVar10);
    uVar11 = __floatsisf(uVar11);
    uVar11 = __mulsf3(uVar11,uVar7);
    __addsf3(uVar10,uVar11);
    uVar10 = __fixsfsi();
    uVar11 = __floatsisf(*(int *)(DAT_001f0f04 + iVar4 * 4 + 0x1f0d7e) + -0x33);
    __mulsf3(uVar11,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
    uVar11 = __fixsfsi();
    (*pcVar6)(piVar3,uVar10,uVar11);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001f0);
  }
  iVar9 = *(int *)(unaff_r5 + 0xac);
  iVar4 = ZombieCafe::getEventRaid2_prizeGetCounts
                    (in_stack_00000034,(int)*(short *)(unaff_r5 + 0x9c));
  pSVar5 = unaff_r5 + 0x99;
  if (iVar9 - iVar4 < 1) {
    FUN_001f17e8();
  }
  if (*pSVar5 != (ScreenElement)0x0) {
    FUN_001f17e8();
  }
  StringBuffer::StringBuffer((StringBuffer *)&stack0x000001d4);
  String::valueOf((int)&stack0x0000015c);
  StringBuffer::append(&stack0x000001d4,&stack0x0000015c);
  String::~String((String *)&stack0x0000015c);
  String::String((String *)&stack0x00000164,(char *)(DAT_001f0f08 + 0x1f0dae));
  StringBuffer::append(&stack0x000001d4,&stack0x00000164);
  String::~String((String *)&stack0x00000164);
  StringBuffer::toString();
  pSVar5 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar5,&stack0x0000016c,in_stack_00000038,0xffffffff);
  *(ScreenElement **)(unaff_r5 + 0x7c) = pSVar5;
  ScreenElement::addChild(unaff_r5,pSVar5);
  String::~String((String *)&stack0x0000016c);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*unaff_r4,*(TrueTypeTextElement **)(unaff_r5 + 0x7c));
  L_PrintLog((char *)(DAT_001f0f0c + 0x1f0e08),(char *)(DAT_001f0f10 + 0x1f0e0a));
  sprintf(&stack0x0000020c,(char *)(DAT_001f0f14 + 0x1f0e18),*(int *)(*unaff_r4 + 4) + 1);
  L_PrintLog((char *)(DAT_001f0f18 + 0x1f0e24),&stack0x0000020c);
  piVar3 = *(int **)(unaff_r5 + 0x7c);
  pcVar6 = *(code **)(*piVar3 + 0x14);
  uVar10 = *(undefined4 *)(*(int *)(unaff_r5 + 100) + 0xc);
  iVar4 = SmDev();
  uVar11 = *(undefined4 *)(DAT_001f0f1c + iVar4 * 4 + 0x1f0e96);
  uVar7 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
  iVar4 = SmDev();
  uVar10 = __floatsisf(uVar10);
  uVar11 = __floatsisf(uVar11);
  uVar11 = __mulsf3(uVar11,uVar7);
  __addsf3(uVar10,uVar11);
  uVar10 = __fixsfsi();
  uVar11 = __floatsisf(*(int *)(DAT_001f0f20 + iVar4 * 4 + 0x1f0ec2) + -0xf);
  __mulsf3(uVar11,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
  uVar11 = __fixsfsi();
  (*pcVar6)(piVar3,uVar10,uVar11);
  StringBuffer::StringBuffer((StringBuffer *)&stack0x000001f0);
  String::String((String *)&stack0x00000174,(char *)(DAT_001f0f24 + 0x1f0ea8));
  StringBuffer::append(&stack0x000001f0,&stack0x00000174);
  String::~String((String *)&stack0x00000174);
  ZombieCafe::getEventRaid2_prizeGetCounts(in_stack_00000034,(int)*(short *)(unaff_r5 + 0x9c));
  String::valueOf((int)&stack0x0000017c);
  StringBuffer::append(&stack0x000001f0,&stack0x0000017c);
  String::~String((String *)&stack0x0000017c);
  String::String((String *)&stack0x00000184,(char *)(DAT_001f122c + 0x1f0f4c));
  StringBuffer::append(&stack0x000001f0,&stack0x00000184);
  String::~String((String *)&stack0x00000184);
  StringBuffer::toString();
  pSVar5 = (ScreenElement *)operator_new(0xe4);
  TrueTypeTextElement::TrueTypeTextElement
            ((TrueTypeTextElement *)pSVar5,&stack0x0000018c,in_stack_00000038,0xffffffff);
  *(ScreenElement **)(unaff_r5 + 0x80) = pSVar5;
  ScreenElement::addChild(unaff_r5,pSVar5);
  String::~String((String *)&stack0x0000018c);
  piVar3 = *(int **)(in_stack_0000003c + DAT_001f1230);
  Vector<TrueTypeTextElement*>::addElement
            ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(unaff_r5 + 0x80));
  L_PrintLog((char *)(DAT_001f1234 + 0x1f0fb0),(char *)(DAT_001f1238 + 0x1f0fb2));
  sprintf(&stack0x0000020c,(char *)(DAT_001f123c + 0x1f0fc0),*(int *)(*piVar3 + 4) + 1);
  L_PrintLog((char *)(DAT_001f1240 + 0x1f0fcc),&stack0x0000020c);
  piVar3 = *(int **)(unaff_r5 + 0x80);
  pcVar6 = *(code **)(*piVar3 + 0x14);
  uVar11 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
  iVar4 = SmDev();
  uVar7 = *(undefined4 *)(DAT_001f1244 + iVar4 * 4 + 0x1f0ff2);
  uVar8 = *(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xa8);
  iVar4 = SmDev();
  uVar10 = __floatsisf(in_stack_00000348);
  uVar11 = __mulsf3(uVar11,DAT_001f1248);
  uVar10 = __subsf3(uVar10,uVar11);
  uVar11 = __floatsisf(uVar7);
  uVar11 = __mulsf3(uVar11,uVar8);
  __subsf3(uVar10,uVar11);
  uVar10 = __fixsfsi();
  uVar11 = __floatsisf(*(int *)(DAT_001f124c + iVar4 * 4 + 0x1f1080) + -0xf);
  __mulsf3(uVar11,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
  uVar11 = __fixsfsi();
  (*pcVar6)(piVar3,uVar10,uVar11);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001f0);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x000001d4);
  iVar4 = SmDev();
  uVar10 = __floatsisf(*(undefined4 *)(&UNK_001f151e + DAT_001f1654 + iVar4 * 4));
  __mulsf3(uVar10,*(undefined4 *)(*(int *)(unaff_r5 + 0x60) + 0xac));
  iVar4 = __fixsfsi();
  ScreenElement::setSize(unaff_r5,in_stack_00000348,iVar4);
  if (in_stack_0000030c != *in_stack_0000004c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(unaff_r5);
  }
                    /* WARNING: Could not recover jumptable at 0x001f1808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


