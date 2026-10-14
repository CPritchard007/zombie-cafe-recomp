/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206ec8 ProgressBarAttachment::ProgressBarAttachment */

/* ProgressBarAttachment::ProgressBarAttachment(long, long, Cafe*) */

ProgressBarAttachment * __thiscall
ProgressBarAttachment::ProgressBarAttachment
          (ProgressBarAttachment *this,long param_1,long param_2,Cafe *param_3)

{
  int iVar1;
  
  Furniture::Furniture
            ((Furniture *)this,
             *(FurnitureData **)(**(int **)(DAT_00206ef8 + 0x206ed6) * 4 + *(int *)(param_3 + 0x94))
            );
  iVar1 = DAT_00206efc;
  *(long *)(this + 100) = param_1;
  *(long *)(this + 0x68) = param_2;
  *(int *)this = *(int *)(iVar1 + 0x206eee) + 8;
  return this;
}


