/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d14fc Quest::checkCompleteStartGame */

/* Quest::checkCompleteStartGame() */

undefined8 __thiscall Quest::checkCompleteStartGame(Quest *this)

{
  int iVar1;
  int iVar2;
  char *__s;
  int iVar3;
  int *piVar4;
  ZombieCafe *this_00;
  char *__s_00;
  uint local_20;
  
  iVar1 = CapcomApp::getInstance();
  this_00 = *(ZombieCafe **)(iVar1 + 4);
  __s = (char *)(DAT_001d15dc + 0x1d150e);
  local_20 = 0;
  do {
    if (*(int *)(this + 8) + 1U <= local_20) {
      return CONCAT44(__s,local_20);
    }
    if (((*(char *)(*(int *)(local_20 * 4 + *(int *)(this + 0xc)) + 4) == '\x02') &&
        (iVar1 = QuestData::getData(local_20), iVar1 != 0)) &&
       (piVar4 = *(int **)(iVar1 + 0x3c), piVar4 == (int *)0x0)) {
      for (; (int)piVar4 < (int)(uint)(byte)this_00[DAT_001d15e0]; piVar4 = (int *)((int)piVar4 + 1)
          ) {
        iVar1 = 0;
        do {
          iVar3 = iVar1 + (int)piVar4 * 10;
          iVar2 = iVar3 >> 3;
          if (((int)(uint)*(byte *)(*(int *)(this_00 + 0x1c) + iVar2) >>
               (iVar3 + iVar2 * -8 & 0xffU) & 1U) != 0) {
            puts(__s);
            runQuest((int)this,1,piVar4);
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != 10);
      }
      __s_00 = (char *)(DAT_001d15f0 + 0x1d15c2);
      for (piVar4 = (int *)0x0; (int)piVar4 < (int)(uint)*(ushort *)(this_00 + DAT_001d15f4);
          piVar4 = (int *)((int)piVar4 + 1)) {
        iVar1 = *(int *)((int)piVar4 * 4 + *(int *)(this_00 + DAT_001d15e4));
        if (((*(short *)(iVar1 + DAT_001d15e8) != 0) && (*(int *)(iVar1 + 0x560) != 0)) &&
           ((*(int *)(iVar1 + DAT_001d15ec) != 0 &&
            (iVar1 = ZombieCafe::getZukanUnlock(this_00,(int)piVar4), iVar1 == 3)))) {
          puts(__s_00);
          runQuest((int)this,2,piVar4);
        }
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}


