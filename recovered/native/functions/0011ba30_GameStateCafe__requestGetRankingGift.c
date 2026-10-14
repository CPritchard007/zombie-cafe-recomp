/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ba30 GameStateCafe::requestGetRankingGift */

/* GameStateCafe::requestGetRankingGift(void*, void*) */

void GameStateCafe::requestGetRankingGift(void *param_1,void *param_2)

{
  CCServer::requestGetRankingGifts
            (param_1,*(_func_void_void_ptr_uchar_ptr_uint **)(DAT_0011ba4c + 0x11ba3e),
             *(_func_void_void_ptr_ccServerFailureCode **)(DAT_0011ba48 + 0x11ba3c),param_2);
  return;
}


