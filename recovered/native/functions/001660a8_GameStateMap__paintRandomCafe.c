/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001660a8 GameStateMap::paintRandomCafe */

/* GameStateMap::paintRandomCafe(CapcomGraphics*) */

void __thiscall GameStateMap::paintRandomCafe(GameStateMap *this,CapcomGraphics *param_1)

{
  int *local_64 [12];
  String aSStack_34 [40];
  
  CapcomGraphics::setColorModulation(param_1,true);
  CapcomGraphics::setColor(param_1,-0x1000000);
  MapCafe::MapCafe((MapCafe *)local_64,
                   (MapCafe *)(*(int *)(this + 0xcc) + *(int *)(this + 200) * 0x54));
  (**(code **)(*local_64[0] + 0xc))(local_64[0],param_1);
  String::~String(aSStack_34);
  CapcomGraphics::setColorModulation(param_1,false);
  return;
}


