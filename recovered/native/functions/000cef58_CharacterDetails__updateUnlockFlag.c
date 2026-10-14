/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cef58 CharacterDetails::updateUnlockFlag */

/* CharacterDetails::updateUnlockFlag(bool, int, int) */

void __thiscall
CharacterDetails::updateUnlockFlag(CharacterDetails *this,bool param_1,int param_2,int param_3)

{
  uchar uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1) {
    if (param_3 == 1) {
LAB_000cef8c:
      uVar1 = '\x03';
      goto LAB_000cefaa;
    }
  }
  else {
    if (this[0x68] == (CharacterDetails)0x0) {
      piVar2 = *(int **)(*(int *)(this + 0x8c) * 4 + *(int *)(*(int *)(this + 0x74) + 8));
      iVar3 = *piVar2;
      if ((char)piVar2[1] == '\x01') {
        param_2 = (int)*(ushort *)(iVar3 + DAT_000cefb0);
        goto LAB_000cef8c;
      }
    }
    else {
      piVar2 = *(int **)(*(int *)(this + 0x8c) * 4 + *(int *)(*(int *)(this + 0x74) + 8));
      iVar3 = *piVar2;
      if ((char)piVar2[1] == '\x01') {
        param_2 = (int)*(ushort *)(iVar3 + DAT_000cefb0);
        uVar1 = '\x02';
        goto LAB_000cefaa;
      }
    }
    param_2 = (int)*(ushort *)(iVar3 + DAT_000cefb0);
  }
  uVar1 = '\x01';
LAB_000cefaa:
  ZombieCafe::updateZukanUnlock(*(ZombieCafe **)(this + 0x78),param_2,uVar1);
  return;
}


