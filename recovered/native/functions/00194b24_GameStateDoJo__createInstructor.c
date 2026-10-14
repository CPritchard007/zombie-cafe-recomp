/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00194b24 GameStateDoJo::createInstructor */

/* GameStateDoJo::createInstructor() */

void __thiscall GameStateDoJo::createInstructor(GameStateDoJo *this)

{
  int iVar1;
  GameStateDoJo *pGVar2;
  Character *pCVar3;
  CharacterInstance *this_00;
  GameStateDoJo *pGVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  int local_2c;
  GameStateDoJo *local_28;
  String aSStack_20 [12];
  
  iVar1 = DAT_00194c10;
  iVar5 = 0;
  pGVar4 = this;
  do {
    if (pGVar4[DAT_00194c14] == (GameStateDoJo)0x0) break;
    iVar5 = iVar5 + 1;
    pGVar2 = pGVar4 + 0x668;
    pGVar4 = pGVar4 + 2;
    *(undefined2 *)pGVar2 = *(undefined2 *)(**(int **)(this + 0x30) + iVar1);
  } while (iVar5 != 0x14);
  iVar1 = DAT_00194c18;
  *(int *)(this + 0x690) = iVar5;
  local_2c = 0;
  local_28 = this;
  for (pGVar4 = this;
      (local_2c < *(int *)(this + 0x690) && (*(ushort *)(pGVar4 + 0x668) != DAT_00194c1c));
      pGVar4 = pGVar4 + 2) {
    uVar6 = *(undefined4 *)
             ((uint)*(ushort *)(pGVar4 + 0x668) * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00194c20))
    ;
    String::String(aSStack_20,(char *)(iVar1 + 0x194b64));
    pCVar3 = (Character *)operator_new(0x6c);
    Character::Character(pCVar3,uVar6,2,1,aSStack_20);
    String::~String(aSStack_20);
    fVar7 = (float)SmDev();
    this_00 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar7);
    iVar5 = DAT_00194c14;
    *(CharacterInstance **)(local_28 + 0x618) = this_00;
    CharacterInstance::setCurrentAnimation
              (this_00,(&UNK_00194c05)[DAT_00194c28 + (uint)(byte)pGVar4[iVar5] * 0x24],'\x01',true)
    ;
    local_2c = local_2c + 1;
    local_28 = local_28 + 4;
  }
  return;
}


