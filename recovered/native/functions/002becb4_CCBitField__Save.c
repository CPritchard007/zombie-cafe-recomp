/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002becb4 CCBitField::Save */

/* CCBitField::Save(void*, char const*) */

undefined4 CCBitField::Save(void *param_1,char *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  pvVar1 = (void *)CCFile::Open(param_2,1);
  uVar3 = 0;
  if (pvVar1 != (void *)0xffffffff) {
    iVar2 = CCFile::Write(pvVar1,param_1,4);
    if ((iVar2 == 0) ||
       (iVar2 = CCFile::Write(pvVar1,*(void **)((int)param_1 + 8),*(int *)((int)param_1 + 4) << 2),
       iVar2 == 0)) {
      CCFile::Close(pvVar1);
    }
    else {
      CCFile::Close(pvVar1);
      uVar3 = 1;
    }
  }
  return uVar3;
}


