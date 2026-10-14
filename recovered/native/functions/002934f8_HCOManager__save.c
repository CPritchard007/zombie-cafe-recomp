/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002934f8 HCOManager::save */

/* HCOManager::save() */

void HCOManager::save(void)

{
  undefined4 *in_r0;
  int iVar1;
  uint in_r3;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  CCOptions::SetInt(*(CCOptions **)(iVar1 + 0xa00),(void *)(DAT_00293538 + 0x293510),(char *)*in_r0,
                    in_r3);
  CCOptions::SetUInt(*(CCOptions **)(iVar1 + 0xa00),(void *)(DAT_0029353c + 0x29351c),
                     (char *)in_r0[1],in_r3);
  CCOptions::SetInt(*(CCOptions **)(iVar1 + 0xa00),(void *)(DAT_00293540 + 0x293528),
                    (char *)in_r0[2],in_r3);
  CCOptions::SetBool(*(CCOptions **)(iVar1 + 0xa00),(void *)(DAT_00293544 + 0x293534),
                     (char *)(uint)*(byte *)(in_r0 + 3),in_r3);
  return;
}


