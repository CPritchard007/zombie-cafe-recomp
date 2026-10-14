/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5eec png_convert_to_rfc1123_buffer */

undefined8 png_convert_to_rfc1123_buffer(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack_18 = param_1;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*param_2 <= DAT_002d6018) {
      if ((byte)param_2[1] == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if (((((byte)param_2[1] < 0xd) &&
             (uVar2 = (uint)*(byte *)((int)param_2 + 3), uVar3 = uVar2, uVar2 != 0)) &&
            (uVar3 = 0, uVar2 < 0x20)) &&
           ((((byte)param_2[2] < 0x18 && (*(byte *)((int)param_2 + 5) < 0x3c)) &&
            ((byte)param_2[3] < 0x3d)))) {
          uStack_14 = param_2;
          uVar1 = png_format_number(&iStack_18,(int)&uStack_14 + 1,1);
          uVar3 = png_safecat(param_1,0x1d,0,uVar1);
          if (uVar3 < 0x1c) {
            *(undefined1 *)(param_1 + uVar3) = 0x20;
            uVar3 = uVar3 + 1;
          }
          uVar3 = png_safecat(param_1,0x1d,uVar3,
                              DAT_002d601c + 0x2d5f8a + ((byte)param_2[1] - 1) * 4);
          if (uVar3 < 0x1c) {
            *(undefined1 *)(param_1 + uVar3) = 0x20;
            uVar3 = uVar3 + 1;
          }
          uVar1 = png_format_number(&iStack_18,(int)&uStack_14 + 1,1,*param_2);
          uVar3 = png_safecat(param_1,0x1d,uVar3,uVar1);
          if (uVar3 < 0x1c) {
            *(undefined1 *)(param_1 + uVar3) = 0x20;
            uVar3 = uVar3 + 1;
          }
          uVar1 = png_format_number(&iStack_18,(int)&uStack_14 + 1,2,(char)param_2[2]);
          uVar3 = png_safecat(param_1,0x1d,uVar3,uVar1);
          if (uVar3 < 0x1c) {
            *(undefined1 *)(param_1 + uVar3) = 0x3a;
            uVar3 = uVar3 + 1;
          }
          uVar1 = png_format_number(&iStack_18,(int)&uStack_14 + 1,2,
                                    *(undefined1 *)((int)param_2 + 5));
          uVar3 = png_safecat(param_1,0x1d,uVar3,uVar1);
          if (uVar3 < 0x1c) {
            *(undefined1 *)(param_1 + uVar3) = 0x3a;
            uVar3 = uVar3 + 1;
          }
          uVar1 = png_format_number(&iStack_18,(int)&uStack_14 + 1,2,(char)param_2[3]);
          uVar1 = png_safecat(param_1,0x1d,uVar3,uVar1);
          png_safecat(param_1,0x1d,uVar1,DAT_002d6020 + 0x2d600e);
          uVar3 = 1;
        }
      }
    }
  }
  return CONCAT44(iStack_18,uVar3);
}


