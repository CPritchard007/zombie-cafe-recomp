/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0884 CCMaterial::Deactivate */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002b088e) */
/* WARNING: Removing unreachable block (ram,0x002b088e) */
/* CCMaterial::Deactivate(ccMaterial const*) */

void CCMaterial::Deactivate(ccMaterial *param_1)

{
  int *piVar1;
  
  switch(*(undefined4 *)param_1) {
  case 6:
  case 7:
  case 8:
  case 9:
    piVar1 = *(int **)(DAT_002b08ec + 0x2b08a2);
    if (*piVar1 == 0) {
      glClientActiveTexture(DAT_002b08f0);
    }
    glActiveTexture(DAT_002b08f0);
    glBindTexture(DAT_002b08f4,0);
    glDisable(DAT_002b08f4);
    if (*piVar1 == 0) {
      glClientActiveTexture(DAT_002b08f8);
    }
    glActiveTexture(DAT_002b08f8);
  case 1:
  case 2:
  case 3:
  case 4:
    glBindTexture(DAT_002b08f4,0);
    glDisable(DAT_002b08f4);
  default:
    glDisable(DAT_002b08fc);
    return;
  }
}


