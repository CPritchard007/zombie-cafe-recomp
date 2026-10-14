/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b34b4 my_error_exit */

/* my_error_exit(jpeg_common_struct*) */

void my_error_exit(jpeg_common_struct *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  (**(code **)(iVar1 + 8))();
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(iVar1 + 0x84),1);
}


