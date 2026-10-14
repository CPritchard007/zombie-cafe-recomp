/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6b7c L_GetGiftDataSuccessSub */

/* L_GetGiftDataSuccessSub(void*, unsigned char const*, unsigned int, bool) */

code * L_GetGiftDataSuccessSub(void *param_1,uchar *param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  
  *(undefined4 *)((int)param_1 + 0x360) = 0;
  if ((param_2 == (uchar *)0x0) || (*param_2 == '<')) {
    pcVar1 = *(code **)((int)param_1 + 0x36c);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(undefined4 *)((int)param_1 + 0x370),1);
      pcVar1 = (code *)0x0;
    }
  }
  else {
    pcVar1 = (code *)FUN_002b4178(param_1,param_2,param_4);
  }
  return pcVar1;
}


