/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a71e0 ComponentAnimation::createAnimation */

/* ComponentAnimation::createAnimation(ComponentAnimation::ComponentAnimationData*) */

ComponentAnimation * ComponentAnimation::createAnimation(ComponentAnimationData *param_1)

{
  ComponentAnimation *this;
  
  this = (ComponentAnimation *)operator_new(0x24);
  ComponentAnimation(this,param_1);
  return this;
}


