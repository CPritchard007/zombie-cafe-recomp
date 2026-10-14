/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cc4e4 CharacterCommandBar::enableButton */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000cc512) */
/* WARNING: Removing unreachable block (ram,0x000cc512) */
/* CharacterCommandBar::enableButton(int, void (*)(void*, ScreenElement*), void*) */

undefined4 __thiscall
CharacterCommandBar::enableButton
          (CharacterCommandBar *this,int param_1,_func_void_void_ptr_ScreenElement_ptr *param_2,
          void *param_3)

{
  String *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  code *pcVar10;
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar9 = DAT_000cc860 + 0xcc4fa;
  puVar8 = *(undefined4 **)(*(int *)(this + 0x7c) + param_1 * 4);
  if (0xb < param_1) goto LAB_000ccb1c;
  if (puVar8 != (undefined4 *)0x0) {
    if (param_1 == 9) {
      (**(code **)(*(int *)puVar8[1] + 0x20))((int *)puVar8[1],0);
      piVar7 = (int *)puVar8[3];
      uVar2 = 0;
      pcVar10 = *(code **)(*piVar7 + 0x20);
    }
    else {
      iVar4 = *(int *)(this + 0x60);
      piVar7 = (int *)puVar8[3];
      if ((param_1 != 0xb) && (param_1 != 4)) {
        iVar5 = *(int *)(iVar9 + DAT_000ccc1c);
        if (*(char *)(iVar4 + DAT_000ccc24) == '\0') {
          pcVar10 = *(code **)(*piVar7 + 0x14);
          iVar4 = SmDev();
          uVar2 = __fixsfsi(*(undefined4 *)(iVar5 + iVar4 * 4));
          iVar4 = SmDev();
          uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000ccc20)));
          (*pcVar10)(piVar7,uVar2,uVar3);
        }
        else {
          pcVar10 = *(code **)(*piVar7 + 0x14);
          iVar9 = SmDev();
          uVar2 = __fixsfsi(*(undefined4 *)(iVar5 + iVar9 * 4));
          (*pcVar10)(piVar7,uVar2,0x5a);
        }
        goto LAB_000ccb1c;
      }
      if (*(char *)(iVar4 + 0x9f0) == '\0') {
LAB_000cc92a:
        iVar5 = 0;
      }
      else if (*(char *)(iVar4 + DAT_000ccbf4) == '\0') {
        iVar5 = *(int *)(iVar4 + DAT_000ccbf8);
        if (iVar5 < 1) goto LAB_000cc92a;
      }
      else {
        iVar5 = 0;
      }
      uVar6 = (uint)*(byte *)(iVar4 + DAT_000ccbfc);
      if ((uVar6 != 0) && (uVar6 = 0, *(char *)(iVar4 + DAT_000ccc00) == '\0')) {
        uVar6 = *(uint *)(iVar4 + DAT_000ccc04) & (int)~*(uint *)(iVar4 + DAT_000ccc04) >> 0x1f;
      }
      if (iVar5 + uVar6 == 0) {
        pcVar10 = *(code **)(*piVar7 + 0x14);
        iVar4 = SmDev();
        uVar2 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000ccc1c)));
        iVar4 = SmDev();
        uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000ccc20)));
        (*pcVar10)(piVar7,uVar2,uVar3);
        piVar7 = (int *)puVar8[3];
        pcVar10 = *(code **)(*piVar7 + 0x44);
        String::valueOf((int)aSStack_20);
        (*pcVar10)(piVar7,aSStack_20);
        String::~String(aSStack_20);
        piVar7 = (int *)puVar8[1];
        uVar2 = 1;
        pcVar10 = *(code **)(*piVar7 + 0x20);
      }
      else {
        if (((int)uVar6 < 1) || (iVar5 < 1)) {
          if (uVar6 == 0) {
            pcVar10 = *(code **)(*piVar7 + 0x44);
            String::valueOf((int)aSStack_40);
            String::operator+(aSStack_38,(char *)aSStack_40);
            String::valueOf((int)aSStack_30);
            String::operator+(aSStack_28,aSStack_38,aSStack_30);
            (*pcVar10)(piVar7,aSStack_28);
            String::~String(aSStack_28);
            String::~String(aSStack_30);
            String::~String(aSStack_38);
            pSVar1 = aSStack_40;
          }
          else {
            pcVar10 = *(code **)(*piVar7 + 0x44);
            String::valueOf((int)aSStack_60);
            String::operator+(aSStack_58,(char *)aSStack_60);
            String::valueOf((int)aSStack_50);
            String::operator+(aSStack_48,aSStack_58,aSStack_50);
            (*pcVar10)(piVar7,aSStack_48);
            String::~String(aSStack_48);
            String::~String(aSStack_50);
            String::~String(aSStack_58);
            pSVar1 = aSStack_60;
          }
        }
        else {
          pcVar10 = *(code **)(*piVar7 + 0x44);
          String::valueOf((int)aSStack_70);
          String::operator+(aSStack_68,(char *)aSStack_70);
          (*pcVar10)(piVar7,aSStack_68);
          String::~String(aSStack_68);
          pSVar1 = aSStack_70;
        }
        String::~String(pSVar1);
        piVar7 = (int *)puVar8[3];
        pcVar10 = *(code **)(*piVar7 + 0x14);
        iVar4 = SmDev();
        uVar2 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000ccc14)));
        iVar4 = SmDev();
        uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000ccc18)));
        (*pcVar10)(piVar7,uVar2,uVar3);
        piVar7 = (int *)puVar8[1];
        uVar2 = 0;
        pcVar10 = *(code **)(*piVar7 + 0x20);
      }
      (*pcVar10)(piVar7,uVar2);
      piVar7 = (int *)puVar8[3];
      uVar2 = 1;
      pcVar10 = *(code **)(*piVar7 + 0x20);
    }
    (*pcVar10)(piVar7,uVar2);
    goto LAB_000ccb1c;
  }
  switch(param_1) {
  case 0:
    iVar9 = 0x80;
    break;
  case 1:
    iVar9 = 0x35;
    break;
  case 2:
    iVar9 = 0x2b;
    break;
  case 3:
    puVar8 = (undefined4 *)
             addButton(this,(_func_void_void_ptr_ScreenElement_ptr *)0x0,(void *)0x0,0xe);
    piVar7 = (int *)puVar8[3];
    iVar4 = *(int *)(iVar9 + DAT_000cc868);
    if (*(char *)(*(int *)(this + 0x60) + DAT_000cc864) == '\0') {
      pcVar10 = *(code **)(*piVar7 + 0x14);
      iVar5 = SmDev();
      uVar2 = __fixsfsi(*(undefined4 *)(iVar4 + iVar5 * 4));
      iVar4 = SmDev();
      uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000cc86c)));
      (*pcVar10)(piVar7,uVar2,uVar3);
    }
    else {
      pcVar10 = *(code **)(*piVar7 + 0x14);
      iVar9 = SmDev();
      uVar2 = __fixsfsi(*(undefined4 *)(iVar4 + iVar9 * 4));
      (*pcVar10)(piVar7,uVar2,0x5a);
    }
    piVar7 = (int *)puVar8[3];
    pcVar10 = *(code **)(*piVar7 + 0x44);
    String::valueOf((int)aSStack_d0);
    (*pcVar10)(piVar7,aSStack_d0);
    pSVar1 = aSStack_d0;
LAB_000cc7b0:
    String::~String(pSVar1);
    goto LAB_000cc822;
  case 4:
    puVar8 = (undefined4 *)
             addButton(this,(_func_void_void_ptr_ScreenElement_ptr *)0x0,(void *)0x0,0xf);
    piVar7 = (int *)puVar8[1];
    pcVar10 = *(code **)(*piVar7 + 0x14);
    iVar4 = SmDev();
    uVar2 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000cc870)));
    (*pcVar10)(piVar7,uVar2,0);
    iVar4 = *(int *)(this + 0x60);
    if (*(char *)(iVar4 + 0x9f0) == '\0') {
LAB_000cc630:
      iVar5 = 0;
    }
    else if (*(char *)(iVar4 + DAT_000cc874) == '\0') {
      iVar5 = *(int *)(iVar4 + DAT_000cc878);
      if (iVar5 < 1) goto LAB_000cc630;
    }
    else {
      iVar5 = 0;
    }
    uVar6 = (uint)*(byte *)(iVar4 + DAT_000cc87c);
    if ((uVar6 != 0) && (uVar6 = 0, *(char *)(iVar4 + DAT_000cc880) == '\0')) {
      uVar6 = *(uint *)(iVar4 + DAT_000cc884) & (int)~*(uint *)(iVar4 + DAT_000cc884) >> 0x1f;
    }
    piVar7 = (int *)puVar8[3];
    if (iVar5 + uVar6 == 0) {
      pcVar10 = *(code **)(*piVar7 + 0x14);
      iVar4 = SmDev();
      uVar2 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000cc868)));
      iVar4 = SmDev();
      uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000cc86c)));
      (*pcVar10)(piVar7,uVar2,uVar3);
      piVar7 = (int *)puVar8[3];
      pcVar10 = *(code **)(*piVar7 + 0x44);
      String::valueOf((int)aSStack_78);
      (*pcVar10)(piVar7,aSStack_78);
      pSVar1 = aSStack_78;
      goto LAB_000cc7b0;
    }
    if (((int)uVar6 < 1) || (iVar5 < 1)) {
      if (uVar6 == 0) {
        pcVar10 = *(code **)(*piVar7 + 0x44);
        String::valueOf((int)aSStack_98);
        String::operator+(aSStack_90,(char *)aSStack_98);
        String::valueOf((int)aSStack_88);
        String::operator+(aSStack_80,aSStack_90,aSStack_88);
        (*pcVar10)(piVar7,aSStack_80);
        String::~String(aSStack_80);
        String::~String(aSStack_88);
        String::~String(aSStack_90);
        pSVar1 = aSStack_98;
      }
      else {
        pcVar10 = *(code **)(*piVar7 + 0x44);
        String::valueOf((int)aSStack_b8);
        String::operator+(aSStack_b0,(char *)aSStack_b8);
        String::valueOf((int)aSStack_a8);
        String::operator+(aSStack_a0,aSStack_b0,aSStack_a8);
        (*pcVar10)(piVar7,aSStack_a0);
        String::~String(aSStack_a0);
        String::~String(aSStack_a8);
        String::~String(aSStack_b0);
        pSVar1 = aSStack_b8;
      }
    }
    else {
      pcVar10 = *(code **)(*piVar7 + 0x44);
      String::valueOf((int)aSStack_c8);
      String::operator+(aSStack_c0,(char *)aSStack_c8);
      (*pcVar10)(piVar7,aSStack_c0);
      String::~String(aSStack_c0);
      pSVar1 = aSStack_c8;
    }
    String::~String(pSVar1);
    piVar7 = (int *)puVar8[3];
    pcVar10 = *(code **)(*piVar7 + 0x14);
    iVar4 = SmDev();
    uVar2 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000cc894)));
    iVar4 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000cc898)));
    (*pcVar10)(piVar7,uVar2,uVar3);
    piVar7 = (int *)puVar8[1];
    uVar2 = 0;
    pcVar10 = *(code **)(*piVar7 + 0x20);
    goto LAB_000cc82a;
  case 5:
    puVar8 = (undefined4 *)
             addButton(this,(_func_void_void_ptr_ScreenElement_ptr *)0x0,(void *)0x0,0x2c);
    piVar7 = (int *)puVar8[3];
    iVar4 = *(int *)(iVar9 + DAT_000cc868);
    if (*(char *)(*(int *)(this + 0x60) + DAT_000cc864) == '\0') {
      pcVar10 = *(code **)(*piVar7 + 0x14);
      iVar5 = SmDev();
      uVar2 = __fixsfsi(*(undefined4 *)(iVar4 + iVar5 * 4));
      iVar4 = SmDev();
      uVar3 = __fixsfsi(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar9 + DAT_000cc86c)));
      (*pcVar10)(piVar7,uVar2,uVar3);
    }
    else {
      pcVar10 = *(code **)(*piVar7 + 0x14);
      iVar9 = SmDev();
      uVar2 = __fixsfsi(*(undefined4 *)(iVar4 + iVar9 * 4));
      (*pcVar10)(piVar7,uVar2,0x5a);
    }
LAB_000cc822:
    piVar7 = (int *)puVar8[1];
    uVar2 = 1;
    pcVar10 = *(code **)(*piVar7 + 0x20);
LAB_000cc82a:
    (*pcVar10)(piVar7,uVar2);
    (**(code **)(*(int *)puVar8[3] + 0x20))((int *)puVar8[3],1);
    goto LAB_000cc8be;
  case 6:
    iVar9 = 0x7b;
    break;
  case 7:
    iVar9 = 0x2d;
    break;
  case 8:
    iVar9 = 0x89;
    break;
  case 9:
    iVar9 = 0xdf;
    break;
  case 10:
    iVar9 = 0xd8;
    break;
  case 0xb:
    iVar9 = 0xe0;
    break;
  default:
    if (param_1 < 0) goto LAB_000ccb1c;
    goto LAB_000cc8be;
  }
  puVar8 = (undefined4 *)
           addButton(this,(_func_void_void_ptr_ScreenElement_ptr *)0x0,(void *)0x0,iVar9);
LAB_000cc8be:
  if (param_1 <= *(int *)(this + 0x78)) {
    *(undefined4 **)(*(int *)(this + 0x7c) + param_1 * 4) = puVar8;
  }
LAB_000ccb1c:
  (**(code **)(*(int *)*puVar8 + 0x20))((int *)*puVar8,1);
  puVar8[4] = param_2;
  puVar8[5] = param_3;
  layoutButtons(this);
  return *puVar8;
}


