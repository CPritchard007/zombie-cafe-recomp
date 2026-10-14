/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027e388 FUN_0027e388 */

int FUN_0027e388(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char local_29;
  undefined4 local_28;
  uint local_24;
  int local_20;
  int local_1c [2];
  
  iVar1 = FUN_0025c29c(param_1,param_3);
  if ((iVar1 != param_3) &&
     (iVar1 = __udivsi3(*(undefined4 *)(DAT_0027e4e8 + 0x27e410),param_1[8]), param_3 != iVar1 + 1))
  {
    iVar1 = FUN_0025ba30(*(int *)(param_1[3] + 0x38) + 0x24);
    if (iVar1 == 0) {
      return 0x65;
    }
    iVar1 = FUN_00274ed0(param_1,param_3,&local_29,&local_28);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_29 == '\x01') {
      iVar1 = FUN_0026b4e4(DAT_0027e4ec);
      return iVar1;
    }
    if (local_29 == '\x02') {
      if (param_2 != 0) {
        return 0;
      }
      iVar1 = FUN_0027daa4(param_1,local_1c,&local_20,param_3,1);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_00274a30(local_1c[0]);
      goto LAB_0027e484;
    }
    iVar1 = FUN_00274984(param_1,param_3,&local_20,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    do {
      iVar1 = FUN_0027daa4(param_1,local_1c,&local_24,0,0);
      if (iVar1 != 0) {
        FUN_00274a30(local_20);
        return iVar1;
      }
      FUN_00274a30(local_1c[0]);
    } while ((param_2 != 0) && (param_2 < local_24));
    iVar1 = FUN_002733c4(*(undefined4 *)(local_20 + 0x44));
    if (iVar1 == 0) {
      iVar1 = FUN_0027e104(param_1,local_20,local_29,local_28,local_24,param_2 != 0);
    }
    FUN_00274a30(local_20);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (param_2 != 0) {
    return 0;
  }
LAB_0027e484:
  iVar1 = DAT_0027e4f0;
  param_3 = param_3 + -1;
  do {
    iVar2 = __udivsi3(*(undefined4 *)(FUN_0027e4f4 + iVar1 + 4),param_1[8]);
    if ((param_3 != iVar2 + 1) && (iVar2 = FUN_0025c29c(param_1,param_3), iVar2 != param_3)) {
      *(int *)(*param_1 + 0x18) = param_3;
      param_1[0xb] = param_3;
      return 0;
    }
    iVar2 = FUN_0025c29c(param_1,param_3);
    if (iVar2 == param_3) {
      iVar2 = FUN_00274984(param_1,param_3,local_1c,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_002733c4(*(undefined4 *)(local_1c[0] + 0x44));
      FUN_00274a30(local_1c[0]);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_3 = param_3 + -1;
  } while( true );
}


