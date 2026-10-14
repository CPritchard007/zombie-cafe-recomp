/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b83c javaObjectWrapper::~javaObjectWrapper */

/* javaObjectWrapper::~javaObjectWrapper() */

undefined8 __thiscall javaObjectWrapper::~javaObjectWrapper(javaObjectWrapper *this)

{
  int *local_14 [2];
  
  if (*(int *)(this + 4) != 0) {
    local_14[0] = (int *)0x0;
    _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,local_14);
    (**(code **)(*local_14[0] + 0x58))(local_14[0],*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return CONCAT44(this,this);
}


