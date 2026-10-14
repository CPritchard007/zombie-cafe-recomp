/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c4cc FUN_0027c4cc */

int FUN_0027c4cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  do {
    if (iVar3 == 0) {
      return 0;
    }
    if ((iVar3 != param_3) &&
       (((param_2 == 0 || (*(int *)(iVar3 + 0x18) == param_2)) &&
        (*(char *)(iVar3 + 0x5b) == '\x01')))) {
      iVar1 = FUN_00262244(iVar3,iVar3 + 0x48);
      if (*(char *)(*(int *)(iVar3 + 0x88) + 2) == '\0') {
        iVar2 = FUN_0025edc8(*(undefined4 *)(iVar3 + 0x48));
        iVar1 = 7;
        if (iVar2 != 0) {
          iVar1 = FUN_0027c294(iVar3,0,*(undefined4 *)(iVar3 + 0x48),iVar2,0);
          if (iVar1 == 0) {
            *(int *)(iVar3 + 0x50) = iVar2;
            goto LAB_0027c53e;
          }
          sqlite3_free(iVar2);
        }
      }
      else if (iVar1 == 0) {
LAB_0027c53e:
        iVar1 = iVar3;
        for (iVar2 = 0; iVar2 <= *(short *)(iVar3 + 0x5e); iVar2 = iVar2 + 1) {
          FUN_00274a30(*(undefined4 *)(iVar1 + 0x88));
          *(undefined4 *)(iVar1 + 0x88) = 0;
          iVar1 = iVar1 + 4;
        }
        *(short *)(iVar3 + 0x5e) = -1;
        *(undefined1 *)(iVar3 + 0x5b) = 2;
        iVar1 = 0;
      }
      sqlite3_free(*(undefined4 *)(iVar3 + 0x14));
      *(undefined4 *)(iVar3 + 0x14) = 0;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar3 = *(int *)(iVar3 + 8);
  } while( true );
}


