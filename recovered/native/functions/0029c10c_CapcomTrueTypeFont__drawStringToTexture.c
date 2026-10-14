/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c10c CapcomTrueTypeFont::drawStringToTexture */

/* CapcomTrueTypeFont::drawStringToTexture(String, int, int, bool, bool, int, int, int*, int*, int*,
   int*) */

CFTexture *
CapcomTrueTypeFont::drawStringToTexture
          (float param_1,CFTexture *param_2,int param_3,String *param_4,int param_5,int param_6,
          bool param_7,bool param_8,int param_9,int param_10)

{
  char *pcVar1;
  javaObjectWrapper *this;
  ccTexture2D *__ptr;
  CFTexture *pCVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  CapcomTrueTypeFontRef *this_00;
  undefined8 uVar6;
  float extraout_s2;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  CFTexture aCStack_3c [8];
  CFTexture aCStack_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  
  this_00 = *(CapcomTrueTypeFontRef **)(param_3 + 4);
  if ((this_00 == (CapcomTrueTypeFontRef *)0x0) || (*(int *)this_00 == 0)) {
    __android_log_print(6,DAT_0029c358 + 0x29c140,DAT_0029c35c + 0x29c142);
    pCVar2 = (CFTexture *)(DAT_0029c360 + 0x29c14a);
  }
  else {
    CapcomTrueTypeFontRef::setSize(this_00,param_1);
    uVar6 = CapcomTrueTypeFontRef::setColor(this_00,(long *)(*(int *)(param_3 + 0x15c) + 4));
    iVar5 = *(int *)(param_3 + 0x15c);
    if (*(char *)(iVar5 + 0x18) != '\0') {
      iVar4 = __fixsfsi(*(undefined4 *)(iVar5 + 0x20));
      uVar6 = CapcomTrueTypeFontRef::setEdge(this_00,iVar4,(long *)(iVar5 + 0x1c));
    }
    iVar5 = *(int *)(param_3 + 0x15c);
    if (*(char *)(iVar5 + 8) != '\0') {
      iVar4 = *(int *)(iVar5 + 0x10);
      plVar3 = *(long **)(iVar5 + 0x14);
      __floatsisf(iVar4 >> 0x10);
      uVar6 = __floatsisf((int)(short)iVar4);
      uVar6 = CapcomTrueTypeFontRef::setShadow
                        (this_00,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2,plVar3);
    }
    CapcomTrueTypeFontRef::setPadding(this_00,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    local_4c = 0;
    local_48 = 0;
    pcVar1 = (char *)String::getBytes(param_4);
    this = (javaObjectWrapper *)
           CapcomTrueTypeFontRef::drawString
                     (this_00,pcVar1,param_5,param_6,param_7,param_8,param_9,param_10,&local_4c,
                      &local_48);
    if (this == (javaObjectWrapper *)0x0) {
      __android_log_print(6,DAT_0029c364 + 0x29c1e0,DAT_0029c368 + 0x29c1e2);
      pCVar2 = (CFTexture *)(DAT_0029c36c + 0x29c1ea);
    }
    else {
      local_44 = 0;
      _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_40);
      iVar5 = AndroidBitmap_getInfo(local_40,*(undefined4 *)(this + 4),&local_2c);
      if (iVar5 == 0) {
        if (local_20 == 1) {
          iVar5 = AndroidBitmap_lockPixels(local_40,*(undefined4 *)(this + 4),&local_44);
          if (iVar5 == 0) {
            CFTexture::CFTexture(aCStack_3c);
            __ptr = (ccTexture2D *)malloc(0x2c);
            CCTexture2D::Init(__ptr);
            iVar5 = CCTexture2D::LoadFromData(__ptr,1,local_2c,local_28,0,local_44,0);
            if (iVar5 == 0) {
              free(__ptr);
              __android_log_print(6,DAT_0029c394 + 0x29c2e6,DAT_0029c398 + 0x29c2e8);
              CFTexture::releaseRef(aCStack_3c);
              CFTexture::init(aCStack_3c,(CFTexture *)(DAT_0029c39c + 0x29c2f8));
            }
            else {
              *(int *)(__ptr + 0x14) = local_4c;
              *(int *)(__ptr + 0x18) = local_48;
              CFTexture::CFTexture(aCStack_34,__ptr);
              CFTexture::releaseRef(aCStack_3c);
              CFTexture::init(aCStack_3c,aCStack_34);
              CFTexture::~CFTexture(aCStack_34);
            }
            AndroidBitmap_unlockPixels(local_40,*(undefined4 *)(this + 4));
            javaObjectWrapper::~javaObjectWrapper(this);
            operator_delete(this);
            CFTexture::CFTexture(param_2,aCStack_3c);
            CFTexture::~CFTexture(aCStack_3c);
            return param_2;
          }
          __android_log_print(6,DAT_0029c388 + 0x29c262,DAT_0029c38c + 0x29c264);
          javaObjectWrapper::~javaObjectWrapper(this);
          operator_delete(this);
          pCVar2 = (CFTexture *)(DAT_0029c390 + 0x29c278);
        }
        else {
          __android_log_print(6,DAT_0029c37c + 0x29c234,DAT_0029c380 + 0x29c236);
          javaObjectWrapper::~javaObjectWrapper(this);
          operator_delete(this);
          pCVar2 = (CFTexture *)(DAT_0029c384 + 0x29c24a);
        }
      }
      else {
        __android_log_print(6,DAT_0029c370 + 0x29c20e,DAT_0029c374 + 0x29c210);
        javaObjectWrapper::~javaObjectWrapper(this);
        operator_delete(this);
        pCVar2 = (CFTexture *)(DAT_0029c378 + 0x29c224);
      }
    }
  }
  CFTexture::CFTexture(param_2,pCVar2);
  return param_2;
}


