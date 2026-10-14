/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d72e8 FUN_002d72e8 */

undefined1 FUN_002d72e8(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  
  uVar8 = 1;
  if ((((((*param_2 <= DAT_002d7518) && (uVar1 = param_2[1], -1 < (int)uVar1)) &&
        ((int)uVar1 <= (int)(DAT_002d7518 - *param_2))) &&
       ((uVar7 = param_2[2], uVar7 <= DAT_002d7518 && (-1 < (int)param_2[3])))) &&
      ((int)param_2[3] <= (int)(DAT_002d7518 - uVar7))) &&
     (((uVar5 = param_2[4], uVar5 <= DAT_002d7518 && (uVar6 = param_2[5], -1 < (int)uVar6)) &&
      (((int)uVar6 <= (int)(DAT_002d7518 - uVar5) &&
       (((param_2[6] <= DAT_002d7518 && (-1 < (int)param_2[7])) &&
        ((int)param_2[7] <= (int)(DAT_002d7518 - param_2[6]))))))))) {
    uVar8 = 2;
    iVar2 = png_muldiv(&local_20,uVar7 - uVar5,uVar1 - uVar6,7);
    if (((iVar2 != 0) &&
        (iVar3 = png_muldiv(local_1c,param_2[3] - param_2[5],*param_2 - param_2[4],7),
        iVar4 = local_1c[0], iVar2 = local_20, iVar3 != 0)) &&
       ((iVar3 = png_muldiv(&local_20,param_2[2] - param_2[4],param_2[7] - param_2[5],7), iVar3 != 0
        && (iVar3 = png_muldiv(local_1c,param_2[3] - param_2[5],param_2[6] - param_2[4],7),
           iVar3 != 0)))) {
      uVar8 = 1;
      iVar3 = png_muldiv(&local_28,param_2[7],iVar2 - iVar4,local_20 - local_1c[0]);
      if ((iVar3 != 0) && ((int)param_2[7] < local_28)) {
        uVar8 = 2;
        iVar3 = png_muldiv(&local_20,param_2[1] - param_2[5],param_2[6] - param_2[4],7);
        if ((iVar3 != 0) &&
           (iVar3 = png_muldiv(local_1c,*param_2 - param_2[4],param_2[7] - param_2[5],7), iVar3 != 0
           )) {
          iVar2 = png_muldiv(&local_24,param_2[7],iVar2 - iVar4,local_20 - local_1c[0]);
          uVar8 = 1;
          if ((iVar2 != 0) && ((int)param_2[7] < local_24)) {
            iVar2 = png_reciprocal();
            iVar4 = png_reciprocal(local_28);
            iVar3 = png_reciprocal(local_24);
            uVar1 = DAT_002d7518;
            iVar3 = (iVar2 - iVar4) - iVar3;
            if ((0 < iVar3) &&
               ((((iVar2 = png_muldiv(param_1,*param_2,DAT_002d7518,local_28), iVar2 != 0 &&
                  (iVar2 = png_muldiv(param_1 + 4,param_2[1],uVar1,local_28), iVar2 != 0)) &&
                 (iVar2 = png_muldiv(param_1 + 8,(uVar1 - *param_2) - param_2[1],uVar1,local_28),
                 iVar2 != 0)) &&
                (((iVar2 = png_muldiv(param_1 + 0xc,param_2[2],uVar1,local_24), iVar2 != 0 &&
                  (iVar2 = png_muldiv(param_1 + 0x10,param_2[3],uVar1,local_24), iVar2 != 0)) &&
                 ((iVar2 = png_muldiv(param_1 + 0x14,(uVar1 - param_2[2]) - param_2[3],uVar1,
                                      local_24), iVar2 != 0 &&
                  ((iVar2 = png_muldiv(param_1 + 0x18,param_2[4],iVar3,uVar1), iVar2 != 0 &&
                   (iVar2 = png_muldiv(param_1 + 0x1c,param_2[5],iVar3,uVar1), iVar2 != 0))))))))))
            {
              iVar2 = png_muldiv(param_1 + 0x20,(uVar1 - param_2[4]) - param_2[5],iVar3,uVar1);
              uVar8 = iVar2 == 0;
            }
          }
        }
      }
    }
  }
  return uVar8;
}


