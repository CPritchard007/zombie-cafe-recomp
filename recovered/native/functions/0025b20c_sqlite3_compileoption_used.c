/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b20c sqlite3_compileoption_used */

undefined8
sqlite3_compileoption_used(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = param_1;
  iVar2 = sqlite3_strnicmp(param_1,DAT_0025b25c + 0x25b218,7,param_4,param_1,param_2,param_3);
  if (iVar2 == 0) {
    param_1 = param_1 + 7;
  }
  iVar2 = FUN_0025b154(param_1);
  piVar7 = (int *)(DAT_0025b260 + 0x25b22e);
  piVar5 = (int *)(DAT_0025b260 + 0x25b23a);
  while( true ) {
    iVar6 = *piVar7;
    piVar7 = piVar7 + 1;
    iVar3 = sqlite3_strnicmp(param_1,iVar6,iVar2);
    if ((iVar3 == 0) && ((cVar1 = *(char *)(iVar6 + iVar2), cVar1 == '=' || (cVar1 == '\0'))))
    break;
    if (piVar7 == piVar5) {
      uVar4 = 0;
LAB_0025b258:
      return CONCAT44(iVar8,uVar4);
    }
  }
  uVar4 = 1;
  goto LAB_0025b258;
}


