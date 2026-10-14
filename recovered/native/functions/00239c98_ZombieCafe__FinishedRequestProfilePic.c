/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239c98 ZombieCafe::FinishedRequestProfilePic */

/* ZombieCafe::FinishedRequestProfilePic(void*, ccTexture2D*, unsigned int) */

void ZombieCafe::FinishedRequestProfilePic(void *param_1,ccTexture2D *param_2,uint param_3)

{
  int iVar1;
  CFTexture *this;
  int iVar2;
  FriendData aFStack_d0 [77];
  undefined1 local_83;
  undefined1 local_82;
  int local_80;
  CFTexture *local_7c;
  ccTexture2D *local_78;
  FriendData aFStack_74 [96];
  
  iVar2 = 0;
  L_PrintLog((char *)(DAT_00239d6c + 0x239cac),(char *)(DAT_00239d68 + 0x239caa));
  iVar1 = DAT_00239d70;
  if (param_3 != 0) {
    for (; iVar2 < *(int *)((int)param_1 + iVar1 + 4) + 1; iVar2 = iVar2 + 1) {
      FriendData::FriendData
                (aFStack_d0,(FriendData *)(*(int *)((int)param_1 + iVar1 + 8) + iVar2 * 0x5c));
      if (local_78 == param_2) {
        if (local_7c == (CFTexture *)0x0) {
          this = (CFTexture *)operator_new(8);
          CFTexture::CFTexture(this,local_78);
          local_7c = this;
        }
        if (local_80 == 0) {
          local_80 = CImage::createImage(local_7c);
        }
        local_83 = 1;
        local_82 = 0;
        FriendData::FriendData(aFStack_74,aFStack_d0);
        if ((-1 < iVar2) && (iVar2 <= *(int *)((int)param_1 + DAT_00239d70 + 4))) {
          FriendData::operator=
                    ((FriendData *)(*(int *)((int)param_1 + DAT_00239d70 + 8) + iVar2 * 0x5c),
                     aFStack_74);
        }
        FriendData::~FriendData(aFStack_74);
        FriendData::~FriendData(aFStack_d0);
        break;
      }
      FriendData::~FriendData(aFStack_d0);
    }
    *(undefined1 *)((int)param_1 + DAT_00239d74) = 1;
  }
  return;
}


