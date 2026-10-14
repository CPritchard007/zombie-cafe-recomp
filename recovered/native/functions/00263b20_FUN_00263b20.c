/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263b20 FUN_00263b20 */

undefined8 FUN_00263b20(int *param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = param_2;
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    iVar3 = *param_1;
    bVar1 = *(byte *)(iVar3 + 0x36);
    local_1c = (uint)bVar1;
    if (*(int *)(iVar3 + 0x1f0) == 0) {
      for (piVar2 = param_1; piVar2 < param_1 + param_2 * 10; piVar2 = piVar2 + 10) {
        if ((*(ushort *)(piVar2 + 7) & DAT_00263b90) == 0) {
          if (piVar2[9] != 0) {
            FUN_0025fbda(iVar3);
            piVar2[9] = 0;
          }
        }
        else {
          FUN_00263730(piVar2);
        }
        *(undefined2 *)(piVar2 + 7) = 0x80;
      }
      *(byte *)(iVar3 + 0x36) = bVar1;
    }
    else {
      for (piVar2 = param_1; piVar2 < param_1 + param_2 * 10; piVar2 = piVar2 + 10) {
        FUN_0025fbda(iVar3,piVar2[9]);
      }
    }
  }
  return CONCAT44(local_1c,param_1);
}


