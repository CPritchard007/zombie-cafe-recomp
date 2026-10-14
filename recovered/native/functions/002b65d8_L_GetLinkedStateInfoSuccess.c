/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b65d8 L_GetLinkedStateInfoSuccess */

/* L_GetLinkedStateInfoSuccess(void*, unsigned char const*, unsigned int) */

void L_GetLinkedStateInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint *puVar9;
  
  iVar1 = DAT_002b6758;
  puVar7 = *(undefined4 **)(DAT_002b6754 + 0x2b65e4);
  puVar9 = (uint *)(&stack0xffffffec + DAT_002b6758);
  *(uint *)(&stack0xffffffec + DAT_002b6758) = param_3;
  *(undefined4 *)(&stack0x000001f8 + DAT_002b6758) = *puVar7;
  *(undefined4 *)((int)param_1 + 0x31c) = 0;
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = puVar7;
  if (param_2 == (uchar *)0x0) {
    pcVar8 = *(code **)((int)param_1 + 0x32c);
joined_r0x002b6658:
    if (pcVar8 == (code *)0x0) goto LAB_002b673c;
    uVar3 = *(undefined4 *)((int)param_1 + 0x330);
    uVar6 = 1;
  }
  else {
    iVar2 = strncmp((char *)param_2,(char *)(DAT_002b675c + 0x2b6612),0xb);
    if (iVar2 != 0) {
      iVar2 = strncmp((char *)param_2,(char *)(DAT_002b6760 + 0x2b663a),7);
      if ((iVar2 != 0) &&
         (iVar2 = strncmp((char *)param_2,(char *)(DAT_002b6764 + 0x2b664a),9), iVar2 != 0)) {
        CCGetWritableFilePath(&stack0x000000f4 + iVar1,0x104,(char *)(DAT_002b6768 + 0x2b666e));
        pvVar4 = (void *)CCFile::Open(&stack0x000000f4 + iVar1,1);
        iVar2 = CCFile::Write(pvVar4,param_2,*puVar9);
        if (iVar2 == 0) {
          if (*(code **)((int)param_1 + 0x32c) != (code *)0x0) {
            (**(code **)((int)param_1 + 0x32c))(*(undefined4 *)((int)param_1 + 0x330),1);
          }
        }
        else {
          CCFile::Close(pvVar4);
          pvVar4 = (void *)CCFile::Open(&stack0x000000f4 + iVar1,0);
          iVar2 = CCFile::ReadLine(pvVar4,&stack0x000000f4 + iVar1,0x104);
          if (iVar2 != 0) {
            strncpy(&stack0xfffffff4 + iVar1,&stack0x000000f4 + iVar1,0x80);
            iVar2 = CCFile::ReadLine(pvVar4,&stack0x000000f4 + iVar1,0x104);
            if (iVar2 != 0) {
              iVar2 = atoi(&stack0x000000f4 + iVar1);
              iVar5 = CCFile::ReadLine(pvVar4,&stack0x000000f4 + iVar1,0x104);
              if (iVar5 != 0) {
                strncpy(&stack0x00000074 + iVar1,&stack0x000000f4 + iVar1,0x80);
                CCFile::Close(pvVar4);
                if (*(code **)((int)param_1 + 0x328) != (code *)0x0) {
                  *(undefined4 *)((int)param_1 + 0x3a8) = 1;
                  (**(code **)((int)param_1 + 0x328))
                            (*(undefined4 *)((int)param_1 + 0x330),&stack0xfffffff4 + iVar1,
                             &stack0x00000074 + iVar1,iVar2);
                }
                goto LAB_002b673c;
              }
            }
          }
          if (*(code **)((int)param_1 + 0x32c) != (code *)0x0) {
            (**(code **)((int)param_1 + 0x32c))(*(undefined4 *)((int)param_1 + 0x330),1);
          }
        }
        CCFile::Close(pvVar4);
        goto LAB_002b673c;
      }
      pcVar8 = *(code **)((int)param_1 + 0x32c);
      goto joined_r0x002b6658;
    }
    pcVar8 = *(code **)((int)param_1 + 0x32c);
    if (pcVar8 == (code *)0x0) goto LAB_002b673c;
    uVar3 = *(undefined4 *)((int)param_1 + 0x330);
    uVar6 = 3;
  }
  (*pcVar8)(uVar3,uVar6);
LAB_002b673c:
  if (*(int *)(&stack0x000001f8 + iVar1) != **(int **)(&stack0xfffffff0 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


