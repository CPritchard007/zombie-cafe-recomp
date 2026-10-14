/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00246c30 ZombieCafe::saveServerData */

/* ZombieCafe::saveServerData(bool) */

void __thiscall ZombieCafe::saveServerData(ZombieCafe *this,bool param_1)

{
  char *pcVar1;
  ByteArrayOutputStream *this_00;
  uchar *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  char *pcVar5;
  int *piVar6;
  char acStack_11c [256];
  int local_1c;
  
  piVar6 = *(int **)(DAT_00246d18 + 0x246c3c);
  local_1c = *piVar6;
  L_PrintLog((char *)(DAT_00246d20 + 0x246c4a),(char *)(DAT_00246d1c + 0x246c48));
  if ((this == (ZombieCafe *)0x0) || (*(int *)(this + 0x7e8) == 0)) {
    pcVar1 = (char *)(DAT_00246d24 + 0x246c66);
    pcVar5 = (char *)(DAT_00246d28 + 0x246c68);
  }
  else {
    L_PrintLog((char *)(DAT_00246d2c + 0x246c70),(char *)(DAT_00246d30 + 0x246c72));
    this_00 = (ByteArrayOutputStream *)operator_new(0x10);
    ByteArrayOutputStream::ByteArrayOutputStream(this_00);
    serializeServerData(this,(OutputStream *)this_00);
    Cafe::serialize(*(Cafe **)(this + 0x7e8),(OutputStream *)this_00);
    puVar2 = (uchar *)ByteArrayOutputStream::toByteArray(this_00);
    setServerData(this,puVar2);
    uVar3 = ByteArrayOutputStream::size(this_00);
    *(undefined4 *)(this + 0x8c0) = uVar3;
    pvVar4 = (void *)getServerData(this);
    CCAssetManager::writeFile((char *)(DAT_00246d34 + 0x246cba),pvVar4,*(uint *)(this + 0x8c0));
    snprintf(acStack_11c,0x100,(char *)(DAT_00246d38 + 0x246cc6),*(undefined4 *)(this + 0x8c0));
    L_PrintLog((char *)(DAT_00246d3c + 0x246cd4),acStack_11c);
    (**(code **)(*(int *)this_00 + 8))(this_00);
    (**(code **)(*(int *)this_00 + 4))(this_00);
    saveGameState(this,param_1);
    pcVar1 = (char *)(DAT_00246d40 + 0x246cf6);
    pcVar5 = (char *)(DAT_00246d44 + 0x246cf8);
  }
  L_PrintLog(pcVar1,pcVar5);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


