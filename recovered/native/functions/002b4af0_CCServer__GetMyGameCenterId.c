/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4af0 CCServer::GetMyGameCenterId */

/* CCServer::GetMyGameCenterId(void*) */

undefined * CCServer::GetMyGameCenterId(void *param_1)

{
  undefined *puVar1;
  
  if (*(int *)((int)param_1 + 4) == -1) {
    puVar1 = &UNK_002b4b02 + DAT_002b4b04;
  }
  else {
    puVar1 = (undefined *)((int)param_1 + 0x198);
  }
  return puVar1;
}


