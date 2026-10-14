/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002399a4 ZombieCafe::loadMusic */

/* ZombieCafe::loadMusic(int, int) */

longlong ZombieCafe::loadMusic(int param_1,int param_2)

{
  char *__ptr;
  int in_r2;
  StringUtil aSStack_18 [8];
  
  StringUtil::getEncodingString(aSStack_18,'\x01');
  __ptr = (char *)String::getBytes((String *)(in_r2 * 8 + *(int *)(DAT_002399f8 + 0x2399be)),
                                   aSStack_18,0);
  String::~String((String *)aSStack_18);
  CCSound::LoadMusicTrack(__ptr,param_2);
  free(__ptr);
  *(undefined1 *)(*(int *)(param_1 + 0x408) + param_2) = 1;
  return (ulonglong)(uint)param_2 << 0x20;
}


