/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e191c InviteContactList::setFinishedCallback */

/* InviteContactList::setFinishedCallback(void (*)(void*), void*) */

void __thiscall
InviteContactList::setFinishedCallback
          (InviteContactList *this,_func_void_void_ptr *param_1,void *param_2)

{
  *(_func_void_void_ptr **)(this + 0x9c) = param_1;
  *(void **)(this + 0xa0) = param_2;
  return;
}


