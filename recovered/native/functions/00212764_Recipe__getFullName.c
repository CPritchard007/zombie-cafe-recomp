/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212764 Recipe::getFullName */

/* Recipe::getFullName(unsigned char) const */

void Recipe::getFullName(uchar param_1)

{
  String *this;
  char *__ptr;
  int iVar1;
  void *__ptr_00;
  void *__ptr_01;
  String *in_r1;
  int in_r2;
  int *piVar2;
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  this = (String *)(uint)param_1;
  piVar2 = *(int **)(DAT_00212830 + 0x212770);
  local_1c = *piVar2;
  if (in_r2 == 0) {
    __ptr = (char *)String::getBytes(in_r1);
    L_PrintLog((char *)(DAT_00212834 + 0x21278c),__ptr);
    free(__ptr);
  }
  else if (in_r2 < **(int **)(DAT_00212838 + 0x21279c)) {
    iVar1 = CapcomApp::getInstance();
    String::String(aSStack_124,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(iVar1 + 4) + 0x4b0) + 8) +
                   (in_r2 + **(int **)(DAT_0021283c + 0x2127c0)) * 8));
    __ptr_00 = (void *)String::getBytes(aSStack_124);
    String::~String(aSStack_124);
    __ptr_01 = (void *)String::getBytes(in_r1);
    sprintf(acStack_11c,(char *)(DAT_00212840 + 0x2127ee),__ptr_00,__ptr_01);
    free(__ptr_00);
    free(__ptr_01);
    L_PrintLog((char *)(DAT_00212844 + 0x212806),acStack_11c);
    String::String(this,acStack_11c);
    goto LAB_0021281c;
  }
  String::String(this,in_r1);
LAB_0021281c:
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


