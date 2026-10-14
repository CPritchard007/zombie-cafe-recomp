/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1984 StringBuffer::setCharAt */

/* StringBuffer::setCharAt(int, char) */

void __thiscall StringBuffer::setCharAt(StringBuffer *this,int param_1,char param_2)

{
  StringRef *this_00;
  void *pvVar1;
  int iVar2;
  void *__src;
  StringRef *local_28;
  short local_24;
  short sStack_22;
  String aSStack_20 [12];
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x18))) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
    CapcomLinkedList<String>::nextItem();
    for (; iVar2 = (int)sStack_22, iVar2 <= param_1; param_1 = param_1 - iVar2) {
      CapcomLinkedList<String>::nextItem();
      String::operator=((String *)&local_28,aSStack_20);
      String::~String(aSStack_20);
    }
    if (1 < *(short *)(local_28 + 4)) {
      __src = *(void **)local_28;
      String::releaseRef((String *)&local_28);
      this_00 = (StringRef *)operator_new(8);
      StringRef::StringRef(this_00);
      local_28 = this_00;
      pvVar1 = malloc((int)sStack_22);
      *(void **)this_00 = pvVar1;
      memcpy(*(void **)local_28,__src,(int)sStack_22);
      local_24 = 0;
    }
    *(char *)(*(int *)local_28 + param_1 + (int)local_24) = param_2;
    String::~String((String *)&local_28);
  }
  return;
}


