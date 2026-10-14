/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a710 CapcomGraphics::fillArc */

/* CapcomGraphics::fillArc(float, float, float, float, float, float) */

void __thiscall
CapcomGraphics::fillArc
          (CapcomGraphics *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 uVar5;
  float __x;
  float __x_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int local_30;
  
  iVar2 = __aeabi_fcmple(in_stack_00000008,0);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmpgt(in_stack_00000008,DAT_0029a7fc);
    if (iVar2 != 0) {
      in_stack_00000008 = DAT_0029a7fc;
    }
    puVar3 = (undefined4 *)operator_new__(0x248);
    *puVar3 = in_r1;
    uVar5 = 0;
    puVar3[1] = in_r2;
    local_30 = 2;
    puVar1 = puVar3;
    while( true ) {
      uVar4 = __addsf3(in_stack_00000008,DAT_0029a800);
      iVar2 = __aeabi_fcmplt(uVar5,uVar4);
      if (iVar2 == 0) break;
      iVar2 = __aeabi_fcmpgt(uVar5,in_stack_00000008);
      if (iVar2 != 0) {
        uVar5 = in_stack_00000008;
      }
      __x = (float)__addsf3(in_stack_00000004,uVar5);
      sinf(__x);
      uVar4 = __mulsf3();
      uVar4 = __addsf3(in_r1,uVar4);
      puVar1[2] = uVar4;
      cosf(__x_00);
      uVar4 = __mulsf3();
      uVar4 = __addsf3(in_r2,uVar4);
      puVar1[3] = uVar4;
      local_30 = local_30 + 2;
      uVar5 = __addsf3(uVar5,DAT_0029a800);
      puVar1 = puVar1 + 2;
    }
    finishBatch();
    prepareForVertexDraw(this,false);
    glVertexPointer(2,DAT_0029a804,0,puVar3);
    uVar5 = getAscendingIndices(this,local_30 >> 1);
    glDrawElements(6,local_30 >> 1,DAT_0029a808,uVar5);
    operator_delete__(puVar3);
  }
  return;
}


