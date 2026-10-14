/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00190b20 FUN_00190b20 */

void FUN_00190b20(void)

{
  BitmapTextElement *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r5;
  undefined4 uStack00000024;
  
  uStack00000024 = *(undefined4 *)(**(int **)(unaff_r5 + 0x3c) + 0x2c);
  String::String((String *)&stack0x00000044,(char *)(DAT_00190b9c + 0x190b2c));
  uVar3 = *(undefined4 *)(*(int *)(unaff_r5 + 0x3c) + 0xc);
  uVar2 = *(undefined4 *)(*(int *)(unaff_r5 + 0x3c) + 0x10);
  pBVar1 = (BitmapTextElement *)operator_new(0xc0);
  uVar4 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_00190ba0);
  uVar3 = __floatsisf(uVar3);
  __mulsf3(uVar3,DAT_00190ba4);
  __fixsfsi();
  uVar3 = __floatsisf(uVar2);
  __mulsf3(uVar3,DAT_00190ba4);
  __fixsfsi();
  BitmapTextElement::BitmapTextElement(pBVar1,&stack0x00000044,uVar4,0xffffffff);
  FUN_00190324();
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


