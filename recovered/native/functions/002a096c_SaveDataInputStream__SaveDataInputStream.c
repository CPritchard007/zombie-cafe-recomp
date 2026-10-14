/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a096c SaveDataInputStream::SaveDataInputStream */

/* SaveDataInputStream::SaveDataInputStream(void*) */

void __thiscall SaveDataInputStream::SaveDataInputStream(SaveDataInputStream *this,void *param_1)

{
  int iVar1;
  size_t __size;
  void *pvVar2;
  int *piVar3;
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002a09f0 + 0x2a0978);
  local_1c = *piVar3;
  InputStream::InputStream((InputStream *)this);
  *(int *)this = *(int *)(DAT_002a09f4 + 0x2a098c) + 8;
  __size = CCAssetManager::fileSize((char *)param_1);
  iVar1 = DAT_002a09f8;
  *(size_t *)(this + 0x14) = __size;
  sprintf(acStack_11c,(char *)(iVar1 + 0x2a099e),param_1,__size);
  L_PrintLog((char *)(DAT_002a09fc + 0x2a09ae),acStack_11c);
  pvVar2 = malloc(__size);
  *(void **)(this + 8) = pvVar2;
  *(undefined4 *)(this + 0xc) = 0;
  CCAssetManager::readFile((char *)param_1,pvVar2,__size);
  L_PrintLog((char *)(DAT_002a0a00 + 0x2a09ce),(char *)(DAT_002a0a04 + 0x2a09d0));
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


