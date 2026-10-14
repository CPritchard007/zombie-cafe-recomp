/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0b44 SaveDataOutputStream::SaveDataOutputStream */

/* SaveDataOutputStream::SaveDataOutputStream(String) */

SaveDataOutputStream * __thiscall
SaveDataOutputStream::SaveDataOutputStream(SaveDataOutputStream *this,String *param_2)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  
  *(int *)this = *(int *)(DAT_002a0bac + 0x2a0b50) + 8;
  pcVar2 = (char *)String::getBytes(param_2);
  *(char **)(this + 4) = pcVar2;
  iVar1 = DAT_002a0bb4;
  iVar4 = 0;
  do {
    if (pcVar2[iVar4] == '.') {
      pcVar2[iVar4 + 4] = '\0';
      L_PrintLog((char *)(iVar1 + 0x2a0b76),*(char **)(this + 4));
      pvVar3 = malloc(0x1f400);
      *(void **)(this + 0xc) = pvVar3;
      *(undefined4 *)(this + 0x10) = 0;
      return this;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x40);
  L_PrintLog((char *)(DAT_002a0bb8 + 0x2a0ba6),pcVar2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


