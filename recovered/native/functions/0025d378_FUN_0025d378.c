/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d378 FUN_0025d378 */

undefined8 FUN_0025d378(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    pcVar1 = (code *)0x0;
  }
  else {
    do {
      if (*(int *)(param_1 + 0x120) <= iVar6) {
        pcVar1 = (code *)0x0;
        break;
      }
      iVar3 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x138));
      pcVar2 = *(code **)(iVar3 + 8);
      piVar4 = (int *)**(undefined4 **)(iVar3 + 4);
      pcVar1 = pcVar2;
      if ((pcVar2 != (code *)0x0) && (pcVar1 = (code *)0x0, 1 < *piVar4)) {
        if (param_2 == 0) {
          pcVar5 = (code *)piVar4[0x14];
          *(int *)(iVar3 + 0x14) = param_3 + 1;
        }
        else if (param_2 == 2) {
          pcVar5 = (code *)piVar4[0x16];
        }
        else {
          pcVar5 = (code *)piVar4[0x15];
        }
        pcVar1 = pcVar5;
        if (pcVar5 != (code *)0x0) {
          pcVar1 = (code *)0x0;
          if (param_3 < *(int *)(iVar3 + 0x14)) {
            pcVar1 = (code *)(*pcVar5)(pcVar2,param_3);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (pcVar1 == (code *)0x0);
  }
  return CONCAT44(param_1,pcVar1);
}


