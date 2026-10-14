/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299086 CapcomApp::updateOrientation */

/* CapcomApp::updateOrientation(unsigned char) */

void CapcomApp::updateOrientation(uchar param_1)

{
  char cVar1;
  char in_r1;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 != '\0') {
    in_r1 = cVar1;
  }
  forceOrientation((uint)param_1,(int)in_r1);
  return;
}


