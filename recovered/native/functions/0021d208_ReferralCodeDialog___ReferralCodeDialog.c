/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d208 ReferralCodeDialog::~ReferralCodeDialog */

/* ReferralCodeDialog::~ReferralCodeDialog() */

ReferralCodeDialog * __thiscall ReferralCodeDialog::~ReferralCodeDialog(ReferralCodeDialog *this)

{
  CapcomTrueTypeFont *this_00;
  
  *(int *)this = *(int *)(DAT_0021d2d4 + 0x21d212) + 8;
  if (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x74) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x78) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x78) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  this_00 = *(CapcomTrueTypeFont **)(this + 0x84);
  if (this_00 != (CapcomTrueTypeFont *)0x0) {
    CapcomTrueTypeFont::~CapcomTrueTypeFont(this_00);
    operator_delete(this_00);
  }
  String::~String((String *)(this + 0x88));
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


