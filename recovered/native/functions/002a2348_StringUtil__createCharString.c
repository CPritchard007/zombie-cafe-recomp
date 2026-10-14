/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2348 StringUtil::createCharString */

/* StringUtil::createCharString(String, char*, int) */

void StringUtil::createCharString(String *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < param_3 + -1; iVar2 = iVar2 + 1) {
    if (iVar2 < *(short *)(param_1 + 6)) {
      uVar1 = String::charAt(param_1,iVar2);
      *(undefined1 *)(param_2 + iVar2) = uVar1;
    }
    else {
      *(undefined1 *)(param_2 + iVar2) = 0;
    }
  }
  return;
}


