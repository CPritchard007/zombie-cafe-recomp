/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000befb2 Cafe::addStatusNote */

/* Cafe::addStatusNote(StatusNote*) */

void __thiscall Cafe::addStatusNote(Cafe *this,StatusNote *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(8);
  puVar1[1] = 0;
  *(undefined4 **)(*(int *)(this + 0x70) + 4) = puVar1;
  *(undefined4 **)(this + 0x70) = puVar1;
  *puVar1 = param_1;
  *(undefined4 *)(*(int *)(this + 0x70) + 4) = 0;
  *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
  return;
}


