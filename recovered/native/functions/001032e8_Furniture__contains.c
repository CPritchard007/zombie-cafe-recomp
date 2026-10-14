/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001032e8 Furniture::contains */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00103302) */
/* WARNING: Removing unreachable block (ram,0x00103302) */
/* Furniture::contains(long) */

undefined4 __thiscall Furniture::contains(Furniture *this,long param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_stack_ffffffd0;
  short sVar13;
  undefined4 in_stack_ffffffd4;
  
  piVar7 = *(int **)(this + 0x38);
  switch((char)piVar7[0x11]) {
  case '\x01':
    iVar8 = DAT_0010343c;
    break;
  case '\x02':
    iVar8 = DAT_00103430;
    break;
  case '\x03':
    iVar8 = DAT_00103434;
    break;
  default:
    uVar9 = 0;
    bVar3 = false;
    goto LAB_00103330;
  case '\b':
    iVar8 = DAT_00103440;
    break;
  case '\v':
    iVar8 = DAT_00103438;
  }
  uVar9 = **(undefined4 **)(DAT_0010342c + 0x103300 + iVar8);
  bVar3 = true;
LAB_00103330:
  uVar11 = (*(uint *)(this + 4) >> 0x10) - ((uint)piVar7[(byte)this[0x34] + 1] >> 0x10);
  uVar12 = uVar11 * 0x10000 | *(int *)(this + 4) - piVar7[(byte)this[0x34] + 1] & 0xffffU;
  iVar8 = *(int *)(*(short *)((int)piVar7 + ((byte)this[0x34] + 0x1c) * 2 + 4) * 4 + *piVar7);
  sVar1 = *(short *)(iVar8 + 0x2a);
  uVar10 = *(undefined4 *)(iVar8 + 0x2c);
  sVar2 = *(short *)(iVar8 + 0x26);
  if (bVar3) {
    uVar11 = (((uint)param_1 >> 0x10) - (uVar11 & 0xffff)) * 0x10000 | param_1 - uVar12 & 0xffff;
    iVar6 = (int)uVar11 >> 0x10;
    uVar4 = __floatsisf((int)*(short *)(iVar8 + 0x20));
    sVar13 = (short)uVar11;
    uVar10 = __mulsf3(uVar4,uVar10);
    uVar4 = __floatsisf((int)sVar1);
    uVar10 = __addsf3(uVar10,uVar4);
    uVar4 = __floatsisf((int)sVar2);
    __addsf3(uVar10,uVar4);
    iVar8 = __fixsfsi();
    uVar10 = __floatsisf((int)sVar13);
    uVar4 = __floatsisf(iVar8 / 2 - iVar6);
    uVar4 = __mulsf3(uVar9,uVar4);
    iVar5 = __aeabi_fcmplt(uVar10,uVar4);
    in_stack_ffffffd4 = 0;
    if (iVar5 != 0) {
      return 0;
    }
    uVar4 = __floatsisf(iVar8 / 2 + (iVar6 - iVar8));
    uVar9 = __mulsf3(uVar9,uVar4);
    iVar8 = __aeabi_fcmplt(uVar10,uVar9);
    if (iVar8 != 0) {
      return in_stack_ffffffd4;
    }
  }
  uVar9 = CFRectangle::contains
                    (*(CFRectangle **)(this + 0x20),CONCAT44(in_stack_ffffffd4,in_stack_ffffffd0),
                     uVar12);
  return uVar9;
}


