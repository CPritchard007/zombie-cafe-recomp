/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210a18 RatingBar::tick */

/* RatingBar::tick(long) */

void __thiscall RatingBar::tick(RatingBar *this,long param_1)

{
  RatingBar *pRVar1;
  
  pRVar1 = this + 0x8c;
  if (*(int *)pRVar1 < 1) {
    *(undefined4 *)pRVar1 = 0;
    *(undefined4 *)(this + 0x88) = 0;
  }
  else {
    *(int *)pRVar1 = *(int *)pRVar1 - param_1;
  }
  return;
}


