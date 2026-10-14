/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ab68 Recipe::Recipe */

/* Recipe::Recipe(Recipe const&) */

Recipe * __thiscall Recipe::Recipe(Recipe *this,Recipe *param_1)

{
  String::String((String *)this,(String *)param_1);
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(this + 10) = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)(this + 0xe) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)(this + 0x10) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)(this + 0x12) = *(undefined2 *)(param_1 + 0x12);
  *(undefined2 *)(this + 0x14) = *(undefined2 *)(param_1 + 0x14);
  this[0x16] = param_1[0x16];
  this[0x17] = param_1[0x17];
  this[0x18] = param_1[0x18];
  return this;
}


