/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f10f4 EnemyCafeDialog::setEnemyLevel */

/* EnemyCafeDialog::setEnemyLevel(int) */

void __thiscall EnemyCafeDialog::setEnemyLevel(EnemyCafeDialog *this,int param_1)

{
  *(int *)(this + 0x60) = param_1;
  setEnemyImage(this,param_1);
  return;
}


