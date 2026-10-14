/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf5c4 CCSound::Tick */

/* CCSound::Tick(void*, float) */

void __thiscall CCSound::Tick(CCSound *this,void *param_1,float param_2)

{
  uint uVar1;
  undefined4 in_s1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(in_s1,param_2);
  for (uVar1 = 0; uVar1 < *(uint *)(this + 0x1c); uVar1 = uVar1 + 1) {
    uVar2 = L_TickEffect((SSoundEffect *)(*(int *)(this + 0x24) + uVar1 * 0x118),(float)uVar2,
                         (float)((ulonglong)uVar2 >> 0x20));
  }
  for (uVar1 = 0; uVar1 < *(uint *)(this + 0x28); uVar1 = uVar1 + 1) {
    uVar2 = L_TickMusic((SSoundEffect *)(*(int *)(this + 0x30) + uVar1 * 0x118),(float)uVar2,
                        (float)((ulonglong)uVar2 >> 0x20));
  }
  return;
}


