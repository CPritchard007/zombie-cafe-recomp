/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7194 ComponentAnimation::ComponentAnimation */

/* ComponentAnimation::ComponentAnimation(ComponentAnimation::ComponentAnimationData*) */

ComponentAnimation * __thiscall
ComponentAnimation::ComponentAnimation(ComponentAnimation *this,ComponentAnimationData *param_1)

{
  int iVar1;
  
  ImageAnimation::ImageAnimation((ImageAnimation *)this);
  iVar1 = DAT_002a71d8;
  *(ComponentAnimationData **)(this + 0x20) = param_1;
  *(int *)this = *(int *)(iVar1 + 0x2a71a8) + 8;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  this[8] = SUB21(*(undefined2 *)(param_1 + 4),0);
  setFrame(this,0);
  this[5] = (ComponentAnimation)0xff;
  this[6] = (ComponentAnimation)0x1;
  return this;
}


