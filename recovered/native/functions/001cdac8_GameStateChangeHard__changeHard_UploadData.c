/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cdac8 GameStateChangeHard::changeHard_UploadData */

/* GameStateChangeHard::changeHard_UploadData() */

void __thiscall GameStateChangeHard::changeHard_UploadData(GameStateChangeHard *this)

{
  int iVar1;
  
  **(undefined4 **)(DAT_001cdaec + 0x1cdad4) = 0;
  iVar1 = CapcomApp::getInstance();
  ZombieCafe::changeHard_UploadData
            (*(ZombieCafe **)(iVar1 + 4),(_func_void_void_ptr *)(DAT_001cdaf0 + 0x1cdae4),
             (_func_void_void_ptr_ccServerFailureCode *)(DAT_001cdaf4 + 0x1cdae6),this);
  return;
}


