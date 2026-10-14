/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a82fc initMethodCalls */

/* initMethodCalls(_JavaVM*, _JNIEnv*, _jobject*, _jclass*) */

void initMethodCalls(_JavaVM *param_1,_JNIEnv *param_2,_jobject *param_3,_jclass *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar1 = DAT_002a8664;
  puVar7 = (undefined4 *)(DAT_002a8664 + 0x2a8308);
  *(_JNIEnv **)(DAT_002a8664 + 0x2a830c) = param_2;
  iVar6 = *(int *)param_2;
  *puVar7 = param_1;
  pcVar4 = (char *)(**(code **)(iVar6 + 0x54))(param_2,param_4);
  iVar6 = DAT_002a8668;
  *(char **)(iVar1 + 0x2a8310) = pcVar4;
  uVar5 = _JNIEnv::GetStaticMethodID((_jclass *)param_2,pcVar4,(char *)(iVar6 + 0x2a8322));
  iVar6 = DAT_002a8670;
  *(undefined4 *)(iVar1 + 0x2a8314) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8334));
  iVar6 = DAT_002a8678;
  *(undefined4 *)(iVar1 + 0x2a8318) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8346));
  iVar6 = DAT_002a8680;
  *(undefined4 *)(iVar1 + 0x2a831c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8358));
  iVar6 = DAT_002a8684;
  *(undefined4 *)(iVar1 + 0x2a8320) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8368));
  iVar6 = DAT_002a868c;
  *(undefined4 *)(iVar1 + 0x2a8324) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a837c));
  iVar6 = DAT_002a8698;
  *(undefined4 *)(iVar1 + 0x2a8328) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8392));
  iVar6 = DAT_002a869c;
  *(undefined4 *)(iVar1 + 0x2a832c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar6 + 0x2a83a2));
  iVar2 = DAT_002a86a8;
  iVar6 = DAT_002a86a4;
  *(undefined4 *)(iVar1 + 0x2a8330) = uVar5;
  L_PrintLog((char *)(iVar6 + 0x2a83b2),(char *)(iVar2 + 0x2a83b6));
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),
                     (char *)(DAT_002a86ac + 0x2a83c4));
  iVar2 = DAT_002a86b0;
  *(undefined4 *)(iVar1 + 0x2a8334) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a83d4));
  iVar2 = DAT_002a86b8;
  *(undefined4 *)(iVar1 + 0x2a8338) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a83e6));
  iVar2 = DAT_002a86c4;
  *(undefined4 *)(iVar1 + 0x2a833c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a83fc));
  iVar2 = DAT_002a86c8;
  *(undefined4 *)(iVar1 + 0x2a8340) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a840c));
  iVar2 = DAT_002a86cc;
  *(undefined4 *)(iVar1 + 0x2a8344) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a841c));
  iVar2 = DAT_002a86d0;
  *(undefined4 *)(iVar1 + 0x2a8348) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a842e));
  iVar2 = DAT_002a86d4;
  *(undefined4 *)(iVar1 + 0x2a834c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a843e));
  iVar2 = DAT_002a86d8;
  *(undefined4 *)(iVar1 + 0x2a8350) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a844e));
  iVar2 = DAT_002a86dc;
  *(undefined4 *)(iVar1 + 0x2a8354) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a845e));
  iVar2 = DAT_002a86e0;
  *(undefined4 *)(iVar1 + 0x2a8358) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a846e));
  iVar2 = DAT_002a86e4;
  *(undefined4 *)(iVar1 + 0x2a835c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a847c));
  iVar2 = DAT_002a86e8;
  *(undefined4 *)(iVar1 + 0x2a8360) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a848c));
  iVar2 = DAT_002a86f0;
  *(undefined4 *)(iVar1 + 0x2a8364) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a84a0));
  iVar2 = DAT_002a86f4;
  *(undefined4 *)(iVar1 + 0x2a8368) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a84b2));
  iVar2 = DAT_002a86fc;
  *(undefined4 *)(iVar1 + 0x2a836c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a84c4));
  iVar2 = DAT_002a8704;
  *(undefined4 *)(iVar1 + 0x2a8370) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a84da));
  iVar2 = DAT_002a870c;
  *(undefined4 *)(iVar1 + 0x2a8374) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a84ec));
  iVar2 = DAT_002a8710;
  *(undefined4 *)(iVar1 + 0x2a8378) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a84fa));
  iVar2 = DAT_002a8714;
  *(undefined4 *)(iVar1 + 0x2a837c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a850a));
  iVar2 = DAT_002a8718;
  *(undefined4 *)(iVar1 + 0x2a8380) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a851a));
  iVar2 = DAT_002a871c;
  *(undefined4 *)(iVar1 + 0x2a8384) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a852a));
  iVar3 = DAT_002a8724;
  iVar2 = DAT_002a8720;
  pcVar4 = *(char **)(iVar1 + 0x2a8310);
  *(undefined4 *)(DAT_002a8720 + 0x2a8538) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID((_jclass *)param_2,pcVar4,(char *)(iVar3 + 0x2a853e));
  iVar3 = DAT_002a8728;
  *(undefined4 *)(iVar2 + 0x2a853c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar3 + 0x2a854e));
  iVar3 = DAT_002a872c;
  *(undefined4 *)(iVar2 + 0x2a8540) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar3 + 0x2a855e));
  iVar3 = DAT_002a8730;
  *(undefined4 *)(iVar2 + 0x2a8544) = uVar5;
  L_PrintLog((char *)(iVar6 + 0x2a83b2),(char *)(iVar3 + 0x2a856c));
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),
                     (char *)(DAT_002a8734 + 0x2a8578));
  iVar6 = DAT_002a873c;
  *(undefined4 *)(iVar2 + 0x2a8548) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a858c));
  iVar6 = DAT_002a8740;
  *(undefined4 *)(iVar2 + 0x2a854c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a859c));
  iVar6 = DAT_002a8748;
  *(undefined4 *)(iVar2 + 0x2a8550) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a85ae));
  iVar6 = DAT_002a8750;
  *(undefined4 *)(iVar2 + 0x2a8554) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a85c0));
  iVar6 = DAT_002a8758;
  *(undefined4 *)(iVar2 + 0x2a8558) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a85d2));
  iVar6 = DAT_002a875c;
  *(undefined4 *)(iVar2 + 0x2a855c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a85e2));
  iVar6 = DAT_002a8760;
  *(undefined4 *)(iVar2 + 0x2a8560) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a85f2));
  iVar6 = DAT_002a8764;
  *(undefined4 *)(iVar2 + 0x2a8564) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8602));
  iVar6 = DAT_002a8768;
  *(undefined4 *)(iVar2 + 0x2a8568) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8612));
  iVar6 = DAT_002a8770;
  *(undefined4 *)(iVar2 + 0x2a856c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8624));
  iVar6 = DAT_002a8778;
  *(undefined4 *)(iVar2 + 0x2a8570) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8636));
  iVar6 = DAT_002a8780;
  *(undefined4 *)(iVar2 + 0x2a8574) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8648));
  iVar6 = DAT_002a8788;
  *(undefined4 *)(iVar2 + 0x2a8578) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a865a));
  iVar6 = DAT_002a8afc;
  *(undefined4 *)(iVar2 + 0x2a857c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a879c));
  iVar6 = DAT_002a8b04;
  *(undefined4 *)(iVar2 + 0x2a8580) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a87b0));
  iVar6 = DAT_002a8b0c;
  *(undefined4 *)(iVar2 + 0x2a8584) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a87c2));
  iVar6 = DAT_002a8b14;
  *(undefined4 *)(iVar2 + 0x2a8588) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a87d4));
  iVar6 = DAT_002a8b1c;
  *(undefined4 *)(iVar2 + 0x2a858c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a87e6));
  iVar6 = DAT_002a8b24;
  *(undefined4 *)(iVar2 + 0x2a8590) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a87f8));
  iVar6 = DAT_002a8b2c;
  *(undefined4 *)(iVar2 + 0x2a8594) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a880a));
  iVar6 = DAT_002a8b38;
  *(undefined4 *)(iVar2 + 0x2a8598) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8820));
  iVar6 = DAT_002a8b3c;
  *(undefined4 *)(iVar2 + 0x2a859c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8830));
  iVar6 = DAT_002a8b40;
  *(undefined4 *)(iVar2 + 0x2a85a0) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8840));
  iVar6 = DAT_002a8b48;
  *(undefined4 *)(iVar2 + 0x2a85a4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8852));
  iVar6 = DAT_002a8b4c;
  *(undefined4 *)(iVar2 + 0x2a85a8) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8862));
  iVar6 = DAT_002a8b54;
  *(undefined4 *)(iVar2 + 0x2a85ac) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8874));
  iVar6 = DAT_002a8b58;
  *(undefined4 *)(iVar2 + 0x2a85b0) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8884));
  iVar6 = DAT_002a8b5c;
  *(undefined4 *)(iVar2 + 0x2a85b4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar6 + 0x2a8894));
  iVar2 = DAT_002a8b68;
  iVar6 = DAT_002a8b64;
  pcVar4 = *(char **)(iVar1 + 0x2a8310);
  *(undefined4 *)(DAT_002a8b64 + 0x2a88a4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID((_jclass *)param_2,pcVar4,(char *)(iVar2 + 0x2a88aa));
  iVar2 = DAT_002a8b70;
  *(undefined4 *)(iVar6 + 0x2a88a8) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a88be));
  iVar2 = DAT_002a8b74;
  *(undefined4 *)(iVar6 + 0x2a88ac) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a88d0));
  iVar2 = DAT_002a8b7c;
  *(undefined4 *)(iVar6 + 0x2a88b0) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a88e2));
  iVar2 = DAT_002a8b80;
  *(undefined4 *)(iVar6 + 0x2a88b4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a88f2));
  iVar2 = DAT_002a8b84;
  *(undefined4 *)(iVar6 + 0x2a88b8) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8902));
  iVar2 = DAT_002a8b8c;
  *(undefined4 *)(iVar6 + 0x2a88bc) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8914));
  iVar2 = DAT_002a8b90;
  *(undefined4 *)(iVar6 + 0x2a88c0) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8924));
  iVar2 = DAT_002a8b94;
  *(undefined4 *)(iVar6 + 0x2a88c4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8934));
  iVar2 = DAT_002a8b98;
  *(undefined4 *)(iVar6 + 0x2a88c8) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8944));
  iVar2 = DAT_002a8b9c;
  *(undefined4 *)(iVar6 + 0x2a88cc) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8956));
  iVar2 = DAT_002a8ba4;
  *(undefined4 *)(iVar6 + 0x2a88d0) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8968));
  iVar2 = DAT_002a8ba8;
  *(undefined4 *)(iVar6 + 0x2a88d4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8978));
  iVar2 = DAT_002a8bac;
  *(undefined4 *)(iVar6 + 0x2a88d8) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8988));
  iVar2 = DAT_002a8bb0;
  *(undefined4 *)(iVar6 + 0x2a88dc) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar1 + 0x2a8310),(char *)(iVar2 + 0x2a8998));
  iVar2 = DAT_002a8bb8;
  *(undefined4 *)(iVar6 + 0x2a88e0) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a89ac));
  iVar2 = DAT_002a8bbc;
  *(undefined4 *)(iVar6 + 0x2a88e4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a89bc));
  iVar2 = DAT_002a8bc0;
  *(undefined4 *)(iVar6 + 0x2a88e8) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a89cc));
  iVar2 = DAT_002a8bc8;
  *(undefined4 *)(iVar6 + 0x2a88ec) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a89e0));
  iVar2 = DAT_002a8bcc;
  *(undefined4 *)(iVar6 + 0x2a88f0) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a89f0));
  iVar2 = DAT_002a8bd0;
  *(undefined4 *)(iVar6 + 0x2a88f4) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a02));
  iVar2 = DAT_002a8bd8;
  *(undefined4 *)(iVar6 + 0x2a88f8) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a14));
  iVar2 = DAT_002a8bdc;
  *(undefined4 *)(iVar6 + 0x2a88fc) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a24));
  iVar2 = DAT_002a8be0;
  *(undefined4 *)(iVar6 + 0x2a8900) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a34));
  iVar2 = DAT_002a8be4;
  *(undefined4 *)(iVar6 + 0x2a8904) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a44));
  iVar2 = DAT_002a8be8;
  *(undefined4 *)(iVar6 + 0x2a8908) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a54));
  iVar2 = DAT_002a8bec;
  *(undefined4 *)(iVar6 + 0x2a890c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a64));
  iVar2 = DAT_002a8bf0;
  *(undefined4 *)(iVar6 + 0x2a8910) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a74));
  iVar2 = DAT_002a8bf8;
  *(undefined4 *)(iVar6 + 0x2a8914) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a88));
  iVar2 = DAT_002a8c00;
  *(undefined4 *)(iVar6 + 0x2a8918) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8a9a));
  iVar2 = DAT_002a8c04;
  *(undefined4 *)(iVar6 + 0x2a891c) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8aaa));
  iVar2 = DAT_002a8c08;
  *(undefined4 *)(iVar6 + 0x2a8920) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar1 + 0x2a830c),*(char **)(iVar1 + 0x2a8310),
                     (char *)(iVar2 + 0x2a8abc));
  iVar2 = DAT_002a8c18;
  iVar6 = DAT_002a8c14;
  iVar1 = DAT_002a8c10;
  *(undefined4 *)(DAT_002a8c10 + 0x2a8aca) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8ad4));
  iVar2 = DAT_002a8c1c;
  *(undefined4 *)(iVar1 + 0x2a8ace) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8ae4));
  iVar2 = DAT_002a8c20;
  *(undefined4 *)(iVar1 + 0x2a8ad2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8af4));
  iVar2 = DAT_002a8dfc;
  *(undefined4 *)(iVar1 + 0x2a8ad6) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8c30));
  iVar2 = DAT_002a8e00;
  *(undefined4 *)(iVar1 + 0x2a8ada) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    ((_jclass *)param_2,*(char **)(iVar6 + 0x2a8ad4),(char *)(iVar2 + 0x2a8c40));
  iVar2 = DAT_002a8e0c;
  *(undefined4 *)(iVar1 + 0x2a8ade) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8c56));
  iVar2 = DAT_002a8e10;
  *(undefined4 *)(iVar1 + 0x2a8ae2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8c66));
  iVar2 = DAT_002a8e14;
  *(undefined4 *)(iVar1 + 0x2a8ae6) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8c76));
  iVar2 = DAT_002a8e18;
  *(undefined4 *)(iVar1 + 0x2a8aea) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8c86));
  iVar2 = DAT_002a8e1c;
  *(undefined4 *)(iVar1 + 0x2a8aee) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8c96));
  iVar2 = DAT_002a8e24;
  *(undefined4 *)(iVar1 + 0x2a8af2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8ca8));
  iVar2 = DAT_002a8e2c;
  *(undefined4 *)(iVar1 + 0x2a8af6) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8cbc));
  iVar2 = DAT_002a8e30;
  *(undefined4 *)(&UNK_002a8afa + iVar1) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8ccc));
  iVar2 = DAT_002a8e38;
  *(undefined4 *)((int)&DAT_002a8afc + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8cde));
  iVar2 = DAT_002a8e3c;
  *(undefined4 *)((int)&DAT_002a8b00 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8cf0));
  iVar2 = DAT_002a8e44;
  *(undefined4 *)((int)&DAT_002a8b04 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d02));
  iVar2 = DAT_002a8e4c;
  *(undefined4 *)((int)&DAT_002a8b08 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d14));
  iVar2 = DAT_002a8e50;
  *(undefined4 *)((int)&DAT_002a8b0c + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d24));
  iVar2 = DAT_002a8e54;
  *(undefined4 *)((int)&DAT_002a8b10 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d34));
  iVar2 = DAT_002a8e58;
  *(undefined4 *)((int)&DAT_002a8b14 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d44));
  iVar2 = DAT_002a8e5c;
  *(undefined4 *)((int)&DAT_002a8b18 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d54));
  iVar2 = DAT_002a8e60;
  *(undefined4 *)((int)&DAT_002a8b1c + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d64));
  iVar2 = DAT_002a8e64;
  *(undefined4 *)((int)&DAT_002a8b20 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d74));
  iVar2 = DAT_002a8e68;
  *(undefined4 *)((int)&DAT_002a8b24 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d84));
  iVar2 = DAT_002a8e6c;
  *(undefined4 *)((int)&DAT_002a8b28 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8d94));
  iVar2 = DAT_002a8e70;
  *(undefined4 *)((int)&DAT_002a8b2c + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8da4));
  iVar2 = DAT_002a8e74;
  *(undefined4 *)((int)&DAT_002a8b30 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8db4));
  iVar2 = DAT_002a8e78;
  *(undefined4 *)((int)&DAT_002a8b34 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8dc4));
  iVar2 = DAT_002a8e7c;
  *(undefined4 *)((int)&DAT_002a8b38 + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8dd4));
  iVar2 = DAT_002a8e80;
  *(undefined4 *)((int)&DAT_002a8b3c + iVar1 + 2) = uVar5;
  uVar5 = _JNIEnv::GetStaticMethodID
                    (*(_jclass **)(iVar6 + 0x2a8ad0),*(char **)(iVar6 + 0x2a8ad4),
                     (char *)(iVar2 + 0x2a8de2));
  iVar6 = DAT_002a8e84;
  *(undefined4 *)((int)&DAT_002a8b40 + iVar1 + 2) = uVar5;
  L_PrintLog((char *)(DAT_002a8e88 + 0x2a8df4),(char *)(iVar6 + 0x2a8df2));
  return;
}


