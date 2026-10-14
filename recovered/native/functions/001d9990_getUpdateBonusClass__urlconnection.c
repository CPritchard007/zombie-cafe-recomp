/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d9990 getUpdateBonusClass::urlconnection */

/* getUpdateBonusClass::urlconnection(char const*) */

undefined8 __thiscall getUpdateBonusClass::urlconnection(getUpdateBonusClass *this,char *param_1)

{
  int iVar1;
  
  iVar1 = CCServer::UpdateBonus
                    ((void *)**(undefined4 **)(DAT_001d99c0 + 0x1d999a),param_1,
                     *(_func_void_void_ptr_uchar_ptr_uint **)(DAT_001d99c4 + 0x1d999e),
                     *(_func_void_void_ptr_ccServerFailureCode **)(DAT_001d99c8 + 0x1d99aa),this);
  if (iVar1 == 0) {
    L_PrintLog((char *)(DAT_001d99cc + 0x1d99ba),(char *)(DAT_001d99d0 + 0x1d99bc));
  }
  return CONCAT44(param_1,this);
}


