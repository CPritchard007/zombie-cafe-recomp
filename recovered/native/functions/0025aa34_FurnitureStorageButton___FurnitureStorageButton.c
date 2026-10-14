/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025aa34 FurnitureStorageButton::~FurnitureStorageButton */

/* FurnitureStorageButton::~FurnitureStorageButton() */

FurnitureStorageButton * __thiscall
FurnitureStorageButton::~FurnitureStorageButton(FurnitureStorageButton *this)

{
  *(int *)this = *(int *)(DAT_0025aa64 + 0x25aa3e) + 8;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
    *(undefined4 *)(this + 0x78) = 0;
  }
  *(int *)this = *(int *)(DAT_0025aa68 + 0x25aa58) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


