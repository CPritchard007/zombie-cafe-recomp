/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026ef98 sqlite3_errmsg16 */

undefined8 sqlite3_errmsg16(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar1 = DAT_0026f014 + 0x26f04a;
  }
  else {
    iVar4 = param_1;
    iVar1 = FUN_0026bcbc(param_1);
    if (iVar1 == 0) {
      iVar1 = DAT_0026f018 + 0x26f06e;
      param_1 = iVar4;
    }
    else {
      sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
      if (*(char *)(param_1 + 0x36) == '\0') {
        puVar3 = (undefined4 *)(param_1 + 0xd0);
        iVar1 = sqlite3_value_text16(*puVar3);
        if (iVar1 == 0) {
          uVar2 = FUN_0026311c(*(undefined4 *)(param_1 + 0x2c));
          FUN_00265900(*puVar3,0xffffffff,uVar2,1,0,param_2);
          iVar4 = iVar1;
          iVar1 = sqlite3_value_text16(*puVar3);
        }
        *(undefined1 *)(param_1 + 0x36) = 0;
      }
      else {
        iVar1 = DAT_0026f010 + 0x26f03c;
      }
      sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
      param_1 = iVar4;
    }
  }
  return CONCAT44(param_1,iVar1);
}


