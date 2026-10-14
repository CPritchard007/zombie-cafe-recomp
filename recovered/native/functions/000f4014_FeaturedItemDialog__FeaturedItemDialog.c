/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f4014 FeaturedItemDialog::FeaturedItemDialog */

/* FeaturedItemDialog::FeaturedItemDialog(FurnitureData*) */

FeaturedItemDialog * __thiscall
FeaturedItemDialog::FeaturedItemDialog(FeaturedItemDialog *this,FurnitureData *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  pcVar1 = (char *)(DAT_000f4048 + 0xf402c);
  pcVar2 = (char *)(DAT_000f404c + 0xf402e);
  *(int *)this = *(int *)(DAT_000f4044 + 0xf4028) + 8;
  L_PrintLog(pcVar1,pcVar2);
  return this;
}


