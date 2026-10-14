/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236de8 WaitDialog::show */

/* WaitDialog::show(String, String, String, void (*)(void*), void*, bool) */

void __thiscall
WaitDialog::show(WaitDialog *this,String *param_2,String *param_3,String *param_4,undefined4 param_5
                ,undefined4 param_6,undefined1 param_7)

{
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String(aSStack_30,param_2);
  String::String(aSStack_28,param_3);
  String::String(aSStack_20,param_4);
  show(this,aSStack_30,aSStack_28,aSStack_20,param_5,0,param_6,param_7,0);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  return;
}


