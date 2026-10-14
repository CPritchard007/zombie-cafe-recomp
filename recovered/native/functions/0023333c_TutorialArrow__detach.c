/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023333c TutorialArrow::detach */

/* TutorialArrow::detach() */

void __thiscall TutorialArrow::detach(TutorialArrow *this)

{
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  (**(code **)(*(int *)this + 0x20))();
  return;
}


