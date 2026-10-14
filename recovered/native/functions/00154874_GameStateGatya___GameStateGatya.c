/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00154874 GameStateGatya::~GameStateGatya */

/* GameStateGatya::~GameStateGatya() */

GameStateGatya * __thiscall GameStateGatya::~GameStateGatya(GameStateGatya *this)

{
  *(int *)this = *(int *)(DAT_001548b4 + 0x15487e) + 8;
  Vector<GatyaLotteryData>::~Vector((Vector<GatyaLotteryData> *)(this + 0xe30));
  Vector<GatyaLotteryData>::~Vector((Vector<GatyaLotteryData> *)(this + DAT_001548b8));
  Vector<GatyaLotteryData>::~Vector((Vector<GatyaLotteryData> *)(this + DAT_001548bc));
  Vector<GatyaLotteryData>::~Vector((Vector<GatyaLotteryData> *)(this + DAT_001548c0));
  *(int *)this = *(int *)(DAT_001548c4 + 0x1548ac) + 8;
  return this;
}


