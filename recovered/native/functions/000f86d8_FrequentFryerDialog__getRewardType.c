/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f86d8 FrequentFryerDialog::getRewardType */

/* FrequentFryerDialog::getRewardType(int) */

undefined8 FrequentFryerDialog::getRewardType(int param_1)

{
  int iVar1;
  int in_r1;
  int local_10 [4];
  
  local_10[0] = param_1;
  if ((in_r1 == 0xb) || (in_r1 - 1U < 10)) {
    getItemData((int)local_10);
    iVar1 = local_10[0];
  }
  else {
    iVar1 = -1;
  }
  return CONCAT44(local_10[0],iVar1);
}


