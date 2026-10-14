/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae754 CCGFX::LinkProgram */

/* CCGFX::LinkProgram(unsigned int) */

undefined8 __thiscall CCGFX::LinkProgram(CCGFX *this,uint param_1)

{
  uint local_c;
  
  local_c = param_1;
  glLinkProgram();
  glGetProgramiv(this,DAT_002ae770,&local_c);
  return CONCAT44(this,(uint)(local_c != 0));
}


