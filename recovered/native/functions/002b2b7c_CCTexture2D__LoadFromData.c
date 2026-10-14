/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2b7c CCTexture2D::LoadFromData */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002b2c74) */
/* WARNING: Removing unreachable block (ram,0x002b2c74) */
/* CCTexture2D::LoadFromData(ccTexture2D*, CCTexture2D::ccTexFmt, unsigned int, unsigned int,
   unsigned int, void const*, void*) */

void CCTexture2D::LoadFromData
               (undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
               undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char acStack_9c [128];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002b2d6c + 0x2b2b88);
  local_1c = *piVar5;
  param_1[7] = 0xffffffff;
  uVar1 = MaxTextureSize();
  if ((uVar1 < param_4) || (uVar1 < param_3)) {
    snprintf(acStack_9c,0x80,(char *)(DAT_002b2d70 + 0x2b2bb6),param_1[1],param_1[2],uVar1);
    L_PrintLog((char *)(DAT_002b2d74 + 0x2b2bc6),acStack_9c);
  }
  else {
    iVar2 = glIsTexture(*param_1);
    if ((((iVar2 == 0) || (param_1[1] != param_3)) || (param_1[2] != param_4)) ||
       (param_1[4] != param_2)) {
      iVar2 = glIsTexture(*param_1);
      if (iVar2 != 0) {
        L_PrintLog((char *)(DAT_002b2d80 + 0x2b2c08),(char *)(DAT_002b2d84 + 0x2b2c0a));
        iVar2 = glIsTexture(*param_1);
        if (iVar2 != 0) {
          glDeleteTextures(1,param_1);
        }
      }
      param_1[2] = param_4;
      param_1[3] = param_5;
      param_1[1] = param_3;
      param_1[4] = param_2;
      glGenTextures(1,param_1);
    }
    else {
      L_PrintLog((char *)(DAT_002b2d78 + 0x2b2bfa),(char *)(DAT_002b2d7c + 0x2b2bfc));
    }
    glBindTexture(DAT_002b2d88,*param_1);
    glTexParameteri(DAT_002b2d88,DAT_002b2d8c,DAT_002b2d90);
    glTexParameteri(DAT_002b2d88,0x2800,DAT_002b2d90);
    glTexParameteri(DAT_002b2d88,DAT_002b2d94,DAT_002b2d98);
    glTexParameteri(DAT_002b2d88,DAT_002b2d9c,DAT_002b2d98);
    iVar3 = param_1[1];
    iVar2 = param_1[2];
    switch(param_1[4]) {
    case 7:
      uVar1 = (uint)(iVar3 * iVar2 * 2) >> 3;
      uVar4 = DAT_002b2da0;
      break;
    case 8:
      uVar1 = (uint)(iVar3 * iVar2 * 4) >> 3;
      uVar4 = DAT_002b2da4;
      break;
    case 9:
      uVar1 = (uint)(iVar3 * iVar2 * 2) >> 3;
      uVar4 = DAT_002b2da8;
      break;
    case 10:
      uVar1 = (uint)(iVar3 * iVar2 * 4) >> 3;
      uVar4 = 0x8c00;
      break;
    case 0xb:
      uVar1 = iVar3 * iVar2 + 0x400;
      uVar4 = DAT_002b2dac;
      break;
    case 0xc:
    default:
      glTexImage2D(DAT_002b2d88);
      goto LAB_002b2d20;
    }
    glCompressedTexImage2D(DAT_002b2d88,0,uVar4,iVar3,iVar2,0,uVar1,param_6);
LAB_002b2d20:
    iVar2 = glGetError();
    glBindTexture(DAT_002b2d88,0);
    iVar3 = 1;
    if ((iVar2 == 0) || (iVar3 = glIsTexture(*param_1), iVar3 == 0)) goto LAB_002b2d48;
    glDeleteTextures(1,param_1);
  }
  iVar3 = 0;
LAB_002b2d48:
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


