/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c1cc FUN_0026c1cc */

void FUN_0026c1cc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 0x14);
  if ((piVar2 != (int *)0x0) && (piVar2[7] == 0)) {
    sqlite3_mutex_free(piVar2[1]);
    iVar1 = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(piVar2 + 5) <= iVar1) break;
      if (piVar2[3] < 0) {
        sqlite3_free();
      }
      else {
        munmap(*(void **)(piVar2[6] + iVar1 * 4),piVar2[4]);
      }
      iVar1 = iVar1 + 1;
    }
    sqlite3_free();
    if (-1 < piVar2[3]) {
      FUN_0026c198(param_1,piVar2[3],DAT_0026c22c);
      piVar2[3] = -1;
    }
    *(undefined4 *)(*piVar2 + 0x14) = 0;
    sqlite3_free(piVar2);
  }
  return;
}


