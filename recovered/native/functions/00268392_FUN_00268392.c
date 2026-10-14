/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268392 FUN_00268392 */

void FUN_00268392(int param_1)

{
  int iVar1;
  void *__s;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14 [2];
  
  iVar2 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14[0] = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_0026835a(param_1,*(int *)(param_1 + 0x44) + 0x21U >> 0xc,&local_1c,&local_18,local_14);
    iVar1 = *(int *)(param_1 + 0x44) - local_14[0];
    do {
      if (iVar1 < (int)(uint)*(ushort *)(local_1c + iVar2)) {
        *(ushort *)(local_1c + iVar2) = 0;
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 != 0x4000);
    __s = (void *)(local_18 + (iVar1 + 1) * 4);
    memset(__s,0,local_1c - (int)__s);
  }
  return;
}


