/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029efe8 LoadingGameState::LoadingGameState */

/* LoadingGameState::LoadingGameState(GameState*, CapcomFont*, int) */

undefined8 __thiscall
LoadingGameState::LoadingGameState
          (LoadingGameState *this,GameState *param_1,CapcomFont *param_2,int param_3)

{
  this[4] = (LoadingGameState)0x0;
  this[5] = (LoadingGameState)0x0;
  *(int *)this = *(int *)(DAT_0029f038 + 0x29effc) + 8;
  String::String((String *)(this + 0x18));
  *(GameState **)(this + 8) = param_1;
  param_1[4] = (GameState)((char)param_1[4] + '\x01');
  *(int *)(this + 0x10) = param_3;
  *(CapcomFont **)(this + 0xc) = param_2;
  this[0x14] = (LoadingGameState)0x1;
  this[0x24] = (LoadingGameState)
               ((byte)((byte)((uint)param_3 >> 0x18) | (byte)((uint)(param_3 + -1) >> 0x18)) >> 7);
  return CONCAT44(this,this);
}


