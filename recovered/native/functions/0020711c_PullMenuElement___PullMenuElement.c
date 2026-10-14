/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020711c PullMenuElement::~PullMenuElement */

/* PullMenuElement::~PullMenuElement() */

PullMenuElement * __thiscall PullMenuElement::~PullMenuElement(PullMenuElement *this)

{
  ~PullMenuElement(this);
  operator_delete(this);
  return this;
}


