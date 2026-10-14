/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a330 GameStateEarlyBird::updateEarlyBirdData */

/* GameStateEarlyBird::updateEarlyBirdData(void*) */

undefined8 __thiscall
GameStateEarlyBird::updateEarlyBirdData(GameStateEarlyBird *this,void *param_1)

{
  int iVar1;
  GameStateEarlyBird *pGVar2;
  int iVar3;
  GameStateEarlyBird *pGVar4;
  char *pcVar5;
  char *__format;
  GameStateEarlyBird *pGVar6;
  
  L_PrintLog((char *)(DAT_0019a400 + 0x19a340),(char *)(DAT_0019a3fc + 0x19a33e));
  iVar3 = 0;
  this[0x370] = (GameStateEarlyBird)0x1;
  pGVar2 = this;
  pGVar4 = this;
  do {
    *(undefined4 *)(pGVar4 + 0x154) = 0xffffffff;
    *(undefined2 *)(this + iVar3 + 0x1a4) = 0xffff;
    pGVar2[0x1cc] = (GameStateEarlyBird)0x0;
    *(undefined4 *)(pGVar4 + 0x1e0) = 0;
    iVar3 = iVar3 + 2;
    *(undefined4 *)(pGVar4 + 0x230) = DAT_0019a404;
    pGVar2[0x280] = (GameStateEarlyBird)0x1;
    pGVar6 = pGVar4 + 0x294;
    pGVar4 = pGVar4 + 4;
    *(undefined4 *)pGVar6 = DAT_0019a408;
    pGVar2[0x2e4] = (GameStateEarlyBird)0x0;
    iVar1 = DAT_0019a410;
    pGVar2 = pGVar2 + 1;
  } while (iVar3 != 0x28);
  pcVar5 = (char *)(DAT_0019a40c + 0x19a3b0);
  *(undefined4 *)(this + 0x350) = 0;
  L_PrintLog(pcVar5,(char *)(iVar1 + 0x19a3b4));
  __format = (char *)(DAT_0019a414 + 0x19a3c0);
  printf((char *)(DAT_0019a418 + 0x19a3c2));
  printf(__format);
  L_PrintLog(pcVar5,(char *)(DAT_0019a41c + 0x19a3d2));
  CCServer::EarlyBirdData
            ((void *)**(undefined4 **)(DAT_0019a420 + 0x19a3de),__format,
             *(_func_void_void_ptr_uchar_ptr_uint **)(DAT_0019a424 + 0x19a3e2),
             *(_func_void_void_ptr **)(DAT_0019a428 + 0x19a3ec),this);
  L_PrintLog(pcVar5,(char *)(DAT_0019a42c + 0x19a3f8));
  return CONCAT44(param_1,this);
}


