/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ead38 FUN_002ead38 */

undefined4 * FUN_002ead38(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *param_1 + 7 & 0xfffffff8;
  *param_1 = uVar2;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_002ead84 + 0x2ead4e));
  iVar1 = (uVar2 - 1 >> 3) * 4;
  puVar3 = *(undefined4 **)(iVar1 + DAT_002ead88 + 0x2ead58);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_002eacec(*param_1);
  }
  else {
    *(undefined4 *)(iVar1 + DAT_002ead88 + 0x2ead58) = *puVar3;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(DAT_002ead8c + 0x2ead68));
  return puVar3;
}


