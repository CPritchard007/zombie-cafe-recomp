/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239b7c ZombieCafe::PlayAndNextCafeMusic */

/* ZombieCafe::PlayAndNextCafeMusic() */

void __thiscall ZombieCafe::PlayAndNextCafeMusic(ZombieCafe *this)

{
  ZombieCafe ZVar1;
  int iVar2;
  
  PlayCafeMusic();
  iVar2 = DAT_00239b9c;
  ZVar1 = this[DAT_00239b9c];
  this[DAT_00239b9c] = (ZombieCafe)((char)ZVar1 + '\x01');
  if (1 < (byte)((char)ZVar1 + '\x01')) {
    this[iVar2] = (ZombieCafe)0x0;
  }
  return;
}


