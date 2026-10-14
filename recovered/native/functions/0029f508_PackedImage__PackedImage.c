/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f508 PackedImage::PackedImage */

/* PackedImage::PackedImage(CImage*, String, int, int, int) */

void __thiscall
PackedImage::PackedImage
          (PackedImage *this,CImage *param_1,String *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  int iVar13;
  short local_140;
  short local_13c;
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar9 = *(int **)(DAT_0029f6b8 + 0x29f514);
  local_1c = *piVar9;
  CImage::CImage((CImage *)this,param_1);
  *(int *)this = *(int *)(DAT_0029f6bc + 0x29f528) + 8;
  iVar7 = *(int *)(this + 0x14);
  iVar5 = iVar7;
  if (iVar7 != 0) {
    iVar5 = *(int *)(iVar7 + 4);
  }
  uVar10 = *(undefined4 *)(iVar5 + 0x14);
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar7 + 4);
  }
  uVar12 = *(undefined4 *)(iVar7 + 0x18);
  String::String(aSStack_124,param_3);
  String::operator=((String *)(this + 4),aSStack_124);
  String::~String(aSStack_124);
  iVar7 = __udivsi3(uVar10,param_5);
  iVar3 = __udivsi3(uVar12,param_6);
  sVar1 = (short)iVar3 * (short)iVar7;
  *(short *)(this + 0x38) = sVar1;
  iVar5 = (int)sVar1;
  *(undefined4 *)(this + 0xc) = param_4;
  puVar4 = (undefined4 *)operator_new__(iVar5 * 0x18 + 8);
  *puVar4 = 0x18;
  puVar4[1] = iVar5;
  puVar11 = (undefined2 *)((int)puVar4 + 0x1e);
  while (iVar2 = DAT_0029f6c0, iVar5 = iVar5 + -1, iVar5 != -1) {
    String::String((String *)(puVar11 + -0xb));
    *puVar11 = 0;
    puVar11[-1] = 0;
    puVar11[-2] = 0;
    puVar11[-3] = 0;
    puVar11 = puVar11 + 0xc;
  }
  *(undefined4 **)(this + 0x34) = puVar4 + 2;
  for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
    local_13c = (short)iVar5 * (short)param_6;
    for (iVar13 = 0; iVar13 < iVar7; iVar13 = iVar13 + 1) {
      iVar6 = iVar5 * iVar7 + iVar13;
      local_140 = (short)iVar13 * (short)param_5;
      iVar8 = iVar6 * 0x18;
      *(short *)(*(int *)(this + 0x34) + iVar8 + 8) = local_140;
      *(short *)(*(int *)(this + 0x34) + iVar8 + 10) = local_13c;
      *(short *)(*(int *)(this + 0x34) + iVar8 + 0xc) = (short)param_5;
      *(short *)(*(int *)(this + 0x34) + iVar8 + 0xe) = (short)param_6;
      iVar8 = *(int *)(this + 0x34) + iVar8;
      sprintf(acStack_11c,(char *)(iVar2 + 0x29f5cc),iVar6,(int)*(short *)(iVar8 + 8),
              (int)*(short *)(iVar8 + 10),(int)*(short *)(iVar8 + 0xc),(int)*(short *)(iVar8 + 0xe))
      ;
      L_PrintLog((char *)(DAT_0029f6c4 + 0x29f63e),acStack_11c);
    }
  }
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


