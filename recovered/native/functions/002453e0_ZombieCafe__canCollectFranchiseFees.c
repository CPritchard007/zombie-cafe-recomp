/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002453e0 ZombieCafe::canCollectFranchiseFees */

/* ZombieCafe::canCollectFranchiseFees(FriendData*) */

undefined4 __thiscall ZombieCafe::canCollectFranchiseFees(ZombieCafe *this,FriendData *param_1)

{
  int iVar1;
  char *pcVar2;
  char *__s2;
  int iVar3;
  int iVar4;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  pcVar2 = (char *)String::getBytes((String *)(param_1 + 0x2c));
  iVar4 = 0;
  L_PrintLog((char *)(DAT_00245484 + 0x2453fc),pcVar2);
  free(pcVar2);
  iVar1 = DAT_00245488;
  while( true ) {
    if (*(int *)(this + iVar1 + 4) + 1 <= iVar4) {
      return 1;
    }
    Vector<String>::elementAt((int)aSStack_28);
    pcVar2 = (char *)String::getBytes(aSStack_28);
    String::~String(aSStack_28);
    L_PrintLog((char *)(DAT_0024548c + 0x24542a),pcVar2);
    free(pcVar2);
    pcVar2 = (char *)String::getBytes((String *)(param_1 + 0x2c));
    Vector<String>::elementAt((int)aSStack_20);
    __s2 = (char *)String::getBytes(aSStack_20);
    iVar3 = strcmp(pcVar2,__s2);
    String::~String(aSStack_20);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return 0;
}


