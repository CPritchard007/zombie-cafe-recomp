/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4cbc L_SaveLinkedGameStateSuccess */

/* L_SaveLinkedGameStateSuccess(void*, unsigned char const*, unsigned int) */

undefined8 L_SaveLinkedGameStateSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 local_20;
  
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  local_20 = param_1;
  if (param_2 == (uchar *)0x0) {
    if (*(code **)((int)param_1 + 0x294) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x294))
                (*(undefined4 *)((int)param_1 + 0x298),1,DAT_002b4db0 + 0x2b4ce8);
      local_20 = (void *)0x0;
    }
  }
  else {
    iVar1 = strncmp((char *)param_2,(char *)(DAT_002b4db4 + 0x2b4cf6),7);
    if (iVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x3a8) = 1;
      if (*(code **)((int)param_1 + 0x28c) != (code *)0x0) {
        (**(code **)((int)param_1 + 0x28c))(*(undefined4 *)((int)param_1 + 0x298));
      }
    }
    else {
      iVar1 = strncmp((char *)param_2,(char *)(DAT_002b4db8 + 0x2b4d22),0xb);
      if (iVar1 == 0) {
        pcVar4 = *(code **)((int)param_1 + 0x294);
        if (pcVar4 == (code *)0x0) goto LAB_002b4dae;
        uVar2 = *(undefined4 *)((int)param_1 + 0x298);
        uVar3 = 3;
        iVar1 = DAT_002b4dbc + 0x2b4d44;
      }
      else {
        iVar1 = strncmp((char *)param_2,(char *)(DAT_002b4dc0 + 0x2b4d4e),8);
        if (iVar1 == 0) {
          *(undefined4 *)((int)param_1 + 0x3a8) = 0;
          pcVar4 = *(code **)((int)param_1 + 0x294);
          if (pcVar4 == (code *)0x0) goto LAB_002b4dae;
          uVar2 = *(undefined4 *)((int)param_1 + 0x298);
          uVar3 = 2;
          iVar1 = DAT_002b4dc4 + 0x2b4d70;
        }
        else {
          iVar1 = strncmp((char *)param_2,(char *)(DAT_002b4dc8 + 0x2b4d7a),0xb);
          pcVar4 = *(code **)((int)param_1 + 0x294);
          if (iVar1 == 0) {
            if (pcVar4 == (code *)0x0) goto LAB_002b4dae;
            uVar2 = *(undefined4 *)((int)param_1 + 0x298);
            uVar3 = 8;
            iVar1 = DAT_002b4dcc + 0x2b4d98;
          }
          else {
            if (pcVar4 == (code *)0x0) goto LAB_002b4dae;
            uVar2 = *(undefined4 *)((int)param_1 + 0x298);
            uVar3 = 4;
            iVar1 = DAT_002b4dd0 + 0x2b4dac;
          }
        }
      }
      local_20 = (void *)0x0;
      (*pcVar4)(uVar2,uVar3,iVar1);
    }
  }
LAB_002b4dae:
  return CONCAT44(param_2,local_20);
}


