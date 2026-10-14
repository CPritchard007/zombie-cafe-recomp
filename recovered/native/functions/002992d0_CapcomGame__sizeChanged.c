/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002992d0 CapcomGame::sizeChanged */

/* CapcomGame::sizeChanged(int, int) */

void __thiscall CapcomGame::sizeChanged(CapcomGame *this,int param_1,int param_2)

{
  *(uint *)(this + 0x10) = param_2 & 0xffffU | param_1 << 0x10;
  *(uint *)(this + 0x14) = param_2 >> 1 & 0xffffU | (param_1 >> 1) << 0x10;
  (**(code **)(**(int **)(this + 8) + 0x10))();
  return;
}


