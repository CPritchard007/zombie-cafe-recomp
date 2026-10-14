/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240214 ZombieCafe::eventRaid2_setExplanationWebWindow */

/* ZombieCafe::eventRaid2_setExplanationWebWindow(int) */

void __thiscall ZombieCafe::eventRaid2_setExplanationWebWindow(ZombieCafe *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *__s;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = DAT_00240390;
  piVar3 = *(int **)(DAT_0024038c + 0x24021e);
  puVar4 = (undefined4 *)(&stack0xffffffec + DAT_00240390);
  puVar5 = (undefined4 *)(&stack0xffffffec + DAT_00240390);
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_00240390);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_00240390);
  __s = &stack0xfffffff8 + DAT_00240390;
  *(int *)(&stack0x000001f8 + DAT_00240390) = *piVar3;
  if (param_1 == 0) {
    pcVar2 = (char *)(DAT_00240394 + 0x240232);
  }
  else if (param_1 == 1) {
    pcVar2 = (char *)(DAT_00240398 + 0x24023c);
  }
  else if (param_1 == 2) {
    pcVar2 = (char *)(DAT_0024039c + 0x240246);
  }
  else if (param_1 == 3) {
    pcVar2 = (char *)(DAT_002403a0 + 0x240250);
  }
  else if (param_1 == 4) {
    pcVar2 = (char *)(DAT_002403a4 + 0x24025a);
  }
  else if (param_1 == 5) {
    pcVar2 = (char *)(DAT_002403a8 + 0x240264);
  }
  else if (param_1 == 6) {
    pcVar2 = (char *)(DAT_002403ac + 0x24026e);
  }
  else if (param_1 == 7) {
    pcVar2 = (char *)(DAT_002403b0 + 0x240278);
  }
  else {
    if (param_1 != 8) {
      if (param_1 == 9) {
        pcVar2 = (char *)(DAT_002403b8 + 0x24028e);
      }
      else {
        if (param_1 != 0xb) {
          if (param_1 == 10) {
            snprintf(__s,0x200,(char *)(DAT_002403c0 + 0x2402a6));
            *puVar4 = __s;
            goto LAB_00240370;
          }
          __s = &stack0xfffffff8 + DAT_00240390;
          if (param_1 - 0xcU < 3) {
            pcVar2 = (char *)(DAT_002403c4 + 0x2402c0);
          }
          else if (param_1 == 0xf) {
            pcVar2 = (char *)(DAT_002403c8 + 0x2402ca);
          }
          else if (param_1 == 0x10) {
            pcVar2 = (char *)(DAT_002403cc + 0x2402d4);
          }
          else if (param_1 == 0x11) {
            pcVar2 = (char *)(DAT_002403d0 + 0x2402de);
          }
          else if (param_1 == 0x12) {
            pcVar2 = (char *)(DAT_002403d4 + 0x2402ea);
          }
          else if (param_1 == 0x13) {
            pcVar2 = (char *)(DAT_002403d8 + 0x2402f4);
          }
          else {
            if (param_1 == 0x14) {
              snprintf(__s,0x200,(char *)(DAT_002403dc + 0x240302));
              *puVar5 = __s;
              goto LAB_00240370;
            }
            if (param_1 == 0x15) {
              pcVar2 = (char *)(DAT_002403e0 + 0x240318);
              goto LAB_00240316;
            }
            __s = &stack0xfffffff8 + DAT_00240390;
            if (param_1 == 0x16) {
              pcVar2 = (char *)(DAT_002403e4 + 0x240330);
            }
            else if (param_1 == 0x17) {
              pcVar2 = (char *)(DAT_002403e8 + 0x24033a);
            }
            else if (param_1 == 0x18) {
              pcVar2 = (char *)(DAT_002403ec + 0x240344);
            }
            else if (param_1 - 0x19U < 4) {
              pcVar2 = (char *)(DAT_002403f0 + 0x240352);
            }
            else if (param_1 == 0x1d) {
              pcVar2 = (char *)(DAT_002403f4 + 0x24035c);
            }
            else {
              pcVar2 = (char *)(DAT_002403f8 + 0x240362);
            }
          }
          goto LAB_00240360;
        }
        pcVar2 = (char *)(DAT_002403bc + 0x240298);
      }
LAB_00240316:
      snprintf(__s,0x200,pcVar2);
      *puVar6 = __s;
      goto LAB_00240370;
    }
    pcVar2 = (char *)(DAT_002403b4 + 0x240284);
  }
LAB_00240360:
  snprintf(__s,0x200,pcVar2);
  *puVar7 = __s;
LAB_00240370:
  javaShowWebViewRanking(10,0x14,0x50,0x50);
  if (*(int *)(&stack0x000001f8 + iVar1) == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


