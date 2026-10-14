/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bdfec CCTextRenderer::AddWordWrappedText */

/* CCTextRenderer::AddWordWrappedText(void*, char const*, ccMat2x3 const*, unsigned int, float,
   float, unsigned char, bool) */

char * CCTextRenderer::AddWordWrappedText
                 (void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4,float param_5,
                 float param_6,uchar param_7,bool param_8)

{
  if (param_2 != (char *)0x0) {
    param_2 = (char *)dispText(param_1);
  }
  return param_2;
}


