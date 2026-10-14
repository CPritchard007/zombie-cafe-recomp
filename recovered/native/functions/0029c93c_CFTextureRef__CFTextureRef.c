/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c93c CFTextureRef::CFTextureRef */

/* CFTextureRef::CFTextureRef(ccTexture2D*) */

CFTextureRef * __thiscall CFTextureRef::CFTextureRef(CFTextureRef *this,ccTexture2D *param_1)

{
  undefined4 uVar1;
  
  *(ccTexture2D **)(this + 4) = param_1;
  *(undefined4 *)this = 1;
  uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 4));
  uVar1 = __divsf3(0x3f800000,uVar1);
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 8));
  uVar1 = __divsf3(0x3f800000,uVar1);
  *(undefined4 *)(this + 0xc) = uVar1;
  return this;
}


