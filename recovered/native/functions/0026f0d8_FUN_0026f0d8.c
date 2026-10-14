/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026f0d8 FUN_0026f0d8 */

void FUN_0026f0d8(undefined4 param_1,int param_2,undefined4 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_1c;
  
  local_1c = **(undefined4 **)(DAT_0026f418 + 0x26f0e4);
  memset(param_4,0,0x30);
  if (param_2 == 0) {
    puVar2 = (undefined4 *)sqlite3_context_db_handle(param_1);
    iVar3 = FUN_0025ed88(*puVar2,param_4);
    if (iVar3 != 0) {
      FUN_0026f8f4();
    }
    param_4 = (undefined8 *)((int)param_4 + 0x2a);
    *(undefined1 *)param_4 = 1;
    FUN_0026f8f4();
  }
  iVar3 = sqlite3_value_type(*param_3);
  if ((iVar3 != 2) && (iVar3 != 1)) goto LAB_0026f16a;
  uVar8 = sqlite3_value_double(*param_3);
  uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_0026f3f0,DAT_0026f3f4);
  __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_0026f3f8,DAT_0026f3fc);
  uVar8 = __fixdfdi();
  *param_4 = uVar8;
  *(undefined1 *)((int)param_4 + 0x2a) = 1;
  do {
    while( true ) {
      FUN_0026f8e4();
LAB_0026f16a:
      pcVar4 = (char *)sqlite3_value_text();
      pcVar5 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        pcVar5 = (char *)FUN_0026f8f4();
      }
      cVar1 = *pcVar5;
      if (cVar1 == '-') {
        pcVar5 = pcVar5 + 1;
      }
      iVar3 = FUN_0025da70(pcVar5,4,0,DAT_0026f41c,0x2d,&local_84,2,1,0xc,0x2d,&local_80,2,1,0x1f,0,
                           &local_7c);
      if (iVar3 == 3) break;
LAB_0026f22e:
      iVar3 = FUN_0025daf8(pcVar4,param_4);
      if (iVar3 != 0) {
        iVar3 = sqlite3_stricmp(pcVar4,DAT_0026f424 + 0x26f242);
        if (iVar3 == 0) {
          puVar2 = (undefined4 *)sqlite3_context_db_handle(param_1);
          iVar3 = FUN_0025ed88(*puVar2,param_4);
          if (iVar3 != 0) {
            FUN_0026f8f4();
            return;
          }
          *(undefined1 *)((int)param_4 + 0x2a) = 1;
        }
        else {
          uVar6 = FUN_0025b154(pcVar4);
          iVar3 = FUN_0025b268(pcVar4,&local_78,uVar6,1);
          if (iVar3 == 0) {
            FUN_0026f8f4();
            return;
          }
          uVar8 = __muldf3(local_78,local_74,DAT_0026f3f0,DAT_0026f3f4);
          __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_0026f3f8,DAT_0026f3fc);
          uVar8 = __fixdfdi();
          *param_4 = uVar8;
          *(undefined1 *)((int)param_4 + 0x2a) = 1;
        }
      }
    }
    for (pbVar7 = (byte *)(pcVar5 + 10);
        ((*(byte *)(DAT_0026f420 + 0x26f20e + (uint)*pbVar7) & 1) != 0 || (*pbVar7 == 0x54));
        pbVar7 = pbVar7 + 1) {
    }
    iVar3 = FUN_0025daf8(pbVar7,param_4);
    if (iVar3 != 0) {
      if (*pbVar7 != 0) goto LAB_0026f22e;
      *(undefined1 *)((int)param_4 + 0x29) = 0;
    }
    *(undefined1 *)((int)param_4 + 0x2a) = 0;
    *(undefined1 *)(param_4 + 5) = 1;
    iVar3 = local_84;
    if (cVar1 == '-') {
      iVar3 = -local_84;
    }
    *(int *)(param_4 + 1) = iVar3;
    *(undefined4 *)((int)param_4 + 0xc) = local_80;
    *(undefined4 *)(param_4 + 2) = local_7c;
    if (*(char *)((int)param_4 + 0x2b) != '\0') {
      FUN_0025ea68(param_4);
    }
  } while( true );
}


