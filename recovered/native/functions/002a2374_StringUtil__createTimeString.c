/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2374 StringUtil::createTimeString */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002a23cc) */
/* WARNING: Removing unreachable block (ram,0x002a23cc) */
/* StringUtil::createTimeString(unsigned long, unsigned char) */

StringUtil * __thiscall StringUtil::createTimeString(StringUtil *this,ulong param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  uchar local_45;
  ulong local_44 [2];
  ulong uStack_3c;
  ulong uStack_38;
  ulong uStack_34;
  ulong uStack_30;
  StringBuffer aSStack_2c [32];
  
  local_45 = param_2;
  local_44[0] = param_1;
  iVar1 = splitTime(local_44,&uStack_30,0x3c);
  if (iVar1 != 0) {
    iVar2 = splitTime(&uStack_30,&uStack_34,0x3c);
    iVar1 = 1;
    if (iVar2 != 0) {
      iVar2 = splitTime(&uStack_34,&uStack_38,0x18);
      iVar1 = 2;
      if (iVar2 != 0) {
        iVar1 = splitTime(&uStack_38,&uStack_3c,DAT_002a244c);
        iVar1 = 4 - (uint)(iVar1 == 0);
      }
    }
  }
  StringBuffer::StringBuffer(aSStack_2c);
  switch(iVar1) {
  case 4:
    appendTime(aSStack_2c,4,4,&uStack_3c,&local_45);
  case 3:
    appendTime(aSStack_2c,iVar1,3,&uStack_38,&local_45);
  case 2:
    appendTime(aSStack_2c,iVar1,2,&uStack_34,&local_45);
  case 1:
    appendTime(aSStack_2c,iVar1,1,&uStack_30,&local_45);
  default:
    appendTime(aSStack_2c,iVar1,0,local_44,&local_45);
    StringBuffer::toString();
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
    return this;
  }
}


