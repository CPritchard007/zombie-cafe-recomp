/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c1ec ZombieCafe::NewRequestServerCallback */

/* ZombieCafe::NewRequestServerCallback(unsigned int, unsigned char*, int, int) */

undefined8 __thiscall
ZombieCafe::NewRequestServerCallback
          (ZombieCafe *this,uint param_1,uchar *param_2,int param_3,int param_4)

{
  L_PrintLog((char *)(DAT_0023c220 + 0x23c1fe),(char *)(DAT_0023c21c + 0x23c1fc));
  CCServer::Android_ServerCallback
            (this,*(void **)(this + DAT_0023c224),(bool)('\x01' - (param_1 == 0)),param_2,param_3,
             param_4);
  return CONCAT44(param_4,param_3);
}


