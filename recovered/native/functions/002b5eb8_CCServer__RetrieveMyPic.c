/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5eb8 CCServer::RetrieveMyPic */

/* CCServer::RetrieveMyPic(void*, ccTexture2D*, void (*)(void*, ccTexture2D*, unsigned int), void*)
    */

undefined4
CCServer::RetrieveMyPic
          (void *param_1,ccTexture2D *param_2,_func_void_void_ptr_ccTexture2D_ptr_uint *param_3,
          void *param_4)

{
  int iVar1;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 != 0) {
                    /* WARNING: Load size is inaccurate */
    CCFacebook::GetMyPicUrl(*param_1);
  }
  return 0;
}


