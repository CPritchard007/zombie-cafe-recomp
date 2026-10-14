/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251c34 ZombieCafe::initImageSubpack */

/* ZombieCafe::initImageSubpack(bool) */

void __thiscall ZombieCafe::initImageSubpack(ZombieCafe *this,bool param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [20];
  
  if (*(int *)(this + 0xc10) == 0) {
    puVar1 = (undefined4 *)operator_new(0x18);
    memset(auStack_28,0,0x10);
    memcpy(&local_38,auStack_28,0x10);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    *(undefined1 *)puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar1;
    puVar1[3] = puVar1;
    puVar1[4] = 0;
    *(undefined4 **)(this + 0xc10) = puVar1;
    iVar3 = DAT_00251e14;
    if (param_1) {
      *(undefined4 *)(this + DAT_00251e14 + 0x10) = *(undefined4 *)(this + DAT_00251e14 + 8);
      for (iVar2 = 0; iVar2 < *(int *)(this + iVar3 + 0x14); iVar2 = iVar2 + 1) {
        CapcomLinkedList<String>::nextItem();
        String::String(aSStack_60,(String *)&local_38);
        cacheImageSubpack(this,aSStack_60,0,iVar2);
        String::~String(aSStack_60);
        String::~String((String *)&local_38);
      }
      *(undefined4 *)(this + 0x518) = *(undefined4 *)(this + 0x510);
      for (iVar3 = 0; iVar2 = DAT_00251e18, iVar3 < *(int *)(this + 0x51c); iVar3 = iVar3 + 1) {
        CapcomLinkedList<String>::nextItem();
        String::String(aSStack_58,(String *)&local_38);
        cacheImageSubpack(this,aSStack_58,1,iVar3);
        String::~String(aSStack_58);
        String::~String((String *)&local_38);
      }
      *(undefined4 *)(this + DAT_00251e18 + 0x10) = *(undefined4 *)(this + DAT_00251e18 + 8);
      for (iVar3 = 0; iVar3 < *(int *)(this + iVar2 + 0x14); iVar3 = iVar3 + 1) {
        CapcomLinkedList<String>::nextItem();
        String::String(aSStack_50,(String *)&local_38);
        cacheImageSubpack(this,aSStack_50,2,iVar3);
        String::~String(aSStack_50);
        String::~String((String *)&local_38);
      }
      *(undefined4 *)(this + 0x550) = *(undefined4 *)(this + 0x548);
      for (iVar3 = 0; iVar2 = DAT_00251e1c, iVar3 < *(int *)(this + 0x554); iVar3 = iVar3 + 1) {
        CapcomLinkedList<String>::nextItem();
        String::String(aSStack_48,(String *)&local_38);
        cacheImageSubpack(this,aSStack_48,3,iVar3);
        String::~String(aSStack_48);
        String::~String((String *)&local_38);
      }
      *(undefined4 *)(this + DAT_00251e1c + 0x10) = *(undefined4 *)(this + DAT_00251e1c + 8);
      for (iVar3 = 0; iVar3 < *(int *)(this + iVar2 + 0x14); iVar3 = iVar3 + 1) {
        CapcomLinkedList<String>::nextItem();
        String::String(aSStack_40,(String *)&local_38);
        cacheImageSubpack(this,aSStack_40,4,iVar3);
        String::~String(aSStack_40);
        String::~String((String *)&local_38);
      }
    }
  }
  return;
}


