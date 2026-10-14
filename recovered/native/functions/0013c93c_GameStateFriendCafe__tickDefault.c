/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c93c GameStateFriendCafe::tickDefault */

/* GameStateFriendCafe::tickDefault(long) */

ulonglong GameStateFriendCafe::tickDefault(long param_1)

{
  ZombieCafe ZVar1;
  int iVar2;
  CafeObject *pCVar3;
  CafeObject *pCVar4;
  ZombieCafe *this;
  float fVar5;
  
  this = *(ZombieCafe **)(param_1 + 0xc);
  ZVar1 = this[DAT_0013ca5c];
  if ((ZVar1 == (ZombieCafe)0x0) && (iVar2 = ZombieCafe::pressEvent(this), iVar2 != 0)) {
    screenToWorldCoords((GameStateFriendCafe *)param_1,*(long *)(this + DAT_0013ca60));
    pCVar3 = (CafeObject *)Cafe::pickCafeObject(*(long *)(param_1 + 0x34));
    if ((pCVar3 != (CafeObject *)0x0) &&
       (iVar2 = (**(code **)(*(int *)pCVar3 + 0x14))(pCVar3), iVar2 == 3)) {
      pCVar4 = (CafeObject *)Cafe::getSelectedObject(*(Cafe **)(param_1 + 0x34));
      if (pCVar4 == pCVar3) {
        Cafe::select(*(Cafe **)(param_1 + 0x34),(CafeObject *)0x0);
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0x1a4));
      }
      else {
        Cafe::select(*(Cafe **)(param_1 + 0x34),pCVar3);
        *(CafeObject **)(param_1 + 0x1a0) = pCVar3;
        CharacterCommandBar::open(*(CharacterCommandBar **)(param_1 + 0x1a4));
        CharacterCommandBar::resetButtons();
        CharacterCommandBar::setCharacter
                  (*(CharacterCommandBar **)(param_1 + 0x1a4),
                   *(CharacterInstance **)(param_1 + 0x1a0));
        iVar2 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x20))();
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0xc);
          if (*(char *)(**(int **)(*(int *)(param_1 + 0x1a0) + 0x8c) + DAT_0013ca68) == '\0') {
            fVar5 = (float)CapcomMath::random(8);
          }
          else {
            fVar5 = (float)CapcomMath::random(5);
          }
          ZombieCafe::playEffect(iVar2,fVar5);
          CharacterCommandBar::addInfoButton
                    (*(CharacterCommandBar **)(param_1 + 0x1a4),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_0013ca6c + 0x13ca12),
                     (void *)param_1);
        }
        else if (iVar2 == 2) {
          CharacterInstance::groan(*(CharacterInstance **)(param_1 + 0x1a0));
          CharacterCommandBar::addInfoButton
                    (*(CharacterCommandBar **)(param_1 + 0x1a4),
                     *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_0013ca64 + 0x13c9cc),
                     (void *)param_1);
          CharacterCommandBar::layout(*(CharacterCommandBar **)(param_1 + 0x1a4));
        }
      }
      *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0013ca5c) = 1;
    }
  }
  else if ((*(int *)(param_1 + 0x1a0) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x1a4) + 0xb8) - 1)
          ) {
    Cafe::select(*(Cafe **)(param_1 + 0x34),(CafeObject *)0x0);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  return (ulonglong)CONCAT14(ZVar1,param_1);
}


