/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1890 Quest::Quest */

/* Quest::Quest() */

Quest * __thiscall Quest::Quest(Quest *this)

{
  void *__s;
  Vector<ActiveQuest*> *pVVar1;
  int iVar2;
  int iVar3;
  
  *(int *)this = *(int *)(DAT_001d1960 + 0x1d189c) + 8;
  *(undefined4 *)(this + 4) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0xc) = __s;
  memset(__s,0,*(int *)(this + 4) << 2);
  *(undefined4 *)(this + 8) = 0xffffffff;
  Vector<ActiveQuest*>::Vector((Vector<ActiveQuest*> *)(this + 0x10));
  Vector<ActiveQuest*>::Vector((Vector<ActiveQuest*> *)(this + 0x1c));
  puts((char *)(DAT_001d1964 + 0x1d18d4));
  iVar3 = DAT_001d1968;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  iVar3 = (int)**(short **)(iVar3 + 0x1d18e0);
  if (*(int *)(this + 4) < iVar3) {
    iVar2 = *(int *)(this + 4) * 2;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    Vector<QuestState*>::resize((Vector<QuestState*> *)(this + 4),iVar2,-1);
  }
  pVVar1 = (Vector<ActiveQuest*> *)operator_new(0xc);
  Vector<ActiveQuest*>::Vector(pVVar1);
  *(Vector<ActiveQuest*> **)(this + 0x44) = pVVar1;
  pVVar1 = (Vector<ActiveQuest*> *)operator_new(0xc);
  Vector<ActiveQuest*>::Vector(pVVar1);
  *(Vector<ActiveQuest*> **)(this + 0x48) = pVVar1;
  pVVar1 = (Vector<ActiveQuest*> *)operator_new(0xc);
  Vector<ActiveQuest*>::Vector(pVVar1);
  *(Vector<ActiveQuest*> **)(this + 0x4c) = pVVar1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return this;
}


