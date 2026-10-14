/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6edc MALTAHoover::init */

/* MALTAHoover::init(char*, char*, int) */

undefined8 __thiscall MALTAHoover::init(MALTAHoover *this,char *param_1,char *param_2,int param_3)

{
  char *__format;
  MALTAHoover *pMVar1;
  
  __format = (char *)(DAT_000b6f14 + 0xb6ee8);
  pMVar1 = this;
  snprintf((char *)this,0x80,__format,param_1,this,param_3,param_2);
  snprintf((char *)(this + 0x80),0x80,__format,param_2);
  snprintf((char *)(this + 0x100),0x80,__format,param_3);
  return CONCAT44(param_3,pMVar1);
}


