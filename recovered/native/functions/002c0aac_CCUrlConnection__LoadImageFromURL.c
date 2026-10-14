/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0aac CCUrlConnection::LoadImageFromURL */

/* CCUrlConnection::LoadImageFromURL(char const*, char const*, char const*, unsigned int) */

int CCUrlConnection::LoadImageFromURL(char *param_1,char *param_2,char *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_4;
  iVar1 = javaConnected();
  if (iVar1 != 0) {
    javaLoadImageFromURL(param_1,param_2,param_3,param_4,uVar2);
    iVar1 = 1;
  }
  return iVar1;
}


