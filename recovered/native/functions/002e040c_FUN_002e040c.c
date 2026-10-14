/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e040c FUN_002e040c */

undefined8 FUN_002e040c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x378);
  if (iVar1 != 0) {
    if (param_2 <= *(uint *)(param_1 + 0x37c)) goto LAB_002e046a;
    *(undefined4 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x37c) = 0;
    png_free(param_1,iVar1);
  }
  iVar1 = png_malloc_base(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        png_chunk_error(param_1,DAT_002e0474 + 0x2e0468);
      }
      else {
        png_chunk_warning(param_1,DAT_002e0470 + 0x2e045c);
      }
    }
  }
  else {
    *(int *)(param_1 + 0x378) = iVar1;
    *(uint *)(param_1 + 0x37c) = param_2;
  }
LAB_002e046a:
  return CONCAT44(param_1,iVar1);
}


