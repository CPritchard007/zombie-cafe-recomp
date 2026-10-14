/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4864 CCBoundingRect::Init */

/* CCBoundingRect::Init(ccBoundingRect*, ccVec2 const*, ccVec2 const*) */

undefined4 CCBoundingRect::Init(ccBoundingRect *param_1,ccVec2 *param_2,ccVec2 *param_3)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 4);
  return 1;
}


