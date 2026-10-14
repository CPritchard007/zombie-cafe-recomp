/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2528 L_SetupScreenForSimpleImage */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002c2532) */
/* WARNING: Removing unreachable block (ram,0x002c2532) */
/* L_SetupScreenForSimpleImage(unsigned int, unsigned int, unsigned int) */

undefined8 L_SetupScreenForSimpleImage(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_20;
  uint local_1c;
  
  local_20 = param_1;
  local_1c = param_2;
  switch(param_1) {
  case 0:
  case 4:
  case 5:
  case 6:
    uVar5 = 0;
    uVar4 = param_2;
    break;
  case 1:
    glMatrixMode(DAT_002c2600);
    glLoadIdentity();
    uVar1 = __floatunsisf(param_2);
    iVar2 = __mulsf3(uVar1,0x3f000000);
    uVar1 = __floatunsisf(param_3);
    iVar3 = __mulsf3(uVar1,0x3f000000);
    iVar7 = iVar3 + -0x80000000;
    iVar6 = iVar2 + -0x80000000;
    local_20 = DAT_002c2604;
    glOrthof(iVar6,iVar2,iVar7,iVar3);
    uVar1 = DAT_002c260c;
    goto LAB_002c25e2;
  case 2:
    uVar5 = 1;
    uVar4 = param_3;
    param_3 = param_2;
    break;
  case 3:
    glMatrixMode(DAT_002c2600);
    glLoadIdentity();
    uVar1 = __floatunsisf(param_3);
    iVar2 = __mulsf3(uVar1,0x3f000000);
    uVar1 = __floatunsisf(param_2);
    iVar3 = __mulsf3(uVar1,0x3f000000);
    iVar7 = iVar3 + -0x80000000;
    iVar6 = iVar2 + -0x80000000;
    local_20 = DAT_002c2604;
    glOrthof(iVar7,iVar3,iVar6,iVar2);
    uVar1 = DAT_002c2608;
LAB_002c25e2:
    local_1c = 0x3f800000;
    glRotatef(uVar1,0,0,0x3f800000);
    glTranslatef(iVar6,iVar7,0);
    glMatrixMode(0x1700);
  default:
    goto switchD_002c2532_default;
  }
  CCGFX::SetupScreenOrtho(uVar4,param_3,uVar5);
switchD_002c2532_default:
  return CONCAT44(local_1c,local_20);
}


