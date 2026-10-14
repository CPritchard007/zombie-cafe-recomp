/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229854 StatusNote::StatusNote */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00229894) */
/* WARNING: Removing unreachable block (ram,0x00229894) */
/* StatusNote::StatusNote(CafeObject*, unsigned char, String, int, long, bool) */

StatusNote * __thiscall
StatusNote::StatusNote
          (StatusNote *this,CafeObject *param_1,uint param_3,String *param_4,undefined4 param_5,
          undefined4 param_6,StatusNote param_7)

{
  int iVar1;
  int iVar2;
  BitmapTextElement *pBVar3;
  String *this_00;
  undefined2 uVar4;
  undefined4 uVar5;
  int unaff_r6;
  StatusNote local_34;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  CafeUIElement::CafeUIElement((CafeUIElement *)this,param_1);
  *(int *)this = *(int *)(DAT_002299e8 + 0x229870) + 8;
  iVar1 = CapcomApp::getInstance();
  local_34 = SUB41(param_3,0);
  iVar1 = *(int *)(iVar1 + 4);
  *(CafeObject **)(this + 4) = param_1;
  *(undefined4 *)(this + 0x28) = param_5;
  *(undefined4 *)(this + 0x18) = 0;
  this[8] = local_34;
  switch(param_3) {
  case 0:
    unaff_r6 = 0x4e;
    goto LAB_002298c4;
  case 1:
    unaff_r6 = 0x4d;
    goto LAB_002298c4;
  case 2:
    unaff_r6 = 0x24;
    goto LAB_002298c4;
  case 3:
    unaff_r6 = 8;
    goto LAB_002298c4;
  case 4:
    unaff_r6 = 0x4a;
    break;
  case 5:
  case 8:
    unaff_r6 = 0x48;
    break;
  case 6:
    unaff_r6 = 0x46;
    break;
  case 7:
    unaff_r6 = 0x49;
    break;
  default:
    if (3 < param_3) break;
LAB_002298c4:
    if (*(char *)(iVar1 + DAT_002299ec) == '\0') {
      String::String(aSStack_28,param_4);
      iVar2 = SmDev();
      uVar5 = *(undefined4 *)((*(int *)(iVar2 * 4 + DAT_002299f0 + 0x2298e0) + 0x136) * 4 + iVar1);
      pBVar3 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar3,aSStack_28,uVar5,param_6,1,1,10,0,0);
      this_00 = aSStack_28;
      *(BitmapTextElement **)(this + 0x1c) = pBVar3;
    }
    else {
      String::String(aSStack_20,param_4);
      pBVar3 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                (pBVar3,aSStack_20,*(undefined4 *)(iVar1 + DAT_002299f4),param_6,1,1,10,0,0);
      this_00 = aSStack_20;
      *(BitmapTextElement **)(this + 0x1c) = pBVar3;
    }
    String::~String(this_00);
    *(undefined4 *)(this + 0x24) = 0;
    goto LAB_0022996e;
  case 0xb:
    unaff_r6 = 0x45;
    break;
  case 0xc:
    unaff_r6 = 0x54;
  }
  if (param_7 == (StatusNote)0x0) {
    iVar2 = 0x47;
  }
  else {
    iVar2 = 0x4b;
  }
  uVar5 = PackedImage::getImage(*(PackedImage **)(iVar1 + DAT_002299f8),iVar2,false);
  *(undefined4 *)(this + 0x24) = uVar5;
  *(undefined4 *)(this + 0x1c) = 0;
LAB_0022996e:
  uVar5 = PackedImage::getImage(*(PackedImage **)(iVar1 + DAT_002299f8),unaff_r6,false);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x20) = uVar5;
  this[0x2c] = param_7;
  iVar1 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
  if (iVar1 == 1) {
    uVar4 = (undefined2)
            *(undefined4 *)(*(int *)(param_1 + 0x38) + (uint)(byte)param_1[0x34] * 4 + 4);
  }
  else {
    uVar4 = (undefined2)*(undefined4 *)(param_1 + 0x20);
  }
  *(undefined2 *)(this + 0x14) = uVar4;
  return this;
}


