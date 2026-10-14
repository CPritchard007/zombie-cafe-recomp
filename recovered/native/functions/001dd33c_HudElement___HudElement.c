/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dd33c HudElement::~HudElement */

/* HudElement::~HudElement() */

HudElement * __thiscall HudElement::~HudElement(HudElement *this)

{
  ~HudElement(this);
  operator_delete(this);
  return this;
}


