/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022bce4 Store::setCurrentTab */

/* Store::setCurrentTab(unsigned char) */

void __thiscall Store::setCurrentTab(Store *this,uchar param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  ZombieCafe *pZVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  Store *pSVar14;
  int iVar15;
  
  uVar6 = (uint)param_1;
  iVar13 = DAT_0022bd60 + 0x22bcf0;
  pSVar14 = this + 0xbc;
  if ((byte)*pSVar14 != uVar6) {
    unsetTab();
    iVar11 = 0;
    this[100] = (Store)0x0;
    *(undefined4 *)(this + 0xc4) = 0;
    *(undefined1 *)(*(int *)(this + (uVar6 + 0x22) * 4 + 4) + 0x87) = 1;
    uVar8 = DAT_0022bd64;
    *pSVar14 = (Store)param_1;
    *(undefined4 *)(this + 0xd8) = uVar8;
    piVar3 = *(int **)(this + 0xb0);
    (**(code **)(*piVar3 + 0x14))(piVar3,0,piVar3[2]);
    pvVar4 = operator_new(0x28);
    iVar10 = DAT_0022bd68;
    *(undefined4 *)((int)pvVar4 + 8) = 0;
    *(undefined4 *)((int)pvVar4 + 4) = 0;
    *(undefined1 *)((int)pvVar4 + 0x18) = 0;
    uVar8 = *(undefined4 *)(iVar13 + iVar10);
    *(void **)((int)pvVar4 + 0xc) = pvVar4;
    *(undefined4 *)((int)pvVar4 + 0x14) = 0;
    *(undefined4 *)((int)pvVar4 + 0x1c) = uVar8;
    *(undefined4 *)((int)pvVar4 + 0x10) = 0;
    *(void **)(this + 0xcc) = pvVar4;
    if (uVar6 == 0) {
      for (iVar10 = 0; iVar11 = ZombieCafe::getFeaturedItemCount(*(ZombieCafe **)(this + 0x68)),
          iVar10 < iVar11; iVar10 = iVar10 + 1) {
        iVar12 = *(int *)(this + 0x74);
        iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10);
        if (*(int *)(*(int *)(iVar11 * 4 + iVar12) + 0x24) == DAT_0022c0bc) {
LAB_0022be34:
          iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10);
          if ((((((((((((*(int *)(*(int *)(*(int *)(this + 0x74) + iVar11 * 4) + 0x24) != 0x8a) ||
                       (*(GameStateCafe **)(this + 0x6c) !=
                        *(GameStateCafe **)(*(int *)(this + 0x68) + 8))) ||
                      (iVar12 = GameStateCafe::getSlotMachineCount(*(GameStateCafe **)(this + 0x6c))
                      , iVar12 == 0)) &&
                     (((*(int *)(*(int *)(*(int *)(this + 0x74) + iVar11 * 4) + 0x24) !=
                        DAT_0022c0c0 ||
                       (*(GameStateCafe **)(this + 0x6c) !=
                        *(GameStateCafe **)(*(int *)(this + 0x68) + 8))) ||
                      (iVar11 = GameStateCafe::getMokubaCount(*(GameStateCafe **)(this + 0x6c)),
                      iVar11 == 0)))) &&
                    (((iVar11 = DAT_0022c0c4, pZVar5 = *(ZombieCafe **)(this + 0x68),
                      pZVar5[DAT_0022c0c4] == (ZombieCafe)0x0 && (pZVar5[0x9e0] == (ZombieCafe)0x0))
                     || (iVar15 = *(int *)(this + 0x74),
                        iVar12 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                        *(int *)(*(int *)(iVar12 * 4 + iVar15) + 0x24) != DAT_0022c0c8)))) &&
                   (((iVar12 = DAT_0022c0cc, pZVar5 = *(ZombieCafe **)(this + 0x68),
                     pZVar5[DAT_0022c0cc] == (ZombieCafe)0x0 &&
                     (pZVar5[DAT_0022c0d0] == (ZombieCafe)0x0)) ||
                    (iVar7 = *(int *)(this + 0x74),
                    iVar15 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                    *(int *)(*(int *)(iVar15 * 4 + iVar7) + 0x24) != 0x11e)))) &&
                  (((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[DAT_0022c0d4] == (ZombieCafe)0x0
                    && (pZVar5[DAT_0022c0d8] == (ZombieCafe)0x0)) ||
                   (iVar7 = *(int *)(this + 0x74),
                   iVar15 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                   *(int *)(*(int *)(iVar15 * 4 + iVar7) + 0x24) != 0x13e)))) &&
                 (((((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[iVar11] != (ZombieCafe)0x0 ||
                     (pZVar5[0x9e0] != (ZombieCafe)0x0)) ||
                    (iVar7 = *(int *)(this + 0x74),
                    iVar15 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                    *(int *)(*(int *)(iVar15 * 4 + iVar7) + 0x24) != 0x13e)) &&
                   (((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[iVar12] != (ZombieCafe)0x0 ||
                     (pZVar5[DAT_0022c0d0] != (ZombieCafe)0x0)) ||
                    (iVar7 = *(int *)(this + 0x74),
                    iVar15 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                    *(int *)(*(int *)(iVar15 * 4 + iVar7) + 0x24) != DAT_0022c0dc)))) &&
                  ((((pZVar5 = *(ZombieCafe **)(this + 0x68),
                     pZVar5[DAT_0022c0e0] == (ZombieCafe)0x0 &&
                     (pZVar5[DAT_0022c0e4] == (ZombieCafe)0x0)) ||
                    (iVar7 = *(int *)(this + 0x74),
                    iVar15 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                    *(int *)(*(int *)(iVar15 * 4 + iVar7) + 0x24) != DAT_0022c0dc)) &&
                   (((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[iVar11] != (ZombieCafe)0x0 ||
                     (pZVar5[0x9e0] != (ZombieCafe)0x0)) ||
                    (iVar15 = *(int *)(this + 0x74),
                    iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                    *(int *)(*(int *)(iVar11 * 4 + iVar15) + 0x24) != 0x1ca)))))))) &&
                ((((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[DAT_0022c0d4] != (ZombieCafe)0x0
                   || (pZVar5[DAT_0022c0d8] != (ZombieCafe)0x0)) ||
                  (iVar15 = *(int *)(this + 0x74),
                  iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                  *(int *)(*(int *)(iVar11 * 4 + iVar15) + 0x24) != 0x1ca)) &&
                 (((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[DAT_0022c0e8] == (ZombieCafe)0x0
                   && (pZVar5[DAT_0022c0ec] == (ZombieCafe)0x0)) ||
                  (iVar15 = *(int *)(this + 0x74),
                  iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                  *(int *)(*(int *)(iVar11 * 4 + iVar15) + 0x24) != 0x1ca)))))) &&
               (((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[iVar12] != (ZombieCafe)0x0 ||
                 (pZVar5[DAT_0022c0d0] != (ZombieCafe)0x0)) ||
                (iVar12 = *(int *)(this + 0x74), iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10)
                , *(int *)(*(int *)(iVar11 * 4 + iVar12) + 0x24) != DAT_0022c0f0)))) &&
              (((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[DAT_0022c0e0] != (ZombieCafe)0x0 ||
                (pZVar5[DAT_0022c0e4] != (ZombieCafe)0x0)) ||
               (iVar12 = *(int *)(this + 0x74), iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
               *(int *)(*(int *)(iVar11 * 4 + iVar12) + 0x24) != DAT_0022c0f0)))) &&
             ((((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[DAT_0022c0f4] == (ZombieCafe)0x0 &&
                (pZVar5[DAT_0022c0f8] == (ZombieCafe)0x0)) ||
               (iVar12 = *(int *)(this + 0x74), iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
               *(int *)(*(int *)(iVar11 * 4 + iVar12) + 0x24) != DAT_0022c0f0)) &&
              ((((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[DAT_0022c0fc] == (ZombieCafe)0x0 &&
                 (pZVar5[DAT_0022c100] == (ZombieCafe)0x0)) ||
                (iVar12 = *(int *)(this + 0x74), iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10)
                , *(int *)(*(int *)(iVar11 * 4 + iVar12) + 0x24) !=
                  **(int **)(iVar13 + DAT_0022c104))) &&
               ((((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[0x9f0] == (ZombieCafe)0x0 &&
                  (pZVar5[DAT_0022c108] == (ZombieCafe)0x0)) ||
                 (iVar12 = *(int *)(this + 0x74),
                 iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                 *(int *)(*(int *)(iVar11 * 4 + iVar12) + 0x24) != 0x1e4)) &&
                (((pZVar5 = *(ZombieCafe **)(this + 0x68), pZVar5[DAT_0022c404] == (ZombieCafe)0x0
                  && (pZVar5[DAT_0022c408] == (ZombieCafe)0x0)) ||
                 (iVar12 = *(int *)(this + 0x74),
                 iVar11 = ZombieCafe::getFeaturedItem(pZVar5,iVar10),
                 *(int *)(*(int *)(iVar11 * 4 + iVar12) + 0x24) != 0x240)))))))))) {
            iVar12 = *(int *)(this + 0xcc);
            iVar15 = *(int *)(this + 0x74);
            iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10);
            uVar8 = *(undefined4 *)(iVar11 * 4 + iVar15);
            pvVar4 = operator_new(0xc);
            *(undefined4 *)((int)pvVar4 + 8) = 0;
            *(undefined4 *)((int)pvVar4 + 4) = 0;
            *(void **)(*(int *)(iVar12 + 0xc) + 8) = pvVar4;
            *(int *)(*(int *)(*(int *)(iVar12 + 0xc) + 8) + 4) = *(int *)(iVar12 + 0xc);
            puVar9 = *(undefined4 **)(*(int *)(iVar12 + 0xc) + 8);
            *(undefined4 **)(iVar12 + 0xc) = puVar9;
            *puVar9 = uVar8;
            *(int *)(iVar12 + 0x14) = *(int *)(iVar12 + 0x14) + 1;
          }
        }
        else {
          iVar12 = *(int *)(this + 0x74);
          iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10);
          if (*(char *)(*(int *)(iVar11 * 4 + iVar12) + 0x70) != '\0') {
            iVar12 = *(int *)(this + 0x74);
            iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10);
            if (*(char *)(*(int *)(iVar11 * 4 + iVar12) + 0x44) == '\f') {
              iVar12 = *(int *)(this + 0x74);
              iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10);
              if ((*(byte *)(*(int *)(iVar11 * 4 + iVar12) + 0x39) <=
                   *(byte *)(*(int *)(*(ZombieCafe **)(this + 0x68) + 0x7e8) + 0xa0)) ||
                 (iVar12 = *(int *)(this + 0x74),
                 iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10),
                 *(byte *)(*(int *)(iVar11 * 4 + iVar12) + 0x3a) <
                 *(byte *)(*(int *)(*(int *)(this + 0x68) + 0x7e8) + 0xa1))) {
                iVar12 = *(int *)(this + 0x74);
                iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10);
                if ((*(byte *)(*(int *)(iVar11 * 4 + iVar12) + 0x39) <
                     *(byte *)(*(int *)(*(ZombieCafe **)(this + 0x68) + 0x7e8) + 0xa0)) ||
                   (iVar12 = *(int *)(this + 0x74),
                   iVar11 = ZombieCafe::getFeaturedItem(*(ZombieCafe **)(this + 0x68),iVar10),
                   *(byte *)(*(int *)(iVar11 * 4 + iVar12) + 0x3a) <=
                   *(byte *)(*(int *)(*(int *)(this + 0x68) + 0x7e8) + 0xa1))) goto LAB_0022c14e;
              }
            }
            goto LAB_0022be34;
          }
        }
LAB_0022c14e:
      }
    }
    else {
      for (; iVar11 < *(short *)(this + 0x78); iVar11 = iVar11 + 1) {
        iVar12 = iVar11 * 4;
        iVar10 = *(int *)(*(int *)(this + 0x74) + iVar12);
        if (((((*(Store *)(iVar10 + 0x45) == *pSVar14) && (*(char *)(iVar10 + 0x70) != '\0')) &&
             ((*(char *)(iVar10 + 0x44) != '\f' ||
              ((iVar15 = *(int *)(*(int *)(this + 0x68) + 0x7e8),
               (uint)*(byte *)(iVar10 + 0x39) == *(byte *)(iVar15 + 0xa0) + 1 &&
               ((uint)*(byte *)(iVar10 + 0x3a) == *(byte *)(iVar15 + 0xa1) + 1)))))) &&
            ((*(int *)(iVar10 + 0x24) != 0x8a ||
             ((*(GameStateCafe **)(this + 0x6c) != *(GameStateCafe **)(*(int *)(this + 0x68) + 8) ||
              (iVar10 = GameStateCafe::getSlotMachineCount(*(GameStateCafe **)(this + 0x6c)),
              iVar10 == 0)))))) &&
           ((*(int *)(*(int *)(*(int *)(this + 0x74) + iVar12) + 0x24) != DAT_0022c40c ||
            ((*(GameStateCafe **)(this + 0x6c) != *(GameStateCafe **)(*(int *)(this + 0x68) + 8) ||
             (iVar10 = GameStateCafe::getMokubaCount(*(GameStateCafe **)(this + 0x6c)), iVar10 == 0)
             ))))) {
          iVar15 = *(int *)(this + 0x68);
          cVar1 = *(char *)(iVar15 + DAT_0022c410);
          iVar10 = *(int *)(this + 0x74);
          if (((((((cVar1 == '\0') && (*(char *)(iVar15 + 0x9e0) == '\0')) ||
                 (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != DAT_0022c414)) &&
                ((((cVar2 = *(char *)(iVar15 + DAT_0022c418), cVar2 == '\0' &&
                   (*(char *)(iVar15 + DAT_0022c41c) == '\0')) ||
                  (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x11e)) &&
                 (((*(char *)(iVar15 + DAT_0022c420) == '\0' &&
                   (*(char *)(iVar15 + DAT_0022c424) == '\0')) ||
                  (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x13e)))))) &&
               (((((cVar1 != '\0' || (*(char *)(iVar15 + 0x9e0) != '\0')) ||
                  (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x13e)) &&
                 (((cVar2 != '\0' || (*(char *)(iVar15 + DAT_0022c41c) != '\0')) ||
                  (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != DAT_0022c428)))) &&
                (((*(char *)(iVar15 + DAT_0022c42c) == '\0' &&
                  (*(char *)(iVar15 + DAT_0022c430) == '\0')) ||
                 (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != DAT_0022c428)))))) &&
              (((((((cVar1 != '\0' || (*(char *)(iVar15 + 0x9e0) != '\0')) ||
                   (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x1ca)) &&
                  (((*(char *)(iVar15 + DAT_0022c420) != '\0' ||
                    (*(char *)(iVar15 + DAT_0022c424) != '\0')) ||
                   (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x1ca)))) &&
                 (((*(char *)(iVar15 + DAT_0022c434) == '\0' &&
                   (*(char *)(iVar15 + DAT_0022c438) == '\0')) ||
                  (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x1ca)))) &&
                ((((cVar2 != '\0' || (*(char *)(iVar15 + DAT_0022c41c) != '\0')) ||
                  (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != DAT_0022c43c)) &&
                 ((((*(char *)(iVar15 + DAT_0022c42c) != '\0' ||
                    (*(char *)(iVar15 + DAT_0022c430) != '\0')) ||
                   (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != DAT_0022c43c)) &&
                  (((*(char *)(iVar15 + DAT_0022c440) == '\0' &&
                    (*(char *)(iVar15 + DAT_0022c444) == '\0')) ||
                   (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != DAT_0022c43c)))))))) &&
               (((*(char *)(iVar15 + DAT_0022c448) == '\0' &&
                 (*(char *)(iVar15 + DAT_0022c44c) == '\0')) ||
                (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != **(int **)(iVar13 + DAT_0022c450)))))
              )) && ((((*(char *)(iVar15 + 0x9f0) == '\0' &&
                       (*(char *)(iVar15 + DAT_0022c454) == '\0')) ||
                      (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x1e4)) &&
                     (((*(char *)(iVar15 + DAT_0022c404) == '\0' &&
                       (*(char *)(iVar15 + DAT_0022c408) == '\0')) ||
                      (*(int *)(*(int *)(iVar10 + iVar12) + 0x24) != 0x240)))))) {
            CapcomOrderableList<FurnitureData*>::addOrdered(*(FurnitureData **)(this + 0xcc));
          }
        }
      }
    }
    *(undefined4 *)(*(int *)(this + 0xcc) + 0x10) = *(undefined4 *)(*(int *)(this + 0xcc) + 8);
  }
  return;
}


