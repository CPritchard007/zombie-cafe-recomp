/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cb304 jinit_memory_mgr */

undefined8 jinit_memory_mgr(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char *__s;
  int iVar2;
  undefined4 uStack_18;
  int local_14;
  undefined4 uStack_10;
  
  param_1[1] = 0;
  uStack_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  local_14 = jpeg_mem_init();
  piVar1 = (int *)jpeg_get_small(param_1,0x54);
  if (piVar1 == (int *)0x0) {
    jpeg_mem_term(param_1);
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = DAT_002cb3d8;
  *piVar1 = DAT_002cb3d4 + 0x2cb33e;
  piVar1[1] = DAT_002cb3dc + 0x2cb346;
  piVar1[2] = DAT_002cb3e0 + 0x2cb34c;
  piVar1[3] = DAT_002cb3e4 + 0x2cb352;
  piVar1[4] = DAT_002cb3e8 + 0x2cb358;
  piVar1[5] = DAT_002cb3ec + 0x2cb35e;
  piVar1[6] = DAT_002cb3f0 + 0x2cb364;
  piVar1[7] = DAT_002cb3f4 + 0x2cb36a;
  piVar1[8] = DAT_002cb3f8 + 0x2cb370;
  piVar1[9] = DAT_002cb3fc + 0x2cb376;
  piVar1[10] = DAT_002cb400 + 0x2cb37c;
  piVar1[0xc] = DAT_002cb404;
  piVar1[0xb] = local_14;
  piVar1[0xe] = 0;
  piVar1[0x10] = 0;
  piVar1[0xd] = 0;
  piVar1[0xf] = 0;
  piVar1[0x11] = 0;
  piVar1[0x12] = 0;
  piVar1[0x13] = 0x54;
  param_1[1] = (int)piVar1;
  __s = getenv((char *)(iVar2 + 0x2cb344));
  if (__s != (char *)0x0) {
    uStack_18 = (int *)CONCAT13(0x78,(undefined3)uStack_18);
    iVar2 = sscanf(__s,(char *)(DAT_002cb408 + 0x2cb3ae),&local_14,(int)&uStack_18 + 3);
    if (0 < iVar2) {
      if ((uStack_18._3_1_ == 'M') || (uStack_18._3_1_ == 'm')) {
        local_14 = local_14 * 1000;
      }
      piVar1[0xb] = local_14 * 1000;
    }
  }
  return CONCAT44(local_14,uStack_18);
}


