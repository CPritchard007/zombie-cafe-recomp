/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024a28c Vector<ZombieCafe::ZombieDlcEntry>::move */

/* Vector<ZombieCafe::ZombieDlcEntry>::move(int, int) */

void __thiscall
Vector<ZombieCafe::ZombieDlcEntry>::move
          (Vector<ZombieCafe::ZombieDlcEntry> *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    iVar1 = 0x5d8;
    iVar2 = param_1 * 0x5d8;
    memmove((void *)(*(int *)(this + 8) + (param_2 + param_1) * 0x5d8),
            (void *)(*(int *)(this + 8) + iVar2),((*(int *)(this + 4) - param_1) + 1) * 0x5d8);
    if (param_2 < 1) {
      iVar2 = (*(int *)(this + 4) + 1 + param_2) * 0x5d8;
      iVar1 = DAT_0024a2e0;
    }
    memset((void *)(*(int *)(this + 8) + iVar2),0,param_2 * iVar1);
  }
  return;
}


