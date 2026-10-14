/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e2af4 Constants::load */

/* Constants::load(DataInputStream*) */

void Constants::load(DataInputStream *param_1)

{
  void *pvVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int local_1b8;
  String aSStack_194 [8];
  String aSStack_18c [8];
  String aSStack_184 [8];
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  iVar4 = CapcomApp::getInstance();
  uVar5 = *(undefined4 *)(iVar4 + 0x40);
  iVar4 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar4 + 0x44);
  iVar4 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar4 + 0x50);
  iVar4 = CapcomApp::getInstance();
  uVar8 = *(undefined4 *)(iVar4 + 0x48);
  uVar17 = __extendsfdf2(uVar5);
  uVar18 = __extendsfdf2(uVar6);
  sprintf(acStack_11c,"Device XSize=%f ySize=%f",(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
          (int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  L_PrintLog("Constants::load()",acStack_11c);
  if (param_1 == (DataInputStream *)0x0) {
    L_PrintLog("Damn!","No inputstream");
  }
  AttackTask_MAX_ATTACK_TIME = DataInputStream::readInt(param_1);
  BonePile_BONE_DURATION = DataInputStream::readInt(param_1);
  BonePile_BONE_FADE_DURATION = DataInputStream::readInt(param_1);
  tombstone_POWER_DURATION = DataInputStream::readFloat();
  tombstone_POWER_STRENGTH = DataInputStream::readInt(param_1);
  tombstone_POWER_HEALTH = DataInputStream::readFloat();
  tombstone_BOMB_DAMAGE = DataInputStream::readFloat();
  tombstone_USES_LEVEL_2 = DataInputStream::readInt(param_1);
  tombstone_USES = DataInputStream::readInt(param_1);
  tombstone_BOMB_USES = DataInputStream::readInt(param_1);
  tombstone_RESURRECTION_USES = DataInputStream::readInt(param_1);
  tombstone_POWER_LEVEL_3_STRENGTH_RATIO = DataInputStream::readFloat();
  tombstone_POWER_LEVEL_3_HEALTH_RATIO = DataInputStream::readFloat();
  BuyToxinDialog_TITLE_COLOR = DataInputStream::readInt(param_1);
  BuyToxinDialog_AMOUNT_COLOR = DataInputStream::readInt(param_1);
  BuyToxinDialog_PRICE_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_VIAL_SEPARATION = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_VIAL_SEPARATION;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_VIAL_SEPARATION + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_VIAL_SEPARATION);
  uVar9 = __mulsf3(uVar9,uVar5);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_ICON_X = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_ICON_X;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_ICON_X + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_ICON_X);
  uVar9 = __mulsf3(uVar9,uVar5);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_ICON_Y = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_ICON_Y;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_ICON_Y + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_ICON_Y);
  uVar9 = __mulsf3(uVar9,uVar6);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_AMOUNT_X = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_AMOUNT_X;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_AMOUNT_X + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_AMOUNT_X);
  uVar9 = __mulsf3(uVar9,uVar5);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_AMOUNT_Y = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_AMOUNT_Y;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_AMOUNT_Y + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_AMOUNT_Y);
  uVar9 = __mulsf3(uVar9,uVar6);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_DESC_X = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_DESC_X;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_DESC_X + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_DESC_X);
  uVar9 = __mulsf3(uVar9,uVar5);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_DESC_Y = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_DESC_Y;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_DESC_Y + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_DESC_Y);
  uVar9 = __mulsf3(uVar9,uVar6);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_PRICE_X = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_PRICE_X;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_PRICE_X + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_PRICE_X);
  uVar9 = __mulsf3(uVar9,uVar5);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_PRICE_Y = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_PRICE_Y;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_PRICE_Y + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_PRICE_Y);
  uVar9 = __mulsf3(uVar9,uVar6);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_PRICE_TEXT_OFFSET_X = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_PRICE_TEXT_OFFSET_X;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_PRICE_TEXT_OFFSET_X + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_PRICE_TEXT_OFFSET_X);
  uVar9 = __mulsf3(uVar9,uVar5);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_PRICE_TEXT_OFFSET_Y = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_PRICE_TEXT_OFFSET_Y;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_PRICE_TEXT_OFFSET_Y + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_PRICE_TEXT_OFFSET_Y);
  uVar9 = __mulsf3(uVar9,uVar6);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_DLC_ROW_WIDTH = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_DLC_ROW_WIDTH;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_DLC_ROW_WIDTH + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_DLC_ROW_WIDTH);
  uVar9 = __mulsf3(uVar9,uVar5);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_DLC_ROW_HEIGHT = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_DLC_ROW_HEIGHT;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_DLC_ROW_HEIGHT + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_DLC_ROW_HEIGHT);
  uVar9 = __mulsf3(uVar9,uVar6);
  __mulsf3(uVar9,uVar7);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  BuyToxinDialog_FIRST_ROW_BUTTON_Y = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = BuyToxinDialog_FIRST_ROW_BUTTON_Y;
    if (iVar4 <= local_1b8) break;
    puVar15 = BuyToxinDialog_FIRST_ROW_BUTTON_Y + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*BuyToxinDialog_FIRST_ROW_BUTTON_Y);
  __mulsf3(uVar9,uVar6);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  L_PrintLog("Constants::load()","Phase 2 completed");
  BuyToxinDialog_SHOW_DISCLAIMER = DataInputStream::readByte(param_1);
  BuyToxinDialog_OFFER_WALL_FREE_TOXIN = DataInputStream::readInt(param_1);
  BuyToxinDialog_OFFER_WALL_TOXIN_PER_DOLLAR = DataInputStream::readInt(param_1);
  BuyToxinDialog_OFFER_WALL_PAID_PUBLIC_TOXIN = DataInputStream::readInt(param_1);
  BuyToxinDialog_OFFER_WALL_APPNAME_COLOR = DataInputStream::readInt(param_1);
  Cafe_TILE_COUNT_X = DataInputStream::readInt(param_1);
  Cafe_TILE_COUNT_Y = DataInputStream::readInt(param_1);
  Cafe_SIDEWALK_X = DataInputStream::readInt(param_1);
  Cafe_SIDEWALK_Y = DataInputStream::readInt(param_1);
  Cafe_RAID_SIDEWALK_X = DataInputStream::readInt(param_1);
  Cafe_RAID_SIDEWALK_Y = DataInputStream::readInt(param_1);
  Cafe_ROAD_WIDTH = DataInputStream::readInt(param_1);
  Cafe_INITIAL_CAFE_WIDTH = DataInputStream::readInt(param_1);
  Cafe_INITIAL_CAFE_HEIGHT = DataInputStream::readInt(param_1);
  Cafe_DOOR_Y = DataInputStream::readInt(param_1);
  Cafe_SELECTION_BOUNCE_TIME = DataInputStream::readShort(param_1);
  Cafe_AVERAGE_CUSTOMERS_LOW_POPULARITY = DataInputStream::readByte(param_1);
  Cafe_AVERAGE_CUSTOMERS_HIGH_POPULARITY = DataInputStream::readByte(param_1);
  Cafe_AVERAGE_CUSTOMER_VARIANCE = DataInputStream::readByte(param_1);
  Cafe_AVERAGE_CUSTOMER_SERVE_CHANCE = DataInputStream::readByte(param_1);
  Cafe_AVERAGE_CUSTOMER_SERVE_CHANCE_OVER = DataInputStream::readByte(param_1);
  Cafe_EDIT_TRANSPARENCY = DataInputStream::readInt(param_1);
  Cafe_INITIAL_WALL_ITEM = DataInputStream::readShort(param_1);
  Cafe_UI_FADE_DURATION = DataInputStream::readInt(param_1);
  Cafe_UI_FADE_IDLE_TIME = DataInputStream::readInt(param_1);
  CafeObject_COLOR_SHIFT_TIME = DataInputStream::readInt(param_1);
  CafeObject_COLOR_SHIFT_COLOR = DataInputStream::readInt(param_1);
  CafeTile_TILE_WIDTH = DataInputStream::readShort(param_1);
  CafeTile_TILE_HEIGHT = DataInputStream::readShort(param_1);
  CafeTile_TILE_STRIDE_X = DataInputStream::readShort(param_1);
  CafeTile_TILE_STRIDE_Y = DataInputStream::readShort(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  CafeTile_TYPE_GRASS = operator_new__(iVar4 << 1);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar14 = (undefined2 *)((int)CafeTile_TYPE_GRASS + iVar16 * 2);
    uVar3 = DataInputStream::readShort(param_1);
    *puVar14 = uVar3;
  }
  CafeTile_TYPE_GRASS_COUNT = DataInputStream::readByte(param_1);
  CafeTile_TYPE_SIDEWALK = DataInputStream::readShort(param_1);
  CafeTile_TYPE_ROAD = DataInputStream::readShort(param_1);
  CafeTile_TYPE_ROADSTRIPE = DataInputStream::readShort(param_1);
  CafeTile_TYPE_TILE = DataInputStream::readShort(param_1);
  CafeTile_TYPE_LOOSE_TILE = DataInputStream::readShort(param_1);
  CafeTile_TYPE_STAINED_TILE = DataInputStream::readShort(param_1);
  CafeTile_TYPE_SIDEWALK_CURB = DataInputStream::readShort(param_1);
  CafeTile_TYPE_SIDEWALK_CORNER = DataInputStream::readShort(param_1);
  CafeUIElement_TYPE_STATUSNOTE = DataInputStream::readByte(param_1);
  CafeUIElement_TYPE_CENSOREDSIGN = DataInputStream::readByte(param_1);
  CafeWall_DOOR_X = DataInputStream::readInt(param_1);
  CafeWall_DOOR_Y = DataInputStream::readInt(param_1);
  CafeWall_WALL_ABOVE_DOOR_HEIGHT_ADJUST_Y1 = DataInputStream::readInt(param_1);
  CafeWall_WALL_ABOVE_DOOR_HEIGHT_ADJUST_Y2 = DataInputStream::readInt(param_1);
  CafeWall_DOOR_CLOSED = DataInputStream::readInt(param_1);
  CafeWall_DOOR_OPEN = DataInputStream::readInt(param_1);
  CafeWall_EDGE_WIDTH = DataInputStream::readByte(param_1);
  CafeWall_OPEN_DOOR_ADJUST_X = DataInputStream::readShort(param_1);
  CafeWall_OPEN_DOOR_ADJUST_Y = DataInputStream::readShort(param_1);
  Character_RANDOM_NAME_COUNT = DataInputStream::readInt(param_1);
  Character_ATTACK_PROBABILITY_PER_MINUTE = DataInputStream::readFloat();
  Character_ENERGY_DRAIN_PER_MS = DataInputStream::readFloat();
  Character_FILL_AVAILABLE_THRESHOLD = DataInputStream::readFloat();
  Character_GLOBAL_SCALE = DataInputStream::readFloat();
  Character_MIN_SPEED_MULTIPLIER = DataInputStream::readFloat();
  Character_MAX_SPEED_MULTIPLIER = DataInputStream::readFloat();
  Character_REANIMATION_DURATION = DataInputStream::readInt(param_1);
  Character_DAYDREAM_DURATION = DataInputStream::readInt(param_1);
  Character_DAYDREAM_INTERVAL_INCREMENT = DataInputStream::readInt(param_1);
  Character_DAYDREAM_INTERVAL_VARIANCE = DataInputStream::readInt(param_1);
  Character_ZOMBIE_SLOWDOWN_MULTIPLIER = DataInputStream::readFloat();
  Character_SCREAM_INTERVAL = DataInputStream::readInt(param_1);
  Character_HIT_INTERVAL = DataInputStream::readInt(param_1);
  Character_ENERGY_BAR_WIDTH = DataInputStream::readInt(param_1);
  Character_ENERGY_BAR_HEIGHT = DataInputStream::readInt(param_1);
  Character_LOW_ENERGY_TUTORIAL_TRIGGER = DataInputStream::readFloat();
  CharacterCommandBar_PADDING_MIDDLE = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  CharacterCommandBar_PADDING_TOP = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = CharacterCommandBar_PADDING_TOP;
    if (iVar4 <= local_1b8) break;
    puVar15 = CharacterCommandBar_PADDING_TOP + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*CharacterCommandBar_PADDING_TOP);
  __mulsf3(uVar9,uVar6);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  CharacterCommandBar_MENU_STROKE_WIDTH = DataInputStream::readInt(param_1);
  CharacterCommandBar_MENU_STROKE_COLOR = DataInputStream::readInt(param_1);
  CharacterCommandBar_TWEEN_TIME = DataInputStream::readInt(param_1);
  CharacterCommandBar_TWEEN_EASE = DataInputStream::readInt(param_1);
  CharacterDetails_SECONDS_PER_DAY = DataInputStream::readInt(param_1);
  CharacterDetails_PADDING_TOP = DataInputStream::readInt(param_1);
  CharacterDetails_PADDING_MIDDLE = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  CharacterDetails_INNER_PADDING_SMALL = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = CharacterDetails_INNER_PADDING_SMALL;
    if (iVar4 <= local_1b8) break;
    puVar15 = CharacterDetails_INNER_PADDING_SMALL + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*CharacterDetails_INNER_PADDING_SMALL);
  __mulsf3(uVar9,uVar5);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  CharacterDetails_INNER_PADDING_LARGE = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  CharacterDetails_NAME_BOX_X_PADDING = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = CharacterDetails_NAME_BOX_X_PADDING;
    if (iVar4 <= local_1b8) break;
    puVar15 = CharacterDetails_NAME_BOX_X_PADDING + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*CharacterDetails_NAME_BOX_X_PADDING);
  __mulsf3(uVar9,uVar5);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  CharacterDetails_CLOSE_X_OFFSET = DataInputStream::readInt(param_1);
  CharacterDetails_CLOSE_Y_OFFSET = DataInputStream::readInt(param_1);
  CharacterDetails_INDEX_COLOR = DataInputStream::readInt(param_1);
  CharacterDetails_TOTAL_ZOMBIES_COLOR = DataInputStream::readInt(param_1);
  CharacterDetails_NAME_COLOR = DataInputStream::readInt(param_1);
  CharacterDetails_TYPE_COLOR = DataInputStream::readInt(param_1);
  CharacterStatScreen_PADDING_MIDDLE = DataInputStream::readInt(param_1);
  CharacterStatScreen_PADDING_TOP = DataInputStream::readInt(param_1);
  CharacterStatScreen_MENU_STROKE_WIDTH = DataInputStream::readInt(param_1);
  CharacterStatScreen_MENU_STROKE_COLOR = DataInputStream::readInt(param_1);
  CookCommandBar_MAX_CLOCK_POSITION = DataInputStream::readByte(param_1);
  EatTask_WAIT_FOR_FOOD_TIME = DataInputStream::readInt(param_1);
  EatTask_WAIT_WITH_FOOD_TIME = DataInputStream::readInt(param_1);
  EatTask_EAT_TIME = DataInputStream::readInt(param_1);
  FacebookNagDialog_TEXT_COLOR = DataInputStream::readInt(param_1);
  FacebookNagDialog_BUTTON_TEXT_COLOR = DataInputStream::readInt(param_1);
  FacebookNagDialog_TEXT_OFFSET_Y = DataInputStream::readInt(param_1);
  FacebookNagDialog_TEXT_WIDTH = DataInputStream::readInt(param_1);
  FacebookNagDialog_YES_BUTTON_OFFSET_X = DataInputStream::readInt(param_1);
  FacebookNagDialog_YES_BUTTON_OFFSET_Y = DataInputStream::readInt(param_1);
  FacebookNagDialog_NO_BUTTON_OFFSET_X = DataInputStream::readInt(param_1);
  FacebookNagDialog_NO_BUTTON_OFFSET_Y = DataInputStream::readInt(param_1);
  FacebookNagDialog_OK_BUTTON_OFFSET_X = DataInputStream::readInt(param_1);
  FacebookNagDialog_OK_BUTTON_OFFSET_Y = DataInputStream::readInt(param_1);
  FacebookNagDialog_BUTTON_TEXT_OFFSET_X = DataInputStream::readInt(param_1);
  FacebookNagDialog_BUTTON_TEXT_OFFSET_Y = DataInputStream::readInt(param_1);
  FeastTask_MAX_FEAST_TIME = DataInputStream::readInt(param_1);
  FeastTask_FLESH_ENERGY_BONUS = DataInputStream::readInt(param_1);
  FrequentFryer_REWARD1_CASH = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD2_CASH = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD3_MEAL_COUNT = DataInputStream::readByte(param_1);
  L_PrintLog("Constants::load()","Phase 3 completed");
  uVar10 = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD3_MEALS = operator_new__(uVar10);
  for (iVar4 = 0; pvVar1 = FrequentFryer_REWARD3_MEALS, iVar4 < (int)uVar10; iVar4 = iVar4 + 1) {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined1 *)((int)pvVar1 + iVar4) = uVar2;
  }
  FrequentFryer_REWARD4_MEAL_COUNT = DataInputStream::readByte(param_1);
  uVar10 = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD4_MEALS = operator_new__(uVar10);
  for (iVar4 = 0; pvVar1 = FrequentFryer_REWARD4_MEALS, iVar4 < (int)uVar10; iVar4 = iVar4 + 1) {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined1 *)((int)pvVar1 + iVar4) = uVar2;
  }
  FrequentFryer_REWARD5_TOXIN = DataInputStream::readByte(param_1);
  FrequentFryer_REWARD6_CASH = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD7_CASH = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD8_MEAL_COUNT = DataInputStream::readByte(param_1);
  uVar10 = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD8_MEALS = operator_new__(uVar10);
  for (iVar4 = 0; pvVar1 = FrequentFryer_REWARD8_MEALS, iVar4 < (int)uVar10; iVar4 = iVar4 + 1) {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined1 *)((int)pvVar1 + iVar4) = uVar2;
  }
  FrequentFryer_REWARD9_MEAL_COUNT = DataInputStream::readByte(param_1);
  uVar10 = DataInputStream::readShort(param_1);
  FrequentFryer_REWARD9_MEALS = operator_new__(uVar10);
  for (iVar4 = 0; pvVar1 = FrequentFryer_REWARD9_MEALS, iVar4 < (int)uVar10; iVar4 = iVar4 + 1) {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined1 *)((int)pvVar1 + iVar4) = uVar2;
  }
  FrequentFryer_REWARD10_TOXIN = DataInputStream::readByte(param_1);
  FrequentFryer_REWARD11_DAY = DataInputStream::readByte(param_1);
  FrequentFryer_RARE_RECIPE_COUNT = DataInputStream::readByte(param_1);
  uVar10 = DataInputStream::readShort(param_1);
  FrequentFryer_RARE_RECIPES = operator_new__(uVar10);
  for (iVar4 = 0; pvVar1 = FrequentFryer_RARE_RECIPES, iVar4 < (int)uVar10; iVar4 = iVar4 + 1) {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined1 *)((int)pvVar1 + iVar4) = uVar2;
  }
  FrequentFryer_RARE_CHANCE = DataInputStream::readInt(param_1);
  FrequentFryer_SERVER_TIME_CHECK_INTERVAL_SECONDS = DataInputStream::readShort(param_1);
  FrequentFryerDialog_RED = DataInputStream::readInt(param_1);
  FrequentFryerDialog_HR_HEIGHT = DataInputStream::readByte(param_1);
  FridgeDialog_RECIPE_NAME_COLOR = DataInputStream::readInt(param_1);
  FridgeDialog_RECIPE_DETAIL_COLOR = DataInputStream::readInt(param_1);
  FridgeDialog_BUTTON_FONT_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  FridgeDialog_PLATE_SCALE_X = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = FridgeDialog_PLATE_SCALE_X;
    if (iVar4 <= local_1b8) break;
    puVar15 = FridgeDialog_PLATE_SCALE_X + local_1b8;
    uVar9 = DataInputStream::readFloat();
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __mulsf3(uVar5,*FridgeDialog_PLATE_SCALE_X);
  uVar9 = __mulsf3(uVar9,uVar7);
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  FridgeDialog_PLATE_SCALE_Y = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = FridgeDialog_PLATE_SCALE_Y;
    if (iVar4 <= local_1b8) break;
    puVar15 = FridgeDialog_PLATE_SCALE_Y + local_1b8;
    uVar9 = DataInputStream::readFloat();
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __mulsf3(uVar6,*FridgeDialog_PLATE_SCALE_Y);
  uVar9 = __mulsf3(uVar9,uVar7);
  puVar15[5] = uVar9;
  FridgeDialog_RECIPE_PLATE_OFFSET_Y = DataInputStream::readInt(param_1);
  FridgeDialog_RECIPE_PLATE_OFFSET_X = DataInputStream::readInt(param_1);
  FridgeDialog_SELECTED_NONE = DataInputStream::readShort(param_1);
  FridgeDialog_PAGE_FLIP_FRAME_TIME = DataInputStream::readInt(param_1);
  FridgeDialog_PAGE_NUMBER_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  FridgeDialog_RECIPE_NAME_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = FridgeDialog_RECIPE_NAME_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = FridgeDialog_RECIPE_NAME_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar9 = __floatsisf(*FridgeDialog_RECIPE_NAME_SIZE);
  __mulsf3(uVar9,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  FridgeDialog_RECIPE_DETAIL_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = FridgeDialog_RECIPE_DETAIL_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = FridgeDialog_RECIPE_DETAIL_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar9 = __floatsisf(*FridgeDialog_RECIPE_DETAIL_SIZE);
  __mulsf3(uVar9,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  FridgeDialog_HEADING_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = FridgeDialog_HEADING_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = FridgeDialog_HEADING_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar9 = __floatsisf(*FridgeDialog_HEADING_SIZE);
  __mulsf3(uVar9,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  FridgeDialog_BUTTON_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = FridgeDialog_BUTTON_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = FridgeDialog_BUTTON_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar9 = __floatsisf(*FridgeDialog_BUTTON_SIZE);
  __mulsf3(uVar9,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  FridgeDialog_BUTTON_SIZE2 = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = FridgeDialog_BUTTON_SIZE2;
    if (iVar4 <= iVar16) break;
    puVar13 = FridgeDialog_BUTTON_SIZE2 + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar9 = __floatsisf(*FridgeDialog_BUTTON_SIZE2);
  __mulsf3(uVar9,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  Friend_SERIAL_VERSION = DataInputStream::readByte(param_1);
  Furniture_NO_ATTACHMENT = DataInputStream::readInt(param_1);
  Furniture_MAX_RATING_BONUS = DataInputStream::readFloat();
  Furniture_MAX_EARNINGS = DataInputStream::readByte(param_1);
  Furniture_MAX_EARNINGSXP = DataInputStream::readByte(param_1);
  Furniture_EXCLAIM_BOUNCE_HEIGHT = DataInputStream::readByte(param_1);
  Furniture_COUNTER_SLOPE = DataInputStream::readFloat();
  Furniture_TABLE_SLOPE = DataInputStream::readFloat();
  Furniture_SINK_SLOPE = DataInputStream::readFloat();
  Furniture_STOVE_SLOPE = DataInputStream::readFloat();
  Furniture_FRIDGE_SLOPE = DataInputStream::readFloat();
  FurnitureButton_COST_COLOR = DataInputStream::readInt(param_1);
  FurnitureButton_COST_STROKE_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  FurnitureButton_COST_STROKE_WIDTH = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  iVar16 = 0;
  while( true ) {
    puVar15 = FurnitureButton_COST_STROKE_WIDTH;
    if (iVar4 <= iVar16) break;
    puVar15 = FurnitureButton_COST_STROKE_WIDTH + iVar16;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    iVar16 = iVar16 + 1;
  }
  uVar9 = __floatsisf(*FurnitureButton_COST_STROKE_WIDTH);
  __mulsf3(uVar9,uVar5);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  FurnitureButton_COST_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = FurnitureButton_COST_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = FurnitureButton_COST_SIZE + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*FurnitureButton_COST_SIZE);
  __mulsf3(uVar9,uVar5);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  GameStateBusy_DIM_COLOR = DataInputStream::readInt(param_1);
  GameStateCafe_RATING_DECREMENT_CLOSED = DataInputStream::readFloat();
  GameStateCafe_RATING_DECREMENT_ATTACK = DataInputStream::readFloat();
  GameStateCafe_RATING_DECREMENT = DataInputStream::readFloat();
  GameStateCafe_RATING_INCREMENT = DataInputStream::readFloat();
  iVar4 = DataInputStream::readShort(param_1);
  GameStateCafe_INITIAL_ZOOM = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  for (local_1b8 = 0; local_1b8 < iVar4; local_1b8 = local_1b8 + 1) {
    puVar15 = GameStateCafe_INITIAL_ZOOM + local_1b8;
    uVar9 = DataInputStream::readFloat();
    *puVar15 = uVar9;
  }
  GameStateCafe_INITIAL_ZOOM[5] = *GameStateCafe_INITIAL_ZOOM;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateCafe_MIN_ZOOM = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  for (local_1b8 = 0; local_1b8 < iVar4; local_1b8 = local_1b8 + 1) {
    puVar15 = GameStateCafe_MIN_ZOOM + local_1b8;
    uVar9 = DataInputStream::readFloat();
    *puVar15 = uVar9;
  }
  GameStateCafe_MIN_ZOOM[5] = *GameStateCafe_MIN_ZOOM;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateCafe_MAX_ZOOM = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  for (local_1b8 = 0; local_1b8 < iVar4; local_1b8 = local_1b8 + 1) {
    puVar15 = GameStateCafe_MAX_ZOOM + local_1b8;
    uVar9 = DataInputStream::readFloat();
    *puVar15 = uVar9;
  }
  GameStateCafe_MAX_ZOOM[5] = *GameStateCafe_MAX_ZOOM;
  L_PrintLog("Constants::load()","Phase 4 completed");
  GameStateCafe_WALL_SECTION_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_ITEM_BAR_TWEEN_TIME = DataInputStream::readInt(param_1);
  GameStateCafe_MENU_STROKE_WIDTH = DataInputStream::readInt(param_1);
  GameStateCafe_MENU_STROKE_COLOR = DataInputStream::readInt(param_1);
  DataInputStream::readUTF();
  String::~String(aSStack_194);
  String::operator=((String *)&GameStateCafe_PLAYER_CAFE_SAVE_FILE,"playerCafe.caf");
  pcVar11 = (char *)String::getBytes((String *)&GameStateCafe_PLAYER_CAFE_SAVE_FILE);
  L_PrintLog("SaveGameFileName",pcVar11);
  free(pcVar11);
  GameStateCafe_MIN_CUSTOMER_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_MAX_CUSTOMER_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_CUSTOMER_INTERVAL_VARIANCE = DataInputStream::readInt(param_1);
  GameStateCafe_MIN_CUSTOMER_VISIT_CHANCE_FP8 = DataInputStream::readInt(param_1);
  GameStateCafe_MAX_CUSTOMER_VISIT_CHANCE_FP8 = DataInputStream::readInt(param_1);
  GameStateCafe_TABLE_SERVER_MODIFIER = DataInputStream::readFloat();
  GameStateCafe_CUSTOMER_ENTER_PAUSE = DataInputStream::readInt(param_1);
  GameStateCafe_CUSTOMER_ENTER_PAUSE_VARIANCE = DataInputStream::readInt(param_1);
  GameStateCafe_DECELERATION = DataInputStream::readFloat();
  GameStateCafe_MIN_VELOCITY = DataInputStream::readFloat();
  GameStateCafe_FURNITURE_PLACEMENT_VALID = DataInputStream::readInt(param_1);
  GameStateCafe_FURNITURE_PLACEMENT_INVALID = DataInputStream::readInt(param_1);
  GameStateCafe_FURNITURE_PLACEMENT_TAKEN = DataInputStream::readInt(param_1);
  GameStateCafe_FURNITURE_PLACEMENT_PULSE_PERIOD = DataInputStream::readShort(param_1);
  GameStateCafe_FURNITURE_PLACEMENT_PULSE_ALPHA = DataInputStream::readByte(param_1);
  GameStateCafe_MUSIC_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_ZOMBIE_ATTACK_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_ZOMBIE_ATTACK_WARNING = DataInputStream::readInt(param_1);
  GameStateCafe_ZOMBIE_IDLE_TIME = DataInputStream::readInt(param_1);
  GameStateCafe_ROTATION_CONTROL_VISIBLE_TIME = DataInputStream::readShort(param_1);
  GameStateCafe_ROTATION_CONTROL_FADE_TIME = DataInputStream::readShort(param_1);
  GameStateCafe_SAVE_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_SERVER_SAVE_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_SERVER_GIFT_CHECK_INTERVAL = DataInputStream::readInt(param_1);
  GameStateCafe_TIP_COLOR = DataInputStream::readInt(param_1);
  GameStateCafe_CASH_PER_TOXIN = DataInputStream::readInt(param_1);
  GameStateCafe_ITEM_SELLBACK_RATE = DataInputStream::readFloat();
  GameStateCafe_TIME_SCALE_FACTOR = DataInputStream::readFloat();
  GameStateCafe_INSTANT_INFECT = DataInputStream::readByte(param_1);
  GameStateCafe_ENEMY_DIALOG_WAIT_TIME = DataInputStream::readInt(param_1);
  GameStateCafe_WORK_REST_SCALE_FACTOR = DataInputStream::readFloat();
  GameStateCafe_LONG_TICK_INTERVAL = DataInputStream::readByte(param_1);
  GameStateCafe_LONG_TICK_NEW_CUSTOMER_TIME = DataInputStream::readInt(param_1);
  GameStateCafe_TUTORIAL_CUSTOMER_EAT_TIME = DataInputStream::readInt(param_1);
  GameStateCafe_POPULARITY_TUTORIAL_TRIGGER = DataInputStream::readFloat();
  GameStateCafe_FRIEND_TOXIN_NUM_LEVELS = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateCafe_FRIEND_TOXIN_LEVELS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateCafe_FRIEND_TOXIN_LEVELS + iVar16 * 4);
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateCafe_FRIEND_TOXIN_REWARDS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateCafe_FRIEND_TOXIN_REWARDS + iVar16 * 4);
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
  }
  GameStateCafe_ZORDER_HUD = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_STORAGE = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_STORE = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_COMMAND_BAR = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_COOK_COMMAND_BAR = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_TOMBSTONE_COMMAND_BAR = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_TUTORIAL_ARROW = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_RECIPE_BOOK = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_FRIDGE_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_CHARACTER_DETAILS = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_PENDING_ORDER_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_LOTTERY_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_OBJECTIVE_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_LEVEL_UP_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_RECIPE_UNLOCKED_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_FREQUENT_FRYER_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_ENEMY_CAFE_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_BUY_TOXIN_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_ZORDER_OBJECTIVE_COMPLETE_DIALOG = DataInputStream::readByte(param_1);
  GameStateCafe_AVERAGE_SERVING_TIME = DataInputStream::readFloat();
  GameStateCafe_MAX_RATING_INCREASE = DataInputStream::readFloat();
  GameStateCafe_EXPANSION_OUTLINE_COLOR1 = DataInputStream::readInt(param_1);
  GameStateCafe_EXPANSION_OUTLINE_COLOR2 = DataInputStream::readInt(param_1);
  GameStateCafe_EXPANSION_OUTLINE_WIDTH = DataInputStream::readByte(param_1);
  GameStateCafe_SERVE_INSTRUCT_LEVEL_LIMIT = DataInputStream::readByte(param_1);
  GameStateCafe_RECIPE_XP_BONUS_NUM_LEVELS = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateCafe_RECIPE_XP_BONUS_LEVELS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateCafe_RECIPE_XP_BONUS_LEVELS + iVar16 * 4);
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateCafe_RECIPE_XP_BONUS_AMOUNTS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateCafe_RECIPE_XP_BONUS_AMOUNTS + iVar16 * 4);
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
  }
  GameStateCafe_BURN_NOTIFICATION_WARNING_TIME = DataInputStream::readInt(param_1);
  GameStateCafe_BURN_COOK_TIME_THRESHOLD = DataInputStream::readInt(param_1);
  GameStateCafe_FRIEND_REFERRAL_REWARD = DataInputStream::readInt(param_1);
  GameStateCafe_FRIEND_REFERRAL_COUNT = DataInputStream::readInt(param_1);
  GameStateCafe_TOXIN_PURCHASE_XP_MULTIPLIER = DataInputStream::readFloat();
  GameStateCafe_CASH_PURCHASE_XP_MULTIPLIER = DataInputStream::readFloat();
  iVar4 = DataInputStream::readShort(param_1);
  GameStateChooseChef_TITLE_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateChooseChef_TITLE_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateChooseChef_TITLE_FONT_SIZE + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*GameStateChooseChef_TITLE_FONT_SIZE);
  __mulsf3(uVar9,uVar5);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateChooseChef_SMALL_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateChooseChef_SMALL_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateChooseChef_SMALL_FONT_SIZE + local_1b8;
    uVar9 = DataInputStream::readInt(param_1);
    *puVar15 = uVar9;
    local_1b8 = local_1b8 + 1;
  }
  uVar9 = __floatsisf(*GameStateChooseChef_SMALL_FONT_SIZE);
  __mulsf3(uVar9,uVar5);
  uVar9 = __fixsfsi();
  puVar15[5] = uVar9;
  GameStateChooseChef_TITLE_FONT_STROKE_COLOR = DataInputStream::readInt(param_1);
  GameStateChooseChef_TITLE_FONT_STROKE_SIZE = DataInputStream::readInt(param_1);
  GameStateChooseChef_CHEF_SCALE_SMALL = DataInputStream::readFloat();
  iVar4 = DataInputStream::readShort(param_1);
  GameStateChooseChef_CHEF_SCALE_LARGE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  for (local_1b8 = 0; local_1b8 < iVar4; local_1b8 = local_1b8 + 1) {
    puVar15 = GameStateChooseChef_CHEF_SCALE_LARGE + local_1b8;
    uVar9 = DataInputStream::readFloat();
    *puVar15 = uVar9;
    puVar15 = GameStateChooseChef_CHEF_SCALE_LARGE;
    uVar9 = __mulsf3(*GameStateChooseChef_CHEF_SCALE_LARGE,uVar8);
    puVar15[5] = uVar9;
  }
  uVar10 = DataInputStream::readShort(param_1);
  GameStateChooseChef_ANIMATION_POOL = operator_new__(uVar10);
  for (iVar4 = 0; pvVar1 = GameStateChooseChef_ANIMATION_POOL, iVar4 < (int)uVar10;
      iVar4 = iVar4 + 1) {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined1 *)((int)pvVar1 + iVar4) = uVar2;
  }
  GameStateChooseChef_ANIMATION_POOL_SIZE = DataInputStream::readByte(param_1);
  GameStateFriendCafe_MIN_ZOOM = DataInputStream::readFloat();
  GameStateFriendCafe_MIN_ZOOM_DISPLAY = DataInputStream::readFloat();
  GameStateFriendCafe_INITIAL_ZOOM = DataInputStream::readFloat();
  GameStateFriendCafe_MAX_ZOOM_DISPLAY = DataInputStream::readFloat();
  GameStateFriendCafe_MAX_ZOOM = DataInputStream::readFloat();
  GameStateFriendCafe_RAID_RATING_MULTIPLIER = DataInputStream::readFloat();
  GameStateFriendCafe_RAID_FOOD_MULTIPLIER = DataInputStream::readFloat();
  GameStateFriendCafe_RAID_DEFENDER_MULTIPLIER = DataInputStream::readFloat();
  iVar4 = DataInputStream::readShort(param_1);
  GameStateFriends_TITLE_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateFriends_TITLE_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateFriends_TITLE_FONT_SIZE + local_1b8;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __floatsisf(*GameStateFriends_TITLE_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateFriends_ERROR_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateFriends_ERROR_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateFriends_ERROR_FONT_SIZE + local_1b8;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __floatsisf(*GameStateFriends_ERROR_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateFriends_SMALL_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateFriends_SMALL_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateFriends_SMALL_FONT_SIZE + local_1b8;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __floatsisf(*GameStateFriends_SMALL_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  L_PrintLog("Constants::load()","Phase 5 completed");
  GameStateFriends_TITLE_FONT_STROKE_COLOR = DataInputStream::readInt(param_1);
  GameStateFriends_TITLE_FONT_STROKE_SIZE = DataInputStream::readInt(param_1);
  GameStateFriends_ERROR_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateFriends_ERROR_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_FRAME_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_INVITE_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_UP_BUTTON_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_DOWN_BUTTON_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_ROW_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_OK_BUTTON_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateFriends_OK_BUTTON_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_NAME_TEXT_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateFriends_NAME_TEXT_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_PROFILE_PIC_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateFriends_PROFILE_PIC_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_LEVEL_TEXT_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateFriends_LEVEL_TEXT_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_STAR_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateFriends_STAR_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateFriends_STAR_SPACING = DataInputStream::readInt(param_1);
  GameStateFriends_DISABLED_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateHelp_TITLE_FONT_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = GameStateHelp_TITLE_FONT_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = GameStateHelp_TITLE_FONT_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*GameStateHelp_TITLE_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateHelp_SMALL_FONT_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = GameStateHelp_SMALL_FONT_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = GameStateHelp_SMALL_FONT_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*GameStateHelp_SMALL_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateHelp_MEDIUM_FONT_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = GameStateHelp_MEDIUM_FONT_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = GameStateHelp_MEDIUM_FONT_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*GameStateHelp_MEDIUM_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  GameStateHelp_TITLE_FONT_STROKE_COLOR = DataInputStream::readInt(param_1);
  GameStateHelp_TITLE_FONT_STROKE_SIZE = DataInputStream::readInt(param_1);
  GameStateMap_NUM_ENEMIES = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_MID_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_MID_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_NAME_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_NAME_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_PROFILE_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_PROFILE_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_LEVEL_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateMap_CAFE_LEVEL_OFFSET_Y = DataInputStream::readInt(param_1);
  GameStateMap_INVITE_BUTTON_OFFSET_X = DataInputStream::readInt(param_1);
  GameStateMap_INVITE_BUTTON_OFFSET_Y = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateMap_NAME_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  iVar16 = 0;
  while( true ) {
    puVar15 = GameStateMap_NAME_FONT_SIZE;
    if (iVar4 <= iVar16) break;
    puVar15 = GameStateMap_NAME_FONT_SIZE + iVar16;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*GameStateMap_NAME_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateMap_LEVEL_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateMap_LEVEL_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateMap_LEVEL_FONT_SIZE + local_1b8;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __floatsisf(*GameStateMap_LEVEL_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateMap_SMALL_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateMap_SMALL_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateMap_SMALL_FONT_SIZE + local_1b8;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __floatsisf(*GameStateMap_SMALL_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  GameStateMap_DECELERATION = DataInputStream::readFloat();
  GameStateMap_MIN_VELOCITY = DataInputStream::readFloat();
  GameStateMap_MAX_BG_SCREENS = DataInputStream::readInt(param_1);
  GameStateMap_BOARDED_OFFSET_LEFT = DataInputStream::readInt(param_1);
  GameStateMap_BOARDED_OFFSET_BOTTOM = DataInputStream::readInt(param_1);
  GameStateMap_CHEATER_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateOptions_TITLE_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateOptions_TITLE_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateOptions_TITLE_FONT_SIZE + local_1b8;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __floatsisf(*GameStateOptions_TITLE_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  iVar4 = DataInputStream::readShort(param_1);
  GameStateOptions_SMALL_FONT_SIZE = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateOptions_SMALL_FONT_SIZE;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateOptions_SMALL_FONT_SIZE + local_1b8;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __floatsisf(*GameStateOptions_SMALL_FONT_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar8 = __fixsfsi();
  puVar15[5] = uVar8;
  GameStateOptions_TITLE_FONT_STROKE_COLOR = DataInputStream::readInt(param_1);
  GameStateOptions_TITLE_FONT_STROKE_SIZE = DataInputStream::readInt(param_1);
  DataInputStream::readUTF();
  String::operator=((String *)&GameStateRaid_RAID_CAFE_SAVE_FILE,aSStack_18c);
  String::~String(aSStack_18c);
  GameStateRaid_MIN_ZOOM = DataInputStream::readFloat();
  GameStateRaid_MIN_ZOOM_DISPLAY = DataInputStream::readFloat();
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_INITIAL_ZOOM = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = GameStateRaid_INITIAL_ZOOM;
    if (iVar4 <= local_1b8) break;
    puVar15 = GameStateRaid_INITIAL_ZOOM + local_1b8;
    uVar8 = DataInputStream::readFloat();
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __mulsf3(*GameStateRaid_INITIAL_ZOOM,uVar5);
  puVar15[5] = uVar8;
  GameStateRaid_MAX_ZOOM = DataInputStream::readFloat();
  GameStateRaid_MENU_STROKE_WIDTH = DataInputStream::readInt(param_1);
  GameStateRaid_MENU_STROKE_COLOR = DataInputStream::readInt(param_1);
  GameStateRaid_KILL_HEALTH_BOOST = DataInputStream::readInt(param_1);
  GameStateRaid_CUSTOMER_PANIC_LOOPS = DataInputStream::readInt(param_1);
  GameStateRaid_MIN_CUSTOMER_INTERVAL = DataInputStream::readInt(param_1);
  GameStateRaid_MAX_CUSTOMER_INTERVAL = DataInputStream::readInt(param_1);
  GameStateRaid_CUSTOMER_INTERVAL_VARIANCE = DataInputStream::readInt(param_1);
  GameStateRaid_MIN_CUSTOMER_VISIT_CHANCE_FP8 = DataInputStream::readInt(param_1);
  GameStateRaid_MAX_CUSTOMER_VISIT_CHANCE_FP8 = DataInputStream::readInt(param_1);
  GameStateRaid_CUSTOMER_ENTER_PAUSE = DataInputStream::readInt(param_1);
  GameStateRaid_CUSTOMER_ENTER_PAUSE_VARIANCE = DataInputStream::readInt(param_1);
  GameStateRaid_DECELERATION = DataInputStream::readFloat();
  GameStateRaid_MIN_VELOCITY = DataInputStream::readFloat();
  GameStateRaid_ATTACK_BUTTON_X = DataInputStream::readInt(param_1);
  GameStateRaid_ATTACK_BUTTON_Y = DataInputStream::readInt(param_1);
  GameStateRaid_CUSTOMER_XP = DataInputStream::readInt(param_1);
  GameStateRaid_CUSTOMER_CASH_AMOUNT = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_NUM_CUSTOMERS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_NUM_CUSTOMERS + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_NUM_SERVERS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_NUM_SERVERS + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_SERVER_STRENGTH = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_SERVER_STRENGTH + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_SERVER_SPEED = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_SERVER_SPEED + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_BOSS_CASH = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_BOSS_CASH + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_BOSS_HP = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_BOSS_HP + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_BOSS_TOXIN = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_BOSS_TOXIN + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_BOSS_TOXIN_CHANCE = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_BOSS_TOXIN_CHANCE + iVar16 * 4);
    uVar8 = DataInputStream::readFloat();
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_BOSS_XP = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_BOSS_XP + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_BOSS_STRENGTH = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_BOSS_STRENGTH + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_BOSS_SPEED = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_BOSS_SPEED + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  GameStateRaid_SAVE_INTERVAL = DataInputStream::readInt(param_1);
  DataInputStream::readUTF();
  String::operator=((String *)&GameStateRaid_RAID_ENEMIES_SAVE_FILE,aSStack_184);
  String::~String(aSStack_184);
  GameStateRaid_RECIPE_LEVEL_MINUS_3 = DataInputStream::readInt(param_1);
  GameStateRaid_RECIPE_LEVEL_MINUS_2 = DataInputStream::readInt(param_1);
  GameStateRaid_RECIPE_LEVEL_MINUS_1 = DataInputStream::readInt(param_1);
  GameStateRaid_RECIPE_LEVEL_PLUS_0 = DataInputStream::readInt(param_1);
  GameStateRaid_RECIPE_LEVEL_PLUS_1 = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_RECIPE_LEVEL_CHANCES = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_RECIPE_LEVEL_CHANCES + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  GameStateRaid_NUM_LEVEL_OPTIONS = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  GameStateRaid_VARIANT_CHANCES = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)GameStateRaid_VARIANT_CHANCES + iVar16 * 4);
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
  }
  GameStateRaid_NUM_VARIANTS = DataInputStream::readInt(param_1);
  GameStateRaid_REWARD_DELAY_DURATION = DataInputStream::readInt(param_1);
  GameStateRaid_RAID_FOOD_COUNT_MULTIPLIER = DataInputStream::readFloat();
  GameStateRaid_NUM_LAYOUTS = DataInputStream::readInt(param_1);
  GameStateRaid_RARE_RECIPE_COUNT = DataInputStream::readByte(param_1);
  uVar10 = DataInputStream::readShort(param_1);
  GameStateRaid_RARE_RECIPES = operator_new__(uVar10);
  for (iVar4 = 0; pvVar1 = GameStateRaid_RARE_RECIPES, iVar4 < (int)uVar10; iVar4 = iVar4 + 1) {
    uVar2 = DataInputStream::readByte(param_1);
    *(undefined1 *)((int)pvVar1 + iVar4) = uVar2;
  }
  GameStateRaid_RARE_CHANCE = DataInputStream::readInt(param_1);
  InfectTask_ZOMBIE_START_ENERGY = DataInputStream::readShort(param_1);
  LevelUpDialog_PADDING_TOP = DataInputStream::readInt(param_1);
  LevelUpDialog_PADDING_MIDDLE = DataInputStream::readInt(param_1);
  LevelUpDialog_INNER_PADDING = DataInputStream::readInt(param_1);
  LevelUpDialog_TEXT_COLOR_GREEN = DataInputStream::readInt(param_1);
  LevelUpDialog_PAPER_X = DataInputStream::readInt(param_1);
  LevelUpDialog_PAPER_Y = DataInputStream::readInt(param_1);
  LevelUpDialog_PAPER_W = DataInputStream::readInt(param_1);
  LevelUpDialog_PAPER_H = DataInputStream::readInt(param_1);
  MapDialog_CLOSE_X_OFFSET = DataInputStream::readInt(param_1);
  MapDialog_CLOSE_Y_OFFSET = DataInputStream::readInt(param_1);
  MapDialog_PADDING_TOP = DataInputStream::readInt(param_1);
  MapDialog_PADDING_SIDE = DataInputStream::readInt(param_1);
  MapDialog_PADDING_INNER = DataInputStream::readInt(param_1);
  MapDialog_CAFE_WIDTH = DataInputStream::readInt(param_1);
  MapTile_TILE_TYPES = DataInputStream::readInt(param_1);
  MapTile_TILE_WIDTH = DataInputStream::readInt(param_1);
  MapTile_TILE_HEIGHT = DataInputStream::readInt(param_1);
  MapTile_TILE_STRIDE_X = DataInputStream::readInt(param_1);
  MapTile_TILE_STRIDE_Y = DataInputStream::readInt(param_1);
  MessageElement_LABEL_COLOR = DataInputStream::readInt(param_1);
  MessageElement_MIN_MESSAGE_TIME = DataInputStream::readInt(param_1);
  MessageElement_MIN_MESSAGE_TIME_PAGES = DataInputStream::readInt(param_1);
  MessageElement_BG_COLOR = DataInputStream::readInt(param_1);
  MessageElement_BG_FADE_TIME = DataInputStream::readShort(param_1);
  L_PrintLog("Constants::load()","Phase 6 completed");
  iVar4 = DataInputStream::readShort(param_1);
  ObjectiveSystem_COMPLETION_TIMES = operator_new__(iVar4 << 3);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar12 = (undefined8 *)((int)ObjectiveSystem_COMPLETION_TIMES + iVar16 * 8);
    uVar17 = DataInputStream::readLong(param_1);
    *puVar12 = uVar17;
  }
  ObjectiveSystem_TIME_BUFFER = DataInputStream::readLong(param_1);
  ObjectiveSystem_MAX_RECIPE_TIME = DataInputStream::readInt(param_1);
  ObjectiveSystem_MAX_RECIPE_OBJECTIVE = DataInputStream::readInt(param_1);
  ObjectiveSystem_RATING_PER_COMPLETION = DataInputStream::readFloat();
  ObjectiveSystem_SPEND_CASH_PER_LEVEL = DataInputStream::readInt(param_1);
  ObjectiveSystem_CUSTOMERS_PER_LEVEL = DataInputStream::readInt(param_1);
  ObjectiveSystem_MAX_BONUS_TIME = DataInputStream::readLong(param_1);
  ObjectiveSystem_TOXIN_PER_COMPLETION = DataInputStream::readInt(param_1);
  ObjectiveSystem_BONUS_TIME_THRESHOLD = DataInputStream::readInt(param_1);
  ProgressBar_PROGRESS_BAR_BLUE = DataInputStream::readInt(param_1);
  ProgressBar_PROGRESS_BAR_RED = DataInputStream::readInt(param_1);
  ProgressBar_TEXT_MARGIN = DataInputStream::readInt(param_1);
  ProgressBar_PROGRESS_BAR_PADDING = DataInputStream::readInt(param_1);
  RaidRewardScreen_TWEEN_TIME = DataInputStream::readInt(param_1);
  RaidRewardScreen_TWEEN_EASE = DataInputStream::readInt(param_1);
  RaidRewardScreen_PADDING_TOP = DataInputStream::readInt(param_1);
  RaidRewardScreen_PADDING_INNER = DataInputStream::readInt(param_1);
  RaidRewardScreen_CLOSE_X_OFFSET = DataInputStream::readInt(param_1);
  RaidRewardScreen_CLOSE_Y_OFFSET = DataInputStream::readInt(param_1);
  RecipeBook_RECIPE_NAME_COLOR = DataInputStream::readInt(param_1);
  RecipeBook_RECIPE_DETAIL_COLOR = DataInputStream::readInt(param_1);
  RecipeBook_HEADING_COLOR = DataInputStream::readInt(param_1);
  RecipeBook_PRICE_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_PLATE_SCALE_X = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  local_1b8 = 0;
  while( true ) {
    puVar15 = RecipeBook_PLATE_SCALE_X;
    if (iVar4 <= local_1b8) break;
    puVar15 = RecipeBook_PLATE_SCALE_X + local_1b8;
    uVar8 = DataInputStream::readFloat();
    *puVar15 = uVar8;
    local_1b8 = local_1b8 + 1;
  }
  uVar8 = __mulsf3(*RecipeBook_PLATE_SCALE_X,uVar5);
  puVar15[5] = uVar8;
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_PLATE_SCALE_Y = operator_new__((iVar4 + 1) * 4);
  for (local_1b8 = 0; pvVar1 = RecipeBook_PLATE_SCALE_Y, local_1b8 < iVar4;
      local_1b8 = local_1b8 + 1) {
    puVar15 = (undefined4 *)((int)RecipeBook_PLATE_SCALE_Y + local_1b8 * 4);
    uVar8 = DataInputStream::readFloat();
    *puVar15 = uVar8;
  }
  uVar8 = __mulsf3(*RecipeBook_PLATE_SCALE_X,uVar6);
  *(undefined4 *)((int)pvVar1 + 0x14) = uVar8;
  RecipeBook_RECIPE_COST_OFFSET_Y = DataInputStream::readInt(param_1);
  RecipeBook_RECIPE_PLATE_OFFSET_Y = DataInputStream::readInt(param_1);
  RecipeBook_RECIPE_PLATE_OFFSET_X = DataInputStream::readInt(param_1);
  RecipeBook_PAGE_FLIP_FRAME_TIME = DataInputStream::readInt(param_1);
  RecipeBook_PAGE_NUMBER_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_RECIPE_NAME_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = RecipeBook_RECIPE_NAME_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = RecipeBook_RECIPE_NAME_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*RecipeBook_RECIPE_NAME_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_RECIPE_DETAIL_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = RecipeBook_RECIPE_DETAIL_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = RecipeBook_RECIPE_DETAIL_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*RecipeBook_RECIPE_DETAIL_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_PAGE_NUMBER_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = RecipeBook_PAGE_NUMBER_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = RecipeBook_PAGE_NUMBER_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*RecipeBook_PAGE_NUMBER_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_HEADING_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = RecipeBook_HEADING_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = RecipeBook_HEADING_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*RecipeBook_HEADING_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_PRICE_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = RecipeBook_PRICE_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = RecipeBook_PRICE_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*RecipeBook_PRICE_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  iVar4 = DataInputStream::readShort(param_1);
  RecipeBook_LEVEL_SIZE = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = RecipeBook_LEVEL_SIZE;
    if (iVar4 <= iVar16) break;
    puVar13 = RecipeBook_LEVEL_SIZE + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*RecipeBook_LEVEL_SIZE);
  __mulsf3(uVar8,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  RecipeBook_VARIANT_TEXT_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  RecipeUnlockedDialog_PADDING_TOP = (undefined4 *)operator_new__((iVar4 + 1) * 4);
  iVar16 = 0;
  while( true ) {
    puVar15 = RecipeUnlockedDialog_PADDING_TOP;
    if (iVar4 <= iVar16) break;
    puVar15 = RecipeUnlockedDialog_PADDING_TOP + iVar16;
    uVar8 = DataInputStream::readInt(param_1);
    *puVar15 = uVar8;
    iVar16 = iVar16 + 1;
  }
  uVar8 = __floatsisf(*RecipeUnlockedDialog_PADDING_TOP);
  uVar6 = __mulsf3(uVar8,uVar6);
  __mulsf3(uVar6,uVar7);
  uVar6 = __fixsfsi();
  puVar15[5] = uVar6;
  RecipeUnlockedDialog_PADDING_MIDDLE = DataInputStream::readInt(param_1);
  RecipeUnlockedDialog_INNER_PADDING = DataInputStream::readInt(param_1);
  RecipeUnlockedDialog_TEXT_COLOR_GREEN = DataInputStream::readInt(param_1);
  Resources_ITEM_COUNTER = DataInputStream::readInt(param_1);
  Resources_ITEM_STOVE = DataInputStream::readInt(param_1);
  Resources_ITEM_TABLE = DataInputStream::readInt(param_1);
  Resources_ITEM_CHAIR = DataInputStream::readInt(param_1);
  Resources_ITEM_POT = DataInputStream::readInt(param_1);
  Resources_ITEM_DIRTY_POT = DataInputStream::readInt(param_1);
  Resources_ITEM_PLATE = DataInputStream::readInt(param_1);
  Resources_ITEM_DIRTY_STOVE = DataInputStream::readInt(param_1);
  Resources_ITEM_DIRTY_FRIDGE = DataInputStream::readInt(param_1);
  Resources_ITEM_DIRTY_SINK = DataInputStream::readInt(param_1);
  Resources_ITEM_DEAD_PLANT = DataInputStream::readInt(param_1);
  Resources_ITEM_LOOSE_TILE = DataInputStream::readInt(param_1);
  Resources_ITEM_STAINED_TILE = DataInputStream::readInt(param_1);
  Resources_ITEM_BOARDED_WINDOW = DataInputStream::readInt(param_1);
  Resources_ITEM_DIRTY_PLATE = DataInputStream::readInt(param_1);
  Resources_ITEM_TILE_COVER = DataInputStream::readInt(param_1);
  Resources_ITEM_WHITE_WALL = DataInputStream::readInt(param_1);
  Resources_ITEM_DIRTY_WALL_START = DataInputStream::readByte(param_1);
  Resources_ITEM_DIRTY_FLOOR_START = DataInputStream::readByte(param_1);
  RestTask_ZZZ_INTERVAL = DataInputStream::readInt(param_1);
  ServeTask_SERVE_TIME = DataInputStream::readShort(param_1);
  StatusNote_DEFAULT_VISIBLE_DURATION = DataInputStream::readInt(param_1);
  StatusNote_ALPHA_VALUE = DataInputStream::readInt(param_1);
  StatusNote_START_ALPHA_VALUE = DataInputStream::readInt(param_1);
  StatusNote_END_ALPHA_VALUE = DataInputStream::readInt(param_1);
  StatusNote_MAX_OFFSET = DataInputStream::readInt(param_1);
  StatusNote_THOUGHTBUBBLE_BOTTOM_OFFSET = DataInputStream::readInt(param_1);
  StatusNote_THOUGHTBUBBLE_LEFT_OFFSET = DataInputStream::readInt(param_1);
  StealFoodTask_STEAL_TIME = DataInputStream::readInt(param_1);
  Store_TWEEN_TIME = DataInputStream::readInt(param_1);
  Store_TWEEN_EASE = DataInputStream::readInt(param_1);
  Store_DECELERATION = DataInputStream::readFloat();
  Store_MIN_VELOCITY = DataInputStream::readFloat();
  Store_MAX_STAR_RATING = DataInputStream::readByte(param_1);
  Store_MAX_EARNING_VALUE = DataInputStream::readByte(param_1);
  L_PrintLog("Constants::load()","Phase 7 completed");
  iVar4 = DataInputStream::readShort(param_1);
  Store_COST_DIGIT_WIDTH = (undefined1 *)operator_new__(iVar4 + 1);
  iVar16 = 0;
  while( true ) {
    puVar13 = Store_COST_DIGIT_WIDTH;
    if (iVar4 <= iVar16) break;
    puVar13 = Store_COST_DIGIT_WIDTH + iVar16;
    uVar2 = DataInputStream::readByte(param_1);
    *puVar13 = uVar2;
    iVar16 = iVar16 + 1;
  }
  uVar6 = __floatsisf(*Store_COST_DIGIT_WIDTH);
  __mulsf3(uVar6,uVar5);
  uVar2 = __fixunssfsi();
  puVar13[5] = uVar2;
  Stove_ACTIVE_COOK_BURN_GRACE_SECONDS = DataInputStream::readShort(param_1);
  Tutorial_DELAY_DURATION = DataInputStream::readInt(param_1);
  TutorialArrow_ARROW_BOUNCE_TIME = DataInputStream::readShort(param_1);
  ZombieCafeGameState_NO_INPUT_TICKS = DataInputStream::readByte(param_1);
  ZombieCafe_MAX_LEVEL = DataInputStream::readByte(param_1);
  L_PrintLog("Constants::load()","Phase 8 completed");
  ZombieCafe_MAX_ENEMY_CAFES = DataInputStream::readByte(param_1);
  ZombieCafe_ENEMY_BOSS_CAFES = DataInputStream::readByte(param_1);
  ZombieCafe_ENEMY_BOSS_COOLDOWN = DataInputStream::readInt(param_1);
  ZombieCafe_RECIPE_SCALE = DataInputStream::readFloat();
  ZombieCafe_FLASH_COLOR = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_experienceLevels = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_experienceLevels + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_recipeUnlocks = operator_new__(iVar4 << 1);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar14 = (undefined2 *)((int)ZombieCafe_recipeUnlocks + iVar16 * 2);
    uVar3 = DataInputStream::readShort(param_1);
    *puVar14 = uVar3;
  }
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_zombieCaps = operator_new__(iVar4 << 1);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar14 = (undefined2 *)((int)ZombieCafe_zombieCaps + iVar16 * 2);
    uVar3 = DataInputStream::readShort(param_1);
    *puVar14 = uVar3;
  }
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_enemyReopenDurations = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_enemyReopenDurations + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  L_PrintLog("Constants::load()","Phase 9 completed");
  ZombieCafe_ENEMY_NOTIFIER_DURATION = DataInputStream::readInt(param_1);
  ZombieCafe_ENEMY_RATING_MODIFIER = DataInputStream::readFloat();
  DataInputStream::readUTF();
  String::~String(aSStack_17c);
  String::operator=((String *)&ZombieCafe_GLOBAL_DATA_FILE,"globalData.dat");
  pcVar11 = (char *)String::getBytes((String *)&ZombieCafe_GLOBAL_DATA_FILE);
  L_PrintLog("CHANGE GLOBAL FILE TO",pcVar11);
  free(pcVar11);
  ZombieCafe_TOUCH_SCROLL_DISTANCE = DataInputStream::readShort(param_1);
  ZombieCafe_TOUCH_LONG_TIME = DataInputStream::readInt(param_1);
  ZombieCafe_CHARACTER_FORM_HUMAN = DataInputStream::readInt(param_1);
  ZombieCafe_CHARACTER_FORM_ZOMBIE = DataInputStream::readInt(param_1);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FRIEND_LIST_SAVE_FILE,aSStack_174);
  String::~String(aSStack_174);
  ZombieCafe_BASE_COST_PER_MS_HUMAN = DataInputStream::readFloat();
  ZombieCafe_BASE_COST_PER_MS_ZOMBIE = DataInputStream::readFloat();
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_APP_NAME,aSStack_16c);
  String::~String(aSStack_16c);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FB_APP_KEY,aSStack_164);
  String::~String(aSStack_164);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FB_APP_SEC,aSStack_15c);
  String::~String(aSStack_15c);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FB_APP_URL,aSStack_154);
  String::~String(aSStack_154);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FB_BASE_URL,aSStack_14c);
  String::~String(aSStack_14c);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FB_RECIPE_ICON_BASE,aSStack_144);
  String::~String(aSStack_144);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FB_RECIPE_ICON_EXTENSION,aSStack_13c);
  String::~String(aSStack_13c);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_FB_APP_ICON,aSStack_134);
  String::~String(aSStack_134);
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_RATE_ME_URL,aSStack_12c);
  String::~String(aSStack_12c);
  ZombieCafe_SOUND_CHANNELS = DataInputStream::readByte(param_1);
  ZombieCafe_MUSIC_CHANNELS = DataInputStream::readByte(param_1);
  ZombieCafe_ENEMY_CHEF_CHARACTER = DataInputStream::readByte(param_1);
  ZombieCafe_ENEMY_BOSS_CHARACTER = DataInputStream::readByte(param_1);
  ZombieCafe_CHARACTER_HEAD_INDEX_FRONT = DataInputStream::readByte(param_1);
  ZombieCafe_CHARACTER_HEAD_INDEX_BACK = DataInputStream::readByte(param_1);
  ZombieCafe_INITIAL_TOXIN = DataInputStream::readByte(param_1);
  ZombieCafe_INITIAL_POPULARITY = DataInputStream::readFloat();
  ZombieCafe_INITIAL_CASH = DataInputStream::readInt(param_1);
  ZombieCafe_STARTING_TILE_INDEX = DataInputStream::readByte(param_1);
  ZombieCafe_MALE_NAME_COUNT = DataInputStream::readInt(param_1);
  ZombieCafe_FEMALE_NAME_COUNT = DataInputStream::readInt(param_1);
  ZombieCafe_ORDER_LIFE_SECONDS = DataInputStream::readInt(param_1);
  ZombieCafe_BEGIN_SIMULATE_TIME = DataInputStream::readInt(param_1);
  ZombieCafe_MAX_FRIENDS = DataInputStream::readInt(param_1);
  ZombieCafe_MAX_AWARDED_TOXIN_PER_MONTH = DataInputStream::readInt(param_1);
  ZombieCafe_EXPLOIT_GRACE_PERIOD_HOURS = DataInputStream::readByte(param_1);
  ZombieCafe_EXPLOIT_PAROLE_GRACE_PERIOD_HOURS = DataInputStream::readByte(param_1);
  ZombieCafe_EXPLOIT_MIN_PUNISH_HOURS = DataInputStream::readShort(param_1);
  ZombieCafe_EXPLOIT_MAX_PUNISH_HOURS = DataInputStream::readShort(param_1);
  ZombieCafe_EXPLOIT_TIME_MULTIPLIER = DataInputStream::readFloat();
  ZombieCafe_RATE_ME_LEVEL = DataInputStream::readInt(param_1);
  ZombieCafe_RATE_ME_STARS = DataInputStream::readFloat();
  DataInputStream::readUTF();
  String::operator=((String *)&ZombieCafe_DLC_IDS,aSStack_124);
  String::~String(aSStack_124);
  ZombieCafe_EXPLOIT_BUFFER_MS = DataInputStream::readInt(param_1);
  L_PrintLog("Constants::load()","Phase 10 completed");
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_MIN_LEVEL_THEME_AVAILABLE = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_MIN_LEVEL_THEME_AVAILABLE + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  ZombieCafe_BOSS_CHEF = DataInputStream::readInt(param_1);
  ZombieCafe_BOSS_THEME = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_BOSS_MINIONS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_BOSS_MINIONS + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  ZombieCafe_BOSS_MINIONS_TOTAL = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_BOSS_APPEARANCE_PROBABILITY = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_BOSS_APPEARANCE_PROBABILITY + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_BOSS_MULTIPLIER = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_BOSS_MULTIPLIER + iVar16 * 4);
    uVar5 = DataInputStream::readFloat();
    *puVar15 = uVar5;
  }
  ZombieCafe_NUM_ENEMY_THEMES = DataInputStream::readInt(param_1);
  ZombieCafe_DAYS_BETWEEN_TAKEOVER_ADS = DataInputStream::readInt(param_1);
  ZombieCafe_PRE_105_RECIPE_COUNT = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_UNLOCKABLE_ENEMY_CHEFS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_UNLOCKABLE_ENEMY_CHEFS + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_STAFF_EXPERIENCE_LEVELS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_STAFF_EXPERIENCE_LEVELS + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  ZombieCafe_MAX_CHARACTER_LEVEL = DataInputStream::readInt(param_1);
  ZombieCafe_SERVING_EXPERIENCE = DataInputStream::readInt(param_1);
  ZombieCafe_ZOMBIE_LEVEL_ENERGY_MULTIPLIER = DataInputStream::readFloat();
  ZombieCafe_FREQUENT_PURCHASE_LIMIT = DataInputStream::readInt(param_1);
  ZombieCafe_FREQUENT_PURCHASE_DURATION = DataInputStream::readInt(param_1);
  ZombieCafe_REMINDER_NOTIFICATION_TIMER = DataInputStream::readInt(param_1);
  ZombieCafe_MAGIC_FRIDGE_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_MAGIC_FRIDGE_MAX_MULTIPLIER = DataInputStream::readInt(param_1);
  ZombieCafe_RECIPE_RANK_COUNT = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_FEATURED_ITEMS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_FEATURED_ITEMS + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  ZombieCafe_FEATURED_ITEM_COUNT = DataInputStream::readInt(param_1);
  ZombieCafe_OBJECTIVE_COUNT = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_OBJECTIVE_TASK_COUNTS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_OBJECTIVE_TASK_COUNTS + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_OBJECTIVE_TASK_TYPES = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_OBJECTIVE_TASK_TYPES + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_OBJECTIVE_TASK_GOALS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_OBJECTIVE_TASK_GOALS + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  ZombieCafe_HIGH_SCORE_TIME_SPAN = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_XP_SCALER = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_XP_SCALER + iVar16 * 4);
    uVar5 = DataInputStream::readFloat();
    *puVar15 = uVar5;
  }
  ZombieCafe_CAFE_REOPEN_COST = DataInputStream::readInt(param_1);
  ZombieCafe_RARE_VALUE_MAX = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_RARE_VALUE_COLOR = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_RARE_VALUE_COLOR + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  ZombieCafe_RIPPLE_TIME = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_POWER_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_HEALTH_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_POWER_2_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_HEALTH_2_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_POWER_3_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_HEALTH_3_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_BOMB_INDEX = DataInputStream::readInt(param_1);
  ZombieCafe_TOMBSTONE_RECHARGE_COST = DataInputStream::readInt(param_1);
  iVar4 = DataInputStream::readShort(param_1);
  ZombieCafe_FB_CAMERA_DAILY_BONUS = operator_new__(iVar4 << 2);
  for (iVar16 = 0; iVar16 < iVar4; iVar16 = iVar16 + 1) {
    puVar15 = (undefined4 *)((int)ZombieCafe_FB_CAMERA_DAILY_BONUS + iVar16 * 4);
    uVar5 = DataInputStream::readInt(param_1);
    *puVar15 = uVar5;
  }
  ZombieCafe_RECIPE_COST = DataInputStream::readInt(param_1);
  ZombieCafe_RECIPE_VARIANT_COST = DataInputStream::readInt(param_1);
  ZombieCafe_RECIPE_RARE_COST = DataInputStream::readInt(param_1);
  ZombieCafe_MEETLOCKER_INITIAL_SIZE = DataInputStream::readInt(param_1);
  ZombieCafe_MEETLOCKER_EXTEND_COST = DataInputStream::readInt(param_1);
  ZombieCafe_MAX_DATA_ENTRY_LEVEL = DataInputStream::readInt(param_1);
  ZombieCafe_QUERY_SAVE_DATA_TIMEOUT = DataInputStream::readInt(param_1);
  FeastTask_FEAST_TIME_RATE = DataInputStream::readInt(param_1);
  L_PrintLog("Constants::load()","Constant loading completed!");
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


