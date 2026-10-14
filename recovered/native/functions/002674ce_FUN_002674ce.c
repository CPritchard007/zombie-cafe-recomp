/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002674ce FUN_002674ce */

void FUN_002674ce(undefined4 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(char *)((int)param_1 + 0x1a) == '\0' && *(char *)(param_1 + 6) == '\0') {
    if ((int)param_3 < 0) {
      param_3 = FUN_0025b154(param_2);
    }
    if ((param_3 != 0) && (param_2 != (void *)0x0)) {
      uVar4 = param_1[3];
      if ((int)param_1[4] <= (int)(uVar4 + param_3)) {
        if (*(char *)((int)param_1 + 0x19) == '\0') {
          param_3 = (param_1[4] - uVar4) - 1;
          *(undefined1 *)((int)param_1 + 0x1a) = 1;
          if ((int)param_3 < 1) {
            return;
          }
        }
        else {
          uVar2 = param_3 + 1;
          uVar6 = param_1[2] & -(uint)(param_1[2] != param_1[1]);
          uVar3 = uVar2 + uVar4;
          iVar5 = ((int)uVar2 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
          iVar1 = (int)param_1[5] >> 0x1f;
          if ((iVar1 < iVar5) || ((iVar5 == iVar1 && ((uint)param_1[5] < uVar3)))) {
            FUN_0025fc22(param_1);
            *(undefined1 *)((int)param_1 + 0x1a) = 1;
            return;
          }
          param_1[4] = uVar3;
          if (*(char *)((int)param_1 + 0x19) == '\x01') {
            __dest = (void *)FUN_002651e0(*param_1,uVar6);
          }
          else {
            __dest = (void *)sqlite3_realloc(uVar6,uVar3);
          }
          if (__dest == (void *)0x0) {
            *(undefined1 *)(param_1 + 6) = 1;
            FUN_0025fc22(param_1);
            return;
          }
          if ((uVar6 == 0) && (0 < (int)param_1[3])) {
            memcpy(__dest,(void *)param_1[2],param_1[3]);
          }
          param_1[2] = __dest;
        }
      }
      memcpy((void *)(param_1[2] + param_1[3]),param_2,param_3);
      param_1[3] = param_1[3] + param_3;
    }
  }
  return;
}


