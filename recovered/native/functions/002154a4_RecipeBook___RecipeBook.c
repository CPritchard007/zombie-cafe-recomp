/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002154a4 RecipeBook::~RecipeBook */

/* RecipeBook::~RecipeBook() */

RecipeBook * __thiscall RecipeBook::~RecipeBook(RecipeBook *this)

{
  ~RecipeBook(this);
  operator_delete(this);
  return this;
}


