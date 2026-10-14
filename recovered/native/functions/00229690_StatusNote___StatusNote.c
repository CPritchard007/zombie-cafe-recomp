/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229690 StatusNote::~StatusNote */

/* StatusNote::~StatusNote() */

StatusNote * __thiscall StatusNote::~StatusNote(StatusNote *this)

{
  ~StatusNote(this);
  operator_delete(this);
  return this;
}


