/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c9690 GatyaEftCharacterInstance::GatyaEftCharacterInstance */

/* GatyaEftCharacterInstance::GatyaEftCharacterInstance(Character*, CFPathFinder*, float, float) */

GatyaEftCharacterInstance * __thiscall
GatyaEftCharacterInstance::GatyaEftCharacterInstance
          (GatyaEftCharacterInstance *this,Character *param_1,CFPathFinder *param_2,float param_3,
          float param_4)

{
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  
  CharacterInstance::CharacterInstance((CharacterInstance *)this,param_1,param_2);
  *(int *)this = *(int *)(DAT_000c96d0 + 0xc96a4) + 8;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xf0) = in_stack_00000000;
  *(undefined4 *)(this + 0xec) = in_r3;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  return this;
}


