/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212978 FUN_00212978 */

undefined8 FUN_00212978(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar4 = 0;
  iVar1 = 0;
  do {
    if (param_1 <= iVar4) {
      return CONCAT44(param_1,iVar1);
    }
    iVar3 = 0;
    do {
      iVar5 = iVar3 + iVar2 >> 3;
      if (((int)(uint)*(byte *)(param_2 + iVar5) >> (iVar3 + iVar2 + iVar5 * -8 & 0xffU) & 1U) != 0)
      {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 10);
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 10;
  } while( true );
}


