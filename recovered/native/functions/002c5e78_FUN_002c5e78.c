/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5e78 FUN_002c5e78 */

undefined8 FUN_002c5e78(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0x14) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x1bc))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xcc;
  }
  puVar3 = (uint *)(param_1 + 0x8c);
  do {
    if (*(int *)(*(int *)(param_1 + 0x1bc) + 8) == 0) {
      uVar1 = 1;
      *(uint *)(param_1 + 0x14) = 0xce - (uint)(*(int *)(param_1 + 0x44) == 0);
LAB_002c5f0a:
      return CONCAT44(iVar4,uVar1);
    }
    while( true ) {
      if (*(uint *)(param_1 + 0x74) <= *puVar3) break;
      if (*(int *)(param_1 + 8) != 0) {
        *(uint *)(*(int *)(param_1 + 8) + 4) = *puVar3;
        *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x74);
        (*(code *)**(undefined4 **)(param_1 + 8))(param_1);
      }
      uVar2 = *puVar3;
      (**(code **)(*(int *)(param_1 + 0x1c0) + 4))(param_1,0,puVar3,0,iVar4,uVar2,param_3);
      if (*puVar3 == uVar2) {
        uVar1 = 0;
        goto LAB_002c5f0a;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x1bc) + 4))(param_1);
    (*(code *)**(undefined4 **)(param_1 + 0x1bc))(param_1);
    *puVar3 = 0;
  } while( true );
}


