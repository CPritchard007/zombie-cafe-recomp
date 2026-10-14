/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc1e0 BuyToxinDialog::deleteContents */

/* BuyToxinDialog::deleteContents() */

void __thiscall BuyToxinDialog::deleteContents(BuyToxinDialog *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_44;
  int local_28 [5];
  
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 4) + DAT_000bc41c) = 0;
  if (*(GameState **)(this + 0x6c) != (GameState *)0x0) {
    GameState::releaseHandle(*(GameState **)(this + 0x6c));
  }
  iVar1 = 0;
  do {
    if ((*(int *)(this + 0x88) != 0) &&
       (piVar2 = *(int **)(*(int *)(this + 0x88) + iVar1), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x18);
  if (*(void **)(this + 0x88) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x88));
  }
  for (local_44 = 0; local_44 < *(int *)(this + 0xc0) + 1; local_44 = local_44 + 1) {
    piVar4 = (int *)(*(int *)(this + 0xc4) + local_44 * 0x20);
    local_28[0] = piVar4[4];
    local_28[1] = piVar4[5];
    local_28[2] = piVar4[6];
    local_28[3] = piVar4[7];
    piVar3 = (int *)piVar4[3];
    piVar2 = (int *)*piVar4;
    piVar7 = (int *)piVar4[1];
    piVar6 = (int *)piVar4[2];
    piVar5 = (int *)piVar4[7];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2,piVar4 + 8);
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    if ((int *)piVar6[0x19] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[0x19] + 4))();
    }
    (**(code **)(*piVar6 + 4))(piVar6);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    piVar2 = local_28;
    do {
      piVar3 = (int *)*piVar2;
      piVar2 = piVar2 + 1;
      if (piVar3 != (int *)0x0) {
        if ((int *)piVar3[0x19] != (int *)0x0) {
          (**(code **)(*(int *)piVar3[0x19] + 4))();
        }
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    } while (piVar2 != local_28 + 3);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  clearOfferWall(this);
  if (*(int **)(*(int *)(this + 0xdc) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xdc) + 0x60) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xd8) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xd8) + 100) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int *)(this + 0x84) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x84) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
  }
  if (*(int *)(this + 0x80) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x80) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
  }
  if (*(int **)(*(int *)(this + 0x7c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 100) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if ((**(char **)(DAT_000bc420 + 0xbc3a0) != '\0') && (*(int **)(this + 0x9c) != (int *)0x0)) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  return;
}


