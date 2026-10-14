/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153bd4 GameStateGatya::loadTextureMessageTick */

/* GameStateGatya::loadTextureMessageTick() */

void GameStateGatya::loadTextureMessageTick(void)

{
  int in_r0;
  int extraout_r1;
  
  if (*(char *)(in_r0 + 0xc0) != '\0') {
    __aeabi_idivmod(*(int *)(in_r0 + 0xc4) + 1,0x78);
    *(int *)(in_r0 + 0xc4) = extraout_r1;
    (**(code **)(**(int **)(in_r0 + 0xbc) + 0x20))(*(int **)(in_r0 + 0xbc),extraout_r1 < 0x5a);
  }
  return;
}


