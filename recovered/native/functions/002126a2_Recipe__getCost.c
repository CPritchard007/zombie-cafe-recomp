/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002126a2 Recipe::getCost */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002126b0) */
/* WARNING: Removing unreachable block (ram,0x002126b0) */
/* Recipe::getCost(unsigned char) const */

int __thiscall Recipe::getCost(Recipe *this,uchar param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)*(short *)(this + 8);
  switch(param_1) {
  case '\x03':
    iVar1 = getServings(this,'\x03');
    iVar2 = 0x5f;
    goto LAB_002126dc;
  case '\x04':
    iVar1 = getServings(this,'\x04');
    iVar2 = 0xb4;
LAB_002126dc:
    iVar1 = __divsi3(iVar2 * iVar1,100);
    iVar3 = iVar3 + iVar1;
    break;
  case '\x05':
    iVar3 = iVar3 << 1;
    break;
  default:
    break;
  case '\a':
    iVar3 = iVar3 * 3 >> 2;
  }
  return iVar3;
}


