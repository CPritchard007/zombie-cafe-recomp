/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f146 PackagedData::load */

/* PackagedData::load() */

void __thiscall PackagedData::load(PackagedData *this)

{
  short *psVar1;
  int iVar2;
  
  if (*(char *)((int)*(int **)this + 0x12) == '\0') {
    (**(code **)(**(int **)this + 8))();
  }
  psVar1 = *(short **)(*(int *)this + 0x14);
  *(short **)(this + 4) = psVar1;
  iVar2 = (int)*psVar1;
  *(int *)(this + 8) = iVar2;
  *(int *)(this + 0xc) = iVar2 * 4 + 2;
  return;
}


