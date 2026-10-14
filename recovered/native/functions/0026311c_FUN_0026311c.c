/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026311c FUN_0026311c */

undefined * FUN_0026311c(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0x204) {
    puVar1 = &UNK_0026314e + DAT_0026315c;
  }
  else if ((param_1 & 0xff) < 0x1b) {
    puVar1 = *(undefined **)(DAT_00263150 + (param_1 & 0xff) * 4 + 0x263160);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)(DAT_00263158 + 0x263148);
    }
  }
  else {
    puVar1 = (undefined *)(DAT_00263154 + 0x263142);
  }
  return puVar1;
}


