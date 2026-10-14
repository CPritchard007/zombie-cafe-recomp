/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240be0 ZombieCafe::getFbId */

/* ZombieCafe::getFbId() */

undefined4 __thiscall ZombieCafe::getFbId(ZombieCafe *this)

{
  int iVar1;
  MALTAHoover *this_00;
  SServer *pSVar2;
  
  this_00 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar1 = DAT_00240c34;
  MALTAHoover::init(this_00,(char *)(DAT_00240c28 + 0x240c02),(char *)(DAT_00240c2c + 0x240c04),
                    (char *)(DAT_00240c30 + 0x240c00));
  memset(*(void **)(this + iVar1),0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getFBID(pSVar2,(char *)**(undefined4 **)(DAT_00240c38 + 0x240c1c));
  return *(undefined4 *)(this + iVar1);
}


