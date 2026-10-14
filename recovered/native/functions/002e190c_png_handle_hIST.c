/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e190c png_handle_hIST */

undefined8 png_handle_hIST(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint extraout_r1;
  int iVar1;
  uint uVar2;
  byte local_21c;
  byte local_21b;
  short asStack_218 [250];
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = *(uint *)(param_1 + 0x134);
  iStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (-1 < (int)(uVar2 << 0x1f)) {
    png_chunk_error(param_1,DAT_002e19b8 + 0x2e1928);
    param_3 = extraout_r1;
  }
  if ((uVar2 & 6) == 2) {
    if (param_2 != 0) {
      if (*(int *)(param_2 + 8) << 0x19 < 0) {
        png_crc_finish(param_1);
        iVar1 = DAT_002e19c0 + 0x2e1954;
        goto LAB_002e1952;
      }
    }
    param_3 = param_3 >> 1;
    if (param_3 < 0x101) {
      uVar2 = (uint)(param_3 != *(ushort *)(param_1 + 0x208));
      if (uVar2 == 0) {
        for (; uVar2 != param_3; uVar2 = uVar2 + 1) {
          png_crc_read(param_1,&local_21c,2);
          asStack_218[uVar2] = (ushort)local_21c * 0x100 + (ushort)local_21b;
        }
        iVar1 = png_crc_finish(param_1,0);
        if (iVar1 == 0) {
          png_set_hIST(param_1,param_2,asStack_218);
        }
        goto LAB_002e19b4;
      }
    }
    png_crc_finish(param_1);
    iVar1 = DAT_002e19c4 + 0x2e1980;
  }
  else {
    png_crc_finish(param_1);
    iVar1 = DAT_002e19bc + 0x2e193e;
  }
LAB_002e1952:
  png_chunk_benign_error(param_1,iVar1);
LAB_002e19b4:
  return CONCAT44(iStack_20,iStack_24);
}


