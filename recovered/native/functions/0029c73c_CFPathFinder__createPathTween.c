/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c73c CFPathFinder::createPathTween */

/* CFPathFinder::createPathTween(int, int, float, int) */

int * __thiscall
CFPathFinder::createPathTween(CFPathFinder *this,int param_1,int param_2,float param_3,int param_4)

{
  ccPath *pcVar1;
  int iVar2;
  int *piVar3;
  int in_stack_00000000;
  
  pcVar1 = (ccPath *)operator_new(0xc);
  *(undefined4 *)pcVar1 = 0;
  *(undefined4 *)(pcVar1 + 4) = 0;
  *(undefined4 *)(pcVar1 + 8) = 0;
  CCPath::Init(pcVar1);
  iVar2 = CCPathFinding::PathFind
                    (*(void **)this,param_1,param_2,
                     *(_func_float_void_ptr_uint_uint **)(DAT_0029c7b4 + 0x29c766),this,pcVar1,
                     (_func_float_void_ptr_uint_uint_uint *)0x0,(void *)0x0);
  if (iVar2 == 0) {
    CCPath::Free(pcVar1);
    operator_delete(pcVar1);
    piVar3 = (int *)0x0;
  }
  else {
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) - in_stack_00000000;
    piVar3 = (int *)operator_new(0x1c);
    iVar2 = DAT_0029c7b8;
    piVar3[2] = (int)this;
    piVar3[3] = (int)pcVar1;
    iVar2 = *(int *)(iVar2 + 0x29c792);
    *(undefined2 *)(piVar3 + 4) = 0;
    piVar3[5] = 0;
    *piVar3 = iVar2 + 8;
    piVar3[6] = param_4;
  }
  return piVar3;
}


