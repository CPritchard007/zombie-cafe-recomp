/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5974 MultiByteString::UTF8StringtoUTF16String */

/* MultiByteString::UTF8StringtoUTF16String(String*, String*) */

void MultiByteString::UTF8StringtoUTF16String(String *param_1,String *param_2)

{
  wchar_t *__s;
  int iVar1;
  wchar_t wVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  int local_2c;
  String aSStack_20 [12];
  
  __s = (wchar_t *)operator_new__(0x800);
  memset(__s,0,0x800);
  local_2c = 1;
  iVar6 = 0;
  pwVar7 = __s;
  while( true ) {
    iVar1 = String::charAt(param_2,iVar6);
    iVar3 = local_2c + -1;
    if ((iVar1 == 0) || (iVar3 = DAT_002c5a74, local_2c == DAT_002c5a70)) break;
    if (iVar1 << 0x18 < 0) {
      iVar3 = String::charAt(param_2,iVar6 + 2);
      if (iVar3 == 0) {
        uVar4 = String::charAt(param_2,iVar6);
        uVar5 = String::charAt(param_2,iVar6 + 1);
        *pwVar7 = (uVar4 & 0x1f) * 0x40 + (uVar5 & 0x3f);
      }
      else {
        iVar3 = String::charAt(param_2,iVar6);
        uVar4 = String::charAt(param_2,iVar6 + 1);
        uVar5 = String::charAt(param_2,iVar6 + 2);
        *pwVar7 = ((uint)(iVar3 << 0x1c) >> 0x10) + (uVar4 & 0x3f) * 0x40 + (uVar5 & 0x3f);
      }
      iVar6 = iVar6 + 3;
    }
    else {
      wVar2 = String::charAt(param_2,iVar6);
      iVar6 = iVar6 + 1;
      *pwVar7 = wVar2;
    }
    pwVar7 = pwVar7 + 1;
    local_2c = local_2c + 1;
  }
  __s[iVar3] = L'\0';
  String::String(aSStack_20,__s);
  String::operator=(param_1,aSStack_20);
  String::~String(aSStack_20);
  if (__s != (wchar_t *)0x0) {
    operator_delete__(__s);
  }
  return;
}


