/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206e98 ProgressBarAttachment::~ProgressBarAttachment */

/* ProgressBarAttachment::~ProgressBarAttachment() */

ProgressBarAttachment * __thiscall
ProgressBarAttachment::~ProgressBarAttachment(ProgressBarAttachment *this)

{
  *(int *)this = *(int *)(DAT_00206eb0 + 0x206ea2) + 8;
  Furniture::~Furniture((Furniture *)this);
  return this;
}


