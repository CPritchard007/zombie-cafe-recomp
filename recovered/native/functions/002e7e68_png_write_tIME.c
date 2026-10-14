/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7e68 png_write_tIME */

undefined8 png_write_tIME(undefined4 param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uStack_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 uStack_11;
  undefined4 uStack_10;
  
  local_14 = SUB41(param_2,0);
  local_13 = (undefined1)((uint)param_2 >> 8);
  local_12 = (undefined1)((uint)param_2 >> 0x10);
  uStack_11 = (undefined1)((uint)param_2 >> 0x18);
  uStack_18 = (undefined2)param_1;
  local_16 = (undefined1)((uint)param_1 >> 0x10);
  local_15 = (undefined1)((uint)param_1 >> 0x18);
  uStack_10 = param_3;
  if ((((*(byte *)(param_2 + 1) - 1 < 0xc) && (*(byte *)((int)param_2 + 3) < 0x20)) &&
      (*(byte *)((int)param_2 + 3) != 0)) &&
     ((*(byte *)(param_2 + 2) < 0x18 && (*(byte *)(param_2 + 3) < 0x3d)))) {
    png_save_uint_16(&uStack_18,*param_2);
    local_16 = *(undefined1 *)(param_2 + 1);
    local_15 = *(undefined1 *)((int)param_2 + 3);
    local_14 = *(undefined1 *)(param_2 + 2);
    local_13 = *(undefined1 *)((int)param_2 + 5);
    local_12 = *(undefined1 *)(param_2 + 3);
    FUN_002e6ea0(param_1,DAT_002e7ec8,&uStack_18,7);
  }
  else {
    png_warning(param_1,DAT_002e7ec4 + 0x2e7e94);
  }
  return CONCAT17(uStack_11,
                  CONCAT16(local_12,CONCAT15(local_13,CONCAT14(local_14,CONCAT13(local_15,CONCAT12(
                                                  local_16,uStack_18))))));
}


