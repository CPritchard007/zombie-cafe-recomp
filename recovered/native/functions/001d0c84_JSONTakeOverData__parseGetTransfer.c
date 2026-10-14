/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0c84 JSONTakeOverData::parseGetTransfer */

/* JSONTakeOverData::parseGetTransfer(int, char*, char*, char*) */

void __thiscall
JSONTakeOverData::parseGetTransfer
          (JSONTakeOverData *this,int param_1,char *param_2,char *param_3,char *param_4)

{
  int *piVar1;
  
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete(*(void **)(this + 4));
  }
  piVar1 = (int *)operator_new(DAT_001d0ccc);
  *(int **)this = piVar1;
  *piVar1 = param_1;
  strcpy((char *)(*(int *)this + 4),param_2);
  strcpy((char *)(*(int *)this + 0x84),param_3);
  if (**(int **)this < 200) {
    strcpy((char *)((int)*(int **)this + DAT_001d0cd0),param_4);
  }
  return;
}


