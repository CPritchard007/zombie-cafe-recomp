/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00156308 GameStateGatya::SetKey */

/* GameStateGatya::SetKey(Vector<EftKeyData>*, float, float, float, float, float, int, int, int) */

void __thiscall
GameStateGatya::SetKey
          (GameStateGatya *this,Vector *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,int param_7,int param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_34;
  undefined4 local_14;
  
  uVar1 = __mulsf3(param_7,DAT_00156354);
  Vector<EftKeyData>::addElement
            (param_1,uVar1,local_34,param_8,param_9,in_stack_00000004,in_stack_00000008,
             in_stack_0000000c,in_stack_00000010,in_stack_00000014,local_14);
  return;
}


