/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6e48 MALTAHoover::MALTAHoover */

/* MALTAHoover::MALTAHoover() */

MALTAHoover * __thiscall MALTAHoover::MALTAHoover(MALTAHoover *this)

{
  char *__format;
  int iVar1;
  
  __format = (char *)(DAT_000b6e94 + 0xb6e54);
  iVar1 = DAT_000b6e98 + 0xb6e56;
  snprintf((char *)this,0x80,__format,iVar1);
  snprintf((char *)(this + 0x80),0x80,__format,iVar1);
  snprintf((char *)(this + 0x100),0x80,__format,iVar1);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  return this;
}


