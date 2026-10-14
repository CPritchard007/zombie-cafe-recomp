/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb78c GameStateChangeHard::L_changeHard_DownloadData_Success */

/* GameStateChangeHard::L_changeHard_DownloadData_Success(void*, char const*, unsigned char const*,
   unsigned int) */

void GameStateChangeHard::L_changeHard_DownloadData_Success
               (void *param_1,char *param_2,uchar *param_3,uint param_4)

{
  int iVar1;
  uchar *__dest;
  ByteArrayInputStream *this;
  undefined4 uVar2;
  char *pcVar3;
  ZombieCafe *this_00;
  
  pcVar3 = *(char **)(DAT_001cb854 + 0x1cb798);
  if (*pcVar3 != '\0') {
    iVar1 = CapcomApp::getInstance();
    this_00 = *(ZombieCafe **)(iVar1 + 4);
    if (this_00 == (ZombieCafe *)0x0) {
      *pcVar3 = '\0';
    }
    else {
      L_PrintLog((char *)(DAT_001cb858 + 0x1cb7ba),(char *)(DAT_001cb85c + 0x1cb7bc));
      __dest = (uchar *)operator_new__(param_4);
      memcpy(__dest,param_3,param_4);
      this = (ByteArrayInputStream *)operator_new(0x18);
      ByteArrayInputStream::ByteArrayInputStream(this,__dest,param_4,false);
      iVar1 = ZombieCafe::makeForUserData(this_00,(InputStream *)this,true,0x38,-1);
      if (iVar1 == 0) {
        if (this != (ByteArrayInputStream *)0x0) {
          (**(code **)(*(int *)this + 0xc))(this);
          (**(code **)(*(int *)this + 4))(this);
        }
        *pcVar3 = '\0';
        uVar2 = 3;
      }
      else {
        if (this != (ByteArrayInputStream *)0x0) {
          (**(code **)(*(int *)this + 0xc))(this);
          (**(code **)(*(int *)this + 4))(this);
        }
        *pcVar3 = '\x01';
        uVar2 = 2;
        **(int **)(DAT_001cb860 + 0x1cb83a) = iVar1;
      }
      *(undefined4 *)((int)param_1 + 0xcc) = uVar2;
    }
  }
  return;
}


