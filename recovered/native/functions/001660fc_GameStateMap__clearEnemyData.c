/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001660fc GameStateMap::clearEnemyData */

/* GameStateMap::clearEnemyData(int) */

void GameStateMap::clearEnemyData(int param_1)

{
  int iVar1;
  SaveDataOutputStream *pSVar2;
  int *piVar3;
  String aSStack_4 [4];
  
  iVar1 = DAT_001661ec;
  piVar3 = *(int **)(DAT_001661f4 + 0x166110);
  *(int *)(&stack0x00000204 + DAT_001661ec) = *piVar3;
  L_PrintLog((char *)(DAT_001661f8 + 0x166114),(char *)(DAT_001661f0 + 0x16610e));
  sprintf(&stack0x00000004 + iVar1,(char *)(DAT_001661fc + 0x166126),param_1);
  String::String((String *)(&stack0xfffffff4 + iVar1),&stack0x00000004 + iVar1);
  pSVar2 = (SaveDataOutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream(pSVar2,&stack0xfffffff4 + iVar1);
  String::~String((String *)(&stack0xfffffff4 + iVar1));
  (**(code **)(*(int *)pSVar2 + 0x10))(pSVar2,0);
  (**(code **)(*(int *)pSVar2 + 0x10))(pSVar2,0);
  (**(code **)(*(int *)pSVar2 + 8))(pSVar2);
  (**(code **)(*(int *)pSVar2 + 4))(pSVar2);
  sprintf(&stack0x00000104 + iVar1,(char *)(DAT_00166200 + 0x166172),param_1);
  String::String(aSStack_4 + iVar1,&stack0x00000104 + iVar1);
  pSVar2 = (SaveDataOutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream(pSVar2,aSStack_4 + iVar1);
  String::~String(aSStack_4 + iVar1);
  (**(code **)(*(int *)pSVar2 + 0x10))(pSVar2,0);
  (**(code **)(*(int *)pSVar2 + 0x10))(pSVar2,0);
  (**(code **)(*(int *)pSVar2 + 8))(pSVar2);
  (**(code **)(*(int *)pSVar2 + 4))(pSVar2);
  if (*(int *)(&stack0x00000204 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


