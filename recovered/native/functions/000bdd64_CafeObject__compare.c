/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdd64 CafeObject::compare */

/* CafeObject::compare(CafeObject*, CafeObject*) */

int CafeObject::compare(CafeObject *param_1,CafeObject *param_2)

{
  return (int)*(short *)(param_1 + 0x24) - (int)*(short *)(param_2 + 0x24);
}


