/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8a7c CharacterInstance::getCurrentStateText */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000c8a9e) */
/* WARNING: Removing unreachable block (ram,0x000c8a9e) */
/* CharacterInstance::getCurrentStateText() */

String * CharacterInstance::getCurrentStateText(void)

{
  String *in_r0;
  int iVar1;
  int *piVar2;
  int in_r1;
  int iVar3;
  int iVar4;
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar1 = CapcomApp::getInstance();
  iVar4 = *(int *)(iVar1 + 4);
  iVar1 = DAT_000c8b98 + 0xc8a9a;
  switch(*(undefined1 *)(*(int *)(in_r1 + 0x8c) + 0x44)) {
  case 1:
    iVar3 = *(int *)(iVar4 + 0x4b0);
    iVar4 = DAT_000c8b9c;
    break;
  case 2:
    iVar3 = *(int *)(iVar4 + 0x4b0);
    iVar4 = DAT_000c8ba0;
    break;
  case 3:
    iVar3 = *(int *)(iVar4 + 0x4b0);
    iVar4 = DAT_000c8ba4;
    break;
  case 4:
    iVar3 = *(int *)(iVar4 + 0x4b0);
    iVar4 = DAT_000c8ba8;
    break;
  case 5:
    iVar3 = *(int *)(iVar4 + 0x4b0);
    iVar4 = DAT_000c8bac;
    break;
  case 6:
    if (*(int *)(in_r1 + 0x7c) != 0) {
      StringBuffer::StringBuffer(aSStack_34);
      String::String(aSStack_4c,
                     (String *)
                     (*(int *)(*(int *)(iVar4 + 0x4b0) + 8) + **(int **)(iVar1 + DAT_000c8bb0) * 8))
      ;
      StringBuffer::append(aSStack_34,aSStack_4c);
      String::~String(aSStack_4c);
      String::String(aSStack_44,(char *)(DAT_000c8bb4 + 0xc8b24));
      StringBuffer::append(aSStack_34,aSStack_44);
      String::~String(aSStack_44);
      piVar2 = (int *)CapcomLinkedList<Task*>::get((CapcomLinkedList<Task*> *)(in_r1 + 0x6c),0);
      (**(code **)(*piVar2 + 0x20))(aSStack_3c,piVar2);
      StringBuffer::append(aSStack_34,aSStack_3c);
      String::~String(aSStack_3c);
      StringBuffer::toString();
      CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
      return in_r0;
    }
  default:
    String::String(in_r0,0);
    return in_r0;
  }
  String::String(in_r0,(String *)(*(int *)(iVar3 + 8) + **(int **)(iVar1 + iVar4) * 8));
  return in_r0;
}


