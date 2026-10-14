/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a8c8 CapcomGraphics::drawArc */

/* CapcomGraphics::drawArc(float, float, float, float, float, float) */

void __thiscall
CapcomGraphics::drawArc
          (CapcomGraphics *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 uVar4;
  undefined4 *puVar5;
  float __x;
  float __x_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int local_30;
  
  iVar1 = __aeabi_fcmple(in_stack_00000008,0);
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmpgt(in_stack_00000008,DAT_0029a9ac);
    if (iVar1 != 0) {
      in_stack_00000008 = DAT_0029a9ac;
    }
    puVar2 = (undefined4 *)operator_new__(0x250);
    uVar4 = 0;
    local_30 = 0;
    puVar5 = puVar2;
    while( true ) {
      uVar3 = __addsf3(in_stack_00000008,DAT_0029a9b0);
      iVar1 = __aeabi_fcmplt(uVar4,uVar3);
      if (iVar1 == 0) break;
      iVar1 = __aeabi_fcmpgt(uVar4,in_stack_00000008);
      if (iVar1 != 0) {
        uVar4 = in_stack_00000008;
      }
      __x = (float)__addsf3(in_stack_00000004,uVar4);
      sinf(__x);
      uVar3 = __mulsf3();
      uVar3 = __addsf3(in_r1,uVar3);
      *puVar5 = uVar3;
      cosf(__x_00);
      uVar3 = __mulsf3();
      uVar3 = __addsf3(in_r2,uVar3);
      puVar5[1] = uVar3;
      local_30 = local_30 + 2;
      uVar4 = __addsf3(uVar4,DAT_0029a9b0);
      puVar5 = puVar5 + 2;
    }
    finishBatch();
    prepareForVertexDraw(this,false);
    glVertexPointer(2,DAT_0029a9b4,0,puVar2);
    uVar4 = getAscendingIndices(this,local_30 >> 1);
    glDrawElements(1,local_30 >> 1,DAT_0029a9b8,uVar4);
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
  }
  return;
}


