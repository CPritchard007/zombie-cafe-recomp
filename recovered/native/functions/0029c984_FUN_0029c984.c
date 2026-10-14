/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c984 FUN_0029c984 */

void FUN_0029c984(int *param_1)

{
  int iVar1;
  CFTextureRef *this;
  int *piVar2;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_0029c9e4 + 0x29c990);
  iVar1 = *param_1;
  local_14 = *piVar2;
  if ((char)param_1[1] == '\0') {
    sprintf(acStack_114,(char *)(DAT_0029c9ec + 0x29c9b8),iVar1,*(undefined4 **)(iVar1 + 4),
            **(undefined4 **)(iVar1 + 4));
    this = (CFTextureRef *)*param_1;
    if (this != (CFTextureRef *)0x0) {
      CFTextureRef::~CFTextureRef(this);
      operator_delete(this);
    }
  }
  else {
    sprintf(acStack_114,(char *)(DAT_0029c9e8 + 0x29c9a6),iVar1,*(undefined4 **)(iVar1 + 4),
            **(undefined4 **)(iVar1 + 4));
  }
  *param_1 = 0;
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


