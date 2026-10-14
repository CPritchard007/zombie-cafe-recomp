/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7478 CharacterInstance::contains */

/* CharacterInstance::contains(long) */

void CharacterInstance::contains(long param_1)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined8 uVar2;
  
  uVar2 = getBoundingBox((CharacterInstance *)param_1);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  CFRectangle::contains
            ((CFRectangle *)uVar2,CONCAT44(unaff_r4,in_r3),
             iVar1 + *(uint *)(param_1 + 4) & 0xffff |
             ((iVar1 >> 0x10) + (*(uint *)(param_1 + 4) >> 0x10)) * 0x10000);
  return;
}


