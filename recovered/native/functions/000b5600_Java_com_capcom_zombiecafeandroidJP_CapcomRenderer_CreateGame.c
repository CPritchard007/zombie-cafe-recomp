/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5600 Java_com_capcom_zombiecafeandroidJP_CapcomRenderer_CreateGame */

void Java_com_capcom_zombiecafeandroidJP_CapcomRenderer_CreateGame
               (_JNIEnv *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               _jobject *param_6)

{
  int iVar1;
  CapcomApp *this;
  char *pcVar2;
  
  iVar1 = DAT_000b5698;
  if (*(int *)(DAT_000b5698 + 0xb5610) == 0) {
    L_PrintLog((char *)(DAT_000b569c + 0xb5618),(char *)(DAT_000b56a0 + 0xb561a));
    am_initAssetManager(param_1,param_6);
    this = (CapcomApp *)operator_new(0x78);
    CapcomApp::CapcomApp(this);
    iVar1 = DAT_000b56a4;
    *(CapcomApp **)(DAT_000b56a4 + 0xb5642) = this;
    CapcomApp::setAndroidScreenSize(this,param_4,param_5);
    CapcomApp::init(*(CapcomApp **)(iVar1 + 0xb5642));
    L_PrintLog((char *)(DAT_000b56a8 + 0xb564e),(char *)(DAT_000b56ac + 0xb5650));
    *(undefined4 *)(iVar1 + 0xb563e) = 1;
    CCGFX::Init(0);
  }
  else {
    pcVar2 = (char *)(DAT_000b56b0 + 0xb5666);
    L_PrintLog(pcVar2,(char *)(DAT_000b56b4 + 0xb5668));
    ZombieCafe::ReloadTextures(*(ZombieCafe **)(*(int *)(iVar1 + 0xb5614) + 4));
    L_PrintLog(pcVar2,(char *)(DAT_000b56b8 + 0xb567c));
  }
  *(undefined1 *)(*(int *)(&UNK_000b568e + DAT_000b56bc) + 0x54) = 1;
  return;
}


