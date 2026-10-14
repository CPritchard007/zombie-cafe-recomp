/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1040 CCCapcomLoad::HasFinishDrawing */

/* CCCapcomLoad::HasFinishDrawing(void*) */

byte CCCapcomLoad::HasFinishDrawing(void *param_1)

{
  int iVar1;
  
  iVar1 = __aeabi_fcmpgt(*(undefined4 *)((int)param_1 + 0x344),DAT_002c105c);
  return -(iVar1 != 0) & 1;
}


