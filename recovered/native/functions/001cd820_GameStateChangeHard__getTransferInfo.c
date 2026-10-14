/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cd820 GameStateChangeHard::getTransferInfo */

/* GameStateChangeHard::getTransferInfo(void*, void*) */

void GameStateChangeHard::getTransferInfo(void *param_1,void *param_2)

{
  String *this;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  _func_void_void_ptr_uchar_ptr_uint *p_Var6;
  _func_void_void_ptr *p_Var7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  iVar1 = DAT_001cd96c;
  puVar10 = (undefined4 *)(&stack0xfffffff0 + DAT_001cd96c);
  puVar11 = (undefined4 *)(&stack0xfffffff0 + DAT_001cd96c);
  puVar12 = (undefined4 *)(&stack0xfffffff0 + DAT_001cd96c);
  this = (String *)(&stack0x0000000c + DAT_001cd96c);
  iVar8 = DAT_001cd974 + 0x1cd834;
  piVar9 = *(int **)(iVar8 + DAT_001cd970);
  *(int *)(&stack0x000002bc + DAT_001cd96c) = *piVar9;
  *(undefined4 *)((int)param_2 + 0xcc) = 1;
  String::String(this,(String *)((int)param_2 + 0x78));
  String::operator+((String *)(&stack0x00000014 + iVar1),(int)param_2 + 0x70,
                    &stack0x0000000c + iVar1);
  String::String((String *)(&stack0x0000001c + iVar1),(String *)((int)param_2 + 0x80));
  String::operator+((String *)(&stack0x00000024 + iVar1),&stack0x00000014 + iVar1,
                    &stack0x0000001c + iVar1);
  String::String((String *)(&stack0x0000002c + iVar1),(String *)((int)param_2 + 0x88));
  String::operator+((String *)(&stack0x00000004 + iVar1),&stack0x00000024 + iVar1,
                    &stack0x0000002c + iVar1);
  String::~String((String *)(&stack0x0000002c + iVar1));
  String::~String((String *)(&stack0x00000024 + iVar1));
  String::~String((String *)(&stack0x0000001c + iVar1));
  String::~String((String *)(&stack0x00000014 + iVar1));
  String::~String((String *)(&stack0x0000000c + iVar1));
  String::String((String *)(&stack0x00000034 + iVar1),(String *)(&stack0x00000004 + iVar1));
  StringUtil::createCharString(&stack0x00000034 + iVar1,&stack0x0000003c + iVar1,0x80);
  String::~String((String *)(&stack0x00000034 + iVar1));
  uVar2 = CCGetDeviceID();
  uVar5 = *(undefined4 *)(iVar8 + DAT_001cd978);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar2;
  *puVar10 = uVar5;
  *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x0000003c + iVar1;
  snprintf(&stack0x000000bc + iVar1,0x200,(char *)(DAT_001cd97c + 0x1cd8be),DAT_001cd980 + 0x1cd8ca)
  ;
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    getTransferInfoFaild(param_2);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar8 + DAT_001cd984);
    p_Var6 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar8 + DAT_001cd988);
    p_Var7 = *(_func_void_void_ptr **)(iVar8 + DAT_001cd98c);
    *puVar11 = param_2;
    CCServer::GetHitugiTransferInfo(pvVar4,&stack0x000000bc + iVar1,p_Var6,p_Var7,(void *)*puVar12);
  }
  String::~String((String *)(&stack0x00000004 + iVar1));
  if (*(int *)(&stack0x000002bc + iVar1) != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


