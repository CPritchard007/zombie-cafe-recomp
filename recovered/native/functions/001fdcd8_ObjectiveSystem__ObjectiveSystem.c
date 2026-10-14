/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fdcd8 ObjectiveSystem::ObjectiveSystem */

/* ObjectiveSystem::ObjectiveSystem() */

ObjectiveSystem * __thiscall ObjectiveSystem::ObjectiveSystem(ObjectiveSystem *this)

{
  void *__s;
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(this + 4) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0xc) = __s;
  memset(__s,0,*(int *)(this + 4) << 2);
  *(undefined4 *)(this + 8) = 0xffffffff;
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return this;
}


