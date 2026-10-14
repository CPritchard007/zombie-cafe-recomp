/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f499e FUN_000f499e */

/* WARNING: Removing unreachable block (ram,0x000f48d0) */

void FUN_000f499e(void)

{
  undefined4 uVar1;
  int in_r3;
  int unaff_r4;
  
  uVar1 = CFPoint::add(*(long *)(in_r3 + 4),1);
  (**(code **)(**(int **)(unaff_r4 + 0x20) + 0xc))(*(int **)(unaff_r4 + 0x20),uVar1);
  CharacterInstance::setCurrentAnimation
            (*(CharacterInstance **)(unaff_r4 + 0x20),'\x02',
             *(uchar *)(*(int *)(unaff_r4 + 0x30) + 0x34),false);
  *(undefined1 *)(unaff_r4 + 5) = *(undefined1 *)(*(int *)(unaff_r4 + 0x2c) + 5);
  if (*(char *)(unaff_r4 + 4) != '\0') {
    return;
  }
  FUN_000f40f4(unaff_r4);
  FUN_000f49bc();
  return;
}


