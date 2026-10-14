/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a134 ZombieCafe::isPurchaseTooFrequent */

/* ZombieCafe::isPurchaseTooFrequent() */

undefined8 ZombieCafe::isPurchaseTooFrequent(void)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  undefined4 in_r1;
  int local_18;
  undefined4 local_14;
  
  local_18 = in_r0;
  local_14 = in_r1;
  CapcomDate::now((CapcomDate *)&local_18);
  iVar1 = CapcomDate::secondsBetween
                    (*(undefined4 *)(in_r0 + 0xbf0),*(undefined4 *)(in_r0 + 0xbf4),local_18,local_14
                    );
  if (iVar1 < 0) {
    *(undefined4 *)(in_r0 + DAT_0023a1a4) = 0;
    memcpy((void *)(in_r0 + 0xbf0),(CapcomDate *)&local_18,7);
  }
  iVar1 = CapcomDate::secondsBetween
                    (*(undefined4 *)(in_r0 + 0xbf0),*(undefined4 *)(in_r0 + 0xbf4),local_18,local_14
                    );
  uVar2 = 0;
  if (iVar1 < **(int **)(DAT_0023a1a8 + 0x23a184)) {
    uVar2 = (((int)*(uint *)(in_r0 + DAT_0023a1a4) >> 0x1f) -
            ((int)**(uint **)(DAT_0023a1ac + 0x23a192) >> 0x1f)) +
            (uint)(**(uint **)(DAT_0023a1ac + 0x23a192) <= *(uint *)(in_r0 + DAT_0023a1a4)) & 0xff;
  }
  return CONCAT44(local_18,uVar2);
}


