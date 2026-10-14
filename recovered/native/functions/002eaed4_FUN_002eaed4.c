/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eaed4 FUN_002eaed4 */

undefined4 * FUN_002eaed4(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  pthread_mutex_t *__mutex;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  iVar1 = DAT_002eafbc;
  iVar5 = DAT_002eafb4;
  __mutex = (pthread_mutex_t *)(DAT_002eafb8 + 0x2eaef6);
  piVar8 = (int *)(DAT_002eafc0 + 0x2eaf00);
  do {
    piVar7 = (int *)(iVar5 + 0x2eaf5a);
    pthread_mutex_lock(__mutex);
    puVar6 = (undefined4 *)*piVar7;
    uVar9 = *param_2 * param_1;
    uVar4 = *(int *)(iVar1 + 0x2eaf6e) - (int)puVar6;
    if (uVar9 < uVar4 || uVar9 - uVar4 == 0) {
      *piVar7 = (int)(uVar9 + (int)puVar6);
LAB_002eaf7a:
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_002eafd4 + 0x2eaf80));
      return puVar6;
    }
    if (param_1 <= uVar4) {
      iVar5 = __udivsi3(uVar4,param_1);
      *param_2 = iVar5;
      *piVar7 = (int)(iVar5 * param_1 + (int)puVar6);
      goto LAB_002eaf7a;
    }
    uVar9 = uVar9 * 2 + (*piVar8 + 7U & 0xfffffff8);
    if (uVar4 != 0) {
      iVar2 = ((uVar4 + 7 >> 3) - 1) * 4;
      *puVar6 = *(undefined4 *)(iVar2 + param_3);
      *(int *)(iVar2 + param_3) = *piVar7;
    }
    iVar3 = std::__malloc_alloc::allocate(uVar9);
    *(int *)(DAT_002eafc4 + 0x2eaf38) = iVar3;
    iVar2 = DAT_002eafcc;
    *(int *)(DAT_002eafc8 + 0x2eaf40) = (uVar9 >> 4) + *(int *)(DAT_002eafc8 + 0x2eaf40);
    *(uint *)(DAT_002eafd0 + 0x2eaf4e) = iVar3 + uVar9;
    pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x2eaf4c));
  } while( true );
}


