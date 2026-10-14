/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a0e8 ZombieCafe::purchaseWasMade */

/* ZombieCafe::purchaseWasMade() */

undefined8 ZombieCafe::purchaseWasMade(void)

{
  int in_r0;
  int iVar1;
  undefined4 in_r1;
  int local_18;
  undefined4 local_14;
  
  local_18 = in_r0;
  local_14 = in_r1;
  CapcomDate::now((CapcomDate *)&local_18);
  iVar1 = CapcomDate::secondsBetween
                    (*(undefined4 *)(in_r0 + 0xbf0),*(undefined4 *)(in_r0 + 0xbf4),local_18,local_14
                    );
  if (iVar1 < **(int **)(DAT_0023a12c + 0x23a10a)) {
    *(int *)(in_r0 + DAT_0023a130) = *(int *)(in_r0 + DAT_0023a130) + 1;
  }
  else {
    *(undefined4 *)(in_r0 + DAT_0023a130) = 1;
    memcpy((void *)(in_r0 + 0xbf0),(CapcomDate *)&local_18,7);
  }
  return CONCAT44(local_14,local_18);
}


