/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b46d8 CCServer::Init */

/* CCServer::Init(char const*, void*, void*, unsigned int, unsigned int, unsigned int, char const*,
   char const*, char const*, char const*, char const*) */

undefined4 *
CCServer::Init(char *param_1,void *param_2,void *param_3,uint param_4,uint param_5,uint param_6,
              char *param_7,char *param_8,char *param_9,char *param_10,char *param_11)

{
  int iVar1;
  int iVar2;
  undefined4 *__s;
  undefined4 uVar3;
  char *__format;
  int iVar4;
  undefined8 uVar5;
  
  __s = (undefined4 *)malloc(0x578);
  if (__s == (undefined4 *)0x0) {
    __s = (undefined4 *)0xffffffff;
  }
  else {
    iVar4 = 0;
    memset(__s,0,0x578);
    do {
      iVar1 = iVar4 + 0x118;
      iVar2 = iVar4 + 0x198;
      iVar4 = iVar4 + 1;
      *(undefined1 *)((int)__s + iVar1) = 0;
      *(undefined1 *)((int)__s + iVar2) = 0;
    } while (iVar4 != 0x80);
    __s[3] = param_4;
    __s[4] = param_5;
    *__s = param_2;
    __s[5] = param_6;
    iVar1 = DAT_002b4934;
    iVar4 = DAT_002b4930;
    __s[1] = param_3;
    __s[0x88] = 0;
    __s[0x89] = 0;
    __s[0xeb] = 1;
    __s[0x8a] = 0;
    __s[0xea] = 0;
    __s[0x8b] = 0;
    uVar3 = CCOptions::Init((char *)(iVar4 + 0x2b475a));
    __format = (char *)(iVar1 + 0x2b4762);
    __s[2] = uVar3;
    snprintf((char *)(__s + 0x8c),0xf,__format,param_7);
    snprintf((char *)((int)__s + DAT_002b4938),0xf,__format,param_8);
    snprintf((char *)((int)__s + DAT_002b493c),0xf,__format,param_9);
    snprintf((char *)((int)__s + DAT_002b4940),0xf,__format,param_10);
    snprintf((char *)(__s + 0x9b),0xf,__format,param_11);
    __s[0x9f] = 0;
    __s[0xa0] = 0;
    uVar3 = CCGetDeviceID();
    snprintf((char *)(__s + 0x26),0x80,__format,uVar3);
    strncpy((char *)(__s + 6),param_1,0x80);
    __s[0xa1] = 0;
    __s[199] = 0;
    __s[0xcd] = 0;
    __s[0xd2] = 0;
    __s[0xd8] = 0;
    __s[0xdf] = 0;
    __s[0xe4] = 0;
    __s[0xec] = 0;
    __s[0xf0] = 0;
    __s[0xf4] = 0;
    __s[0x14e] = 0;
    __s[0xd4] = 0;
    __s[0xd5] = 0;
    __s[0xd6] = 0;
    __s[0xa3] = 0;
    __s[0xa4] = 0;
    __s[0xa6] = 0;
    __s[0xc9] = 0;
    __s[0xcb] = 0;
    __s[0xca] = 0;
    __s[0xa5] = 0;
    __s[0xd7] = 0;
    __s[0xcf] = 0;
    __s[0xd0] = 0;
    __s[0xd1] = 0;
    __s[0xda] = 0;
    __s[0xdb] = 0;
    __s[0xdc] = 0;
    __s[0x86] = 0;
    __s[0x87] = 0;
    __s[0x150] = 0;
    iVar4 = DAT_002b4948;
    *(undefined4 *)((int)__s + DAT_002b4944) = 0;
    __s[0x152] = 0;
    __s[0xdd] = 0;
    __s[0xe6] = 0;
    __s[0xe9] = 0;
    __s[0x102] = 0;
    memset(*(void **)(iVar4 + 0x2b48b8),0,0x80);
    memset(*(void **)(DAT_002b494c + 0x2b48ca),0,0x80);
    *(undefined4 *)((int)__s + DAT_002b4950) = 0;
    iVar4 = CCFacebook::IsLoggedIn(param_2);
    if (iVar4 == 0) {
      memset(__s + 0x46,0,0x80);
    }
    else {
      uVar5 = CCFacebook::GetUserId(param_2);
      iVar4 = DAT_002b4954;
      *(undefined8 *)(__s + 0x86) = uVar5;
      snprintf((char *)(__s + 0x46),0x80,(char *)(iVar4 + 0x2b48f8),(int)uVar5,(int)uVar5,
               (int)((ulonglong)uVar5 >> 0x20));
    }
    iVar4 = CCUrlConnection::Init();
    *(int *)((int)__s + DAT_002b4958) = iVar4;
    if (iVar4 == -1) {
      free(__s);
      __s = (undefined4 *)0xffffffff;
    }
  }
  return __s;
}


