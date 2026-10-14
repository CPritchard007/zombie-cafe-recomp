/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d39a8 QuestItem::~QuestItem */

/* QuestItem::~QuestItem() */

QuestItem * __thiscall QuestItem::~QuestItem(QuestItem *this)

{
  ~QuestItem(this);
  operator_delete(this);
  return this;
}


