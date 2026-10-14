/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fef84 CookingOrder::discard */

/* CookingOrder::discard(CookingOrder*) */

void CookingOrder::discard(CookingOrder *param_1)

{
  CapcomApp::getInstance();
  GameStateCafe::onCookCommandBarDiscard
            (*(GameStateCafe **)(*(int *)(param_1 + 0x60) + 100),*(Stove **)(param_1 + 0x7c));
  (**(code **)(**(int **)(param_1 + 0x60) + 0x20))(*(int **)(param_1 + 0x60),0);
  return;
}


