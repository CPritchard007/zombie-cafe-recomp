/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac074 am_initAssetManager */

/* am_initAssetManager(_JNIEnv*, _jobject*) */

undefined8 am_initAssetManager(_JNIEnv *param_1,_jobject *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_002ac114;
  iVar5 = DAT_002ac10c + 0x2ac080;
  __android_log_print(3,iVar5,DAT_002ac110 + 0x2ac084,param_1);
  iVar3 = *(int *)param_1;
  *(_JNIEnv **)(iVar1 + 0x2ac096) = param_1;
  uVar2 = (**(code **)(iVar3 + 0x54))(param_1,param_2);
  iVar3 = DAT_002ac118;
  iVar4 = *(int *)param_1;
  *(undefined4 *)(iVar1 + 0x2ac09a) = uVar2;
  uVar2 = (**(code **)(iVar4 + 0x18))(param_1,iVar3 + 0x2ac0ac);
  uVar2 = (**(code **)(*(int *)param_1 + 0x84))
                    (param_1,uVar2,DAT_002ac11c + 0x2ac0c0,DAT_002ac120 + 0x2ac0bc);
  uVar2 = _JNIEnv::CallObjectMethod((_jobject *)param_1,(_jmethodID *)param_2,uVar2);
  __android_log_print(3,iVar5,DAT_002ac124 + 0x2ac0d6,uVar2);
  uVar2 = AAssetManager_fromJava(param_1,uVar2);
  *(undefined4 *)(DAT_002ac128 + 0x2ac0f4) = uVar2;
  __android_log_print(3,iVar5,DAT_002ac12c + 0x2ac0f4,uVar2);
  uVar2 = FUN_002abf6c();
  __android_log_print(3,iVar5,DAT_002ac130 + 0x2ac104,uVar2);
  return CONCAT44(param_2,param_2);
}


