/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024f50c ZombieCafe::makeForUserData */

/* ZombieCafe::makeForUserData(InputStream*, bool, int, int) */

ZombieCafe * __thiscall
ZombieCafe::makeForUserData
          (ZombieCafe *this,InputStream *param_1,bool param_2,int param_3,int param_4)

{
  byte bVar1;
  ZombieCafe ZVar2;
  int iVar3;
  ZombieCafe *this_00;
  void *pvVar4;
  undefined4 *puVar5;
  TutorialSystem *this_01;
  ObjectiveSystem *this_02;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  String *local_28;
  
  if (param_1 == (InputStream *)0x0) {
    this_00 = (ZombieCafe *)0x0;
  }
  else {
    this_00 = (ZombieCafe *)operator_new(DAT_0024f6ac);
    ZombieCafe(this_00,true);
    pbVar7 = *(byte **)(DAT_0024f6b4 + 0x24f536);
    *(undefined2 *)(this_00 + DAT_0024f6b0) = *(undefined2 *)(this + DAT_0024f6b0);
    bVar1 = *pbVar7;
    *(undefined4 *)(this_00 + DAT_0024f6b8) = *(undefined4 *)(this + DAT_0024f6b8);
    pvVar4 = operator_new__((uint)bVar1 << 2);
    *(void **)(this_00 + DAT_0024f6bc) = pvVar4;
    pvVar4 = operator_new__((uint)**(byte **)(DAT_0024f6c0 + 0x24f550) << 2);
    *(void **)(this_00 + 0x698) = pvVar4;
    pvVar4 = operator_new__(**(int **)(DAT_0024f6c4 + 0x24f564) << 2);
    *(void **)(this_00 + DAT_0024f6c8) = pvVar4;
    pvVar4 = operator_new__((uint)*pbVar7);
    uVar8 = (uint)*pbVar7;
    *(void **)(this_00 + DAT_0024f6cc) = pvVar4;
    puVar5 = (undefined4 *)operator_new__((uVar8 + 1) * 8);
    puVar5[1] = uVar8;
    *puVar5 = 8;
    local_28 = (String *)(puVar5 + 2);
    while (uVar8 = uVar8 - 1, uVar8 != 0xffffffff) {
      String::String(local_28);
      local_28 = local_28 + 8;
    }
    *(String **)(this_00 + 0x6a0) = (String *)(puVar5 + 2);
    this_01 = (TutorialSystem *)operator_new(DAT_0024f6d0);
    TutorialSystem::TutorialSystem(this_01,this);
    iVar6 = DAT_0024f6d8;
    *(TutorialSystem **)(this_00 + DAT_0024f6d4) = this_01;
    ZVar2 = this[iVar6];
    this_00[iVar6] = ZVar2;
    *(int *)(this_00 + 0x18) = (int)((uint)(byte)ZVar2 * 10 + 7) >> 3;
    pvVar4 = operator_new__(*(uint *)(this + 0x18));
    *(void **)(this_00 + 0x1c) = pvVar4;
    memset(pvVar4,0,*(size_t *)(this_00 + 0x18));
    L_PrintLog((char *)(DAT_0024f6dc + 0x24f5ec),(char *)(DAT_0024f6e0 + 0x24f5ee));
    this_02 = (ObjectiveSystem *)operator_new(0x20);
    ObjectiveSystem::ObjectiveSystem(this_02);
    iVar3 = DAT_0024f6e8;
    iVar6 = DAT_0024f6e4;
    *(ObjectiveSystem **)(this_00 + DAT_0024f6e4) = this_02;
    pcVar9 = (char *)(DAT_0024f6ec + 0x24f60a);
    L_PrintLog(pcVar9,(char *)(iVar3 + 0x24f608));
    ObjectiveSystem::clear(*(ObjectiveSystem **)(this_00 + iVar6));
    L_PrintLog(pcVar9,(char *)(DAT_0024f6f0 + 0x24f61c));
    iVar6 = deserializeServerData(this_00,param_1,param_3,param_4);
    if (iVar6 == 0) {
      L_PrintLog(pcVar9,(char *)(DAT_0024f6f4 + 0x24f636));
      (**(code **)(*(int *)this_00 + 4))(this_00);
      this_00 = (ZombieCafe *)0x0;
    }
    else {
      L_PrintLog(pcVar9,(char *)(DAT_0024f6f8 + 0x24f64c));
      if ((param_2) && (iVar6 = Cafe::deserialize(param_1,false,this_00), iVar6 == 0)) {
        (**(code **)(*(int *)this_00 + 4))(this_00);
        this_00 = (ZombieCafe *)0x0;
      }
    }
  }
  return this_00;
}


