/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247b24 ZombieCafe::putZombieInMeetlocker */

/* ZombieCafe::putZombieInMeetlocker(Character*, PullMenuElement*) */

void __thiscall
ZombieCafe::putZombieInMeetlocker(ZombieCafe *this,Character *param_1,PullMenuElement *param_2)

{
  int iVar1;
  
  Vector<Character*>::addElement((Vector<Character*> *)(this + 0x5a0),param_1);
  iVar1 = updateZukanUnlock(this,(uint)*(ushort *)(*(int *)param_1 + DAT_00247b58),'\x03');
  if ((iVar1 != 0) && (param_2 != (PullMenuElement *)0x0)) {
    PullMenuElement::setButtonNewIndicator(param_2,6,true);
  }
  return;
}


