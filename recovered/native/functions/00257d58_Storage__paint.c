/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00257d58 Storage::paint */

/* Storage::paint(CapcomGraphics*) */

void __thiscall Storage::paint(Storage *this,CapcomGraphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (this[0x8c] != (Storage)0x0) {
    ScreenElement::paint((ScreenElement *)this,param_1);
    if ((this[0x6c] != (Storage)0x0) && (*(int *)(this + 0x78) != 0)) {
      uVar3 = *(undefined4 *)(this + 0x68);
      uVar1 = __floatsisf(**(undefined4 **)(DAT_00257e1c + 0x257d88));
      iVar2 = __aeabi_fcmplt(uVar3,uVar1);
      if (iVar2 == 0) {
        this[0x6c] = (Storage)0x0;
        *(undefined4 *)(this + 0x68) = 0;
      }
      else {
        uVar1 = __divsf3(uVar3,uVar1);
        CapcomGraphics::setColorModulation(param_1,true);
        uVar3 = __mulsf3(uVar1,DAT_00257e20);
        __subsf3(DAT_00257e20,uVar3);
        iVar2 = __fixsfsi();
        CapcomGraphics::setColor(param_1,iVar2,0xff,0xff,0xff);
        uVar1 = __addsf3(uVar1,uVar1);
        uVar1 = __addsf3(uVar1,0x3f800000);
        (**(code **)(**(int **)(this + 0x78) + 0x14))
                  (*(int **)(this + 0x78),param_1,*(int *)(this + 0x84) >> 0x10,
                   (int)(short)*(int *)(this + 0x84),uVar1,uVar1,0,0x12);
        CapcomGraphics::setColorModulation(param_1,false);
      }
    }
  }
  return;
}


