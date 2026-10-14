/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001447e8 Vector<float>::removeElement */

/* Vector<float>::removeElement(float) */

undefined8 __thiscall Vector<float>::removeElement(Vector<float> *this,float param_1)

{
  int iVar1;
  undefined4 in_r1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  float extraout_s0;
  
  iVar2 = *(int *)(this + 4);
  iVar4 = 0;
  do {
    if (iVar2 < iVar4) {
      uVar5 = 0;
LAB_00144834:
      return CONCAT44(iVar2,uVar5);
    }
    puVar3 = (undefined4 *)(*(int *)(this + 8) + iVar4 * 4);
    uVar5 = *puVar3;
    iVar1 = __aeabi_fcmpeq(param_1,uVar5,in_r1);
    if (iVar1 != 0) {
      if (iVar4 < 0) {
        uVar5 = 0;
      }
      else {
        *puVar3 = 0;
        move(this,iVar4 + 1,-1);
        *(int *)(this + 4) = *(int *)(this + 4) + -1;
      }
      goto LAB_00144834;
    }
    iVar4 = iVar4 + 1;
    param_1 = extraout_s0;
  } while( true );
}


