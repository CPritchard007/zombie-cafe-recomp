/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d4ae4 QuestRecordItem::QuestRecordItem */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001d4b54) */
/* WARNING: Removing unreachable block (ram,0x001d4b54) */
/* QuestRecordItem::QuestRecordItem(QuestDialog*, int) */

void __thiscall
QuestRecordItem::QuestRecordItem(QuestRecordItem *this,QuestDialog *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  String *this_00;
  TrueTypeTextElement *pTVar3;
  Vector<TrueTypeTextElement*> *this_01;
  int iVar4;
  ScreenElement *pSVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_4;
  undefined4 *puVar10;
  
  iVar1 = DAT_001d4de4;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_001d4de4);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_001d4de4);
  iVar8 = DAT_001d4de8 + 0x1d4af2;
  *(int *)(&stack0x00000010 + DAT_001d4de4) = param_2;
  *(undefined4 *)(&stack0x00000278 + DAT_001d4de4) = **(undefined4 **)(iVar8 + DAT_001d4dec);
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  iVar4 = *(int *)(iVar8 + DAT_001d4df0);
  *(QuestDialog **)(this + 0x60) = param_1;
  *(int *)this = iVar4 + 8;
  iVar4 = CapcomApp::getInstance();
  iVar6 = *(int *)(iVar4 + 4);
  iVar4 = *(int *)(iVar6 + 0x40);
  uVar7 = *(undefined4 *)(iVar4 + 0x38);
  uVar2 = __divsi3(*(int *)(iVar4 + 0x28) * 0x19,uVar7);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
  printf((char *)(DAT_001d4df4 + 0x1d4b2e),*(undefined4 *)(&stack0x00000008 + iVar1),uVar7);
  String::String((String *)(&stack0x00000014 + iVar1));
  Vector<String>::elementAt((int)(&stack0x0000001c + iVar1));
  switch(*(undefined4 *)(&stack0x00000008 + iVar1)) {
  case 0:
    Vector<String>::elementAt((int)(&stack0x00000024 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000024 + iVar1);
    this_00 = (String *)(&stack0x00000024 + iVar1);
    break;
  case 1:
    Vector<String>::elementAt((int)(&stack0x0000002c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000002c + iVar1);
    this_00 = (String *)(&stack0x0000002c + iVar1);
    break;
  case 2:
    Vector<String>::elementAt((int)(&stack0x00000034 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000034 + iVar1);
    this_00 = (String *)(&stack0x00000034 + iVar1);
    break;
  case 3:
    Vector<String>::elementAt((int)(&stack0x0000003c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000003c + iVar1);
    this_00 = (String *)(&stack0x0000003c + iVar1);
    break;
  case 4:
    Vector<String>::elementAt((int)(&stack0x00000044 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000044 + iVar1);
    this_00 = (String *)(&stack0x00000044 + iVar1);
    break;
  case 5:
    Vector<String>::elementAt((int)(&stack0x0000004c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000004c + iVar1);
    this_00 = (String *)(&stack0x0000004c + iVar1);
    break;
  case 6:
    Vector<String>::elementAt((int)(&stack0x00000054 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000054 + iVar1);
    this_00 = (String *)(&stack0x00000054 + iVar1);
    break;
  case 7:
    Vector<String>::elementAt((int)(&stack0x0000005c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000005c + iVar1);
    this_00 = (String *)(&stack0x0000005c + iVar1);
    break;
  case 8:
    Vector<String>::elementAt((int)(&stack0x00000064 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000064 + iVar1);
    this_00 = (String *)(&stack0x00000064 + iVar1);
    break;
  case 9:
    Vector<String>::elementAt((int)(&stack0x0000006c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000006c + iVar1);
    this_00 = (String *)(&stack0x0000006c + iVar1);
    break;
  case 10:
    Vector<String>::elementAt((int)(&stack0x00000074 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000074 + iVar1);
    this_00 = (String *)(&stack0x00000074 + iVar1);
    break;
  case 0xb:
    Vector<String>::elementAt((int)(&stack0x0000007c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000007c + iVar1);
    this_00 = (String *)(&stack0x0000007c + iVar1);
    break;
  case 0xc:
    Vector<String>::elementAt((int)(&stack0x00000084 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000084 + iVar1);
    this_00 = (String *)(&stack0x00000084 + iVar1);
    break;
  case 0xd:
    Vector<String>::elementAt((int)(&stack0x0000008c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000008c + iVar1);
    this_00 = (String *)(&stack0x0000008c + iVar1);
    break;
  case 0xe:
    Vector<String>::elementAt((int)(&stack0x00000094 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x00000094 + iVar1);
    this_00 = (String *)(&stack0x00000094 + iVar1);
    break;
  case 0xf:
    Vector<String>::elementAt((int)(&stack0x0000009c + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x0000009c + iVar1);
    this_00 = (String *)(&stack0x0000009c + iVar1);
    break;
  case 0x10:
    Vector<String>::elementAt((int)(&stack0x000000a4 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000a4 + iVar1);
    this_00 = (String *)(&stack0x000000a4 + iVar1);
    break;
  case 0x11:
    Vector<String>::elementAt((int)(&stack0x000000ac + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000ac + iVar1);
    this_00 = (String *)(&stack0x000000ac + iVar1);
    break;
  case 0x12:
    Vector<String>::elementAt((int)(&stack0x000000b4 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000b4 + iVar1);
    this_00 = (String *)(&stack0x000000b4 + iVar1);
    break;
  case 0x13:
    Vector<String>::elementAt((int)(&stack0x000000bc + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000bc + iVar1);
    this_00 = (String *)(&stack0x000000bc + iVar1);
    break;
  case 0x14:
    Vector<String>::elementAt((int)(&stack0x000000c4 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000c4 + iVar1);
    this_00 = (String *)(&stack0x000000c4 + iVar1);
    break;
  case 0x15:
    Vector<String>::elementAt((int)(&stack0x000000cc + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000cc + iVar1);
    this_00 = (String *)(&stack0x000000cc + iVar1);
    break;
  case 0x16:
    Vector<String>::elementAt((int)(&stack0x000000d4 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000d4 + iVar1);
    this_00 = (String *)(&stack0x000000d4 + iVar1);
    break;
  case 0x17:
    Vector<String>::elementAt((int)(&stack0x000000dc + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000dc + iVar1);
    this_00 = (String *)(&stack0x000000dc + iVar1);
    break;
  case 0x18:
    Vector<String>::elementAt((int)(&stack0x000000e4 + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000e4 + iVar1);
    this_00 = (String *)(&stack0x000000e4 + iVar1);
    break;
  default:
    Vector<String>::elementAt((int)(&stack0x000000ec + iVar1));
    String::operator=((String *)(&stack0x00000014 + iVar1),&stack0x000000ec + iVar1);
    this_00 = (String *)(&stack0x000000ec + iVar1);
  }
  String::~String(this_00);
  *(undefined4 *)(&stack0x00000008 + iVar1) = **(undefined4 **)(iVar8 + DAT_001d51f8);
  iVar4 = SmDev();
  uVar2 = FontManager::addFont
                    (*(int *)(&stack0x00000008 + iVar1),
                     SUB41(*(undefined4 *)(DAT_001d51fc + iVar4 * 4 + 0x1d4ec2),0));
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar2;
  String::String((String *)(&stack0x000000f4 + iVar1),(String *)(&stack0x00000014 + iVar1));
  pTVar3 = (TrueTypeTextElement *)operator_new(0xe4);
  *puVar9 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(TrueTypeTextElement **)(&stack0x00000008 + iVar1) = pTVar3;
  TrueTypeTextElement::TrueTypeTextElement
            (pTVar3,&stack0x000000f4 + iVar1,*(undefined4 *)(&stack0x0000000c + iVar1),0xffffffff);
  pSVar5 = *(ScreenElement **)(&stack0x00000008 + iVar1);
  *(ScreenElement **)(this + 0x68) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String((String *)(&stack0x000000f4 + iVar1));
  pTVar3 = *(TrueTypeTextElement **)(this + 0x68);
  this_01 = (Vector<TrueTypeTextElement*> *)**(undefined4 **)(iVar8 + DAT_001d5200);
  *(undefined4 **)(&stack0x00000008 + iVar1) = *(undefined4 **)(iVar8 + DAT_001d5200);
  Vector<TrueTypeTextElement*>::addElement(this_01,pTVar3);
  L_PrintLog((char *)(DAT_001d5204 + 0x1d4eee),(char *)(DAT_001d5208 + 0x1d4ef0));
  sprintf(&stack0x00000178 + iVar1,(char *)(DAT_001d520c + 0x1d4efe),
          *(int *)(**(int **)(&stack0x00000008 + iVar1) + 4) + 1);
  L_PrintLog((char *)(DAT_001d5210 + 0x1d4f0c),&stack0x00000178 + iVar1);
  (**(code **)(**(int **)(this + 0x68) + 0x14))(*(int **)(this + 0x68),0,0);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*(int *)(this + 0x68) + 0x10);
  StringBuffer::StringBuffer((StringBuffer *)(&stack0x0000015c + iVar1));
  Vector<String>::elementAt((int)(&stack0x000000fc + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x000000fc + iVar1);
  String::~String((String *)(&stack0x000000fc + iVar1));
  String::valueOf((int)(&stack0x00000104 + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x00000104 + iVar1);
  String::~String((String *)(&stack0x00000104 + iVar1));
  String::String((String *)(&stack0x0000010c + iVar1),(char *)(DAT_001d5218 + 0x1d4f62));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x0000010c + iVar1);
  String::~String((String *)(&stack0x0000010c + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000114 + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x00000114 + iVar1);
  String::~String((String *)(&stack0x00000114 + iVar1));
  String::valueOf((int)(&stack0x0000011c + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x0000011c + iVar1);
  String::~String((String *)(&stack0x0000011c + iVar1));
  String::String((String *)(&stack0x00000124 + iVar1),(char *)(DAT_001d5220 + 0x1d4fae));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x00000124 + iVar1);
  String::~String((String *)(&stack0x00000124 + iVar1));
  Vector<String>::elementAt((int)(&stack0x0000012c + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x0000012c + iVar1);
  String::~String((String *)(&stack0x0000012c + iVar1));
  String::valueOf((int)(&stack0x00000134 + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x00000134 + iVar1);
  String::~String((String *)(&stack0x00000134 + iVar1));
  String::String((String *)(&stack0x0000013c + iVar1),(char *)(DAT_001d5228 + 0x1d4ffe));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x0000013c + iVar1);
  String::~String((String *)(&stack0x0000013c + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000144 + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x00000144 + iVar1);
  String::~String((String *)(&stack0x00000144 + iVar1));
  String::valueOf((int)(&stack0x0000014c + iVar1));
  StringBuffer::append(&stack0x0000015c + iVar1,&stack0x0000014c + iVar1);
  String::~String((String *)(&stack0x0000014c + iVar1));
  StringBuffer::toString();
  iVar4 = SmDev();
  uVar2 = *(undefined4 *)((*(int *)(DAT_001d5230 + iVar4 * 4 + 0x1d509e) + 0x136) * 4 + iVar6);
  pSVar5 = (ScreenElement *)operator_new(0xc0);
  *puVar10 = 1;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = 9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar5,&stack0x00000154 + iVar1,uVar2,0xffffffff);
  *(ScreenElement **)(this + 100) = pSVar5;
  ScreenElement::addChild((ScreenElement *)this,pSVar5);
  String::~String((String *)(&stack0x00000154 + iVar1));
  iVar6 = *(int *)(&stack0x00000008 + iVar1);
  (**(code **)(**(int **)(this + 100) + 0x14))(*(int **)(this + 100),0,iVar6 + 0x14);
  CapcomLinkedList<String>::~CapcomLinkedList
            ((CapcomLinkedList<String> *)(&stack0x0000015c + iVar1));
  iVar4 = (**(code **)(**(int **)(this + 100) + 0x4c))();
  ScreenElement::setSize
            ((ScreenElement *)this,*(int *)(&stack0x00000010 + iVar1),iVar6 + 0x14 + iVar4);
  String::~String((String *)(&stack0x0000001c + iVar1));
  String::~String((String *)(&stack0x00000014 + iVar1));
  if (*(int *)(&stack0x00000278 + iVar1) != **(int **)(iVar8 + DAT_001d5234)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


