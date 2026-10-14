/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024c400 ZombieCafe::SetPicGiftBox_from_RankingGiftBoxInfo */

/* ZombieCafe::SetPicGiftBox_from_RankingGiftBoxInfo() */

undefined4 __thiscall ZombieCafe::SetPicGiftBox_from_RankingGiftBoxInfo(ZombieCafe *this)

{
  PicGiftBoxInfo *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_30;
  String aSStack_20 [12];
  
  iVar3 = 0;
  iVar2 = *(int *)(DAT_0024c4b8 + 0x24c40c);
  local_30 = 0;
  do {
    iVar1 = iVar3 + iVar2;
    if (*(int *)(iVar1 + 0x84) != 0) {
      __s = (PicGiftBoxInfo *)operator_new(0x18);
      memset(__s,0,0x18);
      String::String((String *)(__s + 0x10));
      *(int *)__s = *(int *)(iVar1 + 0x84);
      *(undefined4 *)(__s + 4) = *(undefined4 *)(iVar1 + 0x88);
      *(undefined4 *)(__s + 8) = *(undefined4 *)(iVar1 + 0x8c);
      *(undefined4 *)(__s + 0xc) = *(undefined4 *)(iVar1 + 0x94);
      String::String(aSStack_20,(String *)(iVar2 + local_30 * 0xa0 + 0x98));
      String::operator=((String *)(__s + 0x10),aSStack_20);
      String::~String(aSStack_20);
      Vector<PicGiftBoxInfo*>::addElement((Vector<PicGiftBoxInfo*> *)(this + 0x670),__s);
    }
    iVar3 = iVar3 + 0xa0;
    local_30 = local_30 + 1;
  } while (iVar3 != 0x8c0);
  ClearRankingGiftInfo();
  return 1;
}


