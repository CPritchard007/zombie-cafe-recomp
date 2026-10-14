/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5868 MultiByteString::UTF8ChartoUTF16Char */

/* MultiByteString::UTF8ChartoUTF16Char(char*, char*) */

void MultiByteString::UTF8ChartoUTF16Char(char *param_1,char *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    bVar1 = param_2[iVar3];
    if ((int)((uint)bVar1 << 0x18) < 0) {
      if (param_2[iVar3 + 2] == 0) {
        sVar2 = ((byte)param_2[iVar3 + 1] & 0x3f) + (bVar1 & 0x1f) * 0x40;
      }
      else {
        sVar2 = ((byte)param_2[iVar3 + 2] & 0x3f) + (ushort)bVar1 * 0x1000 +
                ((byte)param_2[iVar3 + 1] & 0x3f) * 0x40;
      }
      *param_1 = (byte)sVar2;
      ((byte *)param_1)[1] = (byte)((ushort)sVar2 >> 8);
      iVar3 = iVar3 + 3;
    }
    else {
      *param_1 = bVar1;
      if ((bVar1 == 10) || (bVar1 == 0)) {
        return;
      }
      iVar3 = iVar3 + 1;
    }
    param_1 = (char *)((byte *)param_1 + 1);
  } while( true );
}


