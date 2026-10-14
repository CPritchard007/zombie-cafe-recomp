/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2b60 CCTexture2D::MaxTextureSize */

/* CCTexture2D::MaxTextureSize() */

undefined8 CCTexture2D::MaxTextureSize(void)

{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 local_c [3];
  
  local_c[0] = in_r1;
  glGetIntegerv(DAT_002b2b70,local_c);
  return CONCAT44(in_r0,local_c[0]);
}


