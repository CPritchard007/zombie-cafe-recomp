/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0b0c CCCapcomLoad::Init */

/* CCCapcomLoad::Init(unsigned int, unsigned int, unsigned int, unsigned int, char const*, unsigned
   int) */

void CCCapcomLoad::Init(uint param_1,uint param_2,uint param_3,uint param_4,char *param_5,
                       uint param_6)

{
  uint *__ptr;
  int iVar1;
  ccTexture2D *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  char acStack_120 [260];
  int local_1c;
  
  piVar7 = *(int **)(DAT_002c0d1c + 0x2c0b18);
  local_1c = *piVar7;
  __ptr = (uint *)malloc(0x358);
  if (__ptr != (uint *)0x0) {
    __ptr[0xd0] = 0;
    __ptr[0xd1] = 0;
    __ptr[1] = param_2;
    *__ptr = param_1;
    __ptr[0xd2] = param_4;
    __ptr[0xd3] = 0;
    __ptr[0xd4] = 0;
    *(bool *)(__ptr + 2) = param_6 != 0;
    if (param_6 == 0) {
LAB_002c0cfa:
      __ptr[0xd5] = 0;
      goto LAB_002c0d08;
    }
    pcVar2 = (ccTexture2D *)(__ptr + 3);
    CCGetFilePath(acStack_120,0x104,DAT_002c0d20 + 0x2c0b78,0);
    iVar1 = CCTexture2D::LoadFromImageFile(pcVar2,acStack_120);
    if (iVar1 != 0) {
      iVar1 = CCMaterial::SetupSimple((ccMaterial *)(__ptr + 0xe),pcVar2);
      if (iVar1 != 0) {
        CCMaterial::EnableBlending((ccMaterial *)(__ptr + 0xe),6,7);
        CCGetFilePath(acStack_120,0x104,DAT_002c0d24 + 0x2c0bb0,0);
        pcVar2 = (ccTexture2D *)(__ptr + 0x45);
        iVar1 = CCTexture2D::LoadFromImageFile(pcVar2,acStack_120);
        if (iVar1 == 0) goto LAB_002c0c22;
        iVar1 = CCMaterial::SetupSimple((ccMaterial *)(__ptr + 0x5b),pcVar2);
        if (iVar1 != 0) {
          CCMaterial::EnableBlending((ccMaterial *)(__ptr + 0x5b),6,7);
          CCGetFilePath(acStack_120,0x104,DAT_002c0d28 + 0x2c0bf4,0);
          pcVar2 = (ccTexture2D *)(__ptr + 0x50);
          iVar1 = CCTexture2D::LoadFromImageFile(pcVar2,acStack_120);
          if (iVar1 == 0) goto LAB_002c0c22;
          iVar1 = CCMaterial::SetupSimple((ccMaterial *)(__ptr + 0x82),pcVar2);
          if (iVar1 != 0) {
            CCMaterial::EnableBlending((ccMaterial *)(__ptr + 0x82),6,7);
            CCMaterial::SetupBasic((ccMaterial *)(__ptr + 0xa9));
            CCMaterial::EnableBlending((ccMaterial *)(__ptr + 0xa9),6,7);
            if (param_3 == 0) {
              __ptr[0x39] = 0;
              __ptr[0x35] = 0;
              uVar3 = __floatunsisf(param_1);
              __ptr[0x3b] = uVar3;
              __ptr[0x37] = uVar3;
              uVar3 = __floatunsisf(param_2);
              __ptr[0x38] = uVar3;
              __ptr[0x36] = uVar3;
              __ptr[0x3c] = 0;
              puVar6 = __ptr + 0x3a;
            }
            else {
              __ptr[0x3a] = 0;
              __ptr[0x36] = 0;
              uVar3 = __floatunsisf(param_2);
              __ptr[0x3c] = uVar3;
              __ptr[0x38] = uVar3;
              uVar3 = __floatunsisf(param_1);
              __ptr[0x3b] = uVar3;
              __ptr[0x39] = uVar3;
              __ptr[0x37] = 0;
              puVar6 = __ptr + 0x35;
            }
            *puVar6 = 0;
            __ptr[0x41] = 0;
            __ptr[0x3d] = 0;
            uVar4 = __floatunsisf(__ptr[8]);
            uVar5 = __floatunsisf(__ptr[4]);
            uVar3 = __divsf3(uVar4,uVar5);
            __ptr[0x43] = uVar3;
            __ptr[0x3f] = uVar3;
            __ptr[0x40] = 0;
            __ptr[0x3e] = 0;
            uVar4 = __floatunsisf(__ptr[9]);
            uVar5 = __floatunsisf(__ptr[5]);
            uVar3 = __divsf3(uVar4,uVar5);
            __ptr[0x44] = uVar3;
            __ptr[0x42] = uVar3;
            goto LAB_002c0cfa;
          }
        }
      }
      CCTexture2D::Free(pcVar2);
    }
LAB_002c0c22:
    free(__ptr);
  }
  __ptr = (uint *)0xffffffff;
LAB_002c0d08:
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__ptr);
}


