/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002303a4 TutorialSystem::serialize */

/* TutorialSystem::serialize(DataOutputStream*) */

void __thiscall TutorialSystem::serialize(TutorialSystem *this,DataOutputStream *param_1)

{
  int iVar1;
  int iVar2;
  
  DataOutputStream::writeShort((short)param_1);
  iVar1 = DAT_002303c8;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 0x14;
    DataOutputStream::writeByte((uchar)param_1);
  } while (iVar2 != iVar1);
  return;
}


