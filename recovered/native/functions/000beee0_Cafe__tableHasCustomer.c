/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000beee0 Cafe::tableHasCustomer */

/* Cafe::tableHasCustomer(Furniture*) */

undefined4 __thiscall Cafe::tableHasCustomer(Cafe *this,Furniture *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  uint local_28 [4];
  uint uStack_18;
  
  iVar1 = DAT_000bef5c;
  puVar4 = local_28;
  local_28[0] = *(uint *)(DAT_000bef58 + 0xbef04);
  local_28[1] = *(undefined4 *)(DAT_000bef58 + 0xbef08);
  local_28[2] = *(undefined4 *)(DAT_000bef58 + 0xbef0c);
  local_28[3] = *(undefined4 *)(DAT_000bef58 + 0xbef10);
  do {
    uVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = getNextTile((int)*(short *)(param_1 + 0x2c),uVar5);
    iVar2 = *(int *)(*(int *)(iVar2 * 4 + *(int *)this) + 0x14);
    if (((iVar2 != 0) && (*(char *)(iVar2 + 0x2e) != '\0')) &&
       (*(char *)(*(int *)(iVar2 + 0x38) + 0x44) == '\x04')) {
      uVar5 = uVar5 & 0xff;
      cVar3 = -1;
      if (uVar5 < 4) {
        cVar3 = *(char *)(iVar1 + 0xbef2c + uVar5);
      }
      if (*(char *)(iVar2 + 0x34) == cVar3) {
        return 1;
      }
    }
    if (puVar4 == &uStack_18) {
      return 0;
    }
  } while( true );
}


