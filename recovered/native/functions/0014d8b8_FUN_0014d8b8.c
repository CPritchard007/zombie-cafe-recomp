/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014d8b8 FUN_0014d8b8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0014d8b8(float param_1,float param_2,float param_3,float param_4,float param_5,
                 GatyaEftImageElement *param_6,int param_7)

{
  undefined2 *puVar1;
  int extraout_r1;
  uint uVar2;
  
  uVar2 = 0;
  GatyaEftImageElement::SetKey(param_6,param_1,param_2,param_3,param_4,param_5,param_7,0,0);
  FUN_00152bee();
  puVar1 = (undefined2 *)((uint)*(ushort *)(extraout_r1 + 4) << (uVar2 & 0xff));
  *puVar1 = (short)puVar1;
  *puVar1 = (short)puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


