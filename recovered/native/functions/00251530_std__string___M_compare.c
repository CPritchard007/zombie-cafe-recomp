/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251530 std::string::_M_compare */

/* std::string::_M_compare(char const*, char const*, char const*, char const*) */

int std::string::_M_compare(char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  size_t __n;
  size_t sVar2;
  size_t sVar3;
  
  sVar3 = (int)param_4 - (int)param_3;
  sVar2 = (int)param_2 - (int)param_1;
  __n = sVar3;
  if ((int)sVar2 < (int)sVar3) {
    __n = sVar2;
  }
  iVar1 = memcmp(param_1,param_3,__n);
  if (iVar1 == 0) {
    iVar1 = 1;
    if ((int)sVar2 < (int)sVar3) {
      iVar1 = -1;
    }
    else if ((int)sVar2 <= (int)sVar3) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


