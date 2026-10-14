/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ac0c FurnitureStorageButton::updateTotal */

/* FurnitureStorageButton::updateTotal(int) */

void __thiscall FurnitureStorageButton::updateTotal(FurnitureStorageButton *this,int param_1)

{
  undefined4 uVar1;
  String aSStack_20 [6];
  FurnitureStorageButton FStack_1a;
  StringUtil aSStack_18 [12];
  
  puts((char *)(DAT_0025ac78 + 0x25ac1a));
  *(int *)(this + 0x74) = param_1;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
    *(undefined4 *)(this + 0x78) = 0;
  }
  String::valueOf((int)aSStack_20);
  StringUtil::getEncodingString(aSStack_18,'\0');
  uVar1 = String::getBytes(aSStack_20,aSStack_18,0,0,0);
  *(undefined4 *)(this + 0x78) = uVar1;
  String::~String((String *)aSStack_18);
  this[0x7c] = FStack_1a;
  String::~String(aSStack_20);
  return;
}


