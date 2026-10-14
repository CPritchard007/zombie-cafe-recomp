/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002276a0 ServingCounter::ServingCounter */

/* ServingCounter::ServingCounter(FurnitureData*) */

ServingCounter * __thiscall
ServingCounter::ServingCounter(ServingCounter *this,FurnitureData *param_1)

{
  void *__s;
  int iVar1;
  BitmapTextElement *pBVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  String aSStack_20 [12];
  
  Furniture::Furniture((Furniture *)this,param_1);
  *(int *)this = *(int *)(DAT_002277bc + 0x2276b4) + 8;
  *(undefined4 *)(this + 0x6c) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0x74) = __s;
  memset(__s,0,*(int *)(this + 0x6c) << 2);
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  String::String(aSStack_20,0);
  pBVar2 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar2,aSStack_20,*(undefined4 *)(iVar1 + DAT_002277c0),0xffffffff,0xff000000,1,1,0x21,
             0,0);
  *(BitmapTextElement **)(this + 0x68) = pBVar2;
  String::~String(aSStack_20);
  piVar5 = *(int **)(this + 0x68);
  uVar6 = *(uint *)(param_1 + ((byte)this[0x34] + 4) * 4 + 4);
  iVar1 = *(int *)(*(short *)(param_1 + 0x3c) * 4 + *(int *)param_1);
  uVar3 = __floatsisf((int)*(short *)(iVar1 + 0x20));
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar1 + 0x2c));
  uVar4 = __floatsisf((int)*(short *)(iVar1 + 0x2a));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(iVar1 + 0x26));
  __addsf3(uVar3,uVar4);
  iVar1 = __fixsfsi();
  (**(code **)(*piVar5 + 0x14))
            (piVar5,(int)(uVar6 & 0xffff | ((iVar1 * 3 >> 4) + (uVar6 >> 0x10)) * 0x10000) >> 0x10,
             (int)(short)uVar6);
  *(undefined4 *)(this + 100) = 0;
  this[0x79] = (ServingCounter)0x1;
  return this;
}


