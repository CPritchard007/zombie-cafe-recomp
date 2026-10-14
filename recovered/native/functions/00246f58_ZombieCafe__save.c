/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00246f58 ZombieCafe::save */

/* ZombieCafe::save() */

undefined8 ZombieCafe::save(void)

{
  ZombieCafe *in_r0;
  OutputStream *pOVar1;
  undefined4 in_r1;
  char *pcVar2;
  char *pcVar3;
  ZombieCafe *pZStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(DAT_0024700c + 0x246f64);
  pcVar3 = (char *)(DAT_00247010 + 0x246f66);
  pZStack_18 = in_r0;
  uStack_14 = in_r1;
  L_PrintLog(pcVar2,pcVar3);
  L_PrintLog((char *)(DAT_00247014 + 0x246f74),(char *)(DAT_00247018 + 0x246f76));
  L_PrintLog(pcVar2,pcVar3);
  String::String((String *)&pZStack_18,(char *)(DAT_0024701c + 0x246f88));
  pOVar1 = (OutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar1,(String *)&pZStack_18);
  String::~String((String *)&pZStack_18);
  if (pOVar1 == (OutputStream *)0x0) {
    L_PrintLog((char *)(DAT_00247028 + 0x246fd0),(char *)(DAT_0024702c + 0x246fd2));
  }
  else {
    L_PrintLog((char *)(DAT_00247020 + 0x246faa),(char *)(DAT_00247024 + 0x246fac));
    serialize(in_r0,pOVar1);
    (**(code **)(*(int *)pOVar1 + 8))(pOVar1);
    (**(code **)(*(int *)pOVar1 + 4))(pOVar1);
  }
  pcVar2 = (char *)(DAT_00247030 + 0x246fdc);
  pcVar3 = (char *)(DAT_00247034 + 0x246fde);
  L_PrintLog(pcVar2,pcVar3);
  L_PrintLog((char *)(DAT_00247038 + 0x246fec),(char *)(DAT_0024703c + 0x246fee));
  L_PrintLog(pcVar2,pcVar3);
  return CONCAT44(uStack_14,pZStack_18);
}


