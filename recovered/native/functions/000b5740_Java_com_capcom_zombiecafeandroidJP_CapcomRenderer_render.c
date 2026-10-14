/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5740 Java_com_capcom_zombiecafeandroidJP_CapcomRenderer_render */

void Java_com_capcom_zombiecafeandroidJP_CapcomRenderer_render
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_000b5758;
  CapcomApp::tickApp(*(CapcomApp **)(DAT_000b5758 + 0xb5752),param_3);
  CapcomApp::paintApp(*(CapcomApp **)(iVar1 + 0xb5752));
  return;
}


