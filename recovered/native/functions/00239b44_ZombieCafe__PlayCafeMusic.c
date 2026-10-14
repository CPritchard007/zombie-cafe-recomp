/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239b44 ZombieCafe::PlayCafeMusic */

/* ZombieCafe::PlayCafeMusic() */

longlong ZombieCafe::PlayCafeMusic(void)

{
  int iVar1;
  ZombieCafe *in_r0;
  uint in_r1;
  int iVar2;
  float in_s0;
  
  iVar1 = DAT_00239b70;
  if (1 < (byte)in_r0[DAT_00239b70]) {
    in_r0[DAT_00239b70] = (ZombieCafe)0x0;
  }
  iVar2 = 0;
  if ((byte)in_r0[iVar1] < 2) {
    iVar2 = (int)*(char *)((int)&DAT_00239b74 + DAT_00239b74 + (uint)(byte)in_r0[iVar1] + 2);
  }
  loadAndPlayMusic(in_r0,0,iVar2,in_s0,SUB41(DAT_00239b78,0));
  return (ulonglong)in_r1 << 0x20;
}


