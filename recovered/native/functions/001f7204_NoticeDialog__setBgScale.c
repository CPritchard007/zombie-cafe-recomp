/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f7204 NoticeDialog::setBgScale */

/* NoticeDialog::setBgScale(float, float) */

void NoticeDialog::setBgScale(float param_1,float param_2)

{
  int in_r0;
  undefined4 in_r1;
  
  *(undefined4 *)(in_r0 + 0x8c) = in_r1;
  ImageElement::setScale(*(ImageElement **)(in_r0 + 100),param_1,param_2);
  layout();
  return;
}


