/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d61d0 QuestDialog::show */

/* QuestDialog::show() */

void __thiscall QuestDialog::show(QuestDialog *this)

{
  puts((char *)(DAT_001d6200 + 0x1d61da));
  (**(code **)(*(int *)this + 0x20))(this,1);
  clearItemElements(this);
  populateItemElements(this);
  populateRecordItem(this);
  updateTitle();
  return;
}


