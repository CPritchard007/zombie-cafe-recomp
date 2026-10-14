/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263806 FUN_00263806 */

void FUN_00263806(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *__s;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    __s = (undefined1 *)(iVar1 + param_2 * 0x14);
    FUN_0026376e(*param_1,(int)(char)__s[1],*(undefined4 *)(__s + 0x10),iVar1,param_4);
    memset(__s,0,0x14);
    *__s = 0x95;
  }
  return;
}


