/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bff80 CCHud::Init */

/* CCHud::Init(unsigned int, unsigned int) */

undefined4 * CCHud::Init(uint param_1,uint param_2)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  int iVar2;
  ccTexture2D *pcVar3;
  
  __ptr = (undefined4 *)malloc(0xdc);
  if (__ptr != (undefined4 *)0x0) {
    uVar1 = __floatunsisf(param_1);
    *__ptr = uVar1;
    uVar1 = __floatunsisf(param_2);
    __ptr[3] = 0;
    __ptr[1] = uVar1;
    __ptr[2] = 0;
    uVar1 = CCGetTimeMS();
    pcVar3 = (ccTexture2D *)(__ptr + 5);
    iVar2 = DAT_002c0000 + 0x2bffb6;
    __ptr[4] = uVar1;
    iVar2 = CCTexture2D::LoadFromData(pcVar3,1,0x80,0x80,0,iVar2,0);
    if (iVar2 != 0) {
      iVar2 = CCMaterial::SetupSimple((ccMaterial *)(__ptr + 0x10),pcVar3);
      if (iVar2 != 0) {
        CCMaterial::EnableBlending((ccMaterial *)(__ptr + 0x10),6,7);
        return __ptr;
      }
      CCTexture2D::Free(pcVar3);
    }
    free(__ptr);
  }
  return (undefined4 *)0xffffffff;
}


