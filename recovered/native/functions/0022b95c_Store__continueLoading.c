/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022b95c Store::continueLoading */

/* Store::continueLoading() */

void __thiscall Store::continueLoading(Store *this)

{
  FurnitureButton *this_00;
  FurnitureData *pFVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  Store *pSVar8;
  int *piVar9;
  bool local_24;
  
  puVar2 = *(undefined4 **)(*(int *)(this + 0xcc) + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    pFVar1 = (FurnitureData *)*puVar2;
    *(undefined4 *)(*(int *)(this + 0xcc) + 0x10) = puVar2[2];
    if (pFVar1 != (FurnitureData *)0x0) {
      cVar7 = (char)((int)*(uint *)(*(int *)(this + 0x68) + 0x680) >> 0x1f) +
              ((uint)(byte)pFVar1[0x28] <= *(uint *)(*(int *)(this + 0x68) + 0x680));
      uVar3 = (uint)(byte)pFVar1[0x39];
      local_24 = true;
      if (1 < uVar3) {
        if (*(int *)(this + 0xd8) < (int)uVar3) {
          cVar7 = false;
          local_24 = false;
        }
        else {
          *(uint *)(this + 0xd8) = uVar3;
        }
      }
      piVar9 = *(int **)(this + 0xb0);
      pcVar4 = *(code **)(*piVar9 + 0x2c);
      iVar5 = *(int *)(*(int *)(this + 0xb4) + 0x10);
      this_00 = (FurnitureButton *)operator_new(0x9c);
      FurnitureButton::FurnitureButton
                (this_00,pFVar1,iVar5,iVar5,*(CImage ***)(this + 0x70),(bool)cVar7,local_24);
      (*pcVar4)(piVar9,this_00);
      pSVar8 = this + 0xc4;
      (**(code **)(*(int *)this_00 + 0x14))(this_00,*(undefined4 *)pSVar8,0);
      iVar6 = *(int *)(this_00 + 0xc);
      iVar5 = *(int *)pSVar8;
      *(int *)pSVar8 = iVar5 + iVar6;
      (**(code **)(**(int **)(this + 0xb0) + 0x18))
                (*(int **)(this + 0xb0),iVar5 + iVar6,*(undefined4 *)(*(int *)(this + 0xb4) + 0x10))
      ;
    }
  }
  return;
}


