/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5544 MultiByteString::printString */

/* MultiByteString::printString(char const*, String*) */

void MultiByteString::printString(char *param_1,String *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_002c5590;
  printf((char *)(DAT_002c558c + 0x2c5552),param_1);
  iVar4 = 0;
  while ((iVar4 < *(short *)(param_2 + 6) && (iVar2 = String::charAt(param_2,iVar4), iVar2 != 0))) {
    uVar3 = String::charAt(param_2,iVar4);
    printf((char *)(iVar1 + 0x2c555c),uVar3);
    iVar4 = iVar4 + 1;
  }
  putchar(10);
  return;
}


