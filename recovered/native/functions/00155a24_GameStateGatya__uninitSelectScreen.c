/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00155a24 GameStateGatya::uninitSelectScreen */

/* GameStateGatya::uninitSelectScreen() */

void __thiscall GameStateGatya::uninitSelectScreen(GameStateGatya *this)

{
  int iVar1;
  int *piVar2;
  GameStateGatya *pGVar3;
  int iVar4;
  char acStack_11c [256];
  int local_1c;
  
  iVar1 = DAT_00155d60;
  iVar4 = DAT_00155d58 + 0x155a30;
  local_1c = **(int **)(iVar4 + DAT_00155d5c);
  if (*(int *)(this + DAT_00155d60) != 0) {
    (**(code **)(**(int **)(this + 0x1e8) + 0x34))();
    if (*(int **)(*(int *)(this + iVar1) + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + iVar1) + 0x60) + 4))();
    }
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
    }
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = DAT_00155d64;
  if (*(int *)(this + DAT_00155d64) != 0) {
    (**(code **)(**(int **)(this + 0x1e8) + 0x34))();
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
    }
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = DAT_00155d68;
  if (*(int *)(this + DAT_00155d68) != 0) {
    (**(code **)(**(int **)(this + 0x1e8) + 0x34))();
    if (*(int **)(*(int *)(this + iVar1) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + iVar1) + 100) + 4))();
    }
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
    }
    *(undefined4 *)(this + iVar1) = 0;
  }
  if (*(int *)(this + 0xee0) != 0) {
    (**(code **)(**(int **)(this + 0x1e8) + 0x34))();
    if (*(int **)(this + 0xee0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xee0) + 4))();
    }
    *(undefined4 *)(this + 0xee0) = 0;
  }
  if (*(int *)(this + 0xbc) != 0) {
    (**(code **)(**(int **)(this + 0x1e8) + 0x34))();
    piVar2 = *(int **)(this + 0xbc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(this + 0xbc) = 0;
  }
  if (*(int *)(this + 0x1e8) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1e8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1e8) + 100) + 4))();
    }
    if (*(int **)(this + 0x1e8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1e8) + 4))();
    }
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  if (*(int *)(this + 0x54) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x54) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x54) + 100) + 4))();
    }
    if (*(int **)(this + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x54) + 4))();
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    if (*(int **)(*(int *)(this + 0x58) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x58) + 100) + 4))();
    }
    if (*(int **)(this + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x58) + 4))();
    }
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 100) != 0) {
    (**(code **)(**(int **)(this + 0x5c) + 0x34))();
    if (*(int **)(this + 100) != (int *)0x0) {
      (**(code **)(**(int **)(this + 100) + 4))();
    }
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    if (*(int **)(*(int *)(this + 0x5c) + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x5c) + 0x60) + 4))();
    }
    if (*(int **)(this + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x5c) + 4))();
    }
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    L_PrintLog((char *)(DAT_00155d6c + 0x155bde),(char *)(DAT_00155d70 + 0x155be0));
    piVar2 = *(int **)(iVar4 + DAT_00155d74);
    Vector<CImage*>::removeElement
              ((Vector<CImage*> *)*piVar2,*(CImage **)(*(int *)(this + 0x60) + 100));
    (**(code **)(**(int **)(this + 0x28) + 0x34))
              (*(int **)(this + 0x28),*(undefined4 *)(this + 0x60));
    if (*(int **)(*(int *)(this + 0x60) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x60) + 100) + 4))();
    }
    if (*(int **)(this + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x60) + 4))();
    }
    *(undefined4 *)(this + 0x60) = 0;
    sprintf(acStack_11c,(char *)(DAT_00155d78 + 0x155c24),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00155d7c + 0x155c30),acStack_11c);
  }
  *(undefined4 *)(this + DAT_00155d80) = 0;
  *(undefined4 *)(this + DAT_00155d84) = 0;
  if (*(int *)(this + 0x68) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
    }
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    (**(code **)(**(int **)(this + 0x70) + 0x34))();
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 200) != 0) {
    (**(code **)(**(int **)(this + 0x70) + 0x34))();
    piVar2 = *(int **)(this + 200);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(this + 200) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    if (*(int **)(*(int *)(this + 0x70) + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x70) + 0x60) + 4))();
    }
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x7c) != 0) {
    (**(code **)(**(int **)(this + 0x78) + 0x34))();
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
    }
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x78) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    if (*(int **)(*(int *)(this + 0x78) + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x78) + 0x60) + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x6c) != 0) {
    L_PrintLog((char *)(DAT_00155d88 + 0x155d30),(char *)(DAT_00155d8c + 0x155d32));
    piVar2 = *(int **)(iVar4 + DAT_00155d74);
    Vector<CImage*>::removeElement
              ((Vector<CImage*> *)*piVar2,*(CImage **)(*(int *)(this + 0x6c) + 100));
    (**(code **)(**(int **)(this + 0x28) + 0x34))
              (*(int **)(this + 0x28),*(undefined4 *)(this + 0x6c));
    if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
    }
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
    sprintf(acStack_11c,(char *)(DAT_001560e8 + 0x155db2),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_001560ec + 0x155dbe),acStack_11c);
  }
  *(undefined4 *)(this + 0xec0) = 0;
  *(undefined4 *)(this + DAT_001560f0) = 0;
  if (*(int *)(this + 0x208) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x208) + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x208) + 0x60) + 4))();
    }
    if (*(int **)(this + 0x208) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x208) + 4))();
    }
    *(undefined4 *)(this + 0x208) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    if (*(int **)(*(int *)(this + 0x80) + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x80) + 0x60) + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    if (*(int **)(*(int *)(this + 0x84) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x84) + 100) + 4))();
    }
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
  }
  if (*(int *)(this + 0x90) != 0) {
    (**(code **)(**(int **)(this + 0x8c) + 0x34))();
    piVar2 = *(int **)(this + 0x90);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
  }
  if (*(int *)(this + 0x8c) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0x8c) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x8c) + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
  }
  if (*(int *)(this + 0x98) != 0) {
    (**(code **)(**(int **)(this + 0x94) + 0x34))();
    piVar2 = *(int **)(this + 0x98);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
  if (*(int *)(this + 0x94) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0x94) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x94) + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
  }
  pGVar3 = this + 0x88;
  if (*(int *)pGVar3 != 0) {
    L_PrintLog((char *)(DAT_001560f4 + 0x155f3c),(char *)(DAT_001560f8 + 0x155f3e));
    piVar2 = *(int **)(iVar4 + DAT_001560fc);
    Vector<CImage*>::removeElement((Vector<CImage*> *)*piVar2,*(CImage **)(*(int *)pGVar3 + 100));
    (**(code **)(**(int **)(this + 0x28) + 0x34))(*(int **)(this + 0x28),*(undefined4 *)pGVar3);
    if (*(int **)(*(int *)pGVar3 + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)pGVar3 + 100) + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_00156100 + 0x155f8a),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00156104 + 0x155f96),acStack_11c);
  }
  *(undefined4 *)(this + DAT_00156108) = 0;
  *(undefined4 *)(this + DAT_0015610c) = 0;
  if (*(int *)(this + 0x9c) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0x9c) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9c) + 4))();
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int *)(this + 0xb4) != 0) {
    (**(code **)(**(int **)(this + 0xac) + 0x34))();
    piVar2 = *(int **)(this + 0xb4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(this + 0xb4) = 0;
  }
  if (*(int *)(this + 0xa8) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xa8) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa8) + 4))();
    }
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if (*(int *)(this + 0xac) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xac) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xac) + 4))();
    }
    *(undefined4 *)(this + 0xac) = 0;
  }
  if (*(int *)(this + 0xb0) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xb0) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb0) + 4))();
    }
    *(undefined4 *)(this + 0xb0) = 0;
  }
  if (*(int *)(this + 0xb8) != 0) {
    (**(code **)(**(int **)(this + 0x28) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xb8) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb8) + 4))();
    }
    *(undefined4 *)(this + 0xb8) = 0;
  }
  if (*(int *)(this + 0xa0) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xa0) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa0) + 4))();
    }
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int *)(this + 0xa4) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    piVar2 = *(int **)(*(int *)(this + 0xa4) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xa4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa4) + 4))();
    }
    *(undefined4 *)(this + 0xa4) = 0;
  }
  (**(code **)(**(int **)(this + 0x24) + 0x34))(*(int **)(this + 0x24),*(undefined4 *)(this + 0x28))
  ;
  (**(code **)(**(int **)(this + 0x14) + 0x34))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x24))
  ;
  (**(code **)(**(int **)(this + 0x14) + 0x34))(*(int **)(this + 0x14),*(undefined4 *)(this + 0x2c))
  ;
  this[0xe40] = (GameStateGatya)0x0;
  if (local_1c != **(int **)(iVar4 + DAT_001561bc)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


