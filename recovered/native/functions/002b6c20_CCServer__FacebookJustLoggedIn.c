/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6c20 CCServer::FacebookJustLoggedIn */

/* CCServer::FacebookJustLoggedIn(void*) */

undefined8 __thiscall CCServer::FacebookJustLoggedIn(CCServer *this,void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_1,this);
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  iVar1 = CCFacebook::IsLoggedIn(*(void **)this);
  if (iVar1 != 0) {
    uVar2 = CCFacebook::GetUserId(*(void **)this);
    iVar1 = DAT_002b6c64;
    *(undefined8 *)(this + 0x218) = uVar2;
    snprintf((char *)(this + 0x118),0x400,(char *)(iVar1 + 0x2b6c58));
  }
  return uVar2;
}


