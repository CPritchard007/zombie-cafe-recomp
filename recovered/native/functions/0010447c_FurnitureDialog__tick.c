/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010447c FurnitureDialog::tick */

/* FurnitureDialog::tick(long) */

undefined8 __thiscall FurnitureDialog::tick(FurnitureDialog *this,long param_1)

{
  int iVar1;
  String *this_00;
  ZombieCafe *this_01;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  FurnitureDialog *local_18;
  
  local_18 = this;
  if (this[0x14] != (FurnitureDialog)0x0) {
    this_01 = *(ZombieCafe **)(this + 0x68);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_01);
    if (iVar1 != 0) {
      iVar1 = *(int *)(this_01 + DAT_00104510);
      local_18 = (FurnitureDialog *)0x3f800000;
      iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x98),iVar1 >> 0x10,(int)(short)iVar1,
                         extraout_s0,extraout_s1);
      if (iVar1 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_00);
        this_00 = (String *)
                  CapcomLinkedList<FurnitureDialog::QueueMessage*>::remove
                            ((CapcomLinkedList<FurnitureDialog::QueueMessage*> *)(this + 0xb4),0);
        if (*(code **)(this_00 + 0x10) != (code *)0x0) {
          (**(code **)(this_00 + 0x10))(*(undefined4 *)(this_00 + 0x14));
        }
        String::~String(this_00 + 8);
        String::~String(this_00);
        operator_delete(this_00);
        this[0x14] = (FurnitureDialog)0x0;
        if (*(int *)(this + 0xc4) != 0) {
          show(SUB41(this,0));
        }
      }
    }
    *(undefined1 *)(*(int *)(this + 0x68) + DAT_00104514) = 1;
  }
  return CONCAT44(param_1,local_18);
}


