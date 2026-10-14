/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c58bc MultiByteString::UTF8ChartoUTF16String */

/* MultiByteString::UTF8ChartoUTF16String(String*, char*) */

void MultiByteString::UTF8ChartoUTF16String(String *param_1,char *param_2)

{
  wchar_t *__s;
  int iVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  String aSStack_20 [12];
  
  __s = (wchar_t *)operator_new__(0x800);
  memset(__s,0,0x800);
  iVar1 = 1;
  iVar4 = 0;
  pwVar3 = __s;
  while( true ) {
    wVar2 = (wchar_t)(byte)param_2[iVar4];
    iVar5 = iVar1 + -1;
    if ((wVar2 == L'\0') || (iVar5 = DAT_002c5970, iVar1 == DAT_002c596c)) break;
    if (wVar2 << 0x18 < 0) {
      if ((byte)param_2[iVar4 + 2] == 0) {
        *pwVar3 = (wVar2 & 0x1fU) * 0x40 + ((byte)param_2[iVar4 + 1] & 0x3f);
      }
      else {
        *pwVar3 = ((uint)(wVar2 << 0x1c) >> 0x10) + ((byte)param_2[iVar4 + 1] & 0x3f) * 0x40 +
                  ((byte)param_2[iVar4 + 2] & 0x3f);
      }
      iVar4 = iVar4 + 3;
    }
    else {
      *pwVar3 = wVar2;
      iVar4 = iVar4 + 1;
    }
    iVar1 = iVar1 + 1;
    pwVar3 = pwVar3 + 1;
  }
  __s[iVar5] = L'\0';
  String::String(aSStack_20,__s);
  String::operator=(param_1,aSStack_20);
  String::~String(aSStack_20);
  if (__s != (wchar_t *)0x0) {
    operator_delete__(__s);
  }
  return;
}


