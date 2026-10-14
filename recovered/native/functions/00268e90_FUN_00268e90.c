/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268e90 FUN_00268e90 */

undefined8 FUN_00268e90(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *in_stack_00000000;
  int *local_18;
  
  iVar1 = *param_1;
  pcVar2 = (code *)0x0;
  local_18 = param_1;
  if (((*(char *)(iVar1 + 0x7d) == '\0') && (*(char *)((int)param_1 + DAT_00268ef4) == '\0')) &&
     (pcVar2 = *(code **)(iVar1 + 0x10c), pcVar2 != (code *)0x0)) {
    local_18 = in_stack_00000000;
    pcVar2 = (code *)(*pcVar2)(*(undefined4 *)(iVar1 + 0x110));
    if (pcVar2 == (code *)0x1) {
      FUN_00268e48(param_1,DAT_00268ef8 + 0x268ed0);
      param_1[3] = 0x17;
    }
    else if ((pcVar2 != (code *)0x2) && (pcVar2 != (code *)0x0)) {
      pcVar2 = (code *)0x1;
      FUN_00268e48(param_1,DAT_00268efc + 0x268eea);
      param_1[3] = 1;
    }
  }
  return CONCAT44(local_18,pcVar2);
}


