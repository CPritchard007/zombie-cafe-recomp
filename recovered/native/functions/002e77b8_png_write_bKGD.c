/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e77b8 png_write_bKGD */

undefined8 png_write_bKGD(int param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte local_20;
  undefined1 uStack_1f;
  char local_1e;
  undefined1 uStack_1d;
  byte *local_1c;
  uint uStack_18;
  
  local_20 = (byte)param_1;
  uStack_1f = (undefined1)((uint)param_1 >> 8);
  local_1e = (char)((uint)param_1 >> 0x10);
  uStack_1d = (undefined1)((uint)param_1 >> 0x18);
  local_1c = param_2;
  uStack_18 = param_3;
  if (param_3 == 3) {
    if (((*(ushort *)(param_1 + 0x208) != 0) || (-1 < *(int *)(param_1 + 0x328) << 0x1f)) &&
       (*(ushort *)(param_1 + 0x208) <= (ushort)*param_2)) {
      iVar1 = DAT_002e7868 + 0x2e77e2;
LAB_002e784a:
      png_warning(param_1,iVar1);
      goto LAB_002e7864;
    }
    uVar2 = 1;
    local_20 = *param_2;
  }
  else if ((param_3 & 2) == 0) {
    if (1 << (uint)*(byte *)(param_1 + 0x218) <= (int)(uint)*(ushort *)(param_2 + 8)) {
      iVar1 = DAT_002e7874 + 0x2e784c;
      goto LAB_002e784a;
    }
    png_save_uint_16(&local_20);
    uVar2 = 2;
  }
  else {
    png_save_uint_16(&local_20,*(undefined2 *)(param_2 + 2));
    png_save_uint_16(&local_1e,*(undefined2 *)(param_2 + 4));
    png_save_uint_16(&local_1c,*(undefined2 *)(param_2 + 6));
    if (*(char *)(param_1 + 0x218) == '\b') {
      if ((local_20 != 0 || local_1e != '\0') || (char)local_1c != '\0') {
        iVar1 = DAT_002e7870 + 0x2e7830;
        goto LAB_002e784a;
      }
    }
    uVar2 = 6;
  }
  FUN_002e6ea0(param_1,DAT_002e786c,&local_20,uVar2);
LAB_002e7864:
  return CONCAT44(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,CONCAT11(uStack_1f,local_20))));
}


