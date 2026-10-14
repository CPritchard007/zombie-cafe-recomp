/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153b7a GameStateGatya::loadTextureMessageInit */

/* GameStateGatya::loadTextureMessageInit() */

void __thiscall GameStateGatya::loadTextureMessageInit(GameStateGatya *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0xbc);
  (**(code **)(*piVar1 + 0x14))
            (piVar1,*(int *)(*(int *)(this + 0x1e8) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x1e8) + 0x10) / 2);
  piVar1 = *(int **)(this + 0xbc);
  (**(code **)(*piVar1 + 0x20))(piVar1,1);
  this[0xc0] = (GameStateGatya)0x1;
  *(undefined4 *)(this + 0xc4) = 0;
  return;
}


