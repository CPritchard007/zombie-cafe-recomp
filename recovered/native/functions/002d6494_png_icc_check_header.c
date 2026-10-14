/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6494 png_icc_check_header */

undefined8
png_icc_check_header
          (int param_1,undefined4 param_2,undefined4 param_3,uint param_4,byte *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = (uint)*param_5 * 0x1000000 + (uint)param_5[1] * 0x10000 + (uint)param_5[3] +
          (uint)param_5[2] * 0x100;
  uVar2 = param_2;
  uVar6 = param_3;
  if (uVar5 == param_4) {
    uVar3 = (uint)param_5[0x80] * 0x1000000 + (uint)param_5[0x81] * 0x10000 + (uint)param_5[0x83] +
            (uint)param_5[0x82] * 0x100;
    if ((DAT_002d6674 < uVar3) || (uVar5 < uVar3 * 0xc + 0x84)) {
      iVar4 = DAT_002d6678 + 0x2d6500;
      uVar5 = uVar3;
    }
    else {
      uVar5 = (uint)param_5[0x40] * 0x1000000 + (uint)param_5[0x41] * 0x10000 + (uint)param_5[0x43]
              + (uint)param_5[0x42] * 0x100;
      if (DAT_002d667c < uVar5) {
        iVar4 = DAT_002d6680 + 0x2d6534;
      }
      else {
        iVar4 = param_1;
        if (3 < uVar5) {
          iVar4 = DAT_002d6684 + 0x2d6540;
          FUN_002d5844(param_1,0,param_3,uVar5,iVar4,param_2,param_3);
        }
        uVar5 = (uint)param_5[0x24] * 0x1000000 + (uint)param_5[0x25] * 0x10000 +
                (uint)param_5[0x27] + (uint)param_5[0x26] * 0x100;
        if (uVar5 == DAT_002d6688) {
          iVar1 = memcmp(param_5 + 0x44,(void *)(DAT_002d6690 + 0x2d65ea),0xc);
          if (iVar1 != 0) {
            iVar4 = DAT_002d6694 + 0x2d658e;
            FUN_002d5844(param_1,0,param_3,0,iVar4,uVar2,uVar6);
          }
          uVar5 = (uint)param_5[0x10] * 0x1000000 + (uint)param_5[0x11] * 0x10000 +
                  (uint)param_5[0x13] + (uint)param_5[0x12] * 0x100;
          if (uVar5 == DAT_002d6698) {
            if (param_6 << 0x1e < 0) {
              iVar4 = DAT_002d66a4 + 0x2d65ce;
            }
            else {
LAB_002d65d4:
              uVar5 = (uint)param_5[0xc] * 0x1000000 + (uint)param_5[0xd] * 0x10000 +
                      (uint)param_5[0xf] + (uint)param_5[0xe] * 0x100;
              if (uVar5 == DAT_002d66ac) {
                iVar4 = DAT_002d66d0 + 0x2d662a;
LAB_002d662e:
                FUN_002d5844(param_1,0,param_3,uVar5,iVar4,uVar2,uVar6);
              }
              else {
                if (uVar5 <= DAT_002d66ac) {
                  if (uVar5 == DAT_002d66b0) {
                    iVar4 = DAT_002d66cc + 0x2d6624;
                  }
                  else {
                    if (uVar5 == DAT_002d66b4) goto LAB_002d663a;
                    if (uVar5 != DAT_002d66b8) goto LAB_002d662a;
                    iVar4 = DAT_002d66c8 + 0x2d661e;
                  }
                  goto LAB_002d6666;
                }
                if (((uVar5 != DAT_002d66bc) && (uVar5 != DAT_002d66c0)) && (uVar5 != DAT_002d66c4))
                {
LAB_002d662a:
                  iVar4 = DAT_002d66d4 + 0x2d6630;
                  goto LAB_002d662e;
                }
              }
LAB_002d663a:
              uVar5 = (uint)param_5[0x14] * 0x1000000 + (uint)param_5[0x15] * 0x10000 +
                      (uint)param_5[0x17] + (uint)param_5[0x16] * 0x100;
              if ((uVar5 == DAT_002d66d8) || (uVar5 == DAT_002d66dc)) {
                uVar2 = 1;
                goto LAB_002d666e;
              }
              iVar4 = DAT_002d66e0 + 0x2d6660;
            }
          }
          else if (uVar5 == DAT_002d669c) {
            if (param_6 << 0x1e < 0) goto LAB_002d65d4;
            iVar4 = DAT_002d66a0 + 0x2d65c2;
          }
          else {
            iVar4 = DAT_002d66a8 + 0x2d65d4;
          }
        }
        else {
          iVar4 = DAT_002d668c + 0x2d6570;
        }
      }
    }
  }
  else {
    iVar4 = DAT_002d6670 + 0x2d64be;
  }
LAB_002d6666:
  uVar2 = FUN_002d5844(param_1,param_2,param_3,uVar5,iVar4,uVar2,uVar6);
LAB_002d666e:
  return CONCAT44(iVar4,uVar2);
}


