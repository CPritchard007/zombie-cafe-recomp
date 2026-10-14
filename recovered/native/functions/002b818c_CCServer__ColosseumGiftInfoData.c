/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b818c CCServer::ColosseumGiftInfoData */

/* CCServer::ColosseumGiftInfoData(void*, char const*, void (*)(void*, unsigned char const*,
   unsigned int), void (*)(void*), void*) */

undefined8
CCServer::ColosseumGiftInfoData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_002b8208 + 0x2b8198);
  L_PrintLog(pcVar4,(char *)(DAT_002b820c + 0x2b819e));
  if (*(int *)((int)param_1 + 0x448) == 0) {
    L_PrintLog((char *)(DAT_002b8214 + 0x2b81c4),(char *)(DAT_002b8218 + 0x2b81c6));
    *(void **)((int)param_1 + 0x458) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x450) = param_3;
    pcVar3 = (char *)(DAT_002b821c + 0x2b81e2);
    *(_func_void_void_ptr **)((int)param_1 + DAT_002b8220) = param_4;
    L_PrintLog(pcVar3,param_2);
    uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x3e,param_1);
    iVar1 = DAT_002b8224;
    *(undefined4 *)((int)param_1 + 0x448) = uVar2;
    L_PrintLog(pcVar4,(char *)(iVar1 + 0x2b8200));
    uVar2 = *(undefined4 *)((int)param_1 + 0x448);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002b8210 + 0x2b81b6));
    uVar2 = 0;
  }
  return CONCAT44(param_3,uVar2);
}


