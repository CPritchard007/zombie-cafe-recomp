/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0790 CCPathFinding::ClearNodes */

/* CCPathFinding::ClearNodes(void*) */

void CCPathFinding::ClearNodes(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* WARNING: Load size is inaccurate */
  for (uVar1 = 0; uVar1 <= *param_1; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)((int)param_1 + 4) + iVar2) = 0;
    iVar2 = iVar2 + 0x24;
  }
  return;
}


