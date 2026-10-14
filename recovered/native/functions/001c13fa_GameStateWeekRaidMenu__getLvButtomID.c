/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c13fa GameStateWeekRaidMenu::getLvButtomID */

/* GameStateWeekRaidMenu::getLvButtomID(int) */

undefined4 __thiscall GameStateWeekRaidMenu::getLvButtomID(GameStateWeekRaidMenu *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ZombieCafe::getWeekRaidTheme(*(ZombieCafe **)(this + 0xc));
  if (iVar1 == 0x7f) {
    uVar2 = 0x52;
    if (((param_1 != 0) && (uVar2 = 0x53, param_1 != 1)) &&
       ((uVar2 = 0x54, param_1 != 2 &&
        (((uVar2 = 0x55, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
         (uVar2 = 0x43, param_1 != 5)))))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa1) {
    uVar2 = 0x3e;
    if ((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) && (uVar2 = 0x53, param_1 != 2)) &&
       (((uVar2 = 0x54, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa2) {
    uVar2 = 0x3e;
    if ((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
        ((uVar2 = 0x5d, param_1 != 2 &&
         ((uVar2 = 0x5e, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))))) &&
       (uVar2 = 0x43, param_1 != 5)) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa4) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       ((uVar2 = 0x52, param_1 != 2 &&
        (((uVar2 = 0x51, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
         (uVar2 = 0x43, param_1 != 5)))))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa5) {
    uVar2 = 0x3e;
    if (((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) && (uVar2 = 0x5a, param_1 != 2)) &&
        ((uVar2 = 0x59, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))) &&
       (uVar2 = 0x43, param_1 != 5)) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa6) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       (((uVar2 = 0x53, param_1 != 2 &&
         ((uVar2 = 0x54, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa7) {
    uVar2 = 100;
    if (((param_1 != 0) && (uVar2 = 0x65, param_1 != 1)) &&
       ((uVar2 = 0x5d, param_1 != 2 &&
        (((uVar2 = 0x5e, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
         (uVar2 = 0x43, param_1 != 5)))))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xaa) {
    uVar2 = 0x3e;
    if ((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) && (uVar2 = 0x52, param_1 != 2)) &&
       (((uVar2 = 0x51, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa9) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       (((uVar2 = 0x5b, param_1 != 2 &&
         ((uVar2 = 0x5c, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xa8) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       ((uVar2 = 0x67, param_1 != 2 &&
        (((uVar2 = 0x68, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
         (uVar2 = 0x43, param_1 != 5)))))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xab) {
    uVar2 = 0x3e;
    if (((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) && (uVar2 = 0x53, param_1 != 2)) &&
        ((uVar2 = 0x54, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))) &&
       (uVar2 = 0x43, param_1 != 5)) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xac) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       (((uVar2 = 0x5a, param_1 != 2 &&
         ((uVar2 = 0x59, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xad) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       ((uVar2 = 0x5b, param_1 != 2 &&
        (((uVar2 = 0x5c, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
         (uVar2 = 0x43, param_1 != 5)))))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xae) {
    uVar2 = 0x3e;
    if ((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) && (uVar2 = 0x51, param_1 != 2)) &&
       (((uVar2 = 0x52, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xaf) {
    uVar2 = 0x3e;
    if ((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
        ((uVar2 = 0x5d, param_1 != 2 &&
         ((uVar2 = 0x5e, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))))) &&
       (uVar2 = 0x43, param_1 != 5)) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xb0) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       ((uVar2 = 0x51, param_1 != 2 &&
        (((uVar2 = 0x52, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
         (uVar2 = 0x43, param_1 != 5)))))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xb1) {
    uVar2 = 0x3e;
    if (((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) && (uVar2 = 0x53, param_1 != 2)) &&
        ((uVar2 = 0x54, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))) &&
       (uVar2 = 0x43, param_1 != 5)) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xb2) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       (((uVar2 = 0x40, param_1 != 2 &&
         ((uVar2 = 0x59, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)))) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  else if (iVar1 == 0xb3) {
    uVar2 = 0x3e;
    if (((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) &&
       ((uVar2 = 0x5b, param_1 != 2 &&
        (((uVar2 = 0x5c, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
         (uVar2 = 0x43, param_1 != 5)))))) {
      uVar2 = 0x3e;
    }
  }
  else {
    uVar2 = 0x3e;
    if ((((param_1 != 0) && (uVar2 = 0x3f, param_1 != 1)) && (uVar2 = 0x40, param_1 != 2)) &&
       (((uVar2 = 0x41, param_1 != 3 && (uVar2 = 0x42, param_1 != 4)) &&
        (uVar2 = 0x43, param_1 != 5)))) {
      uVar2 = 0x3e;
    }
  }
  return uVar2;
}


