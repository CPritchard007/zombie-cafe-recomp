/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00139612 FUN_00139612 */

void FUN_00139612(void)

{
  code *pcVar1;
  int unaff_r5;
  int in_r12;
  undefined4 in_cr15;
  
  if (*(int *)(unaff_r5 + 0x14) != 0) {
    FUN_00138c78();
  }
  if (*(int *)(unaff_r5 + 0x68) != 0) {
    FUN_00138c86();
  }
  FUN_00138c9a();
  coprocessor_storelong(0xf,in_cr15,in_r12 + 0x3fc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(100,0x139630);
  (*pcVar1)();
}


