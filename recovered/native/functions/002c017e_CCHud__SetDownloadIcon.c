/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c017e CCHud::SetDownloadIcon */

/* CCHud::SetDownloadIcon(void*, unsigned int) */

void CCHud::SetDownloadIcon(void *param_1,uint param_2)

{
  *(uint *)((int)param_1 + 8) = param_2;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  return;
}


