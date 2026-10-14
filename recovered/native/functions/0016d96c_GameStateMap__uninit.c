/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016d96c GameStateMap::uninit */

/* GameStateMap::uninit() */

undefined8 GameStateMap::uninit(void)

{
  GameStateMap *in_r0;
  undefined4 in_r1;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  FontManager *pFVar6;
  int *local_218;
  int *local_214;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  int *local_200;
  TrueTypeTextElement *local_1f8;
  int *local_1f4;
  String aSStack_1e8 [28];
  int *local_1cc;
  MapCafe aMStack_1c4 [48];
  String aSStack_194 [36];
  MapCafe aMStack_170 [48];
  String aSStack_140 [36];
  char acStack_11c [256];
  int local_1c;
  undefined4 uStack_18;
  
  iVar4 = DAT_0016dc98 + 0x16d978;
  local_1c = **(int **)(iVar4 + DAT_0016dc9c);
  iVar1 = *(int *)(*(int *)(in_r0 + 0xc) + DAT_0016dca4);
  *(undefined4 *)(iVar1 + DAT_0016dca0) = 0;
  *(undefined4 *)(iVar1 + 0x788) = 0;
  *(undefined4 *)(iVar1 + 0x778) = 0;
  *(undefined4 *)(iVar1 + DAT_0016dca8) = 0;
  uStack_18 = in_r1;
  if (*(int **)(in_r0 + 0x3d0) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x3d0) + 4))();
  }
  if (*(int **)(in_r0 + 0x3d4) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x3d4) + 4))();
  }
  if (*(int **)(in_r0 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x430) + 4))();
  }
  if (*(int **)(in_r0 + DAT_0016dcac) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + DAT_0016dcac) + 4))();
  }
  if (*(int **)(in_r0 + 0x438) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x438) + 4))();
  }
  if (*(int **)(in_r0 + DAT_0016dcb0) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + DAT_0016dcb0) + 4))();
  }
  if (*(int **)(in_r0 + DAT_0016dcb4) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + DAT_0016dcb4) + 4))();
  }
  if (*(int **)(in_r0 + DAT_0016dcb8) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + DAT_0016dcb8) + 4))();
  }
  if (*(int **)(in_r0 + DAT_0016dcbc) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + DAT_0016dcbc) + 4))();
  }
  if (*(int **)(in_r0 + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x440) + 4))();
  }
  MapCafe::MapCafe((MapCafe *)&local_218);
  for (iVar1 = 0; iVar1 < *(int *)(in_r0 + 0xd4) + 1; iVar1 = iVar1 + 1) {
    MapCafe::MapCafe(aMStack_1c4,(MapCafe *)(*(int *)(in_r0 + 0xd8) + iVar1 * 0x54));
    MapCafe::operator=((MapCafe *)&local_218,aMStack_1c4);
    String::~String(aSStack_194);
    if (local_214 != (int *)0x0) {
      if ((int *)local_214[0x19] != (int *)0x0) {
        (**(code **)(*(int *)local_214[0x19] + 4))();
      }
      if (local_214 != (int *)0x0) {
        (**(code **)(*local_214 + 4))();
      }
      if ((int *)local_20c[0x18] != (int *)0x0) {
        (**(code **)(*(int *)local_20c[0x18] + 4))();
      }
      if (local_20c != (int *)0x0) {
        (**(code **)(*local_20c + 4))();
      }
      if ((int *)local_208[0x19] != (int *)0x0) {
        (**(code **)(*(int *)local_208[0x19] + 4))();
      }
      if (local_208 != (int *)0x0) {
        (**(code **)(*local_208 + 4))();
      }
      if (local_204 != (int *)0x0) {
        (**(code **)(*local_204 + 4))();
      }
      if (local_200 != (int *)0x0) {
        (**(code **)(*local_200 + 4))();
      }
      if (local_210 != (int *)0x0) {
        if ((int *)local_210[0x19] != (int *)0x0) {
          (**(code **)(*(int *)local_210[0x19] + 4))();
        }
        if (local_210 != (int *)0x0) {
          (**(code **)(*local_210 + 4))();
        }
      }
    }
    if ((int *)local_218[0x18] != (int *)0x0) {
      (**(code **)(*(int *)local_218[0x18] + 4))();
    }
    if (local_218 != (int *)0x0) {
      (**(code **)(*local_218 + 4))();
    }
    if (local_1f8 != (TrueTypeTextElement *)0x0) {
      L_PrintLog((char *)(DAT_0016dcc0 + 0x16db06),(char *)(DAT_0016dcc4 + 0x16db08));
      piVar2 = *(int **)(iVar4 + DAT_0016dcc8);
      Vector<TrueTypeTextElement*>::removeElement((Vector<TrueTypeTextElement*> *)*piVar2,local_1f8)
      ;
      if (local_1f8 != (TrueTypeTextElement *)0x0) {
        (**(code **)(*(int *)local_1f8 + 4))();
      }
      local_1f8 = (TrueTypeTextElement *)0x0;
      sprintf(acStack_11c,(char *)(DAT_0016dccc + 0x16db32),*(int *)(*piVar2 + 4) + 1);
      L_PrintLog((char *)(DAT_0016dcd0 + 0x16db3e),acStack_11c);
    }
    if (local_1f4 != (int *)0x0) {
      (**(code **)(*local_1f4 + 4))();
    }
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_r0 + 200) + 1; iVar1 = iVar1 + 1) {
    MapCafe::MapCafe(aMStack_170,(MapCafe *)(*(int *)(in_r0 + 0xcc) + iVar1 * 0x54));
    MapCafe::operator=((MapCafe *)&local_218,aMStack_170);
    String::~String(aSStack_140);
    if ((int *)local_218[0x18] != (int *)0x0) {
      (**(code **)(*(int *)local_218[0x18] + 4))();
    }
    if (local_218 != (int *)0x0) {
      (**(code **)(*local_218 + 4))();
    }
    if (local_1f8 != (TrueTypeTextElement *)0x0) {
      L_PrintLog((char *)(DAT_0016dcd4 + 0x16dba4),(char *)(DAT_0016dcd8 + 0x16dba6));
      piVar2 = *(int **)(iVar4 + DAT_0016dcc8);
      Vector<TrueTypeTextElement*>::removeElement((Vector<TrueTypeTextElement*> *)*piVar2,local_1f8)
      ;
      if (local_1f8 != (TrueTypeTextElement *)0x0) {
        (**(code **)(*(int *)local_1f8 + 4))();
      }
      local_1f8 = (TrueTypeTextElement *)0x0;
      sprintf(acStack_11c,(char *)(DAT_0016dcdc + 0x16dbd0),*(int *)(*piVar2 + 4) + 1);
      L_PrintLog((char *)(DAT_0016dce0 + 0x16dbdc),acStack_11c);
    }
    if (local_1f4 != (int *)0x0) {
      (**(code **)(*local_1f4 + 4))();
    }
    if (local_1cc != (int *)0x0) {
      (**(code **)(*local_1cc + 4))();
    }
  }
  if (*(int **)(*(int *)(in_r0 + 0x28) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(in_r0 + 0x28) + 0x60) + 4))();
  }
  if (*(int **)(in_r0 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x28) + 4))();
  }
  if (*(int **)(*(int *)(in_r0 + 0x2c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(in_r0 + 0x2c) + 0x60) + 4))();
  }
  if (*(int **)(in_r0 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x2c) + 4))();
  }
  if (*(int **)(*(int *)(in_r0 + 0x38) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(in_r0 + 0x38) + 0x60) + 4))();
  }
  if (*(int **)(in_r0 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x38) + 4))();
  }
  if (*(int **)(in_r0 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x80) + 4))();
  }
  if (*(int **)(in_r0 + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x84) + 4))();
  }
  if (*(int **)(in_r0 + 0x448) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x448) + 4))();
  }
  if (*(int **)(in_r0 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x98) + 4))();
  }
  for (iVar1 = 0; iVar1 < *(int *)(in_r0 + 0x1c) + 1; iVar1 = iVar1 + 1) {
    piVar2 = *(int **)(iVar1 * 4 + *(int *)(in_r0 + 0x20));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  iVar1 = 0;
  do {
    if (*(int **)(in_r0 + iVar1 + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(in_r0 + iVar1 + 0x54) + 4))();
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x28);
  if (*(int **)(*(int *)(in_r0 + 0x24) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(in_r0 + 0x24) + 0x60) + 4))();
  }
  if (*(int **)(in_r0 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x24) + 4))();
  }
  if (*(int **)(in_r0 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x14) + 4))();
  }
  if (*(int **)(*(int *)(in_r0 + 0xdc) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(in_r0 + 0xdc) + 0x60) + 4))();
  }
  if (*(int **)(in_r0 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0xdc) + 4))();
  }
  if (*(int *)(in_r0 + 0xfc) != 0) {
    L_PrintLog((char *)(DAT_0016de88 + 0x16dd6e),(char *)(DAT_0016de8c + 0x16dd70));
    piVar5 = *(int **)(iVar4 + DAT_0016de90);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar5,*(TrueTypeTextElement **)(in_r0 + 0xfc));
    piVar2 = *(int **)(in_r0 + 0xfc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(in_r0 + 0xfc) = 0;
    sprintf(acStack_11c,(char *)(DAT_0016de94 + 0x16dda2),*(int *)(*piVar5 + 4) + 1);
    L_PrintLog((char *)(DAT_0016de98 + 0x16ddae),acStack_11c);
  }
  puVar3 = *(undefined4 **)(iVar4 + DAT_0016de9c);
  pFVar6 = (FontManager *)*puVar3;
  iVar1 = SmDev();
  FontManager::delFont(pFVar6,*(int *)(DAT_0016dea0 + iVar1 * 4 + 0x16de2e));
  pFVar6 = (FontManager *)*puVar3;
  iVar1 = SmDev();
  FontManager::delFont(pFVar6,*(int *)(DAT_0016dea4 + iVar1 * 4 + 0x16dddc));
  if (*(int **)(in_r0 + 0x100) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x100) + 4))();
  }
  delColosseum(in_r0);
  delEventRaidShop(in_r0);
  delEventRaid2Shop(in_r0);
  delEventRaid3Shop(in_r0);
  delAmpouleRaidShop(in_r0);
  delHeroShop(in_r0);
  delWeekRaidShop(in_r0);
  if (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_0016dea8) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(in_r0 + 0xc) + DAT_0016dea8),*(CImage ***)(in_r0 + 0x428))
    ;
  }
  if (*(PackedImage **)(*(int *)(in_r0 + 0xc) + 0x7f0) != (PackedImage *)0x0) {
    PackedImage::destroyImages
              (*(PackedImage **)(*(int *)(in_r0 + 0xc) + 0x7f0),*(CImage ***)(in_r0 + DAT_0016deac))
    ;
  }
  ZombieCafe::unloadMapImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(in_r0 + 0xc),true);
  String::~String(aSStack_1e8);
  if (local_1c != **(int **)(iVar4 + DAT_0016deb0)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(uStack_18,local_1c);
}


