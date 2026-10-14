/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d5298 QuestDialog::populateRecordItem */

/* QuestDialog::populateRecordItem() */

void __thiscall QuestDialog::populateRecordItem(QuestDialog *this)

{
  QuestRecordItem *this_00;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puts((char *)(DAT_001d5310 + 0x1d52a2));
  iVar3 = *(int *)(*(int *)(this + 0x9c) + 0xc);
  this_00 = (QuestRecordItem *)operator_new(0x6c);
  QuestRecordItem::QuestRecordItem(this_00,this,iVar3);
  (**(code **)(*(int *)this_00 + 0x14))(this_00,0,0);
  puVar1 = (undefined4 *)operator_new(8);
  puVar1[1] = 0;
  *(undefined4 **)(*(int *)(this + 0xa8) + 4) = puVar1;
  *(undefined4 **)(this + 0xa8) = puVar1;
  *puVar1 = this_00;
  *(undefined4 *)(*(int *)(this + 0xa8) + 4) = 0;
  *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
  piVar2 = *(int **)(this + 0x9c);
  (**(code **)(*piVar2 + 0x2c))(piVar2,this_00);
  piVar2 = *(int **)(this + 0x9c);
  (**(code **)(*piVar2 + 0x18))(piVar2,piVar2[3],*(undefined4 *)(this + 8));
  return;
}


