/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d175c Quest::~Quest */

/* Quest::~Quest() */

Quest * __thiscall Quest::~Quest(Quest *this)

{
  ~Quest(this);
  operator_delete(this);
  return this;
}


