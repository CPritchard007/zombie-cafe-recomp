/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293420 HCOManager::init */

/* HCOManager::init() */

void HCOManager::init(void)

{
  undefined4 *in_r0;
  int iVar1;
  undefined4 uVar2;
  uint in_r3;
  int iVar3;
  
  iVar1 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar1 + 4);
  uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar3 + 0xa00),(void *)(DAT_0029346c + 0x293436),
                            (char *)0x0,in_r3);
  iVar1 = DAT_00293470;
  *in_r0 = uVar2;
  uVar2 = CCOptions::GetUInt(*(CCOptions **)(iVar3 + 0xa00),(void *)(iVar1 + 0x293444),(char *)0x0,
                             in_r3);
  iVar1 = DAT_00293474;
  in_r0[1] = uVar2;
  uVar2 = CCOptions::GetInt(*(CCOptions **)(iVar3 + 0xa00),(void *)(iVar1 + 0x293452),(char *)0x0,
                            in_r3);
  iVar1 = DAT_00293478;
  in_r0[2] = uVar2;
  iVar1 = CCOptions::GetBool(*(CCOptions **)(iVar3 + 0xa00),(void *)(iVar1 + 0x293460),(char *)0x0,
                             in_r3);
  *(char *)(in_r0 + 3) = '\x01' - (iVar1 == 0);
  return;
}


