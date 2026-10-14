/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002aba00 CCColor::ToString */

/* CCColor::ToString(unsigned int, unsigned int, char*, unsigned int) */

undefined8 CCColor::ToString(uint param_1,uint param_2,char *param_3,uint param_4)

{
  char *__format;
  uint uVar1;
  char *pcVar2;
  
  __format = (char *)(DAT_002aba4c + 0x2aba0c);
  uVar1 = param_1;
  pcVar2 = param_3;
  snprintf(param_3,3,__format,param_1 & 0xff,param_1,param_2,param_3);
  snprintf(param_3 + 2,3,__format,param_1 >> 8 & 0xff);
  snprintf(param_3 + 4,3,__format,param_1 >> 0x10 & 0xff);
  if (param_2 != 0) {
    snprintf(param_3 + 6,3,__format,param_1 >> 0x18,uVar1,param_2,pcVar2);
  }
  return CONCAT44(param_2,uVar1);
}


