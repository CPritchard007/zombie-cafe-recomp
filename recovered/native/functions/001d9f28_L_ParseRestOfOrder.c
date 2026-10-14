/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d9f28 L_ParseRestOfOrder */

/* L_ParseRestOfOrder(SGiftManager*, char const*, SGiftDef*, unsigned int) */

void L_ParseRestOfOrder(SGiftManager *param_1,char *param_2,SGiftDef *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  SGiftDef *__s;
  int iVar5;
  size_t __maxlen;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iStack_4;
  
  iVar2 = DAT_001da254;
  puVar10 = *(undefined4 **)(DAT_001da250 + 0x1d9f34);
  puVar11 = (uint *)(&stack0xffffffec + DAT_001da254);
  *(char **)(&stack0x00000008 + DAT_001da254) = param_2 + 1;
  *(undefined4 *)(&stack0x00000318 + DAT_001da254) = *puVar10;
  L_PrintLog((char *)(DAT_001da258 + 0x1d9f44),(char *)(DAT_001da25c + 0x1d9f46));
  iVar9 = 0;
  iVar7 = 0;
  *(undefined4 **)(&stack0x00000010 + iVar2) = puVar10;
  *(int *)(&stack0x0000000c + iVar2) = DAT_001da260 + 0x1d9f56;
  do {
    cVar1 = **(char **)(&stack0x00000008 + iVar2);
    if (cVar1 == '\0') {
      sprintf(&stack0x00000218 + iVar2,(char *)(DAT_001da38c + 0x1da32c),*(undefined4 *)param_3);
      L_PrintLog((char *)(DAT_001da390 + 0x1da336),&stack0x00000218 + iVar2);
      L_PrintLog((char *)(DAT_001da394 + 0x1da342),(char *)(param_3 + 0x24));
      L_PrintLog((char *)(DAT_001da398 + 0x1da34e),(char *)(param_3 + 0x4c));
      L_PrintLog((char *)(DAT_001da39c + 0x1da358),(char *)(param_3 + 4));
      L_PrintLog((char *)(DAT_001da3a0 + 0x1da362),(char *)(DAT_001da3a4 + 0x1da364));
      if (*(int *)(&stack0x00000318 + iVar2) == **(int **)(&stack0x00000010 + iVar2)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(1);
    }
    if (cVar1 == ':') {
      if (iVar9 == 0) {
        if (param_4 == 0xc) {
          snprintf(&stack0x00000198 + iVar2,0x80,(char *)(DAT_001da264 + 0x1d9f74),
                   &stack0x00000018 + iVar2);
          pcVar6 = strchr(&stack0x00000198 + iVar2,0x2c);
          *pcVar6 = '\n';
          iVar7 = atoi(&stack0x00000198 + iVar2);
          *(short *)(param_3 + 0x4d8) = (short)iVar7;
          goto LAB_001da2fe;
        }
        if (param_4 == 0xd) {
          snprintf(&stack0x00000198 + iVar2,0x80,(char *)(DAT_001da268 + 0x1d9fa0),
                   &stack0x00000018 + iVar2);
          pcVar6 = strchr(&stack0x00000198 + iVar2,0x2c);
          *pcVar6 = '\n';
          iVar5 = atoi(&stack0x00000198 + iVar2);
          iVar7 = DAT_001da26c;
        }
        else {
          if (param_4 != 0xe) {
            if (param_4 == 0xf) {
              iVar7 = 0;
              do {
                pcVar6 = &stack0x00000098 + iVar2;
                (&stack0x00000118)[iVar7 + iVar2] = 0;
                pcVar6[iVar7] = '\0';
                (&stack0x00000198)[iVar7 + iVar2] = 0;
                iVar7 = iVar7 + 1;
              } while (iVar7 != 0x80);
              snprintf(pcVar6,0x80,(char *)(DAT_001da274 + 0x1da00e),&stack0x00000018 + iVar2);
              pcVar3 = strchr(pcVar6,0x2c);
              *(char **)(&stack0x00000004 + iVar2) = pcVar3;
              if (pcVar3 == (char *)0x0) {
                *(undefined4 *)(param_3 + DAT_001da278) = *(undefined4 *)(&stack0x00000004 + iVar2);
              }
              else {
                strcpy(&stack0x00000118 + iVar2,pcVar3 + 1);
                **(undefined1 **)(&stack0x00000004 + iVar2) = 10;
                iVar7 = atoi(pcVar6);
                *(int *)(param_3 + DAT_001da278) = iVar7;
              }
              pcVar6 = strchr(&stack0x00000118 + iVar2,0x2c);
              if (pcVar6 == (char *)0x0) {
                *(undefined4 *)(param_3 + 0x4e8) = 0;
              }
              else {
                strcpy(&stack0x00000198 + iVar2,pcVar6 + 1);
                *pcVar6 = '\n';
                iVar7 = atoi(&stack0x00000118 + iVar2);
                *(int *)(param_3 + 0x4e8) = iVar7;
              }
LAB_001da0ac:
              pcVar6 = strchr(&stack0x00000198 + iVar2,0x2c);
              iVar7 = DAT_001da280;
              if (pcVar6 != (char *)0x0) {
                *pcVar6 = '\n';
                iVar5 = atoi(&stack0x00000198 + iVar2);
                *(int *)(param_3 + iVar7) = iVar5;
                goto LAB_001da2fe;
              }
              uVar8 = 1;
            }
            else {
              if (param_4 == 0x10) {
                snprintf(&stack0x00000118 + iVar2,0x80,(char *)(DAT_001da27c + 0x1da07c),
                         &stack0x00000018 + iVar2);
                pcVar6 = strchr(&stack0x00000118 + iVar2,0x2c);
                if (pcVar6 == (char *)0x0) {
                  *(undefined4 *)(param_3 + 0x4f0) = 0;
                }
                else {
                  strcpy(&stack0x00000198 + iVar2,pcVar6 + 1);
                  *pcVar6 = '\n';
                  iVar7 = atoi(&stack0x00000118 + iVar2);
                  *(int *)(param_3 + 0x4f0) = iVar7;
                }
                goto LAB_001da0ac;
              }
              if (param_4 != 0x12) {
                __s = param_3 + 4;
                pcVar6 = (char *)(DAT_001da28c + 0x1da114);
                goto LAB_001da136;
              }
              snprintf(&stack0x00000198 + iVar2,0x80,(char *)(DAT_001da284 + 0x1da0da),
                       &stack0x00000018 + iVar2);
              pcVar6 = strchr(&stack0x00000198 + iVar2,0x2c);
              iVar7 = DAT_001da288;
              if (pcVar6 != (char *)0x0) {
                *pcVar6 = '\n';
                uVar4 = atoi(&stack0x00000198 + iVar2);
                *(uint *)(param_3 + iVar7) = uVar4;
                if (2000 < uVar4) {
                  *(undefined4 *)(param_3 + iVar7) = 2000;
                }
                goto LAB_001da2fe;
              }
              uVar8 = 0;
            }
            *(undefined4 *)(param_3 + iVar7) = uVar8;
            goto LAB_001da2fe;
          }
          snprintf(&stack0x00000198 + iVar2,0x80,(char *)(DAT_001da270 + 0x1d9fc8),
                   &stack0x00000018 + iVar2);
          pcVar6 = strchr(&stack0x00000198 + iVar2,0x2c);
          *pcVar6 = '\n';
          iVar5 = atoi(&stack0x00000198 + iVar2);
          iVar7 = 0x4e0;
        }
LAB_001da2fc:
        *(int *)(param_3 + iVar7) = iVar5;
      }
      else {
        if (iVar9 == 1) {
          __s = param_3 + 0x24;
          pcVar6 = (char *)(DAT_001da290 + 0x1da122);
          __maxlen = 0x28;
        }
        else {
          if (iVar9 == 2) {
            __s = param_3 + 0x4c;
            pcVar6 = (char *)(DAT_001da294 + 0x1da138);
          }
          else {
            if (iVar9 != 3) {
              if (iVar9 == 4) {
                L_PrintLog(*(char **)(&stack0x0000000c + iVar2),(char *)(DAT_001da29c + 0x1da156));
                *(SGiftDef **)(&stack0xfffffff0 + iVar2) = param_3 + 4;
                *(SGiftDef **)(&stack0xfffffff4 + iVar2) = param_3 + 0x24;
                *(SGiftDef **)(&stack0xfffffff8 + iVar2) = param_3 + 0x4c;
                *(SGiftDef **)((int)&iStack_4 + iVar2) = param_3 + 0xcc;
                *puVar11 = param_4;
                snprintf(&stack0x00000198 + iVar2,0x80,(char *)(DAT_001da2a0 + 0x1da170),
                         DAT_001da2a4 + 0x1da16e);
                CCMd5(&stack0x00000118 + iVar2,0x40,&stack0x00000198 + iVar2);
                iVar7 = strncmp((char *)(DAT_001da2a8 + 0x1da18e),&stack0x00000018 + iVar2,0x40);
                uVar8 = 8;
                if (iVar7 != 0) {
                  iVar7 = strncmp((char *)(DAT_001da2ac + 0x1da1a0),&stack0x00000018 + iVar2,0x40);
                  if (iVar7 == 0) {
                    *(undefined4 *)param_3 = 4;
                    goto LAB_001da2fe;
                  }
                  iVar7 = strncmp((char *)(DAT_001da2b0 + 0x1da1b4),&stack0x00000018 + iVar2,0x40);
                  uVar8 = 5;
                  if (iVar7 != 0) {
                    iVar7 = strncmp((char *)(DAT_001da2b4 + 0x1da1c6),&stack0x00000018 + iVar2,0x40)
                    ;
                    uVar8 = 6;
                    if (iVar7 != 0) {
                      iVar7 = strncmp((char *)(DAT_001da2b8 + 0x1da1d8),&stack0x00000018 + iVar2,
                                      0x40);
                      uVar8 = 7;
                      if (iVar7 != 0) {
                        iVar7 = strncmp((char *)(DAT_001da2bc + 0x1da1ea),&stack0x00000018 + iVar2,
                                        0x40);
                        uVar8 = 0xc;
                        if (iVar7 != 0) {
                          iVar7 = strncmp((char *)(DAT_001da2c0 + 0x1da1fc),&stack0x00000018 + iVar2
                                          ,0x40);
                          uVar8 = 0xd;
                          if (iVar7 != 0) {
                            iVar7 = strncmp((char *)(DAT_001da2c4 + 0x1da20e),
                                            &stack0x00000018 + iVar2,0x40);
                            uVar8 = 0xe;
                            if (iVar7 != 0) {
                              iVar7 = strncmp((char *)(DAT_001da2c8 + 0x1da220),
                                              &stack0x00000018 + iVar2,0x40);
                              uVar8 = 0xf;
                              if (iVar7 != 0) {
                                iVar7 = strncmp((char *)(DAT_001da2cc + 0x1da232),
                                                &stack0x00000018 + iVar2,0x40);
                                uVar8 = 0x10;
                                if (iVar7 != 0) {
                                  iVar7 = strncmp((char *)(DAT_001da2d0 + 0x1da244),
                                                  &stack0x00000018 + iVar2,0x40);
                                  if (iVar7 != 0) {
                                    iVar7 = strncmp(&stack0x00000118 + iVar2,
                                                    &stack0x00000018 + iVar2,0x40);
                                    if (iVar7 != 0) {
                                      L_PrintLog((char *)(DAT_001da380 + 0x1da2ea),
                                                 (char *)(DAT_001da384 + 0x1da2ec));
                                    }
                                    goto LAB_001da2fe;
                                  }
                                  uVar8 = 0x12;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                *(undefined4 *)param_3 = uVar8;
              }
              else if (iVar9 == 5) {
                iVar5 = atoi(&stack0x00000018 + iVar2);
                iVar7 = DAT_001da388;
                goto LAB_001da2fc;
              }
              goto LAB_001da2fe;
            }
            __s = param_3 + 0xcc;
            pcVar6 = (char *)(DAT_001da298 + 0x1da148);
          }
LAB_001da136:
          __maxlen = 0x80;
        }
        snprintf((char *)__s,__maxlen,pcVar6,&stack0x00000018 + iVar2);
      }
LAB_001da2fe:
      iVar7 = 0;
      iVar9 = iVar9 + 1;
      (&stack0x00000018)[iVar2] = 0;
    }
    else {
      (&stack0x00000018)[iVar7 + iVar2] = cVar1;
      iVar7 = iVar7 + 1;
      (&stack0x00000019)[iVar7 + iVar2 + -1] = 0;
    }
    *(int *)(&stack0x00000008 + iVar2) = *(int *)(&stack0x00000008 + iVar2) + 1;
  } while( true );
}


