/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239bf8 ZombieCafe::canAttack */

/* ZombieCafe::canAttack() */

undefined8 ZombieCafe::canAttack(void)

{
  int in_r0;
  int iVar1;
  undefined4 in_r1;
  int local_10;
  undefined4 local_c;
  
  local_10 = in_r0;
  local_c = in_r1;
  CapcomDate::today((CapcomDate *)&local_10);
  iVar1 = CapcomDate::daysBetween
                    (*(undefined4 *)(in_r0 + DAT_00239c1c),*(undefined4 *)(in_r0 + DAT_00239c1c + 4)
                     ,local_10,local_c);
  return CONCAT44(local_10,(uint)((iVar1 >> 0x1f) - iVar1) >> 0x1f);
}


