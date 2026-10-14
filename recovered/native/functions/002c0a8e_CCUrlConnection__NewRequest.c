/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0a8e CCUrlConnection::NewRequest */

/* CCUrlConnection::NewRequest(char const*, char const*, unsigned int, void*) */

int CCUrlConnection::NewRequest(char *param_1,char *param_2,uint param_3,void *param_4)

{
  int iVar1;
  
  iVar1 = javaConnected();
  if (iVar1 != 0) {
    javaNewRequest(param_1,param_2,param_3);
    iVar1 = 1;
  }
  return iVar1;
}


