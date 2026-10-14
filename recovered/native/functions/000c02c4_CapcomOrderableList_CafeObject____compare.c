/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c02c4 CapcomOrderableList<CafeObject*>::compare */

/* CapcomOrderableList<CafeObject*>::compare(CafeObject*, CafeObject*) */

void CapcomOrderableList<CafeObject*>::compare(CafeObject *param_1,CafeObject *param_2)

{
  undefined4 in_r2;
  
  if (param_1[0x18] == (CafeObject)0x1) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24));
  }
  else {
    (**(code **)(param_1 + 0x1c))(param_2,in_r2);
  }
  return;
}


