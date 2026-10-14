/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002485a0 ZombieCafe::CreateIAProducts */

/* ZombieCafe::CreateIAProducts(ZombieCafe*) */

void __thiscall ZombieCafe::CreateIAProducts(ZombieCafe *this,ZombieCafe *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *__format;
  undefined1 *__dest;
  undefined1 *__dest_00;
  undefined1 *__dest_01;
  undefined1 *__dest_02;
  undefined1 *__dest_03;
  undefined1 *__dest_04;
  undefined1 *__dest_05;
  undefined1 *__dest_06;
  undefined1 *__dest_07;
  undefined1 *__dest_08;
  undefined1 *__dest_09;
  undefined1 *__dest_10;
  undefined1 *__dest_11;
  undefined1 *__dest_12;
  undefined1 *__dest_13;
  undefined1 *__dest_14;
  undefined1 *__dest_15;
  undefined1 *__dest_16;
  undefined1 *__dest_17;
  undefined1 *__dest_18;
  
  iVar3 = DAT_00248970;
  iVar2 = DAT_00248968;
  iVar1 = DAT_0024895c;
  puVar4 = *(undefined4 **)(DAT_00248958 + 0x2485ac);
  __dest = &stack0xffffffec + DAT_0024895c;
  __dest_00 = &stack0xffffffec + DAT_0024895c;
  __dest_01 = &stack0xffffffec + DAT_0024895c;
  __dest_02 = &stack0xffffffec + DAT_0024895c;
  __dest_03 = &stack0xffffffec + DAT_0024895c;
  __dest_04 = &stack0xffffffec + DAT_0024895c;
  __dest_05 = &stack0xffffffec + DAT_0024895c;
  __dest_06 = &stack0xffffffec + DAT_0024895c;
  __dest_07 = &stack0xffffffec + DAT_0024895c;
  __dest_08 = &stack0xffffffec + DAT_0024895c;
  __dest_09 = &stack0xffffffec + DAT_0024895c;
  __dest_10 = &stack0xffffffec + DAT_0024895c;
  __dest_11 = &stack0xffffffec + DAT_0024895c;
  __dest_12 = &stack0xffffffec + DAT_0024895c;
  __dest_13 = &stack0xffffffec + DAT_0024895c;
  __dest_14 = &stack0xffffffec + DAT_0024895c;
  __dest_15 = &stack0xffffffec + DAT_0024895c;
  __dest_16 = &stack0xffffffec + DAT_0024895c;
  __dest_17 = &stack0xffffffec + DAT_0024895c;
  __dest_18 = &stack0xffffffec + DAT_0024895c;
  *(undefined4 **)(&stack0xffffffec + DAT_00248960 + DAT_0024895c) = puVar4;
  *(undefined4 *)(&stack0xffffffec + DAT_00248964 + DAT_0024895c) = *puVar4;
  *(ZombieCafe **)(&stack0x000005c4 + DAT_0024895c) = param_1 + DAT_0024896c;
  *(undefined4 *)(*(int *)(&stack0x000005c4 + DAT_0024895c) + 4) = 0xffffffff;
  snprintf(&stack0xffffffec + iVar2 + iVar1,0x80,(char *)(iVar3 + 0x2485d8));
  snprintf(&stack0xffffffec + DAT_00248978 + iVar1,0x80,(char *)(DAT_00248974 + 0x2485e8));
  snprintf(&stack0xffffffec + DAT_00248980 + iVar1,0x400,(char *)(DAT_0024897c + 0x2485f6));
  snprintf(&stack0xffffffec + DAT_00248988 + iVar1,0x80,(char *)(DAT_00248984 + 0x248606));
  *(char **)(&stack0xffffffec + DAT_00248990 + iVar1) = (char *)(DAT_0024898c + 0x248614);
  snprintf(&stack0x00000b5c + iVar1,0x40,(char *)(DAT_0024898c + 0x248614));
  *(undefined4 *)(&stack0xffffffec + DAT_00248994 + iVar1) = DAT_00248928;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248994 + iVar1) + 4) = DAT_0024892c;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 99;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0x32;
  memcpy(__dest,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248968 + iVar1,0x80,(char *)(DAT_00248998 + 0x24866a));
  snprintf(&stack0xffffffec + DAT_00248978 + iVar1,0x80,(char *)(DAT_0024899c + 0x248678));
  snprintf(&stack0xffffffec + DAT_00248980 + iVar1,0x400,(char *)(DAT_002489a0 + 0x248686));
  snprintf(&stack0xffffffec + DAT_00248988 + iVar1,0x80,(char *)(DAT_002489a4 + 0x248696));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248990 + iVar1));
  iVar2 = DAT_002489a8;
  *(undefined4 *)(&stack0xffffffec + DAT_00248994 + iVar1) = DAT_00248930;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248994 + iVar1) + 4) = DAT_00248934;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 99;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0x7d;
  memcpy(__dest_00,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248968 + iVar1,0x80,(char *)(DAT_002489ac + 0x2486f4));
  snprintf(&stack0xffffffec + DAT_00248978 + iVar1,0x80,(char *)(DAT_002489b0 + 0x248702));
  snprintf(&stack0xffffffec + DAT_00248980 + iVar1,0x400,(char *)(DAT_002489b4 + 0x248710));
  snprintf(&stack0xffffffec + DAT_00248988 + iVar1,0x80,(char *)(DAT_002489b8 + 0x248720));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248990 + iVar1));
  __format = (char *)(iVar2 + 0x248742);
  *(undefined4 *)(&stack0xffffffec + DAT_00248994 + iVar1) = DAT_00248938;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248994 + iVar1) + 4) = DAT_0024893c;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 99;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0x15e;
  memcpy(__dest_01,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248968 + iVar1,0x80,(char *)(DAT_002489bc + 0x248780));
  snprintf(&stack0xffffffec + DAT_00248978 + iVar1,0x80,(char *)(DAT_002489c0 + 0x24878e));
  snprintf(&stack0xffffffec + DAT_00248980 + iVar1,0x400,(char *)(DAT_002489c4 + 0x24879c));
  snprintf(&stack0xffffffec + DAT_00248988 + iVar1,0x80,(char *)(DAT_002489c8 + 0x2487ac));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248990 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248994 + iVar1) = DAT_00248940;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248994 + iVar1) + 4) = DAT_00248944;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 99;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 800;
  memcpy(__dest_02,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248968 + iVar1,0x80,(char *)(DAT_002489cc + 0x24880a));
  snprintf(&stack0xffffffec + DAT_00248978 + iVar1,0x80,(char *)(DAT_002489d0 + 0x248818));
  snprintf(&stack0xffffffec + DAT_00248980 + iVar1,0x400,(char *)(DAT_002489d4 + 0x248826));
  snprintf(&stack0xffffffec + DAT_00248988 + iVar1,0x80,(char *)(DAT_002489d8 + 0x248836));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248990 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248994 + iVar1) = DAT_00248948;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248994 + iVar1) + 4) = DAT_0024894c;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 99;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 2000;
  memcpy(__dest_03,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248968 + iVar1,0x80,(char *)(DAT_002489dc + 0x248894));
  snprintf(&stack0xffffffec + DAT_00248978 + iVar1,0x80,(char *)(DAT_002489e0 + 0x2488a2));
  iVar2 = DAT_002489e4;
  snprintf(&stack0xffffffec + DAT_00248980 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248988 + iVar1,0x80,(char *)(iVar2 + 0x2488bc));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248990 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248994 + iVar1) = DAT_00248950;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248994 + iVar1) + 4) = DAT_00248954;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 5;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_04,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248968 + iVar1,0x80,(char *)(DAT_002489e8 + 0x24891e));
  snprintf(&stack0xffffffec + DAT_00248db4 + iVar1,0x80,(char *)(DAT_00248db0 + 0x2489f6));
  snprintf(&stack0xffffffec + DAT_00248db8 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248dbc + iVar1,0x80,(char *)(iVar2 + 0x2488bc));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248dc0 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248dc4 + iVar1) = DAT_00248d78;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248dc4 + iVar1) + 4) = DAT_00248d7c;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 6;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_05,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248dcc + iVar1,0x80,(char *)(DAT_00248dc8 + 0x248a6e));
  snprintf(&stack0xffffffec + DAT_00248db4 + iVar1,0x80,(char *)(DAT_00248dd0 + 0x248a7c));
  snprintf(&stack0xffffffec + DAT_00248db8 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248dbc + iVar1,0x80,(char *)(DAT_00248dd4 + 0x248a98));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248dc0 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248dc4 + iVar1) = DAT_00248d80;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248dc4 + iVar1) + 4) = DAT_00248d84;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 7;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_06,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248dcc + iVar1,0x80,(char *)(DAT_00248dd8 + 0x248af6));
  snprintf(&stack0xffffffec + DAT_00248db4 + iVar1,0x80,(char *)(DAT_00248ddc + 0x248b04));
  snprintf(&stack0xffffffec + DAT_00248db8 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248dbc + iVar1,0x80,(char *)(DAT_00248de0 + 0x248b20));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248dc0 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248dc4 + iVar1) = DAT_00248d88;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248dc4 + iVar1) + 4) = DAT_00248d8c;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 8;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_07,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248dcc + iVar1,0x80,(char *)(DAT_00248de4 + 0x248b7e));
  snprintf(&stack0xffffffec + DAT_00248db4 + iVar1,0x80,(char *)(DAT_00248de8 + 0x248b8c));
  snprintf(&stack0xffffffec + DAT_00248db8 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248dbc + iVar1,0x80,(char *)(DAT_00248dec + 0x248ba8));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248dc0 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248dc4 + iVar1) = DAT_00248d90;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248dc4 + iVar1) + 4) = DAT_00248d94;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 9;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_08,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248dcc + iVar1,0x80,(char *)(DAT_00248df0 + 0x248c06));
  snprintf(&stack0xffffffec + DAT_00248db4 + iVar1,0x80,(char *)(DAT_00248df4 + 0x248c14));
  snprintf(&stack0xffffffec + DAT_00248db8 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248dbc + iVar1,0x80,(char *)(DAT_00248df8 + 0x248c30));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248dc0 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248dc4 + iVar1) = DAT_00248d98;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248dc4 + iVar1) + 4) = DAT_00248d9c;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 10;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_09,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248dcc + iVar1,0x80,(char *)(DAT_00248dfc + 0x248c8e));
  snprintf(&stack0xffffffec + DAT_00248db4 + iVar1,0x80,(char *)(DAT_00248e00 + 0x248c9c));
  snprintf(&stack0xffffffec + DAT_00248db8 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248dbc + iVar1,0x80,(char *)(DAT_00248e04 + 0x248cb8));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248dc0 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248dc4 + iVar1) = DAT_00248da0;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248dc4 + iVar1) + 4) = DAT_00248da4;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0xb;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_10,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_00248dcc + iVar1,0x80,(char *)(DAT_00248e08 + 0x248d16));
  snprintf(&stack0xffffffec + DAT_00248db4 + iVar1,0x80,(char *)(DAT_00248e0c + 0x248d24));
  snprintf(&stack0xffffffec + DAT_00248db8 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00248dbc + iVar1,0x80,(char *)(DAT_00248e10 + 0x248d40));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_00248dc0 + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00248dc4 + iVar1) = DAT_00248da8;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00248dc4 + iVar1) + 4) = DAT_00248dac;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0xc;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_11,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_002491f4 + iVar1,0x80,(char *)(DAT_002491f0 + 0x248e3c));
  snprintf(&stack0xffffffec + DAT_002491fc + iVar1,0x80,(char *)(DAT_002491f8 + 0x248e4a));
  snprintf(&stack0xffffffec + DAT_00249200 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00249208 + iVar1,0x80,(char *)(DAT_00249204 + 0x248e66));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_0024920c + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00249210 + iVar1) = DAT_002491b8;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00249210 + iVar1) + 4) = DAT_002491bc;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0xd;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_12,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_002491f4 + iVar1,0x80,(char *)(DAT_00249214 + 0x248ec4));
  snprintf(&stack0xffffffec + DAT_002491fc + iVar1,0x80,(char *)(DAT_00249218 + 0x248ed2));
  snprintf(&stack0xffffffec + DAT_00249200 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00249208 + iVar1,0x80,(char *)(DAT_0024921c + 0x248eee));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_0024920c + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00249210 + iVar1) = DAT_002491c0;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00249210 + iVar1) + 4) = DAT_002491c4;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0xe;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_13,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_002491f4 + iVar1,0x80,(char *)(DAT_00249220 + 0x248f4c));
  snprintf(&stack0xffffffec + DAT_002491fc + iVar1,0x80,(char *)(DAT_00249224 + 0x248f5a));
  snprintf(&stack0xffffffec + DAT_00249200 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00249208 + iVar1,0x80,(char *)(DAT_00249228 + 0x248f76));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_0024920c + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00249210 + iVar1) = DAT_002491c8;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00249210 + iVar1) + 4) = DAT_002491cc;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0xf;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_14,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_002491f4 + iVar1,0x80,(char *)(DAT_0024922c + 0x248fd4));
  snprintf(&stack0xffffffec + DAT_002491fc + iVar1,0x80,(char *)(DAT_00249230 + 0x248fe2));
  snprintf(&stack0xffffffec + DAT_00249200 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00249208 + iVar1,0x80,(char *)(DAT_00249234 + 0x248ffe));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_0024920c + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00249210 + iVar1) = DAT_002491d0;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00249210 + iVar1) + 4) = DAT_002491d4;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0x10;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_15,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_002491f4 + iVar1,0x80,(char *)(DAT_00249238 + 0x24905c));
  snprintf(&stack0xffffffec + DAT_002491fc + iVar1,0x80,(char *)(DAT_0024923c + 0x24906a));
  snprintf(&stack0xffffffec + DAT_00249200 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00249208 + iVar1,0x80,(char *)(DAT_00249240 + 0x249086));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_0024920c + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00249210 + iVar1) = DAT_002491d8;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00249210 + iVar1) + 4) = DAT_002491dc;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0x11;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_16,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_002491f4 + iVar1,0x80,(char *)(DAT_00249244 + 0x2490e4));
  snprintf(&stack0xffffffec + DAT_002491fc + iVar1,0x80,(char *)(DAT_00249248 + 0x2490f2));
  snprintf(&stack0xffffffec + DAT_00249200 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00249208 + iVar1,0x80,(char *)(DAT_0024924c + 0x24910e));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_0024920c + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00249210 + iVar1) = DAT_002491e0;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00249210 + iVar1) + 4) = DAT_002491e4;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0x12;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_17,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  snprintf(&stack0xffffffec + DAT_002491f4 + iVar1,0x80,(char *)(DAT_00249250 + 0x24916c));
  snprintf(&stack0xffffffec + DAT_002491fc + iVar1,0x80,(char *)(DAT_00249254 + 0x24917a));
  snprintf(&stack0xffffffec + DAT_00249200 + iVar1,0x400,__format);
  snprintf(&stack0xffffffec + DAT_00249208 + iVar1,0x80,(char *)(DAT_00249258 + 0x249196));
  snprintf(&stack0x00000b5c + iVar1,0x40,*(char **)(&stack0xffffffec + DAT_0024920c + iVar1));
  *(undefined4 *)(&stack0xffffffec + DAT_00249210 + iVar1) = DAT_002491e8;
  *(undefined4 *)((int)(&stack0xffffffec + DAT_00249210 + iVar1) + 4) = DAT_002491ec;
  *(undefined4 *)(&stack0x000005cc + iVar1) = 0x13;
  *(undefined4 *)(&stack0x00000b9c + iVar1) = 0;
  memcpy(__dest_18,&stack0x000005d4 + iVar1,0x5d0);
  Vector<ZombieCafe::ZombieDlcEntry>::addElement
            (*(undefined4 *)(&stack0x000005c4 + iVar1),&stack0x000005c4 + iVar1,
             *(undefined4 *)(&stack0x000005cc + iVar1),*(undefined4 *)(&stack0x000005d0 + iVar1));
  if (*(int *)(&stack0xffffffec + DAT_002492b0 + iVar1) !=
      **(int **)(&stack0xffffffec + DAT_002492ac + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


