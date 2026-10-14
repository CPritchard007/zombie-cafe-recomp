/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001016cc FriendMenuElement::setRecipe */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00101718) */
/* WARNING: Removing unreachable block (ram,0x00101718) */
/* FriendMenuElement::setRecipe(Recipe*, unsigned char) */

void __thiscall FriendMenuElement::setRecipe(FriendMenuElement *this,Recipe *param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  StringUtil aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  *(Recipe **)(this + 0x60) = param_1;
  iVar1 = CapcomApp::getInstance();
  piVar8 = *(int **)(this + 0x6c);
  iVar1 = *(int *)(iVar1 + 4);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  String::String(aSStack_c4,(String *)param_1);
  (*pcVar7)(piVar8,aSStack_c4);
  String::~String(aSStack_c4);
  (**(code **)(**(int **)(this + 0x90) + 0x20))(*(int **)(this + 0x90),1);
  switch((uint)param_2) {
  case 0:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    String::String(aSStack_bc,0);
    (*pcVar7)(piVar8,aSStack_bc);
    String::~String(aSStack_bc);
    *(undefined4 *)(*(int *)(this + 0x90) + 100) = 0;
    (**(code **)(**(int **)(this + 0x90) + 0x20))();
    goto switchD_00101718_default;
  case 1:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_b4);
    (*pcVar7)(piVar8,aSStack_b4);
    String::~String(aSStack_b4);
    iVar2 = *(int *)(this + 0x90);
    puVar4 = (undefined4 *)(*(int *)(this + 100) + 0xfc);
    break;
  case 2:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_ac);
    (*pcVar7)(piVar8,aSStack_ac);
    String::~String(aSStack_ac);
    iVar2 = *(int *)(this + 0x90);
    uVar5 = *(undefined4 *)(*(int *)(this + 100) + 0x10c);
    goto LAB_0010194a;
  case 3:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_a4);
    (*pcVar7)(piVar8,aSStack_a4);
    String::~String(aSStack_a4);
    iVar2 = *(int *)(this + 0x90);
    puVar4 = (undefined4 *)(*(int *)(this + 100) + 0xe4);
    break;
  case 4:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_9c);
    (*pcVar7)(piVar8,aSStack_9c);
    String::~String(aSStack_9c);
    iVar2 = *(int *)(this + 0x90);
    uVar5 = *(undefined4 *)(*(int *)(this + 100) + 0x104);
    goto LAB_0010194a;
  case 5:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_94);
    (*pcVar7)(piVar8,aSStack_94);
    String::~String(aSStack_94);
    iVar2 = *(int *)(this + 0x90);
    puVar4 = (undefined4 *)(*(int *)(this + 100) + 0xe0);
    break;
  case 6:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_8c);
    (*pcVar7)(piVar8,aSStack_8c);
    String::~String(aSStack_8c);
    iVar2 = *(int *)(this + 0x90);
    puVar4 = (undefined4 *)(*(int *)(this + 100) + 0xe8);
    break;
  case 7:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_84);
    (*pcVar7)(piVar8,aSStack_84);
    String::~String(aSStack_84);
    iVar2 = *(int *)(this + 0x90);
    puVar4 = (undefined4 *)(*(int *)(this + 100) + 0xec);
    break;
  case 8:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_7c);
    (*pcVar7)(piVar8,aSStack_7c);
    String::~String(aSStack_7c);
    iVar2 = *(int *)(this + 0x90);
    puVar4 = (undefined4 *)(*(int *)(this + 100) + 0xf4);
    break;
  case 9:
    piVar8 = *(int **)(this + 0x80);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    Vector<String>::elementAt((int)aSStack_74);
    (*pcVar7)(piVar8,aSStack_74);
    String::~String(aSStack_74);
    iVar2 = *(int *)(this + 0x90);
    uVar5 = *(undefined4 *)(*(int *)(this + 100) + 0x108);
    goto LAB_0010194a;
  default:
    goto switchD_00101718_default;
  }
  uVar5 = *puVar4;
LAB_0010194a:
  *(undefined4 *)(iVar2 + 100) = uVar5;
switchD_00101718_default:
  piVar8 = *(int **)(this + 0x90);
  if ((char)piVar8[5] != '\0') {
    iVar2 = CImage::getSize((CImage *)piVar8[0x19]);
    (**(code **)(*piVar8 + 0x18))(piVar8,iVar2 >> 0x10,(int)(short)iVar2);
  }
  iVar6 = (uint)*(ushort *)(param_1 + 0x12) * 10 + (uint)param_2;
  iVar2 = iVar6 >> 3;
  (**(code **)(**(int **)(this + 0x98) + 0x20))
            (*(int **)(this + 0x98),
             (int)(uint)*(byte *)(*(int *)(iVar1 + 0x1c) + iVar2) >> (iVar6 + iVar2 * -8 & 0xffU) &
             1);
  StringBuffer::StringBuffer(aSStack_34);
  uVar3 = Recipe::getCookTimeSeconds(param_1,param_2);
  StringUtil::createTimeString(aSStack_6c,uVar3,'\x02');
  StringBuffer::append(aSStack_34,aSStack_6c);
  String::~String((String *)aSStack_6c);
  String::String(aSStack_64,(char *)(DAT_00101b48 + 0x1019c4));
  StringBuffer::append(aSStack_34,aSStack_64);
  String::~String(aSStack_64);
  Recipe::getServings(param_1,param_2);
  String::valueOf((int)aSStack_5c);
  StringBuffer::append(aSStack_34,aSStack_5c);
  String::~String(aSStack_5c);
  String::String(aSStack_54,(char *)(DAT_00101b4c + 0x1019fa));
  StringBuffer::append(aSStack_34,aSStack_54);
  String::~String(aSStack_54);
  Recipe::getSellPrice(param_1,param_2);
  Recipe::getServings(param_1,param_2);
  String::valueOf((int)aSStack_4c);
  StringBuffer::append(aSStack_34,aSStack_4c);
  String::~String(aSStack_4c);
  piVar8 = *(int **)(this + 0x74);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  StringBuffer::toString();
  (*pcVar7)(piVar8,aSStack_44);
  String::~String(aSStack_44);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  piVar8 = *(int **)(this + 0x7c);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  String::valueOf((int)aSStack_3c);
  (*pcVar7)(piVar8,aSStack_3c);
  String::~String(aSStack_3c);
  *(undefined4 *)(*(int *)(this + 0x88) + 100) =
       *(undefined4 *)(*(short *)(param_1 + 0x14) * 4 + *(int *)(this + 0x68));
  (**(code **)(**(int **)(this + 0x94) + 0x20))
            (*(int **)(this + 0x94),*(int *)(this + 0x84) < (int)(uint)(byte)param_1[0x16]);
  return;
}


