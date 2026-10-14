/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d3c28 QuestDialog::updateTitle */

/* QuestDialog::updateTitle() */

undefined8 QuestDialog::updateTitle(void)

{
  int in_r0;
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iStack_20;
  undefined4 uStack_1c;
  String aSStack_18 [8];
  
  iStack_20 = in_r0;
  uStack_1c = in_r1;
  puts((char *)(DAT_001d3cdc + 0x1d3c32));
  piVar4 = *(int **)(in_r0 + 0xbc);
  pcVar5 = *(code **)(*piVar4 + 0x44);
  if (*(char *)(*(int *)(in_r0 + 0x8c) + 0x14) == '\0') {
    Vector<String>::elementAt((int)aSStack_18);
    (*pcVar5)(piVar4,aSStack_18);
    String::~String(aSStack_18);
    piVar4 = *(int **)(in_r0 + 0xbc);
    pcVar5 = *(code **)(*piVar4 + 0x14);
    iVar2 = *(int *)(in_r0 + 0xc);
    iVar1 = SmDev();
    iVar3 = DAT_001d3cec + 0x1d3cbe;
  }
  else {
    Vector<String>::elementAt((int)&iStack_20);
    (*pcVar5)(piVar4,(String *)&iStack_20);
    String::~String((String *)&iStack_20);
    piVar4 = *(int **)(in_r0 + 0xbc);
    pcVar5 = *(code **)(*piVar4 + 0x14);
    iVar2 = *(int *)(in_r0 + 0xc);
    iVar1 = SmDev();
    iVar3 = DAT_001d3ce4 + 0x1d3c88;
  }
  (*pcVar5)(piVar4,iVar2 / 2,*(undefined4 *)(iVar1 * 4 + iVar3));
  return CONCAT44(uStack_1c,iStack_20);
}


