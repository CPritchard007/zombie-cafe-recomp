/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a13dc String::compareTo */

/* String::compareTo(String const&) const */

undefined8 __thiscall String::compareTo(String *this,String *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)*(short *)(this + 6);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + *(short *)(this + 4);
    if ((iVar4 <= iVar6) || ((int)*(short *)(param_1 + 6) <= iVar5 + *(short *)(param_1 + 4))) {
      uVar3 = 1;
      if (iVar4 < *(short *)(param_1 + 6)) {
LAB_002a1434:
        uVar3 = 0xffffffff;
      }
      else if (iVar4 <= *(short *)(param_1 + 6)) {
        uVar3 = 0;
      }
      goto LAB_002a1436;
    }
    bVar1 = *(byte *)(**(int **)this + iVar6);
    bVar2 = *(byte *)(**(int **)param_1 + iVar5 + *(short *)(param_1 + 4));
    if (bVar1 < bVar2) goto LAB_002a1434;
    iVar5 = iVar5 + 1;
  } while (bVar1 <= bVar2);
  uVar3 = 1;
LAB_002a1436:
  return CONCAT44((int)*(short *)(this + 4),uVar3);
}


