/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265f96 FUN_00265f96 */

undefined8 FUN_00265f96(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_1c;
  
  piVar1 = (int *)param_1[0x6c];
  if ((int *)param_1[0x6c] == (int *)0x0) {
    piVar1 = param_1;
  }
  iVar2 = 0;
  do {
    if (piVar1[0x69] <= iVar2) {
      iVar2 = FUN_00265252(*piVar1,piVar1[0x6a],(piVar1[0x69] + 1) * 0x10);
      piVar1[0x6a] = iVar2;
      if (iVar2 == 0) {
        piVar1[0x69] = 0;
        *(undefined1 *)(*piVar1 + 0x36) = 1;
      }
      else {
        iVar4 = piVar1[0x69];
        piVar1[0x69] = iVar4 + 1;
        local_1c = (undefined1)param_4;
        piVar1 = (int *)(iVar2 + iVar4 * 0x10);
        *piVar1 = param_2;
        piVar1[1] = param_3;
        *(undefined1 *)(piVar1 + 2) = local_1c;
        piVar1[3] = param_5;
      }
LAB_0026601e:
      return CONCAT44(param_4,param_3);
    }
    piVar3 = (int *)(piVar1[0x6a] + iVar2 * 0x10);
    if ((*piVar3 == param_2) && (piVar3[1] == param_3)) {
      *(char *)(piVar3 + 2) = '\x01' - ((char)piVar3[2] == '\0' && param_4 == 0);
      goto LAB_0026601e;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


