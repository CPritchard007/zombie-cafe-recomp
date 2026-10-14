/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011aba0 GameStateCafe::showEnemyCafeDialog */

/* GameStateCafe::showEnemyCafeDialog(int) */

void GameStateCafe::showEnemyCafeDialog(int param_1)

{
  EnemyCafeDialog *this;
  int *piVar1;
  int in_r1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_1 + 0x98);
  if ((EnemyCafeDialog *)*puVar5 == (EnemyCafeDialog *)0x0) {
    this = (EnemyCafeDialog *)operator_new(0x8c);
    EnemyCafeDialog::EnemyCafeDialog(this,in_r1);
    *puVar5 = this;
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
    (**(code **)(*(int *)this + 0x14))
              (this,(iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1,(int)(short)iVar3 / 2);
    (**(code **)(*(int *)*puVar5 + 0x1c))((int *)*puVar5,0x12);
    ScreenElement::setOrder((ScreenElement *)*puVar5,(int)**(char **)(DAT_0011ac1c + 0x11abf2));
    piVar1 = *(int **)(param_1 + 0x78);
    uVar2 = *puVar5;
    pcVar4 = *(code **)(*piVar1 + 0x2c);
  }
  else {
    EnemyCafeDialog::setEnemyLevel((EnemyCafeDialog *)*puVar5,in_r1);
    piVar1 = (int *)*puVar5;
    uVar2 = 1;
    pcVar4 = *(code **)(*piVar1 + 0x20);
  }
  (*pcVar4)(piVar1,uVar2);
  return;
}


