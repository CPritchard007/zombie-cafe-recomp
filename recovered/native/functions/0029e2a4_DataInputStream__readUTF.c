/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e2a4 DataInputStream::readUTF */

/* DataInputStream::readUTF() */

void DataInputStream::readUTF(void)

{
  int iVar1;
  uchar uVar2;
  String *in_r0;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  DataInputStream *in_r1;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar1 = DAT_0029e36c;
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_0029e36c);
  *(DataInputStream **)(&stack0xfffffff4 + DAT_0029e36c) = in_r1;
  puVar6 = *(undefined4 **)(DAT_0029e370 + 0x29e2b6);
  *(undefined4 *)(&stack0x00000210 + DAT_0029e36c) = *puVar6;
  iVar3 = readShort(in_r1);
  *(undefined4 **)(&stack0xfffffff8 + iVar1) = puVar6;
  if (iVar3 < 1) {
    String::String(in_r0,0);
  }
  else {
    puVar4 = (uchar *)operator_new__(iVar3 + 1);
    iVar7 = 0;
    do {
      uVar2 = readByte(*(DataInputStream **)(&stack0xfffffff4 + iVar1));
      puVar4[iVar7] = uVar2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
    puVar4[iVar3] = '\0';
    StringUtil::stringFromUtf8((StringUtil *)(&stack0x00000000 + iVar1),puVar4,iVar3);
    String::String((String *)(&stack0x00000008 + iVar1),(String *)(&stack0x00000000 + iVar1));
    iVar7 = operator!=(&stack0x00000008 + iVar1,0);
    String::~String((String *)(&stack0x00000008 + iVar1));
    if (iVar7 != 0) {
      uVar5 = String::getBytes((String *)(&stack0x00000000 + iVar1));
      *puVar8 = uVar5;
      sprintf(&stack0x00000010 + iVar1,(char *)(DAT_0029e374 + 0x29e322),iVar3,puVar4);
    }
    if (puVar4 != (uchar *)0x0) {
      operator_delete__(puVar4);
    }
    String::String(in_r0,(String *)(&stack0x00000000 + iVar1));
    String::~String((String *)(&stack0x00000000 + iVar1));
  }
  if (*(int *)(&stack0x00000210 + iVar1) != **(int **)(&stack0xfffffff8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_r0);
  }
  return;
}


