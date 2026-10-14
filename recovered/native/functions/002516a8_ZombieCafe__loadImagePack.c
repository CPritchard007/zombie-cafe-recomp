/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002516a8 ZombieCafe::loadImagePack */

/* ZombieCafe::loadImagePack(String, unsigned char) */

void ZombieCafe::loadImagePack(String *param_1,ZombieCafe *param_2,String *param_3,int param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00251878 + 0x2516b4);
  local_1c = *piVar5;
  String::String(param_1);
  String::String(aSStack_154,param_3);
  String::operator=(param_1,aSStack_154);
  String::~String(aSStack_154);
  if ((param_4 - 1U & 0xff) < 0xfe) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    pvVar1 = (void *)String::getBytes(param_3);
    snprintf(acStack_11c,0x100,(char *)(DAT_0025187c + 0x2516f6),pvVar1);
    free(pvVar1);
    String::String(aSStack_144,acStack_11c);
    String::String(aSStack_14c,aSStack_144);
    uVar2 = getImageSubpack(param_2,aSStack_14c);
    *(undefined4 *)(param_1 + 8) = uVar2;
    String::~String(aSStack_14c);
    if (*(int *)(param_1 + 8) == 0) {
      L_PrintLog((char *)(DAT_00251880 + 0x251732),(char *)(DAT_00251884 + 0x251734));
    }
    uVar2 = PackedImage::getImages(*(PackedImage **)(param_1 + 8),true);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    String::~String(aSStack_144);
  }
  if ((param_4 == 0xff) || (param_4 == 1)) {
    pvVar1 = (void *)String::getBytes(param_3);
    uVar2 = String::getBytes(param_3);
    snprintf(acStack_11c,0x100,(char *)(DAT_00251888 + 0x251778),uVar2);
    free(pvVar1);
    String::String(aSStack_144,acStack_11c);
    String::String(aSStack_13c,aSStack_144);
    uVar2 = getImageSubpack(param_2,aSStack_13c);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    String::~String(aSStack_13c);
    if (*(int *)(param_1 + 0xc) == 0) {
      L_PrintLog((char *)(DAT_0025188c + 0x2517b2),(char *)(DAT_00251890 + 0x2517b4));
    }
    uVar2 = PackedImage::getImages(*(PackedImage **)(param_1 + 0xc),true);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    String::~String(aSStack_144);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  String::String(aSStack_134,param_1);
  local_12c = *(undefined4 *)(param_1 + 8);
  local_128 = *(undefined4 *)(param_1 + 0xc);
  local_124 = *(undefined4 *)(param_1 + 0x10);
  local_120 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = *(int *)(param_2 + 0x584) + 2;
  if (*(int *)(param_2 + 0x580) < iVar4) {
    iVar3 = *(int *)(param_2 + 0x580) * 2;
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    Vector<NamedPackedImages>::resize((Vector<NamedPackedImages> *)(param_2 + 0x580),iVar3,-1);
  }
  iVar4 = *(int *)(param_2 + 0x584);
  *(int *)(param_2 + 0x584) = iVar4 + 1;
  NamedPackedImages::operator=
            ((NamedPackedImages *)(*(int *)(param_2 + 0x588) + (iVar4 + 1) * 0x18),
             (NamedPackedImages *)aSStack_134);
  String::~String(aSStack_134);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


