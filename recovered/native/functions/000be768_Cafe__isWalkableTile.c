/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be768 Cafe::isWalkableTile */

/* Cafe::isWalkableTile(int) */

undefined4 __thiscall Cafe::isWalkableTile(Cafe *this,int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  puVar2 = (ushort *)**(undefined4 **)(DAT_000be7a4 + 0xbe780);
  iVar3 = 0;
  while( true ) {
    if ((int)(uint)**(byte **)(DAT_000be7a0 + 0xbe778) <= iVar3) {
      return 1;
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    if (**(byte **)(param_1 * 4 + *(int *)this) == uVar1) break;
    iVar3 = iVar3 + 1;
  }
  return 0;
}


