/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0c24 JSONTakeOverData::parseSetTransfer */

/* JSONTakeOverData::parseSetTransfer(int, char*, char*, char*, char*) */

void __thiscall
JSONTakeOverData::parseSetTransfer
          (JSONTakeOverData *this,int param_1,char *param_2,char *param_3,char *param_4,
          char *param_5)

{
  int *piVar1;
  
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete(*(void **)(this + 4));
  }
  piVar1 = (int *)operator_new(DAT_001d0c78);
  *(int **)(this + 4) = piVar1;
  *piVar1 = param_1;
  strcpy((char *)(*(int *)(this + 4) + 4),param_2);
  strcpy((char *)(*(int *)(this + 4) + 0x84),param_3);
  if (**(int **)(this + 4) < 200) {
    strcpy((char *)((int)*(int **)(this + 4) + DAT_001d0c7c),param_4);
    strcpy((char *)(*(int *)(this + 4) + DAT_001d0c80),param_5);
  }
  return;
}


