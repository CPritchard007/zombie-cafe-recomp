/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261d48 FUN_00261d48 */

bool FUN_00261d48(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1 + 0x2b);
  if (param_2 == 0) {
    if (*pcVar3 == '\0') {
      return false;
    }
    *pcVar3 = '\0';
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                      (*(int **)(param_1 + 4),*(short *)(param_1 + 0x28) + 3,1,6);
    if (iVar2 != 0) {
      *pcVar3 = '\x01';
    }
    cVar1 = *(char *)(param_1 + 0x2b);
  }
  else {
    if (0 < param_2) {
      if (*pcVar3 == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))
                  (*(int **)(param_1 + 4),*(short *)(param_1 + 0x28) + 3,1,5);
      }
      *(undefined1 *)(param_1 + 0x2b) = 1;
      return true;
    }
    cVar1 = *pcVar3;
  }
  return cVar1 == '\0';
}


