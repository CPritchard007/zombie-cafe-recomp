/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6f3c MALTAHoover::send */

/* MALTAHoover::send(char*, unsigned int, unsigned int, unsigned int, unsigned int, int, char*,
   char*) */

void __thiscall
MALTAHoover::send(MALTAHoover *this,char *param_1,uint param_2,uint param_3,uint param_4,
                 uint param_5,int param_6,char *param_7,char *param_8)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *__format;
  undefined4 *puVar4;
  int iStack_4;
  
  iVar1 = DAT_000b7004;
  puVar4 = (undefined4 *)(&stack0xffffffec + DAT_000b7004);
  *(char **)(&stack0x00000028 + DAT_000b7004) = param_1;
  *(uint *)(&stack0x0000002c + DAT_000b7004) = param_2;
  piVar3 = *(int **)(DAT_000b7010 + 0xb6f56);
  *(undefined4 *)(&stack0x00000034 + DAT_000b7004) =
       *(undefined4 *)(&stack0xffffffec + DAT_000b700c + DAT_000b7004);
  *(uint *)(&stack0x00000030 + DAT_000b7004) = param_3;
  uVar2 = *(undefined4 *)(&stack0x0000056c + DAT_000b7004);
  *(int *)(&stack0xffffffec + DAT_000b7014 + DAT_000b7004) = *piVar3;
  __format = (char *)(DAT_000b7008 + 0xb6f70);
  *(undefined4 *)(&stack0x00000038 + DAT_000b7004) = uVar2;
  snprintf(&stack0x00000040 + DAT_000b7004,0x80,__format,DAT_000b7018 + 0xb6f74);
  uVar2 = javaGetCountryCode();
  snprintf(&stack0x000000c0 + iVar1,0x80,__format,uVar2);
  uVar2 = CCGetDeviceID();
  *puVar4 = this + 0x80;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar2;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000028 + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000038 + iVar1);
  *(undefined1 **)((int)&iStack_4 + iVar1) = &stack0x00000040 + iVar1;
  *(MALTAHoover **)((int)&param_5 + iVar1) = this + 0x100;
  *(undefined4 *)((int)&param_6 + iVar1) = *(undefined4 *)(&stack0x0000002c + iVar1);
  *(undefined1 **)((int)&param_4 + iVar1) = &stack0x000000c0 + iVar1;
  *(undefined4 *)((int)&param_7 + iVar1) = *(undefined4 *)(&stack0x00000030 + iVar1);
  *(undefined4 *)((int)&param_8 + iVar1) = *(undefined4 *)(&stack0x0000055c + iVar1);
  *(undefined4 *)(&stack0x00000014 + iVar1) =
       *(undefined4 *)(&stack0xffffffec + DAT_000b701c + iVar1);
  *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(&stack0x00000564 + iVar1);
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(&stack0x00000034 + iVar1);
  snprintf(&stack0x00000140 + iVar1,0x400,(char *)(DAT_000b7020 + 0xb6fd8),this);
  sendGET(this,&stack0x00000140 + iVar1);
  if (*(int *)(&stack0xffffffec + DAT_000b7014 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


