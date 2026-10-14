/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002615ac FUN_002615ac */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002615ba) */
/* WARNING: Removing unreachable block (ram,0x002615ba) */

void FUN_002615ac(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  switch(param_2) {
  case 0xa0:
  case 0xc2:
    uVar1 = *puVar3;
    uVar2 = *param_3;
    goto LAB_00261646;
  case 0xad:
  case 0xae:
  case 199:
  case 0xc9:
  case 0xd2:
  case 0xe0:
  case 0xe2:
  case 0xec:
  case 0xf1:
    FUN_002610aa(*puVar3,*param_3);
    break;
  case 0xb2:
  case 0xbb:
  case 0xc5:
  case 200:
  case 0xca:
  case 0xcc:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xdc:
  case 0xe1:
    FUN_00261102(*puVar3,*param_3);
    break;
  case 0xc1:
  case 0xc6:
  case 0xce:
  case 0xcf:
    FUN_00260fde(*puVar3,*param_3);
    break;
  case 0xd3:
  case 0xd5:
  case 0xda:
    uVar1 = *puVar3;
    uVar2 = *param_3;
    goto LAB_0026165a;
  case 0xdb:
    FUN_00261102(*puVar3,*param_3);
    uVar1 = *puVar3;
    uVar2 = param_3[1];
LAB_00261646:
    FUN_00261092(uVar1,uVar2);
    break;
  case 0xe8:
  case 0xed:
    FUN_002614aa(*puVar3,*param_3,param_3,param_4,param_4);
    break;
  case 0xea:
    uVar1 = *puVar3;
    uVar2 = param_3[1];
LAB_0026165a:
    FUN_00260004(uVar1,uVar2);
  }
  return;
}


