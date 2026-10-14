/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025864a Storage::continueLoading */

/* Storage::continueLoading() */

void __thiscall Storage::continueLoading(Storage *this)

{
  int *piVar1;
  ScreenElement *this_00;
  FurnitureStorageButton *this_01;
  int iVar2;
  int *piVar3;
  Storage *pSVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  Storage *pSVar8;
  int iVar9;
  FurnitureData *pFVar10;
  bool bVar11;
  int local_28;
  
  pSVar4 = this + 0xe0;
  if (*(int *)(*(int *)pSVar4 + 0x14) != 0) {
    while( true ) {
      puVar7 = *(undefined4 **)(*(int *)pSVar4 + 0x10);
      if (puVar7 == (undefined4 *)0x0) break;
      pFVar10 = (FurnitureData *)*puVar7;
      *(undefined4 *)(*(int *)pSVar4 + 0x10) = puVar7[2];
      if (pFVar10 == (FurnitureData *)0x0) {
        return;
      }
      local_28 = 0;
      for (iVar9 = 0; this_00 = *(ScreenElement **)(this + 0xc4), iVar9 < *(int *)(this_00 + 0x38);
          iVar9 = iVar9 + 1) {
        iVar6 = ScreenElement::getChildAt(this_00,iVar9);
        if (*(int *)(*(int *)(iVar6 + 0x6c) + 0x24) == *(int *)(pFVar10 + 0x24)) {
          local_28 = 1;
        }
      }
      if (local_28 == 0) {
        for (iVar9 = 0; iVar9 < (*(int **)pSVar4)[5]; iVar9 = iVar9 + 1) {
          iVar2 = 0;
          iVar6 = iVar9;
          piVar3 = *(int **)pSVar4;
          if (-1 < iVar9) {
            do {
              piVar1 = piVar3 + 2;
              bVar11 = iVar6 != 0;
              iVar6 = iVar6 + -1;
              piVar3 = (int *)*piVar1;
            } while (bVar11);
            iVar2 = *(int *)*piVar1;
          }
          local_28 = local_28 + (uint)(*(int *)(pFVar10 + 0x24) == *(int *)(iVar2 + 0x24));
        }
        pcVar5 = *(code **)(*(int *)this_00 + 0x2c);
        iVar9 = *(int *)(*(int *)(this + 200) + 0x10);
        this_01 = (FurnitureStorageButton *)operator_new(0x94);
        FurnitureStorageButton::FurnitureStorageButton
                  (this_01,pFVar10,iVar9,iVar9,*(CImage ***)(this + 0x74),local_28,true);
        (*pcVar5)(this_00,this_01);
        pSVar8 = this + 0xd8;
        (**(code **)(*(int *)this_01 + 0x14))(this_01,*(undefined4 *)pSVar8,0);
        iVar6 = *(int *)(this_01 + 0xc);
        iVar9 = *(int *)pSVar8;
        *(int *)pSVar8 = iVar9 + iVar6;
        (**(code **)(**(int **)(this + 0xc4) + 0x18))
                  (*(int **)(this + 0xc4),iVar9 + iVar6,*(undefined4 *)(*(int *)(this + 200) + 0x10)
                  );
      }
    }
  }
  return;
}


