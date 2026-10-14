/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a76a8 PathTween::~PathTween */

/* PathTween::~PathTween() */

PathTween * __thiscall PathTween::~PathTween(PathTween *this)

{
  ~PathTween(this);
  operator_delete(this);
  return this;
}


