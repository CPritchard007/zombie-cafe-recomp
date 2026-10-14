/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f4160 FindSeatTask::tick */

/* FindSeatTask::tick(long) */

void FindSeatTask::tick(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 4) != '\0') {
    lVar1 = FUN_000f49bc();
  }
  (**(code **)(**(int **)(lVar1 + 0x2c) + 0x14))();
  iVar5 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar5 + 4) == '\0') {
    FUN_000f49bc();
  }
  if (*(char *)(iVar5 + 5) == '\0') {
    FUN_000f4980();
  }
  iVar5 = CapcomApp::getInstance();
  iVar5 = *(int *)(iVar5 + 4);
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x2c) =
       *(undefined2 *)(*(int *)(param_1 + 0x30) + 0x2c);
  iVar6 = *(int *)(param_1 + 0x30);
  uVar4 = (uint)*(byte *)(iVar6 + 0x34);
  if ((uVar4 != 2) && (uVar4 != 3)) {
    FUN_000f499e();
  }
  iVar3 = *(int *)(iVar6 + 0x38);
  uVar7 = (uint)*(byte *)(iVar3 + 0x5c);
  if (uVar7 == 0) {
    iVar3 = (int)*(short *)(iVar3 + (uVar4 + 0x1c) * 2 + 4);
    if (iVar3 == DAT_000f44fc) {
      uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
      iVar6 = 0x98;
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
      goto LAB_000f43ee;
    }
    if (iVar3 <= DAT_000f44fc) {
      if (iVar3 == 0x6a) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f452c);
        uVar4 = 0xae;
        uVar8 = 0xad;
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        goto LAB_000f48b4;
      }
      if (iVar3 < 0x6b) {
        if (iVar3 == 0x67) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f451c);
          uVar4 = 0xaa;
          uVar8 = 0xa9;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          goto LAB_000f48b4;
        }
        if (iVar3 < 0x68) {
          if (iVar3 == 0x66) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
            uVar4 = 0xa8;
            uVar8 = 0xa7;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            goto LAB_000f48b4;
          }
        }
        else {
          if (iVar3 == 0x68) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4520);
            uVar4 = 0xb2;
            uVar8 = 0xb1;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            goto LAB_000f48b4;
          }
          if (iVar3 == 0x69) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4528);
            uVar4 = 0xac;
            uVar8 = 0xab;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            goto LAB_000f48b4;
          }
        }
      }
      else {
        if (iVar3 == 0xb8) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4524);
          uVar4 = 0xb6;
          uVar8 = 0xb5;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          goto LAB_000f48b4;
        }
        if (iVar3 < 0xb9) {
          if (iVar3 == 0x6d) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4520);
            uVar4 = 0xb0;
            uVar8 = 0xaf;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            goto LAB_000f48b4;
          }
          if (iVar3 == 0xb7) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4524);
            uVar4 = 0xb4;
            uVar8 = 0xb3;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            goto LAB_000f48b4;
          }
        }
        else {
          if (iVar3 == 0xcb) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
            uVar4 = 0xc6;
            uVar8 = 0xc5;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            goto LAB_000f48b4;
          }
          if (iVar3 == 0x110) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
            uVar4 = 0x148;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar8 = DAT_000f4534;
            goto LAB_000f48b4;
          }
        }
      }
      goto LAB_000f48ac;
    }
    if (iVar3 == 0x172) {
      uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
      uVar4 = DAT_000f4540;
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
      goto LAB_000f43d2;
    }
    if (iVar3 < 0x173) {
      if (iVar3 == DAT_000f4500) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
        iVar6 = 0x9b;
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        goto LAB_000f43ee;
      }
      if (DAT_000f4500 < iVar3) {
        if (iVar3 == 0x13c) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
          uVar4 = DAT_000f453c;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          goto LAB_000f43d2;
        }
        if (iVar3 == DAT_000f4504) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
          uVar4 = 0x146;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          uVar8 = DAT_000f4530;
          goto LAB_000f48b4;
        }
LAB_000f48ac:
        uVar7 = 0xffffffff;
        uVar8 = uVar7;
        uVar4 = uVar7;
        goto LAB_000f48b4;
      }
      if (iVar3 != 0x132) goto LAB_000f48ac;
      uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
      uVar4 = DAT_000f4538;
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
    }
    else {
      if (iVar3 == DAT_000f4508) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
        iVar6 = 0xbf;
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
      }
      else {
        if (DAT_000f4508 < iVar3) {
          if (iVar3 == 0x18c) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
            uVar4 = 0x18e;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar8 = DAT_000f4544;
            goto LAB_000f48b4;
          }
          if (iVar3 == DAT_000f4514) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
            uVar4 = DAT_000f4548;
            iVar6 = 0xca;
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            goto LAB_000f43d4;
          }
          goto LAB_000f48ac;
        }
        if (iVar3 == DAT_000f450c) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
          iVar6 = 0xbd;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        }
        else {
          if (iVar3 != DAT_000f4510) goto LAB_000f48ac;
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4518);
          iVar6 = 0xbe;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        }
      }
LAB_000f43ee:
      uVar4 = iVar6 << 1;
    }
LAB_000f43d2:
    iVar6 = 0xa0;
  }
  else {
    if (uVar7 != 1) goto LAB_000f48ac;
    iVar3 = (int)*(short *)(iVar3 + (uVar4 + 0x1c) * 2 + 4);
    if (iVar3 == 0xca) {
      uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
      uVar4 = 0xcb;
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
LAB_000f4758:
      uVar8 = 0xc1;
      goto LAB_000f48b4;
    }
    if (iVar3 < 0xcb) {
      if (iVar3 == 0x3f) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4950);
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        uVar8 = 0x40;
        uVar4 = 0x41;
        goto LAB_000f48b4;
      }
      if (iVar3 < 0x40) {
        if (iVar3 == 0x1c) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4944);
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          uVar8 = 0x1d;
          uVar4 = 0x1e;
          goto LAB_000f48b4;
        }
        if (iVar3 < 0x1d) {
          if (iVar3 == 6) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4944);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar8 = 7;
            uVar4 = 8;
            goto LAB_000f48b4;
          }
          if (iVar3 == 0xf) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4948);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar7 = 1;
            uVar8 = 0x15;
            uVar4 = 0x16;
            goto LAB_000f48b4;
          }
        }
        else {
          if (iVar3 == 0x35) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f494c);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar8 = 0x36;
            uVar4 = 0x37;
            goto LAB_000f48b4;
          }
          if (iVar3 == 0x3b) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4950);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar7 = 1;
            uVar8 = 0x3c;
            uVar4 = 0x3d;
            goto LAB_000f48b4;
          }
        }
      }
      else {
        if (iVar3 == 0x5a) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),-9);
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          uVar8 = 0x5b;
          uVar4 = 0x5c;
          goto LAB_000f48b4;
        }
        if (iVar3 < 0x5b) {
          if (iVar3 == 0x48) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),-9);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar8 = 0x49;
            uVar4 = 0x4a;
            goto LAB_000f48b4;
          }
          if (iVar3 == 0x4f) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),-9);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar7 = 1;
            uVar8 = 0x50;
            uVar4 = 0x51;
            goto LAB_000f48b4;
          }
        }
        else {
          if (iVar3 == 0x81) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar8 = 0x82;
            uVar4 = 0x83;
            goto LAB_000f48b4;
          }
          if (iVar3 == 0x93) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar7 = 1;
            uVar8 = 0x94;
            uVar4 = 0x95;
            goto LAB_000f48b4;
          }
          if (iVar3 == 0x62) {
            uVar2 = CFPoint::add(*(long *)(iVar6 + 4),-9);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
            uVar7 = 1;
            uVar8 = 99;
            uVar4 = 100;
            goto LAB_000f48b4;
          }
        }
      }
      goto LAB_000f48ac;
    }
    if (iVar3 == 0x132) {
      uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
      uVar4 = DAT_000f4964;
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
LAB_000f47fc:
      uVar8 = 0;
      goto LAB_000f48b4;
    }
    if (iVar3 < 0x133) {
      if (iVar3 == 0xe8) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        uVar8 = 0xe9;
        uVar4 = 0xea;
        goto LAB_000f48b4;
      }
      if (iVar3 < 0xe9) {
        if (iVar3 == 0xd2) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
          uVar4 = 0xd4;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          goto LAB_000f4758;
        }
        if (iVar3 == 0xd6) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          uVar7 = 1;
          uVar8 = 0xd3;
          uVar4 = 0xcc;
          goto LAB_000f48b4;
        }
      }
      else {
        if (iVar3 == 0x11e) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
          uVar4 = DAT_000f495c;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          goto LAB_000f47fc;
        }
        if (iVar3 == 0x126) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
          uVar7 = 1;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          uVar8 = DAT_000f4960;
          uVar4 = 0x128;
          goto LAB_000f48b4;
        }
        if (iVar3 == DAT_000f493c) {
          uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
          uVar7 = 1;
          (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
          uVar8 = 0x114;
          uVar4 = DAT_000f4958;
          goto LAB_000f48b4;
        }
      }
      goto LAB_000f48ac;
    }
    if (iVar3 == 0x158) {
      uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
      uVar4 = 0x15a;
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
      uVar8 = DAT_000f4970;
      goto LAB_000f48b4;
    }
    if (0x158 < iVar3) {
      if (iVar3 == 0x160) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
        uVar4 = 0x162;
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        uVar8 = DAT_000f4978;
        goto LAB_000f48b4;
      }
      if (iVar3 == 0x174) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4948);
        uVar7 = 1;
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        uVar4 = 0x176;
        uVar8 = DAT_000f497c;
        goto LAB_000f48b4;
      }
      if (iVar3 == 0x15c) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
        uVar7 = 1;
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        uVar4 = 0x15e;
        uVar8 = DAT_000f4974;
        goto LAB_000f48b4;
      }
      goto LAB_000f48ac;
    }
    if (iVar3 != DAT_000f4940) {
      if (iVar3 == 0x154) {
        uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
        uVar7 = 1;
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
        uVar4 = 0x156;
        uVar8 = DAT_000f496c;
        goto LAB_000f48b4;
      }
      goto LAB_000f48ac;
    }
    uVar2 = CFPoint::add(*(long *)(iVar6 + 4),DAT_000f4954);
    uVar4 = DAT_000f4968;
    iVar6 = 0x9f;
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(*(int **)(param_1 + 0x20),uVar2);
  }
LAB_000f43d4:
  uVar8 = iVar6 << 1;
LAB_000f48b4:
  CafeObject::setVisible(*(CafeObject **)(param_1 + 0x30),false);
  CharacterInstance::setCurrentAnimation
            (*(CharacterInstance **)(param_1 + 0x20),'\x02',
             *(uchar *)(*(int *)(param_1 + 0x30) + 0x34),false);
  if (uVar8 != 0xffffffff) {
    CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(param_1 + 0x20),0xe);
    fVar9 = (float)CharacterInstance::stopReplacementInAnimation
                             (*(CharacterInstance **)(param_1 + 0x20),0xf);
    iVar6 = (uVar7 + 0x20) * 4;
    fVar9 = (float)CharacterInstance::replaceInAnimation
                             (*(CharacterInstance **)(param_1 + 0x20),0xe,
                              *(CImage **)
                               (uVar8 * 4 + *(int *)(*(int *)(iVar5 + 0x7e8) + iVar6 + 4)),fVar9,
                              '\0',true,true,1);
    CharacterInstance::replaceInAnimation
              (*(CharacterInstance **)(param_1 + 0x20),0xf,
               *(CImage **)(uVar4 * 4 + *(int *)(*(int *)(iVar5 + 0x7e8) + iVar6 + 4)),fVar9,'\0',
               true,true,1);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(*(int *)(param_1 + 0x2c) + 5);
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  FUN_000f40f4(param_1);
  FUN_000f49bc();
  return;
}


