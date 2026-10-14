/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fde90 ObjectiveSystem::isObjectiveProgressComplete */

/* ObjectiveSystem::isObjectiveProgressComplete(Objective*) */

uint __thiscall
ObjectiveSystem::isObjectiveProgressComplete(ObjectiveSystem *this,Objective *param_1)

{
  return (((int)*(uint *)(param_1 + 4) >> 0x1f) - ((int)*(uint *)(param_1 + 8) >> 0x1f)) +
         (uint)(*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 4)) & 0xff;
}


