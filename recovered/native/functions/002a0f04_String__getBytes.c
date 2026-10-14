/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0f04 String::getBytes */

/* String::getBytes(String, int, char*, int*) const */

void * __thiscall
String::getBytes(String *this,String *param_2,int param_3,void *param_4,int *param_5)

{
  undefined1 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int local_34;
  StringUtil aSStack_30 [8];
  StringUtil aSStack_28 [8];
  StringUtil aSStack_20 [12];
  
  if (param_5 == (int *)0x0) {
    param_5 = &local_34;
  }
  StringUtil::getEncodingString(aSStack_30,'\0');
  iVar2 = equals(param_2,aSStack_30);
  ~String((String *)aSStack_30);
  pvVar3 = param_4;
  if (iVar2 == 0) {
    StringUtil::getEncodingString(aSStack_28,'\x02');
    iVar2 = equals(param_2,aSStack_28);
    ~String((String *)aSStack_28);
    if (iVar2 == 0) {
      StringUtil::getEncodingString(aSStack_20,'\x01');
      pvVar3 = (void *)equals(param_2,aSStack_20);
      ~String((String *)aSStack_20);
      if (pvVar3 != (void *)0x0) {
        iVar2 = (int)*(short *)(this + 6);
        if (param_4 == (void *)0x0) {
          pvVar3 = malloc(iVar2 + 1);
        }
        else {
          pvVar3 = param_4;
          if (param_3 <= iVar2) {
            iVar2 = param_3 + -1;
          }
        }
        *param_5 = iVar2 + 1;
        for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
          uVar1 = charAt(this,iVar4);
          *(undefined1 *)((int)pvVar3 + iVar4) = uVar1;
        }
        *(undefined1 *)((int)pvVar3 + iVar2) = 0;
      }
    }
    else {
      *param_5 = (int)*(short *)(this + 6) << 1;
      pvVar3 = (void *)getBytes(this);
    }
  }
  else {
    iVar2 = (int)*(short *)(this + 6);
    if (param_4 == (void *)0x0) {
      pvVar3 = malloc(iVar2 + 1);
    }
    else if (param_3 <= iVar2) {
      iVar2 = param_3 + -1;
    }
    *param_5 = iVar2 + 1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      uVar1 = charAt(this,iVar4);
      *(undefined1 *)((int)pvVar3 + iVar4) = uVar1;
    }
    *(undefined1 *)((int)pvVar3 + iVar2) = 0;
  }
  return pvVar3;
}


