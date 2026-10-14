/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d398c QuestItem::~QuestItem */

/* QuestItem::~QuestItem() */

QuestItem * __thiscall QuestItem::~QuestItem(QuestItem *this)

{
  *(int *)this = *(int *)(DAT_001d39a4 + 0x1d3996) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


