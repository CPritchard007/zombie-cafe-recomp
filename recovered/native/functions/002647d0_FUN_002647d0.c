/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002647d0 FUN_002647d0 */

undefined8 FUN_002647d0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if (*param_2 <= iVar4) {
      uVar2 = 0;
LAB_0026481c:
      return CONCAT44(param_1,uVar2);
    }
    iVar3 = 0;
    uVar2 = *(undefined4 *)(param_2[2] + iVar4 * 0x14 + 4);
    if (param_1 != (int *)0x0) {
      for (; iVar3 < param_1[1]; iVar3 = iVar3 + 1) {
        iVar1 = sqlite3_stricmp(*(undefined4 *)(iVar3 * 8 + *param_1),uVar2);
        if (iVar1 == 0) {
          if (-1 < iVar3) {
            uVar2 = 1;
            goto LAB_0026481c;
          }
          break;
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


