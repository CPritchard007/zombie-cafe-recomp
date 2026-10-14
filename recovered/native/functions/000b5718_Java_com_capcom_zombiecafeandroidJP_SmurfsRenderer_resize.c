/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5718 Java_com_capcom_zombiecafeandroidJP_SmurfsRenderer_resize */

undefined8
Java_com_capcom_zombiecafeandroidJP_SmurfsRenderer_resize
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  __android_log_print(4,DAT_000b5738 + 0xb5726,DAT_000b573c + 0xb5728,param_3);
  do {
    iVar1 = glGetError();
  } while (iVar1 != 0);
  return CONCAT44(param_2,param_4);
}


