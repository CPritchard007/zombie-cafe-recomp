/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e26c8 ConfirmDialog::show */

/* ConfirmDialog::show(String, String, String, void (*)(void*), void*) */

void __thiscall
ConfirmDialog::show(ConfirmDialog *this,String *param_2,String *param_3,String *param_4,
                   undefined4 param_5,undefined4 param_6)

{
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  String::String(aSStack_28,param_2);
  String::String(aSStack_20,param_3);
  String::String(aSStack_18,param_4);
  show(this,aSStack_28,aSStack_20,aSStack_18,param_5,0,param_6,0,0);
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  return;
}


