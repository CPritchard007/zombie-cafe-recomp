/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ac20 GameStateCafe::saveServerData */

/* GameStateCafe::saveServerData() */

void __thiscall GameStateCafe::saveServerData(GameStateCafe *this)

{
  ByteArrayOutputStream *this_00;
  uchar *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  ZombieCafe *this_01;
  int *piVar6;
  char acStack_11c [256];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0011acfc + 0x11ac2c);
  pcVar5 = (char *)(DAT_0011ad00 + 0x11ac30);
  local_1c = *piVar6;
  L_PrintLog(pcVar5,pcVar5);
  L_PrintLog((char *)(DAT_0011ad04 + 0x11ac44),(char *)(DAT_0011ad08 + 0x11ac46));
  L_PrintLog(pcVar5,pcVar5);
  this_00 = (ByteArrayOutputStream *)operator_new(0x10);
  ByteArrayOutputStream::ByteArrayOutputStream(this_00);
  ZombieCafe::serializeServerData(*(ZombieCafe **)(this + 0xc),(OutputStream *)this_00);
  Cafe::serialize(*(Cafe **)(this + 0x14),(OutputStream *)this_00);
  this_01 = *(ZombieCafe **)(this + 0xc);
  puVar1 = (uchar *)ByteArrayOutputStream::toByteArray(this_00);
  ZombieCafe::setServerData(this_01,puVar1);
  iVar4 = *(int *)(this + 0xc);
  uVar2 = ByteArrayOutputStream::size(this_00);
  *(undefined4 *)(iVar4 + 0x8c0) = uVar2;
  pvVar3 = (void *)ZombieCafe::getServerData(*(ZombieCafe **)(this + 0xc));
  CCAssetManager::writeFile
            ((char *)(DAT_0011ad0c + 0x11aca0),pvVar3,*(uint *)(*(int *)(this + 0xc) + 0x8c0));
  iVar4 = DAT_0011ad14;
  sprintf(acStack_11c,(char *)(DAT_0011ad10 + 0x11acb0),
          *(undefined4 *)(*(int *)(this + 0xc) + 0x8c0));
  pcVar5 = (char *)(iVar4 + 0x11acb6);
  L_PrintLog(pcVar5,pcVar5);
  L_PrintLog((char *)(DAT_0011ad18 + 0x11acc4),acStack_11c);
  L_PrintLog(pcVar5,pcVar5);
  (**(code **)(*(int *)this_00 + 8))(this_00);
  (**(code **)(*(int *)this_00 + 4))(this_00);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


