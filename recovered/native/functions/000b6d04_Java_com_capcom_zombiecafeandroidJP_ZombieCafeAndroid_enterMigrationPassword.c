/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6d04 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_enterMigrationPassword */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_enterMigrationPassword
               (_jarray *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uchar *__src;
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  String *pSVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  StringUtil aSStack_40 [8];
  String aSStack_38 [32];
  String aSStack_18 [4];
  
  L_PrintLog((char *)(DAT_000b6e28 + 0xb6d14),(char *)(DAT_000b6e24 + 0xb6d12));
  iVar7 = 3;
  pSVar5 = aSStack_38;
  iVar8 = DAT_000b6e2c + 0xb6d24;
  do {
    String::String(pSVar5);
    pSVar5 = pSVar5 + 8;
    bVar9 = iVar7 != 0;
    iVar7 = iVar7 + -1;
  } while (bVar9);
  if (param_3 == 0) {
    uVar1 = 2;
    puVar4 = *(undefined4 **)(iVar8 + DAT_000b6e44);
  }
  else {
    iVar7 = _JNIEnv::GetArrayLength(param_1);
    pcVar2 = (char *)(DAT_000b6e30 + 0xb6d46);
    for (iVar6 = 0; iVar6 < iVar7; iVar6 = iVar6 + 1) {
      uVar1 = (**(code **)(*(int *)param_1 + 0x2b4))(param_1,param_4,iVar6);
      __src = (uchar *)FUN_000b5440(param_1,uVar1);
      StringUtil::stringFromUtf8(aSStack_40,__src);
      String::operator=(aSStack_38 + iVar6 * 8,aSStack_40);
      String::~String((String *)aSStack_40);
      L_PrintLog(pcVar2,(char *)__src);
      iVar3 = DAT_000b6e34;
      if ((((iVar6 == 0) || (iVar3 = DAT_000b6e38, iVar6 == 1)) ||
          (iVar3 = DAT_000b6e3c, iVar6 == 2)) || (iVar3 = DAT_000b6e40, iVar6 == 3)) {
        strncpy(*(char **)(iVar8 + iVar3),(char *)__src,0x10);
      }
    }
    uVar1 = 1;
    puVar4 = *(undefined4 **)(iVar8 + DAT_000b6e44);
  }
  *puVar4 = uVar1;
  pSVar5 = aSStack_18;
  do {
    pSVar5 = pSVar5 + -8;
    String::~String(pSVar5);
  } while (pSVar5 != aSStack_38);
  return;
}


