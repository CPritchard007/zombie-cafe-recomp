/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0f4c Quest::serialize */

/* Quest::serialize(DataOutputStream*) */

void __thiscall Quest::serialize(Quest *this,DataOutputStream *param_1)

{
  int iVar1;
  
  printf((char *)(DAT_001d0fd4 + 0x1d0f5c),*(int *)(this + 8) + 1);
  DataOutputStream::writeInt((int)param_1);
  for (iVar1 = 0; iVar1 < *(int *)(this + 8) + 1; iVar1 = iVar1 + 1) {
    QuestState::serialize(*(DataOutputStream **)(iVar1 * 4 + *(int *)(this + 0xc)));
  }
  printf((char *)(DAT_001d0fd8 + 0x1d0f8e),*(int *)(this + 0x14) + 1);
  DataOutputStream::writeInt((int)param_1);
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x14) + 1; iVar1 = iVar1 + 1) {
    ActiveQuest::serialize(*(DataOutputStream **)(iVar1 * 4 + *(int *)(this + 0x18)));
  }
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  return;
}


