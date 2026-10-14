/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299ab8 CapcomGraphics::prepareForVertexDraw */

/* CapcomGraphics::prepareForVertexDraw(bool) */

void __thiscall CapcomGraphics::prepareForVertexDraw(CapcomGraphics *this,bool param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = DAT_00299b34;
  puVar3 = (undefined4 *)(DAT_00299b30 + 0x299ac4);
  activate(this);
  glEnableClientState(DAT_00299b38);
  pcVar4 = (char *)*puVar3;
  pcVar5 = *(char **)(iVar1 + 0x299aca);
  if (param_1) {
    glEnableClientState();
    if (*pcVar4 == '\0') {
      glEnable(DAT_00299b40);
      *pcVar4 = '\x01';
    }
    if (*pcVar5 != '\0') goto LAB_00299b20;
    glEnable(DAT_00299b44);
    cVar2 = '\x01';
  }
  else {
    glDisableClientState(DAT_00299b3c);
    if (*pcVar4 == '\0') {
      glEnable(DAT_00299b40);
      *pcVar4 = '\x01';
    }
    if (*pcVar5 == '\0') goto LAB_00299b20;
    glDisable(DAT_00299b44);
    cVar2 = '\0';
  }
  *pcVar5 = cVar2;
LAB_00299b20:
  glDisableClientState(DAT_00299b48);
  glDisableClientState(DAT_00299b4c);
  return;
}


