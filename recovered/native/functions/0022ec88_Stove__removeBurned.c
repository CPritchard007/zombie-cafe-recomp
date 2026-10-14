/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022ec88 Stove::removeBurned */

/* Stove::removeBurned() */

undefined8 Stove::removeBurned(void)

{
  byte bVar1;
  int *in_r0;
  int iVar2;
  int *piVar3;
  Furniture *pFVar4;
  code *in_r1;
  code *local_20;
  code *local_1c;
  
  iVar2 = CapcomApp::getInstance();
  iVar2 = *(int *)(iVar2 + 4);
  piVar3 = (int *)(**(code **)(*in_r0 + 0x20))(in_r0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  if ((short)in_r0[0x21] == 1) {
    local_20 = *(code **)(*in_r0 + 0x1c);
    pFVar4 = (Furniture *)operator_new(100);
    Furniture::Furniture
              (pFVar4,*(FurnitureData **)(*(int *)(*(int *)(iVar2 + 0x7e8) + 0x94) + DAT_0022ed50));
  }
  else {
    bVar1 = *(byte *)(in_r0 + 0xd);
    local_20 = (code *)(uint)bVar1;
    local_1c = *(code **)(*in_r0 + 0x1c);
    if (*(int *)(in_r0[0x1a] + 0x24) == DAT_0022ed54) {
      pFVar4 = (Furniture *)operator_new(100);
      Furniture::Furniture
                (pFVar4,*(FurnitureData **)(*(int *)(*(int *)(iVar2 + 0x7e8) + 0x94) + DAT_0022ed58)
                );
      iVar2 = (*local_1c)(in_r0,pFVar4);
      if (iVar2 != 0) {
        Furniture::setOrientation((Furniture *)in_r0[0xf],bVar1);
      }
      goto LAB_0022ed4e;
    }
    pFVar4 = (Furniture *)operator_new(100);
    Furniture::Furniture
              (pFVar4,*(FurnitureData **)
                       (**(int **)(DAT_0022ed5c + 0x22ed26) * 4 +
                       *(int *)(*(int *)(iVar2 + 0x7e8) + 0x94)));
    local_20 = local_1c;
  }
  (*local_20)(in_r0,pFVar4);
  local_1c = in_r1;
LAB_0022ed4e:
  return CONCAT44(local_1c,local_20);
}


