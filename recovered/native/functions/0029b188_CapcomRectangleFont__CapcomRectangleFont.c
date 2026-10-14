/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b188 CapcomRectangleFont::CapcomRectangleFont */

/* CapcomRectangleFont::CapcomRectangleFont(String, int) */

CapcomRectangleFont * __thiscall
CapcomRectangleFont::CapcomRectangleFont
          (CapcomRectangleFont *this,String *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  *(int *)this = *(int *)(DAT_0029b208 + 0x29b194) + 8;
  String::String(aSStack_20,param_2);
  String::String(aSStack_18,aSStack_20);
  uVar1 = ResourceManager::load(aSStack_18,param_3,1);
  String::~String(aSStack_18);
  *(undefined4 *)(this + 0x10) = uVar1;
  String::~String(aSStack_20);
  iVar2 = *(int *)(*(int *)(this + 0x10) + 0x14);
  pcVar3 = (char *)(DAT_0029b20c + 0x29b1cc);
  *(int *)(this + 4) = iVar2;
  CapcomDebug::Assert((bool)('\x01' - (iVar2 == 0)),pcVar3);
  *(undefined4 *)(this + 0xc) = 5;
  while (iVar2 = *(int *)(this + 0xc),
        *(char *)(*(int *)(this + 4) + iVar2) != '\0' ||
        *(char *)(*(int *)(this + 4) + iVar2 + 1) != '\0') {
    *(int *)(this + 0xc) = iVar2 + 3;
  }
  *(int *)(this + 0xc) = iVar2 + 2;
  return this;
}


