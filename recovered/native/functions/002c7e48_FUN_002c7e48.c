/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c7e48 FUN_002c7e48 */

undefined4 FUN_002c7e48(void)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int *unaff_r4;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  char *in_stack_00000018;
  
  puVar4 = (undefined4 *)unaff_r4[6];
  pbVar6 = (byte *)*puVar4;
  iVar5 = puVar4[1];
  if (*(int *)(unaff_r4[0x74] + 0x10) == 0) {
    *(undefined4 *)(*unaff_r4 + 0x14) = 0x3c;
    strncpy((char *)(*unaff_r4 + 0x18),in_stack_00000018,0x50);
    (**(code **)*unaff_r4)(unaff_r4);
  }
  if (2 < unaff_r4[9]) {
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar4[3])(unaff_r4);
      if (iVar5 == 0) {
        uVar2 = FUN_002c823e();
        return uVar2;
      }
      pbVar6 = (byte *)*puVar4;
      iVar5 = puVar4[1];
    }
    bVar1 = *pbVar6;
    iVar5 = iVar5 + -1;
    pbVar6 = pbVar6 + 1;
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar4[3])(unaff_r4);
      if (iVar5 == 0) {
        uVar2 = FUN_002c823c();
        return uVar2;
      }
      pbVar6 = (byte *)*puVar4;
      iVar5 = puVar4[1];
    }
    iVar5 = iVar5 + -1;
    if ((uint)bVar1 * 0x100 + (uint)*pbVar6 != 0x18) {
      *(undefined4 *)(*unaff_r4 + 0x14) = 0xc;
      (**(code **)*unaff_r4)(unaff_r4);
    }
    pbVar6 = pbVar6 + 1;
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar4[3])(unaff_r4);
      if (iVar5 == 0) {
        uVar2 = FUN_002c823e();
        return uVar2;
      }
      pbVar6 = (byte *)*puVar4;
      iVar5 = puVar4[1];
    }
    iVar5 = iVar5 + -1;
    if (*pbVar6 != 0xd) {
      *(undefined4 *)(*unaff_r4 + 0x14) = 0x46;
      *(int *)(*unaff_r4 + 0x18) = unaff_r4[0x6e];
      (**(code **)*unaff_r4)(unaff_r4);
    }
    pbVar6 = pbVar6 + 1;
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar4[3])(unaff_r4);
      if (iVar5 == 0) {
        uVar2 = FUN_002c823e();
        return uVar2;
      }
      pbVar6 = (byte *)*puVar4;
      iVar5 = puVar4[1];
    }
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar6;
    pbVar3 = pbVar6 + 1;
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar4[3])(unaff_r4);
      if (iVar5 == 0) {
        uVar2 = FUN_002c823c();
        return uVar2;
      }
      pbVar3 = (byte *)*puVar4;
      iVar5 = puVar4[1];
    }
    pbVar6 = pbVar3 + 1;
    iVar5 = iVar5 + -1;
    if ((uint)*pbVar3 + (uint)bVar1 * 0x100 == 0xff) {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar4[3])(unaff_r4);
        if (iVar5 == 0) {
          uVar2 = FUN_002c823c();
          return uVar2;
        }
        pbVar6 = (byte *)*puVar4;
        iVar5 = puVar4[1];
      }
      bVar1 = *pbVar6;
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
      if (bVar1 == 3) {
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar4[3])(unaff_r4);
          if (iVar5 == 0) {
            uVar2 = FUN_002c823e();
            return uVar2;
          }
          pbVar6 = (byte *)*puVar4;
          iVar5 = puVar4[1];
        }
        bVar1 = *pbVar6;
        iVar5 = iVar5 + -1;
        pbVar6 = pbVar6 + 1;
        if ((uint)bVar1 == *(uint *)(unaff_r4[0x36] + 0x58)) {
          if (iVar5 == 0) {
            iVar5 = (*(code *)puVar4[3])(unaff_r4);
            if (iVar5 == 0) {
              uVar2 = FUN_002c823e();
              return uVar2;
            }
            pbVar6 = (byte *)*puVar4;
            iVar5 = puVar4[1];
          }
          bVar1 = *pbVar6;
          iVar5 = iVar5 + -1;
          pbVar6 = pbVar6 + 1;
          if ((uint)bVar1 == *(uint *)unaff_r4[0x36]) {
            if (iVar5 == 0) {
              iVar5 = (*(code *)puVar4[3])(unaff_r4);
              if (iVar5 == 0) {
                uVar2 = FUN_002c823e();
                return uVar2;
              }
              pbVar6 = (byte *)*puVar4;
              iVar5 = puVar4[1];
            }
            bVar1 = *pbVar6;
            iVar5 = iVar5 + -1;
            pbVar6 = pbVar6 + 1;
            if ((uint)bVar1 == *(uint *)(unaff_r4[0x36] + 0xb0)) {
              if (iVar5 == 0) {
                iVar5 = (*(code *)puVar4[3])(unaff_r4);
                if (iVar5 == 0) {
                  uVar2 = FUN_002c823e();
                  return uVar2;
                }
                pbVar6 = (byte *)*puVar4;
                iVar5 = puVar4[1];
              }
              bVar1 = *pbVar6;
              iVar5 = iVar5 + -1;
              pbVar6 = pbVar6 + 1;
              if (bVar1 == 0x80) {
                if (iVar5 == 0) {
                  iVar5 = (*(code *)puVar4[3])(unaff_r4);
                  if (iVar5 == 0) {
                    uVar2 = FUN_002c823e();
                    return uVar2;
                  }
                  pbVar6 = (byte *)*puVar4;
                  iVar5 = puVar4[1];
                }
                bVar1 = *pbVar6;
                iVar5 = iVar5 + -1;
                pbVar3 = pbVar6 + 1;
                if (iVar5 == 0) {
                  iVar5 = (*(code *)puVar4[3])(unaff_r4);
                  if (iVar5 == 0) {
                    uVar2 = FUN_002c823c();
                    return uVar2;
                  }
                  pbVar3 = (byte *)*puVar4;
                  iVar5 = puVar4[1];
                }
                pbVar6 = pbVar3 + 1;
                iVar5 = iVar5 + -1;
                if ((uint)*pbVar3 + (uint)bVar1 * 0x100 == 0) {
                  if (iVar5 == 0) {
                    iVar5 = (*(code *)puVar4[3])(unaff_r4);
                    if (iVar5 == 0) {
                      uVar2 = FUN_002c823c();
                      return uVar2;
                    }
                    pbVar6 = (byte *)*puVar4;
                    iVar5 = puVar4[1];
                  }
                  bVar1 = *pbVar6;
                  iVar5 = iVar5 + -1;
                  pbVar3 = pbVar6 + 1;
                  if (iVar5 == 0) {
                    iVar5 = (*(code *)puVar4[3])(unaff_r4);
                    if (iVar5 == 0) {
                      uVar2 = FUN_002c823c();
                      return uVar2;
                    }
                    pbVar3 = (byte *)*puVar4;
                    iVar5 = puVar4[1];
                  }
                  pbVar6 = pbVar3 + 1;
                  iVar5 = iVar5 + -1;
                  if ((uint)*pbVar3 + (uint)bVar1 * 0x100 == 0) {
                    if (iVar5 == 0) {
                      iVar5 = (*(code *)puVar4[3])(unaff_r4);
                      if (iVar5 == 0) {
                        uVar2 = FUN_002c823c();
                        return uVar2;
                      }
                      pbVar6 = (byte *)*puVar4;
                      iVar5 = puVar4[1];
                    }
                    bVar1 = *pbVar6;
                    iVar5 = iVar5 + -1;
                    pbVar6 = pbVar6 + 1;
                    if (bVar1 == 0) {
                      if (iVar5 == 0) {
                        iVar5 = (*(code *)puVar4[3])(unaff_r4);
                        if (iVar5 == 0) {
                          uVar2 = FUN_002c823e();
                          return uVar2;
                        }
                        pbVar6 = (byte *)*puVar4;
                        iVar5 = puVar4[1];
                      }
                      bVar1 = *pbVar6;
                      iVar5 = iVar5 + -1;
                      pbVar3 = pbVar6 + 1;
                      if (iVar5 == 0) {
                        iVar5 = (*(code *)puVar4[3])(unaff_r4);
                        if (iVar5 == 0) {
                          uVar2 = FUN_002c823c();
                          return uVar2;
                        }
                        pbVar3 = (byte *)*puVar4;
                        iVar5 = puVar4[1];
                      }
                      pbVar6 = pbVar3 + 1;
                      iVar5 = iVar5 + -1;
                      if ((uint)*pbVar3 + (uint)bVar1 * 0x100 == 1) {
                        if (iVar5 == 0) {
                          iVar5 = (*(code *)puVar4[3])(unaff_r4);
                          if (iVar5 == 0) {
                            uVar2 = FUN_002c823c();
                            return uVar2;
                          }
                          pbVar6 = (byte *)*puVar4;
                          iVar5 = puVar4[1];
                        }
                        bVar1 = *pbVar6;
                        iVar5 = iVar5 + -1;
                        pbVar3 = pbVar6 + 1;
                        if (iVar5 == 0) {
                          iVar5 = (*(code *)puVar4[3])(unaff_r4);
                          if (iVar5 == 0) {
                            uVar2 = FUN_002c823c();
                            return uVar2;
                          }
                          pbVar3 = (byte *)*puVar4;
                          iVar5 = puVar4[1];
                        }
                        pbVar6 = pbVar3 + 1;
                        iVar5 = iVar5 + -1;
                        if ((uint)*pbVar3 + (uint)bVar1 * 0x100 == 0) {
                          if (iVar5 == 0) {
                            iVar5 = (*(code *)puVar4[3])(unaff_r4);
                            if (iVar5 == 0) {
                              uVar2 = FUN_002c823c();
                              return uVar2;
                            }
                            pbVar6 = (byte *)*puVar4;
                            iVar5 = puVar4[1];
                          }
                          bVar1 = *pbVar6;
                          iVar5 = iVar5 + -1;
                          pbVar6 = pbVar6 + 1;
                          if (bVar1 == 0) {
                            if (iVar5 == 0) {
                              iVar5 = (*(code *)puVar4[3])(unaff_r4);
                              if (iVar5 == 0) {
                                return 0;
                              }
                              pbVar6 = (byte *)*puVar4;
                              iVar5 = puVar4[1];
                            }
                            bVar1 = *pbVar6;
                            iVar5 = iVar5 + -1;
                            pbVar3 = pbVar6 + 1;
                            if (iVar5 == 0) {
                              iVar5 = (*(code *)puVar4[3])(unaff_r4);
                              if (iVar5 == 0) {
                                return 0;
                              }
                              pbVar3 = (byte *)*puVar4;
                              iVar5 = puVar4[1];
                            }
                            pbVar6 = pbVar3 + 1;
                            iVar5 = iVar5 + -1;
                            if ((uint)*pbVar3 + (uint)bVar1 * 0x100 == 1) {
                              if (iVar5 == 0) {
                                iVar5 = (*(code *)puVar4[3])(unaff_r4);
                                if (iVar5 == 0) {
                                  return 0;
                                }
                                pbVar6 = (byte *)*puVar4;
                                iVar5 = puVar4[1];
                              }
                              bVar1 = *pbVar6;
                              iVar5 = iVar5 + -1;
                              pbVar3 = pbVar6 + 1;
                              if (iVar5 == 0) {
                                iVar5 = (*(code *)puVar4[3])(unaff_r4);
                                if (iVar5 == 0) {
                                  return 0;
                                }
                                pbVar3 = (byte *)*puVar4;
                                iVar5 = puVar4[1];
                              }
                              pbVar6 = pbVar3 + 1;
                              iVar5 = iVar5 + -1;
                              if ((uint)*pbVar3 + (uint)bVar1 * 0x100 == 0) goto LAB_002c81c0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x1c;
  (**(code **)*unaff_r4)(unaff_r4);
LAB_002c81c0:
  unaff_r4[0x4c] = 1;
  *puVar4 = pbVar6;
  puVar4[1] = iVar5;
  uVar2 = FUN_002c8228();
  return uVar2;
}


