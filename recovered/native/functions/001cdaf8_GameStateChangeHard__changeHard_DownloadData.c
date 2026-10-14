/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cdaf8 GameStateChangeHard::changeHard_DownloadData */

/* GameStateChangeHard::changeHard_DownloadData() */

undefined8 __thiscall GameStateChangeHard::changeHard_DownloadData(GameStateChangeHard *this)

{
  JSONTakeOverData *this_00;
  char *pcVar1;
  int iVar2;
  
  *(undefined4 *)(this + 0xcc) = 1;
  this_00 = (JSONTakeOverData *)JSONTakeOverData::getInstance();
  pcVar1 = (char *)JSONTakeOverData::GetTransferID(this_00);
  **(undefined4 **)(DAT_001cdb44 + 0x1cdb16) = 0;
  iVar2 = CCServer::RetrieveGameStateForHiveid
                    (*(void **)(*(int *)(this + 0xc) + DAT_001cdb48),pcVar1,
                     *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(DAT_001cdb4c + 0x1cdb28),
                     *(_func_void_void_ptr_ccServerFailureCode **)(DAT_001cdb50 + 0x1cdb2a),this);
  *(bool *)*(undefined4 *)(DAT_001cdb54 + 0x1cdb3c) = iVar2 == 1;
  return CONCAT44(this,1);
}


