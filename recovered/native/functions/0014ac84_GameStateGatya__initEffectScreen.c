/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014ac84 GameStateGatya::initEffectScreen */

/* WARNING: Control flow encountered bad instruction data */
/* GameStateGatya::initEffectScreen() */

void __thiscall GameStateGatya::initEffectScreen(GameStateGatya *this)

{
  CImage *pCVar1;
  ImageElement *this_00;
  GatyaEftImageElement *pGVar2;
  ScreenElement *pSVar3;
  undefined2 *puVar4;
  int iVar5;
  int extraout_r1;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  undefined8 uVar11;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s2_09;
  float extraout_s2_10;
  float extraout_s2_11;
  float extraout_s2_12;
  float extraout_s2_13;
  float extraout_s2_14;
  float extraout_s2_15;
  float extraout_s2_16;
  float extraout_s2_17;
  float extraout_s2_18;
  float extraout_s2_19;
  float extraout_s2_20;
  float extraout_s2_21;
  float extraout_s2_22;
  float extraout_s2_23;
  float extraout_s2_24;
  float extraout_s2_25;
  float extraout_s2_26;
  float extraout_s2_27;
  float extraout_s2_28;
  float extraout_s2_29;
  float extraout_s2_30;
  float extraout_s2_31;
  float extraout_s2_32;
  float extraout_s2_33;
  float extraout_s2_34;
  float extraout_s2_35;
  float extraout_s2_36;
  float extraout_s2_37;
  float extraout_s2_38;
  float extraout_s2_39;
  float extraout_s2_40;
  float extraout_s2_41;
  float extraout_s2_42;
  float extraout_s2_43;
  float extraout_s2_44;
  float extraout_s2_45;
  float extraout_s2_46;
  float extraout_s2_47;
  float extraout_s2_48;
  float extraout_s2_49;
  float extraout_s2_50;
  float extraout_s2_51;
  float extraout_s2_52;
  float extraout_s2_53;
  float extraout_s2_54;
  float extraout_s2_55;
  float extraout_s2_56;
  float extraout_s2_57;
  float extraout_s2_58;
  float extraout_s2_59;
  float extraout_s2_60;
  float extraout_s2_61;
  float extraout_s2_62;
  float extraout_s2_63;
  float extraout_s2_64;
  float extraout_s2_65;
  float extraout_s2_66;
  float extraout_s2_67;
  float extraout_s2_68;
  float extraout_s2_69;
  float extraout_s2_70;
  float extraout_s2_71;
  float extraout_s2_72;
  float extraout_s2_73;
  float extraout_s2_74;
  float extraout_s2_75;
  float extraout_s2_76;
  float extraout_s2_77;
  float extraout_s2_78;
  float extraout_s2_79;
  float extraout_s2_80;
  float extraout_s2_81;
  float extraout_s2_82;
  float extraout_s2_83;
  float extraout_s2_84;
  float extraout_s2_85;
  float extraout_s2_86;
  float extraout_s2_87;
  float extraout_s2_88;
  float extraout_s2_89;
  float extraout_s2_90;
  float extraout_s2_91;
  float extraout_s2_92;
  float extraout_s2_93;
  float extraout_s2_94;
  float extraout_s2_95;
  float extraout_s2_96;
  float extraout_s2_97;
  float extraout_s2_98;
  float extraout_s2_99;
  float extraout_s2_x00100;
  float extraout_s2_x00101;
  float extraout_s2_x00102;
  float extraout_s2_x00103;
  float extraout_s2_x00104;
  float extraout_s2_x00105;
  float extraout_s2_x00106;
  float extraout_s2_x00107;
  float extraout_s2_x00108;
  float extraout_s2_x00109;
  float extraout_s2_x00110;
  float extraout_s2_x00111;
  float extraout_s2_x00112;
  float extraout_s2_x00113;
  float extraout_s2_x00114;
  float extraout_s2_x00115;
  float extraout_s2_x00116;
  float extraout_s2_x00117;
  float extraout_s2_x00118;
  float extraout_s2_x00119;
  float extraout_s2_x00120;
  float extraout_s2_x00121;
  float extraout_s2_x00122;
  float extraout_s2_x00123;
  float extraout_s2_x00124;
  float extraout_s2_x00125;
  float extraout_s2_x00126;
  float extraout_s2_x00127;
  float extraout_s2_x00128;
  float extraout_s2_x00129;
  float extraout_s2_x00130;
  float extraout_s2_x00131;
  float extraout_s2_x00132;
  float extraout_s2_x00133;
  float extraout_s2_x00134;
  float extraout_s2_x00135;
  float extraout_s2_x00136;
  float extraout_s2_x00137;
  float extraout_s2_x00138;
  float extraout_s2_x00139;
  float extraout_s2_x00140;
  float extraout_s2_x00141;
  float extraout_s2_x00142;
  float extraout_s2_x00143;
  float extraout_s2_x00144;
  float extraout_s2_x00145;
  float extraout_s2_x00146;
  float extraout_s2_x00147;
  float extraout_s2_x00148;
  float extraout_s2_x00149;
  float extraout_s2_x00150;
  float extraout_s2_x00151;
  float extraout_s2_x00152;
  float extraout_s2_x00153;
  float extraout_s2_x00154;
  float extraout_s2_x00155;
  float extraout_s2_x00156;
  float extraout_s2_x00157;
  float extraout_s2_x00158;
  float extraout_s2_x00159;
  float extraout_s2_x00160;
  float extraout_s2_x00161;
  float extraout_s2_x00162;
  float extraout_s2_x00163;
  float extraout_s2_x00164;
  float extraout_s2_x00165;
  float extraout_s2_x00166;
  float extraout_s2_x00167;
  float extraout_s2_x00168;
  float extraout_s2_x00169;
  float extraout_s2_x00170;
  float extraout_s2_x00171;
  float extraout_s2_x00172;
  float extraout_s2_x00173;
  float extraout_s2_x00174;
  float extraout_s2_x00175;
  float extraout_s2_x00176;
  float extraout_s2_x00177;
  float extraout_s2_x00178;
  float extraout_s2_x00179;
  float extraout_s2_x00180;
  float extraout_s2_x00181;
  float extraout_s2_x00182;
  float extraout_s2_x00183;
  float extraout_s2_x00184;
  float extraout_s2_x00185;
  float extraout_s2_x00186;
  float extraout_s2_x00187;
  float extraout_s2_x00188;
  float extraout_s2_x00189;
  float extraout_s2_x00190;
  float extraout_s2_x00191;
  float extraout_s2_x00192;
  float extraout_s2_x00193;
  float extraout_s2_x00194;
  float extraout_s2_x00195;
  float extraout_s2_x00196;
  float extraout_s2_x00197;
  float extraout_s2_x00198;
  float extraout_s2_x00199;
  float extraout_s2_x00200;
  float extraout_s2_x00201;
  float extraout_s2_x00202;
  float extraout_s2_x00203;
  float extraout_s2_x00204;
  float extraout_s2_x00205;
  float extraout_s2_x00206;
  float extraout_s2_x00207;
  float extraout_s2_x00208;
  float extraout_s2_x00209;
  float extraout_s2_x00210;
  float extraout_s2_x00211;
  float extraout_s2_x00212;
  float extraout_s2_x00213;
  float extraout_s2_x00214;
  float extraout_s2_x00215;
  float extraout_s2_x00216;
  float extraout_s2_x00217;
  float extraout_s2_x00218;
  float extraout_s2_x00219;
  float extraout_s2_x00220;
  float extraout_s2_x00221;
  float extraout_s2_x00222;
  float extraout_s2_x00223;
  float extraout_s2_x00224;
  float extraout_s2_x00225;
  float extraout_s2_x00226;
  float extraout_s2_x00227;
  float extraout_s2_x00228;
  float extraout_s2_x00229;
  float extraout_s2_x00230;
  float extraout_s2_x00231;
  float extraout_s2_x00232;
  float extraout_s2_x00233;
  float extraout_s2_x00234;
  float extraout_s2_x00235;
  float extraout_s2_x00236;
  float extraout_s2_x00237;
  float extraout_s2_x00238;
  float extraout_s2_x00239;
  float extraout_s2_x00240;
  float extraout_s2_x00241;
  float extraout_s2_x00242;
  float extraout_s2_x00243;
  float extraout_s2_x00244;
  float extraout_s2_x00245;
  float extraout_s2_x00246;
  float extraout_s2_x00247;
  float extraout_s2_x00248;
  float extraout_s2_x00249;
  float extraout_s2_x00250;
  float extraout_s2_x00251;
  float extraout_s2_x00252;
  float extraout_s2_x00253;
  float extraout_s2_x00254;
  float extraout_s2_x00255;
  float extraout_s2_x00256;
  float extraout_s2_x00257;
  float extraout_s2_x00258;
  float extraout_s2_x00259;
  float extraout_s2_x00260;
  float extraout_s2_x00261;
  float extraout_s2_x00262;
  float extraout_s2_x00263;
  float extraout_s2_x00264;
  float extraout_s2_x00265;
  float extraout_s2_x00266;
  float extraout_s2_x00267;
  float extraout_s2_x00268;
  float extraout_s2_x00269;
  float extraout_s2_x00270;
  float extraout_s2_x00271;
  float extraout_s2_x00272;
  float extraout_s2_x00273;
  float extraout_s2_x00274;
  float extraout_s2_x00275;
  float extraout_s2_x00276;
  float extraout_s2_x00277;
  float extraout_s2_x00278;
  float extraout_s2_x00279;
  float extraout_s2_x00280;
  float extraout_s2_x00281;
  float extraout_s2_x00282;
  float extraout_s2_x00283;
  float extraout_s2_x00284;
  float extraout_s2_x00285;
  float extraout_s2_x00286;
  float extraout_s2_x00287;
  float extraout_s2_x00288;
  float extraout_s2_x00289;
  float extraout_s2_x00290;
  float extraout_s2_x00291;
  float extraout_s2_x00292;
  float extraout_s2_x00293;
  float extraout_s2_x00294;
  float extraout_s2_x00295;
  float extraout_s2_x00296;
  float extraout_s2_x00297;
  float extraout_s2_x00298;
  float extraout_s2_x00299;
  float extraout_s2_x00300;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float extraout_s3_08;
  float extraout_s3_09;
  float extraout_s3_10;
  float extraout_s3_11;
  float extraout_s3_12;
  float extraout_s3_13;
  float extraout_s3_14;
  float extraout_s3_15;
  float extraout_s3_16;
  float extraout_s3_17;
  float extraout_s3_18;
  float extraout_s3_19;
  float extraout_s3_20;
  float extraout_s3_21;
  float extraout_s3_22;
  float extraout_s3_23;
  float extraout_s3_24;
  float extraout_s3_25;
  float extraout_s3_26;
  float extraout_s3_27;
  float extraout_s3_28;
  float extraout_s3_29;
  float extraout_s3_30;
  float extraout_s3_31;
  float extraout_s3_32;
  float extraout_s3_33;
  float extraout_s3_34;
  float extraout_s3_35;
  float extraout_s3_36;
  float extraout_s3_37;
  float extraout_s3_38;
  float extraout_s3_39;
  float extraout_s3_40;
  float extraout_s3_41;
  float extraout_s3_42;
  float extraout_s3_43;
  float extraout_s3_44;
  float extraout_s3_45;
  float extraout_s3_46;
  float extraout_s3_47;
  float extraout_s3_48;
  float extraout_s3_49;
  float extraout_s3_50;
  float extraout_s3_51;
  float extraout_s3_52;
  float extraout_s3_53;
  float extraout_s3_54;
  float extraout_s3_55;
  float extraout_s3_56;
  float extraout_s3_57;
  float extraout_s3_58;
  float extraout_s3_59;
  float extraout_s3_60;
  float extraout_s3_61;
  float extraout_s3_62;
  float extraout_s3_63;
  float extraout_s3_64;
  float extraout_s3_65;
  float extraout_s3_66;
  float extraout_s3_67;
  float extraout_s3_68;
  float extraout_s3_69;
  float extraout_s3_70;
  float extraout_s3_71;
  float extraout_s3_72;
  float extraout_s3_73;
  float extraout_s3_74;
  float extraout_s3_75;
  float extraout_s3_76;
  float extraout_s3_77;
  float extraout_s3_78;
  float extraout_s3_79;
  float extraout_s3_80;
  float extraout_s3_81;
  float extraout_s3_82;
  float extraout_s3_83;
  float extraout_s3_84;
  float extraout_s3_85;
  float extraout_s3_86;
  float extraout_s3_87;
  float extraout_s3_88;
  float extraout_s3_89;
  float extraout_s3_90;
  float extraout_s3_91;
  float extraout_s3_92;
  float extraout_s3_93;
  float extraout_s3_94;
  float extraout_s3_95;
  float extraout_s3_96;
  float extraout_s3_97;
  float extraout_s3_98;
  float extraout_s3_99;
  float extraout_s3_x00100;
  float extraout_s3_x00101;
  float extraout_s3_x00102;
  float extraout_s3_x00103;
  float extraout_s3_x00104;
  float extraout_s3_x00105;
  float extraout_s3_x00106;
  float extraout_s3_x00107;
  float extraout_s3_x00108;
  float extraout_s3_x00109;
  float extraout_s3_x00110;
  float extraout_s3_x00111;
  float extraout_s3_x00112;
  float extraout_s3_x00113;
  float extraout_s3_x00114;
  float extraout_s3_x00115;
  float extraout_s3_x00116;
  float extraout_s3_x00117;
  float extraout_s3_x00118;
  float extraout_s3_x00119;
  float extraout_s3_x00120;
  float extraout_s3_x00121;
  float extraout_s3_x00122;
  float extraout_s3_x00123;
  float extraout_s3_x00124;
  float extraout_s3_x00125;
  float extraout_s3_x00126;
  float extraout_s3_x00127;
  float extraout_s3_x00128;
  float extraout_s3_x00129;
  float extraout_s3_x00130;
  float extraout_s3_x00131;
  float extraout_s3_x00132;
  float extraout_s3_x00133;
  float extraout_s3_x00134;
  float extraout_s3_x00135;
  float extraout_s3_x00136;
  float extraout_s3_x00137;
  float extraout_s3_x00138;
  float extraout_s3_x00139;
  float extraout_s3_x00140;
  float extraout_s3_x00141;
  float extraout_s3_x00142;
  float extraout_s3_x00143;
  float extraout_s3_x00144;
  float extraout_s3_x00145;
  float extraout_s3_x00146;
  float extraout_s3_x00147;
  float extraout_s3_x00148;
  float extraout_s3_x00149;
  float extraout_s3_x00150;
  float extraout_s3_x00151;
  float extraout_s3_x00152;
  float extraout_s3_x00153;
  float extraout_s3_x00154;
  float extraout_s3_x00155;
  float extraout_s3_x00156;
  float extraout_s3_x00157;
  float extraout_s3_x00158;
  float extraout_s3_x00159;
  float extraout_s3_x00160;
  float extraout_s3_x00161;
  float extraout_s3_x00162;
  float extraout_s3_x00163;
  float extraout_s3_x00164;
  float extraout_s3_x00165;
  float extraout_s3_x00166;
  float extraout_s3_x00167;
  float extraout_s3_x00168;
  float extraout_s3_x00169;
  float extraout_s3_x00170;
  float extraout_s3_x00171;
  float extraout_s3_x00172;
  float extraout_s3_x00173;
  float extraout_s3_x00174;
  float extraout_s3_x00175;
  float extraout_s3_x00176;
  float extraout_s3_x00177;
  float extraout_s3_x00178;
  float extraout_s3_x00179;
  float extraout_s3_x00180;
  float extraout_s3_x00181;
  float extraout_s3_x00182;
  float extraout_s3_x00183;
  float extraout_s3_x00184;
  float extraout_s3_x00185;
  float extraout_s3_x00186;
  float extraout_s3_x00187;
  float extraout_s3_x00188;
  float extraout_s3_x00189;
  float extraout_s3_x00190;
  float extraout_s3_x00191;
  float extraout_s3_x00192;
  float extraout_s3_x00193;
  float extraout_s3_x00194;
  float extraout_s3_x00195;
  float extraout_s3_x00196;
  float extraout_s3_x00197;
  float extraout_s3_x00198;
  float extraout_s3_x00199;
  float extraout_s3_x00200;
  float extraout_s3_x00201;
  float extraout_s3_x00202;
  float extraout_s3_x00203;
  float extraout_s3_x00204;
  float extraout_s3_x00205;
  float extraout_s3_x00206;
  float extraout_s3_x00207;
  float extraout_s3_x00208;
  float extraout_s3_x00209;
  float extraout_s3_x00210;
  float extraout_s3_x00211;
  float extraout_s3_x00212;
  float extraout_s3_x00213;
  float extraout_s3_x00214;
  float extraout_s3_x00215;
  float extraout_s3_x00216;
  float extraout_s3_x00217;
  float extraout_s3_x00218;
  float extraout_s3_x00219;
  float extraout_s3_x00220;
  float extraout_s3_x00221;
  float extraout_s3_x00222;
  float extraout_s3_x00223;
  float extraout_s3_x00224;
  float extraout_s3_x00225;
  float extraout_s3_x00226;
  float extraout_s3_x00227;
  float extraout_s3_x00228;
  float extraout_s3_x00229;
  float extraout_s3_x00230;
  float extraout_s3_x00231;
  float extraout_s3_x00232;
  float extraout_s3_x00233;
  float extraout_s3_x00234;
  float extraout_s3_x00235;
  float extraout_s3_x00236;
  float extraout_s3_x00237;
  float extraout_s3_x00238;
  float extraout_s3_x00239;
  float extraout_s3_x00240;
  float extraout_s3_x00241;
  float extraout_s3_x00242;
  float extraout_s3_x00243;
  float extraout_s3_x00244;
  float extraout_s3_x00245;
  float extraout_s3_x00246;
  float extraout_s3_x00247;
  float extraout_s3_x00248;
  float extraout_s3_x00249;
  float extraout_s3_x00250;
  float extraout_s3_x00251;
  float extraout_s3_x00252;
  float extraout_s3_x00253;
  float extraout_s3_x00254;
  float extraout_s3_x00255;
  float extraout_s3_x00256;
  float extraout_s3_x00257;
  float extraout_s3_x00258;
  float extraout_s3_x00259;
  float extraout_s3_x00260;
  float extraout_s3_x00261;
  float extraout_s3_x00262;
  float extraout_s3_x00263;
  float extraout_s3_x00264;
  float extraout_s3_x00265;
  float extraout_s3_x00266;
  float extraout_s3_x00267;
  float extraout_s3_x00268;
  float extraout_s3_x00269;
  float extraout_s3_x00270;
  float extraout_s3_x00271;
  float extraout_s3_x00272;
  float extraout_s3_x00273;
  float extraout_s3_x00274;
  float extraout_s3_x00275;
  float extraout_s3_x00276;
  float extraout_s3_x00277;
  float extraout_s3_x00278;
  float extraout_s3_x00279;
  float extraout_s3_x00280;
  float extraout_s3_x00281;
  float extraout_s3_x00282;
  float extraout_s3_x00283;
  float extraout_s3_x00284;
  float extraout_s3_x00285;
  float extraout_s3_x00286;
  float extraout_s3_x00287;
  float extraout_s3_x00288;
  float extraout_s3_x00289;
  float extraout_s3_x00290;
  float extraout_s3_x00291;
  float extraout_s3_x00292;
  float extraout_s3_x00293;
  float extraout_s3_x00294;
  float extraout_s3_x00295;
  float extraout_s3_x00296;
  float extraout_s3_x00297;
  float extraout_s3_x00298;
  float extraout_s3_x00299;
  float extraout_s3_x00300;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s4_02;
  float extraout_s4_03;
  float extraout_s4_04;
  float extraout_s4_05;
  float extraout_s4_06;
  float extraout_s4_07;
  float extraout_s4_08;
  float extraout_s4_09;
  float extraout_s4_10;
  float extraout_s4_11;
  float extraout_s4_12;
  float extraout_s4_13;
  float extraout_s4_14;
  float extraout_s4_15;
  float extraout_s4_16;
  float extraout_s4_17;
  float extraout_s4_18;
  float extraout_s4_19;
  float extraout_s4_20;
  float extraout_s4_21;
  float extraout_s4_22;
  float extraout_s4_23;
  float extraout_s4_24;
  float extraout_s4_25;
  float extraout_s4_26;
  float extraout_s4_27;
  float extraout_s4_28;
  float extraout_s4_29;
  float extraout_s4_30;
  float extraout_s4_31;
  float extraout_s4_32;
  float extraout_s4_33;
  float extraout_s4_34;
  float extraout_s4_35;
  float extraout_s4_36;
  float extraout_s4_37;
  float extraout_s4_38;
  float extraout_s4_39;
  float extraout_s4_40;
  float extraout_s4_41;
  float extraout_s4_42;
  float extraout_s4_43;
  float extraout_s4_44;
  float extraout_s4_45;
  float extraout_s4_46;
  float extraout_s4_47;
  float extraout_s4_48;
  float extraout_s4_49;
  float extraout_s4_50;
  float extraout_s4_51;
  float extraout_s4_52;
  float extraout_s4_53;
  float extraout_s4_54;
  float extraout_s4_55;
  float extraout_s4_56;
  float extraout_s4_57;
  float extraout_s4_58;
  float extraout_s4_59;
  float extraout_s4_60;
  float extraout_s4_61;
  float extraout_s4_62;
  float extraout_s4_63;
  float extraout_s4_64;
  float extraout_s4_65;
  float extraout_s4_66;
  float extraout_s4_67;
  float extraout_s4_68;
  float extraout_s4_69;
  float extraout_s4_70;
  float extraout_s4_71;
  float extraout_s4_72;
  float extraout_s4_73;
  float extraout_s4_74;
  float extraout_s4_75;
  float extraout_s4_76;
  float extraout_s4_77;
  float extraout_s4_78;
  float extraout_s4_79;
  float extraout_s4_80;
  float extraout_s4_81;
  float extraout_s4_82;
  float extraout_s4_83;
  float extraout_s4_84;
  float extraout_s4_85;
  float extraout_s4_86;
  float extraout_s4_87;
  float extraout_s4_88;
  float extraout_s4_89;
  float extraout_s4_90;
  float extraout_s4_91;
  float extraout_s4_92;
  float extraout_s4_93;
  float extraout_s4_94;
  float extraout_s4_95;
  float extraout_s4_96;
  float extraout_s4_97;
  float extraout_s4_98;
  float extraout_s4_99;
  float extraout_s4_x00100;
  float extraout_s4_x00101;
  float extraout_s4_x00102;
  float extraout_s4_x00103;
  float extraout_s4_x00104;
  float extraout_s4_x00105;
  float extraout_s4_x00106;
  float extraout_s4_x00107;
  float extraout_s4_x00108;
  float extraout_s4_x00109;
  float extraout_s4_x00110;
  float extraout_s4_x00111;
  float extraout_s4_x00112;
  float extraout_s4_x00113;
  float extraout_s4_x00114;
  float extraout_s4_x00115;
  float extraout_s4_x00116;
  float extraout_s4_x00117;
  float extraout_s4_x00118;
  float extraout_s4_x00119;
  float extraout_s4_x00120;
  float extraout_s4_x00121;
  float extraout_s4_x00122;
  float extraout_s4_x00123;
  float extraout_s4_x00124;
  float extraout_s4_x00125;
  float extraout_s4_x00126;
  float extraout_s4_x00127;
  float extraout_s4_x00128;
  float extraout_s4_x00129;
  float extraout_s4_x00130;
  float extraout_s4_x00131;
  float extraout_s4_x00132;
  float extraout_s4_x00133;
  float extraout_s4_x00134;
  float extraout_s4_x00135;
  float extraout_s4_x00136;
  float extraout_s4_x00137;
  float extraout_s4_x00138;
  float extraout_s4_x00139;
  float extraout_s4_x00140;
  float extraout_s4_x00141;
  float extraout_s4_x00142;
  float extraout_s4_x00143;
  float extraout_s4_x00144;
  float extraout_s4_x00145;
  float extraout_s4_x00146;
  float extraout_s4_x00147;
  float extraout_s4_x00148;
  float extraout_s4_x00149;
  float extraout_s4_x00150;
  float extraout_s4_x00151;
  float extraout_s4_x00152;
  float extraout_s4_x00153;
  float extraout_s4_x00154;
  float extraout_s4_x00155;
  float extraout_s4_x00156;
  float extraout_s4_x00157;
  float extraout_s4_x00158;
  float extraout_s4_x00159;
  float extraout_s4_x00160;
  float extraout_s4_x00161;
  float extraout_s4_x00162;
  float extraout_s4_x00163;
  float extraout_s4_x00164;
  float extraout_s4_x00165;
  float extraout_s4_x00166;
  float extraout_s4_x00167;
  float extraout_s4_x00168;
  float extraout_s4_x00169;
  float extraout_s4_x00170;
  float extraout_s4_x00171;
  float extraout_s4_x00172;
  float extraout_s4_x00173;
  float extraout_s4_x00174;
  float extraout_s4_x00175;
  float extraout_s4_x00176;
  float extraout_s4_x00177;
  float extraout_s4_x00178;
  float extraout_s4_x00179;
  float extraout_s4_x00180;
  float extraout_s4_x00181;
  float extraout_s4_x00182;
  float extraout_s4_x00183;
  float extraout_s4_x00184;
  float extraout_s4_x00185;
  float extraout_s4_x00186;
  float extraout_s4_x00187;
  float extraout_s4_x00188;
  float extraout_s4_x00189;
  float extraout_s4_x00190;
  float extraout_s4_x00191;
  float extraout_s4_x00192;
  float extraout_s4_x00193;
  float extraout_s4_x00194;
  float extraout_s4_x00195;
  float extraout_s4_x00196;
  float extraout_s4_x00197;
  float extraout_s4_x00198;
  float extraout_s4_x00199;
  float extraout_s4_x00200;
  float extraout_s4_x00201;
  float extraout_s4_x00202;
  float extraout_s4_x00203;
  float extraout_s4_x00204;
  float extraout_s4_x00205;
  float extraout_s4_x00206;
  float extraout_s4_x00207;
  float extraout_s4_x00208;
  float extraout_s4_x00209;
  float extraout_s4_x00210;
  float extraout_s4_x00211;
  float extraout_s4_x00212;
  float extraout_s4_x00213;
  float extraout_s4_x00214;
  float extraout_s4_x00215;
  float extraout_s4_x00216;
  float extraout_s4_x00217;
  float extraout_s4_x00218;
  float extraout_s4_x00219;
  float extraout_s4_x00220;
  float extraout_s4_x00221;
  float extraout_s4_x00222;
  float extraout_s4_x00223;
  float extraout_s4_x00224;
  float extraout_s4_x00225;
  float extraout_s4_x00226;
  float extraout_s4_x00227;
  float extraout_s4_x00228;
  float extraout_s4_x00229;
  float extraout_s4_x00230;
  float extraout_s4_x00231;
  float extraout_s4_x00232;
  float extraout_s4_x00233;
  float extraout_s4_x00234;
  float extraout_s4_x00235;
  float extraout_s4_x00236;
  float extraout_s4_x00237;
  float extraout_s4_x00238;
  float extraout_s4_x00239;
  float extraout_s4_x00240;
  float extraout_s4_x00241;
  float extraout_s4_x00242;
  float extraout_s4_x00243;
  float extraout_s4_x00244;
  float extraout_s4_x00245;
  float extraout_s4_x00246;
  float extraout_s4_x00247;
  float extraout_s4_x00248;
  float extraout_s4_x00249;
  float extraout_s4_x00250;
  float extraout_s4_x00251;
  float extraout_s4_x00252;
  float extraout_s4_x00253;
  float extraout_s4_x00254;
  float extraout_s4_x00255;
  float extraout_s4_x00256;
  float extraout_s4_x00257;
  float extraout_s4_x00258;
  float extraout_s4_x00259;
  float extraout_s4_x00260;
  float extraout_s4_x00261;
  float extraout_s4_x00262;
  float extraout_s4_x00263;
  float extraout_s4_x00264;
  float extraout_s4_x00265;
  float extraout_s4_x00266;
  float extraout_s4_x00267;
  float extraout_s4_x00268;
  float extraout_s4_x00269;
  float extraout_s4_x00270;
  float extraout_s4_x00271;
  float extraout_s4_x00272;
  float extraout_s4_x00273;
  float extraout_s4_x00274;
  float extraout_s4_x00275;
  float extraout_s4_x00276;
  float extraout_s4_x00277;
  float extraout_s4_x00278;
  float extraout_s4_x00279;
  float extraout_s4_x00280;
  float extraout_s4_x00281;
  float extraout_s4_x00282;
  float extraout_s4_x00283;
  float extraout_s4_x00284;
  float extraout_s4_x00285;
  float extraout_s4_x00286;
  float extraout_s4_x00287;
  float extraout_s4_x00288;
  float extraout_s4_x00289;
  float extraout_s4_x00290;
  float extraout_s4_x00291;
  float extraout_s4_x00292;
  float extraout_s4_x00293;
  float extraout_s4_x00294;
  float extraout_s4_x00295;
  float extraout_s4_x00296;
  float extraout_s4_x00297;
  float extraout_s4_x00298;
  float extraout_s4_x00299;
  float extraout_s4_x00300;
  bool bVar12;
  
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xf,false);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar1,'\x12',true);
  *(ImageElement **)(this + 0x1e8) = this_00;
  uVar11 = (*pcVar6)(piVar8,this_00);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x1e8),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  ImageElement::setColor(*(ImageElement **)(this + 0x1e8),0xff000000);
  if (*(int *)(this + DAT_0014b0c4) - 1U < 2) {
    FUN_0014bd5e();
  }
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x10,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1ac) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2,extraout_s3,extraout_s4,0,0,
                      DAT_0014b0cc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_00,extraout_s3_00,
                      extraout_s4_00,DAT_0014b0d4,0,DAT_0014b0cc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_01,extraout_s3_01,
                      extraout_s4_01,DAT_0014b0dc,0,DAT_0014b0cc);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_02,extraout_s3_02,extraout_s4_02,
             DAT_0014b0e0,0,DAT_0014b0cc);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),10,false)
  ;
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1a4) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_03,extraout_s3_03,
                      extraout_s4_03,0,0,DAT_0014b0cc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_04,extraout_s3_04,
                      extraout_s4_04,DAT_0014b0e8,0,DAT_0014b0cc);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_05,extraout_s3_05,extraout_s4_05,
             DAT_0014b0dc,0,DAT_0014b0cc);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xb,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x15c) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_06,extraout_s3_06,
                      extraout_s4_06,0,0,DAT_0014b0cc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_07,extraout_s3_07,
                      extraout_s4_07,DAT_0014b0ec,0,DAT_0014b0cc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_08,extraout_s3_08,
                      extraout_s4_08,DAT_0014b0ec,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_09,extraout_s3_09,
                      extraout_s4_09,DAT_0014b0f8,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_10,extraout_s3_10,
                      extraout_s4_10,DAT_0014b0fc,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_11,extraout_s3_11,
                      extraout_s4_11,DAT_0014b108,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_12,extraout_s3_12,
                      extraout_s4_12,DAT_0014b10c,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_13,extraout_s3_13,
                      extraout_s4_13,DAT_0014b110,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_14,extraout_s3_14,
                      extraout_s4_14,DAT_0014b114,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_15,extraout_s3_15,
                      extraout_s4_15,DAT_0014b118,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_16,extraout_s3_16,
                      extraout_s4_16,DAT_0014b120,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_17,extraout_s3_17,
                      extraout_s4_17,DAT_0014b124,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_18,extraout_s3_18,
                      extraout_s4_18,DAT_0014b128,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_19,extraout_s3_19,
                      extraout_s4_19,DAT_0014b12c,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_20,extraout_s3_20,
                      extraout_s4_20,DAT_0014b130,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_21,extraout_s3_21,
                      extraout_s4_21,DAT_0014b134,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_22,extraout_s3_22,
                      extraout_s4_22,DAT_0014b138,DAT_0014b0f0,DAT_0014b0f4);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_23,extraout_s3_23,
                      extraout_s4_23,DAT_0014b13c,DAT_0014b0f0,DAT_0014b0f4);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_24,extraout_s3_24,extraout_s4_24,
             DAT_0014b140,DAT_0014b0f0,DAT_0014b0f4);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xc,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x194) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_25,extraout_s3_25,
                      extraout_s4_25,0,0,DAT_0014b0cc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_26,extraout_s3_26,
                      extraout_s4_26,DAT_0014b0ec,0,DAT_0014b0cc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_27,extraout_s3_27,
                      extraout_s4_27,DAT_0014b0ec,DAT_0014b144,DAT_0014b148);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_28,extraout_s3_28,
                      extraout_s4_28,DAT_0014b548,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_29,extraout_s3_29,
                      extraout_s4_29,DAT_0014b554,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_30,extraout_s3_30,
                      extraout_s4_30,DAT_0014b560,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_31,extraout_s3_31,
                      extraout_s4_31,DAT_0014b564,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_32,extraout_s3_32,
                      extraout_s4_32,DAT_0014b568,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_33,extraout_s3_33,
                      extraout_s4_33,DAT_0014b56c,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_34,extraout_s3_34,
                      extraout_s4_34,DAT_0014b578,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_35,extraout_s3_35,
                      extraout_s4_35,DAT_0014b584,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_36,extraout_s3_36,
                      extraout_s4_36,DAT_0014b588,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_37,extraout_s3_37,
                      extraout_s4_37,DAT_0014b58c,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_38,extraout_s3_38,
                      extraout_s4_38,DAT_0014b590,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_39,extraout_s3_39,
                      extraout_s4_39,DAT_0014b594,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_40,extraout_s3_40,
                      extraout_s4_40,DAT_0014b598,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_41,extraout_s3_41,
                      extraout_s4_41,DAT_0014b59c,DAT_0014b54c,DAT_0014b550);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_42,extraout_s3_42,
                      extraout_s4_42,DAT_0014b5a0,DAT_0014b54c,DAT_0014b550);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_43,extraout_s3_43,extraout_s4_43,
             DAT_0014b5a4,DAT_0014b54c,DAT_0014b550);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xe,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x164) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_44,extraout_s3_44,
                      extraout_s4_44,0,0,DAT_0014b5ac);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_45,extraout_s3_45,
                      extraout_s4_45,DAT_0014b5b0,0,DAT_0014b5ac);
  fVar10 = (float)GatyaEftImageElement::SetKey
                            (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_46,extraout_s3_46,
                             extraout_s4_46,DAT_0014b5b0,DAT_0014b5b8,DAT_0014b5b4);
  uVar11 = GatyaEftImageElement::SetKeyRetValue
                     (*(GatyaEftImageElement **)(this + 0x164),fVar10,DAT_0014b5b0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_47,extraout_s3_47,
                      extraout_s4_47,DAT_0014b5c0,DAT_0014b5c4,DAT_0014b5c8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_48,extraout_s3_48,
                      extraout_s4_48,DAT_0014b5cc,DAT_0014b5d0,DAT_0014b5d4);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_49,extraout_s3_49,extraout_s4_49,
             DAT_0014b5d8,DAT_0014b5d0,DAT_0014b5d4);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x1b,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 400) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_50,extraout_s3_50,
                      extraout_s4_50,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_51,extraout_s3_51,
                      extraout_s4_51,DAT_0014b5dc,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_52,extraout_s3_52,
                      extraout_s4_52,DAT_0014b5dc,0,DAT_0014b5e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_53,extraout_s3_53,
                      extraout_s4_53,DAT_0014b5f4,0,DAT_0014b5f8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_54,extraout_s3_54,
                      extraout_s4_54,DAT_0014b604,0,DAT_0014b608);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_55,extraout_s3_55,
                      extraout_s4_55,DAT_0014b60c,0,DAT_0014b5f8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_56,extraout_s3_56,
                      extraout_s4_56,DAT_0014b610,0,DAT_0014b608);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_57,extraout_s3_57,
                      extraout_s4_57,DAT_0014b614,0,DAT_0014b5f8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_58,extraout_s3_58,
                      extraout_s4_58,DAT_0014b618,0,DAT_0014b608);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_59,extraout_s3_59,
                      extraout_s4_59,DAT_0014b61c,0,DAT_0014b5f8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_60,extraout_s3_60,
                      extraout_s4_60,DAT_0014b620,0,DAT_0014b608);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_61,extraout_s3_61,
                      extraout_s4_61,DAT_0014b598,0,DAT_0014b5f8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_62,extraout_s3_62,
                      extraout_s4_62,DAT_0014b5b0,0,DAT_0014b624);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 400),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20)
             ,extraout_s2_63,extraout_s3_63,extraout_s4_63,DAT_0014ba2c,0,DAT_0014ba30);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xd,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1a0) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_64,extraout_s3_64,
                      extraout_s4_64,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_65,extraout_s3_65,
                      extraout_s4_65,DAT_0014ba38,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_66,extraout_s3_66,
                      extraout_s4_66,DAT_0014ba38,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_67,extraout_s3_67,
                      extraout_s4_67,DAT_0014ba40,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_68,extraout_s3_68,
                      extraout_s4_68,DAT_0014ba44,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_69,extraout_s3_69,
                      extraout_s4_69,DAT_0014ba50,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_70,extraout_s3_70,
                      extraout_s4_70,DAT_0014ba54,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_71,extraout_s3_71,
                      extraout_s4_71,DAT_0014ba58,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_72,extraout_s3_72,
                      extraout_s4_72,DAT_0014ba5c,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_73,extraout_s3_73,
                      extraout_s4_73,DAT_0014ba60,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_74,extraout_s3_74,
                      extraout_s4_74,DAT_0014ba64,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_75,extraout_s3_75,
                      extraout_s4_75,DAT_0014ba68,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_76,extraout_s3_76,
                      extraout_s4_76,DAT_0014ba6c,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_77,extraout_s3_77,
                      extraout_s4_77,DAT_0014ba70,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_78,extraout_s3_78,
                      extraout_s4_78,DAT_0014ba74,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_79,extraout_s3_79,
                      extraout_s4_79,DAT_0014ba78,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_80,extraout_s3_80,
                      extraout_s4_80,DAT_0014ba7c,0,DAT_0014ba3c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_81,extraout_s3_81,
                      extraout_s4_81,DAT_0014ba80,0,DAT_0014ba3c);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_82,extraout_s3_82,extraout_s4_82,
             DAT_0014ba84,0,DAT_0014ba3c);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x23,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1b4) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_83,extraout_s3_83,
                      extraout_s4_83,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_84,extraout_s3_84,
                      extraout_s4_84,DAT_0014ba2c,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_85,extraout_s3_85,
                      extraout_s4_85,DAT_0014ba2c,DAT_0014ba88,DAT_0014ba8c);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_86,extraout_s3_86,extraout_s4_86,
             DAT_0014ba90,DAT_0014ba94,DAT_0014ba98);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x25,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1bc) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_87,extraout_s3_87,
                      extraout_s4_87,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_88,extraout_s3_88,
                      extraout_s4_88,DAT_0014ba2c,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_89,extraout_s3_89,
                      extraout_s4_89,DAT_0014ba2c,DAT_0014ba9c,DAT_0014baa0);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_90,extraout_s3_90,extraout_s4_90,
             DAT_0014ba90,DAT_0014baa4,DAT_0014baa8);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x25,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1c0) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_91,extraout_s3_91,
                      extraout_s4_91,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_92,extraout_s3_92,
                      extraout_s4_92,DAT_0014ba2c,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_93,extraout_s3_93,
                      extraout_s4_93,DAT_0014ba2c,DAT_0014bab0,DAT_0014bab4);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_94,extraout_s3_94,extraout_s4_94,
             DAT_0014ba90,DAT_0014babc,DAT_0014bab8);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x24,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1c4) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_95,extraout_s3_95,
                      extraout_s4_95,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_96,extraout_s3_96,
                      extraout_s4_96,DAT_0014bde0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_97,extraout_s3_97,
                      extraout_s4_97,DAT_0014bde0,DAT_0014bde4,DAT_0014bde8);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_98,extraout_s3_98,extraout_s4_98,
             DAT_0014bdec,DAT_0014bdf0,DAT_0014bdf4);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x24,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1c8) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_99,extraout_s3_99,
                      extraout_s4_99,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00100,extraout_s3_x00100,
                      extraout_s4_x00100,DAT_0014bde0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00101,extraout_s3_x00101,
                      extraout_s4_x00101,DAT_0014bde0,DAT_0014bdfc,DAT_0014be00);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00102,extraout_s3_x00102,
             extraout_s4_x00102,DAT_0014bdec,DAT_0014be08,DAT_0014be04);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pSVar3 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar3,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x160) = pSVar3;
  (*pcVar6)(piVar8,pSVar3);
  (**(code **)(**(int **)(this + 0x160) + 0x18))
            (*(int **)(this + 0x160),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xf,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1b0) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00103,extraout_s3_x00103,
                      extraout_s4_x00103,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00104,extraout_s3_x00104,
                      extraout_s4_x00104,DAT_0014be0c,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00105,extraout_s3_x00105,
                      extraout_s4_x00105,DAT_0014be0c,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00106,extraout_s3_x00106,
                      extraout_s4_x00106,DAT_0014be14,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00107,extraout_s3_x00107,
                      extraout_s4_x00107,DAT_0014be18,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00108,extraout_s3_x00108,
                      extraout_s4_x00108,DAT_0014be1c,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00109,extraout_s3_x00109,
                      extraout_s4_x00109,DAT_0014be20,0,0);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00110,extraout_s3_x00110,
             extraout_s4_x00110,DAT_0014be24,0,0);
  FUN_0014d8b8(*(undefined4 *)(this + 0x1b0),DAT_0014be28);
  iVar9 = *(int *)(this + DAT_0014be2c);
  if (iVar9 != 1) {
    FUN_001501e6();
  }
  iVar5 = *(int *)(this + 0xc);
  piVar8 = *(int **)(this + 0x14);
  bVar12 = SUB41(iVar9,0);
  if ((byte)(*(char *)(*(int *)(**(int **)(*(int *)(this + 0xeb0) + 8) * 4 +
                               *(int *)(iVar5 + DAT_0014be30)) + 0xb40) - 5U) < 2) {
    pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar5 + 0x810),0x1a,false);
    pGVar2 = (GatyaEftImageElement *)operator_new(200);
    GatyaEftImageElement::GatyaEftImageElement
              (pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',bVar12);
    FUN_0014d924();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar5 + 0x810),0x1a,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement
            (pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',bVar12);
  *(GatyaEftImageElement **)(this + 0x1ac) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00111,extraout_s3_x00111,
                      extraout_s4_x00111,0,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00112,extraout_s3_x00112,
                      extraout_s4_x00112,DAT_0014c27c,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00113,extraout_s3_x00113,
                      extraout_s4_x00113,DAT_0014c284,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00114,extraout_s3_x00114,
                      extraout_s4_x00114,DAT_0014c288,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00115,extraout_s3_x00115,
                      extraout_s4_x00115,DAT_0014c290,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00116,extraout_s3_x00116,
                      extraout_s4_x00116,DAT_0014c294,0,DAT_0014c274);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1ac),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00117,extraout_s3_x00117,
             extraout_s4_x00117,DAT_0014c294,0,DAT_0014c274);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x1c,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1a4) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00118,extraout_s3_x00118,
                      extraout_s4_x00118,0,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00119,extraout_s3_x00119,
                      extraout_s4_x00119,DAT_0014c29c,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00120,extraout_s3_x00120,
                      extraout_s4_x00120,DAT_0014c284,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00121,extraout_s3_x00121,
                      extraout_s4_x00121,DAT_0014c2a0,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00122,extraout_s3_x00122,
                      extraout_s4_x00122,DAT_0014c2a4,0,-0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00123,extraout_s3_x00123,
                      extraout_s4_x00123,DAT_0014c2a8,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00124,extraout_s3_x00124,
                      extraout_s4_x00124,DAT_0014c2ac,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00125,extraout_s3_x00125,
                      extraout_s4_x00125,DAT_0014c2b0,0,-0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00126,extraout_s3_x00126,
                      extraout_s4_x00126,DAT_0014c2b4,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00127,extraout_s3_x00127,
                      extraout_s4_x00127,DAT_0014c2b8,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00128,extraout_s3_x00128,
                      extraout_s4_x00128,DAT_0014c2bc,0,-0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00129,extraout_s3_x00129,
                      extraout_s4_x00129,DAT_0014c2c0,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00130,extraout_s3_x00130,
                      extraout_s4_x00130,DAT_0014c2c4,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00131,extraout_s3_x00131,
                      extraout_s4_x00131,DAT_0014c2c8,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00132,extraout_s3_x00132,
                      extraout_s4_x00132,DAT_0014c2cc,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00133,extraout_s3_x00133,
                      extraout_s4_x00133,DAT_0014c2d0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00134,extraout_s3_x00134,
                      extraout_s4_x00134,DAT_0014c2d4,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00135,extraout_s3_x00135,
                      extraout_s4_x00135,DAT_0014c2d8,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00136,extraout_s3_x00136,
                      extraout_s4_x00136,DAT_0014c2dc,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00137,extraout_s3_x00137,
                      extraout_s4_x00137,DAT_0014c2e0,0,0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00138,extraout_s3_x00138,
                      extraout_s4_x00138,DAT_0014c2e4,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00139,extraout_s3_x00139,
                      extraout_s4_x00139,DAT_0014c2e8,0,0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00140,extraout_s3_x00140,
                      extraout_s4_x00140,DAT_0014c2ec,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00141,extraout_s3_x00141,
                      extraout_s4_x00141,DAT_0014c2f0,0,0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00142,extraout_s3_x00142,
                      extraout_s4_x00142,DAT_0014c2f4,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00143,extraout_s3_x00143,
                      extraout_s4_x00143,DAT_0014c2f8,0,0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00144,extraout_s3_x00144,
                      extraout_s4_x00144,DAT_0014c2fc,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00145,extraout_s3_x00145,
                      extraout_s4_x00145,DAT_0014c300,0,0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00146,extraout_s3_x00146,
                      extraout_s4_x00146,DAT_0014c304,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00147,extraout_s3_x00147,
                      extraout_s4_x00147,DAT_0014c308,0,0x40000000);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00148,extraout_s3_x00148,
                      extraout_s4_x00148,DAT_0014c30c,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00149,extraout_s3_x00149,
                      extraout_s4_x00149,DAT_0014c310,0,DAT_0014c314);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00150,extraout_s3_x00150,
                      extraout_s4_x00150,DAT_0014c318,0,DAT_0014c274);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00151,extraout_s3_x00151,
                      extraout_s4_x00151,DAT_0014c714,0,DAT_0014c718);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00152,extraout_s3_x00152,
                      extraout_s4_x00152,DAT_0014c71c,0,DAT_0014c720);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00153,extraout_s3_x00153,
                      extraout_s4_x00153,DAT_0014c724,0,DAT_0014c718);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00154,extraout_s3_x00154,
                      extraout_s4_x00154,DAT_0014c728,0,DAT_0014c720);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00155,extraout_s3_x00155,
                      extraout_s4_x00155,DAT_0014c72c,0,DAT_0014c718);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00156,extraout_s3_x00156,
                      extraout_s4_x00156,DAT_0014c730,0,DAT_0014c720);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00157,extraout_s3_x00157,
                      extraout_s4_x00157,DAT_0014c738,0,DAT_0014c73c);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1a4),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00158,extraout_s3_x00158,
             extraout_s4_x00158,DAT_0014c740,0,DAT_0014c720);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xb,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x15c) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00159,extraout_s3_x00159,
                      extraout_s4_x00159,0,0,DAT_0014c720);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00160,extraout_s3_x00160,
                      extraout_s4_x00160,DAT_0014c748,0,DAT_0014c720);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00161,extraout_s3_x00161,
                      extraout_s4_x00161,DAT_0014c748,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00162,extraout_s3_x00162,
                      extraout_s4_x00162,DAT_0014c754,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00163,extraout_s3_x00163,
                      extraout_s4_x00163,DAT_0014c758,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00164,extraout_s3_x00164,
                      extraout_s4_x00164,DAT_0014c764,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00165,extraout_s3_x00165,
                      extraout_s4_x00165,DAT_0014c768,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00166,extraout_s3_x00166,
                      extraout_s4_x00166,DAT_0014c76c,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00167,extraout_s3_x00167,
                      extraout_s4_x00167,DAT_0014c770,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00168,extraout_s3_x00168,
                      extraout_s4_x00168,DAT_0014c774,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00169,extraout_s3_x00169,
                      extraout_s4_x00169,DAT_0014c780,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00170,extraout_s3_x00170,
                      extraout_s4_x00170,DAT_0014c784,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00171,extraout_s3_x00171,
                      extraout_s4_x00171,DAT_0014c788,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00172,extraout_s3_x00172,
                      extraout_s4_x00172,DAT_0014c78c,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00173,extraout_s3_x00173,
                      extraout_s4_x00173,DAT_0014c790,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00174,extraout_s3_x00174,
                      extraout_s4_x00174,DAT_0014c794,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00175,extraout_s3_x00175,
                      extraout_s4_x00175,DAT_0014c798,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00176,extraout_s3_x00176,
                      extraout_s4_x00176,DAT_0014c79c,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00177,extraout_s3_x00177,
                      extraout_s4_x00177,DAT_0014c7a0,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00178,extraout_s3_x00178,
                      extraout_s4_x00178,DAT_0014c7a4,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00179,extraout_s3_x00179,
                      extraout_s4_x00179,DAT_0014c7a8,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00180,extraout_s3_x00180,
                      extraout_s4_x00180,DAT_0014c7ac,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00181,extraout_s3_x00181,
                      extraout_s4_x00181,DAT_0014c7b0,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00182,extraout_s3_x00182,
                      extraout_s4_x00182,DAT_0014c7b4,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00183,extraout_s3_x00183,
                      extraout_s4_x00183,DAT_0014c714,DAT_0014c74c,DAT_0014c750);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00184,extraout_s3_x00184,
                      extraout_s4_x00184,DAT_0014c7b8,DAT_0014c74c,DAT_0014c750);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x15c),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00185,extraout_s3_x00185,
             extraout_s4_x00185,DAT_0014c728,DAT_0014c74c,DAT_0014c750);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xc,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x194) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00186,extraout_s3_x00186,
                      extraout_s4_x00186,0,0,DAT_0014c720);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00187,extraout_s3_x00187,
                      extraout_s4_x00187,DAT_0014cbb8,0,DAT_0014cbbc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00188,extraout_s3_x00188,
                      extraout_s4_x00188,DAT_0014cbb8,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00189,extraout_s3_x00189,
                      extraout_s4_x00189,DAT_0014cbcc,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00190,extraout_s3_x00190,
                      extraout_s4_x00190,DAT_0014cbd0,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00191,extraout_s3_x00191,
                      extraout_s4_x00191,DAT_0014cbdc,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00192,extraout_s3_x00192,
                      extraout_s4_x00192,DAT_0014cbe0,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00193,extraout_s3_x00193,
                      extraout_s4_x00193,DAT_0014cbe4,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00194,extraout_s3_x00194,
                      extraout_s4_x00194,DAT_0014cbe8,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00195,extraout_s3_x00195,
                      extraout_s4_x00195,DAT_0014cbf4,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00196,extraout_s3_x00196,
                      extraout_s4_x00196,DAT_0014cc00,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00197,extraout_s3_x00197,
                      extraout_s4_x00197,DAT_0014cc04,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00198,extraout_s3_x00198,
                      extraout_s4_x00198,DAT_0014cc08,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00199,extraout_s3_x00199,
                      extraout_s4_x00199,DAT_0014cc0c,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00200,extraout_s3_x00200,
                      extraout_s4_x00200,DAT_0014cc10,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00201,extraout_s3_x00201,
                      extraout_s4_x00201,DAT_0014cc14,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00202,extraout_s3_x00202,
                      extraout_s4_x00202,DAT_0014cc18,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00203,extraout_s3_x00203,
                      extraout_s4_x00203,DAT_0014cc1c,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00204,extraout_s3_x00204,
                      extraout_s4_x00204,DAT_0014cc20,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00205,extraout_s3_x00205,
                      extraout_s4_x00205,DAT_0014cc24,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00206,extraout_s3_x00206,
                      extraout_s4_x00206,DAT_0014cc28,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00207,extraout_s3_x00207,
                      extraout_s4_x00207,DAT_0014cc2c,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00208,extraout_s3_x00208,
                      extraout_s4_x00208,DAT_0014cc30,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00209,extraout_s3_x00209,
                      extraout_s4_x00209,DAT_0014cc34,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00210,extraout_s3_x00210,
                      extraout_s4_x00210,DAT_0014cc38,DAT_0014cbc4,DAT_0014cbc8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00211,extraout_s3_x00211,
                      extraout_s4_x00211,DAT_0014cc3c,DAT_0014cbc4,DAT_0014cbc8);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x194),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00212,extraout_s3_x00212,
             extraout_s4_x00212,DAT_0014cc40,DAT_0014cbc4,DAT_0014cbc8);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xe,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x164) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00213,extraout_s3_x00213,
                      extraout_s4_x00213,0,0,DAT_0014cbbc);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00214,extraout_s3_x00214,
                      extraout_s4_x00214,DAT_0014cc44,0,DAT_0014cbbc);
  fVar10 = (float)GatyaEftImageElement::SetKey
                            (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00215,
                             extraout_s3_x00215,extraout_s4_x00215,DAT_0014cc44,DAT_0014cc4c,
                             DAT_0014cc48);
  uVar11 = GatyaEftImageElement::SetKeyRetValue
                     (*(GatyaEftImageElement **)(this + 0x164),fVar10,DAT_0014cc44);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00216,extraout_s3_x00216,
                      extraout_s4_x00216,DAT_0014cc54,DAT_0014cc5c,DAT_0014cc58);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00217,extraout_s3_x00217,
                      extraout_s4_x00217,DAT_0014cc60,DAT_0014cc64,DAT_0014cc68);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x164),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00218,extraout_s3_x00218,
             extraout_s4_x00218,DAT_0014cc6c,DAT_0014cc64,DAT_0014cc68);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x1b,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 400) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00219,extraout_s3_x00219,
                      extraout_s4_x00219,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00220,extraout_s3_x00220,
                      extraout_s4_x00220,DAT_0014d070,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00221,extraout_s3_x00221,
                      extraout_s4_x00221,DAT_0014d070,0,DAT_0014d07c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00222,extraout_s3_x00222,
                      extraout_s4_x00222,DAT_0014d088,0,DAT_0014d08c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00223,extraout_s3_x00223,
                      extraout_s4_x00223,DAT_0014d098,0,DAT_0014d09c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00224,extraout_s3_x00224,
                      extraout_s4_x00224,DAT_0014d0a0,0,DAT_0014d08c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00225,extraout_s3_x00225,
                      extraout_s4_x00225,DAT_0014d0a4,0,DAT_0014d09c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00226,extraout_s3_x00226,
                      extraout_s4_x00226,DAT_0014d0a8,0,DAT_0014d08c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00227,extraout_s3_x00227,
                      extraout_s4_x00227,DAT_0014d0ac,0,DAT_0014d09c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00228,extraout_s3_x00228,
                      extraout_s4_x00228,DAT_0014d0b0,0,DAT_0014d08c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00229,extraout_s3_x00229,
                      extraout_s4_x00229,DAT_0014d0b4,0,DAT_0014d09c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00230,extraout_s3_x00230,
                      extraout_s4_x00230,DAT_0014d0b8,0,DAT_0014d08c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00231,extraout_s3_x00231,
                      extraout_s4_x00231,DAT_0014d0bc,0,DAT_0014d09c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00232,extraout_s3_x00232,
                      extraout_s4_x00232,DAT_0014d0c0,0,DAT_0014d08c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00233,extraout_s3_x00233,
                      extraout_s4_x00233,DAT_0014d0c4,0,DAT_0014d09c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00234,extraout_s3_x00234,
                      extraout_s4_x00234,DAT_0014d0c8,0,DAT_0014d08c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 400),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00235,extraout_s3_x00235,
                      extraout_s4_x00235,DAT_0014d0cc,0,DAT_0014d0d0);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 400),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20)
             ,extraout_s2_x00236,extraout_s3_x00236,extraout_s4_x00236,DAT_0014d0d8,0,DAT_0014d0dc);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xd,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1a0) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00237,extraout_s3_x00237,
                      extraout_s4_x00237,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00238,extraout_s3_x00238,
                      extraout_s4_x00238,DAT_0014d0e4,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00239,extraout_s3_x00239,
                      extraout_s4_x00239,DAT_0014d0e4,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00240,extraout_s3_x00240,
                      extraout_s4_x00240,DAT_0014d0ec,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00241,extraout_s3_x00241,
                      extraout_s4_x00241,DAT_0014d0f0,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00242,extraout_s3_x00242,
                      extraout_s4_x00242,DAT_0014d0fc,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00243,extraout_s3_x00243,
                      extraout_s4_x00243,DAT_0014d100,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00244,extraout_s3_x00244,
                      extraout_s4_x00244,DAT_0014d104,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00245,extraout_s3_x00245,
                      extraout_s4_x00245,DAT_0014d108,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00246,extraout_s3_x00246,
                      extraout_s4_x00246,DAT_0014d10c,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00247,extraout_s3_x00247,
                      extraout_s4_x00247,DAT_0014d110,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00248,extraout_s3_x00248,
                      extraout_s4_x00248,DAT_0014d114,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00249,extraout_s3_x00249,
                      extraout_s4_x00249,DAT_0014d118,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00250,extraout_s3_x00250,
                      extraout_s4_x00250,DAT_0014d11c,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00251,extraout_s3_x00251,
                      extraout_s4_x00251,DAT_0014d120,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00252,extraout_s3_x00252,
                      extraout_s4_x00252,DAT_0014d124,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00253,extraout_s3_x00253,
                      extraout_s4_x00253,DAT_0014d128,0,DAT_0014d0e8);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00254,extraout_s3_x00254,
                      extraout_s4_x00254,DAT_0014d0b8,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00255,extraout_s3_x00255,
                      extraout_s4_x00255,DAT_0014d52c,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00256,extraout_s3_x00256,
                      extraout_s4_x00256,DAT_0014d538,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00257,extraout_s3_x00257,
                      extraout_s4_x00257,DAT_0014d53c,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00258,extraout_s3_x00258,
                      extraout_s4_x00258,DAT_0014d540,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00259,extraout_s3_x00259,
                      extraout_s4_x00259,DAT_0014d544,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00260,extraout_s3_x00260,
                      extraout_s4_x00260,DAT_0014d548,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00261,extraout_s3_x00261,
                      extraout_s4_x00261,DAT_0014d54c,0,DAT_0014d528);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00262,extraout_s3_x00262,
                      extraout_s4_x00262,DAT_0014d550,0,DAT_0014d528);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1a0),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00263,extraout_s3_x00263,
             extraout_s4_x00263,DAT_0014d554,0,DAT_0014d528);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x1c,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1a8) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00264,extraout_s3_x00264,
                      extraout_s4_x00264,0,0,DAT_0014d55c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00265,extraout_s3_x00265,
                      extraout_s4_x00265,DAT_0014d560,0,DAT_0014d55c);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1a8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00266,extraout_s3_x00266,
                      extraout_s4_x00266,DAT_0014d560,0,DAT_0014d55c);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1a8),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00267,extraout_s3_x00267,
             extraout_s4_x00267,DAT_0014d56c,0,DAT_0014d55c);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x23,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1b4) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00268,extraout_s3_x00268,
                      extraout_s4_x00268,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00269,extraout_s3_x00269,
                      extraout_s4_x00269,DAT_0014d570,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00270,extraout_s3_x00270,
                      extraout_s4_x00270,DAT_0014d570,DAT_0014d574,DAT_0014d578);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1b4),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00271,extraout_s3_x00271,
             extraout_s4_x00271,DAT_0014d57c,DAT_0014d580,DAT_0014d584);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x25,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1bc) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00272,extraout_s3_x00272,
                      extraout_s4_x00272,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00273,extraout_s3_x00273,
                      extraout_s4_x00273,DAT_0014d570,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00274,extraout_s3_x00274,
                      extraout_s4_x00274,DAT_0014d570,DAT_0014d588,DAT_0014d58c);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1bc),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00275,extraout_s3_x00275,
             extraout_s4_x00275,DAT_0014d590,DAT_0014d594,DAT_0014d598);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x25,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1c0) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00276,extraout_s3_x00276,
                      extraout_s4_x00276,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00277,extraout_s3_x00277,
                      extraout_s4_x00277,DAT_0014d570,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00278,extraout_s3_x00278,
                      extraout_s4_x00278,DAT_0014d570,DAT_0014d5a0,DAT_0014d5a4);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1c0),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00279,extraout_s3_x00279,
             extraout_s4_x00279,DAT_0014d57c,DAT_0014d5a8,DAT_0014d5ac);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x24,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1c4) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00280,extraout_s3_x00280,
                      extraout_s4_x00280,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00281,extraout_s3_x00281,
                      extraout_s4_x00281,iRam0014d8c4,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00282,extraout_s3_x00282,
                      extraout_s4_x00282,iRam0014d8c4,iRam0014d8c8,iRam0014d8cc);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1c4),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00283,extraout_s3_x00283,
             extraout_s4_x00283,iRam0014d8d0,iRam0014d8d4,iRam0014d8d8);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x24,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1c8) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00284,extraout_s3_x00284,
                      extraout_s4_x00284,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00285,extraout_s3_x00285,
                      extraout_s4_x00285,iRam0014d8c4,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00286,extraout_s3_x00286,
                      extraout_s4_x00286,iRam0014d8c4,DAT_0014d8e4,DAT_0014d8e8);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1c8),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00287,extraout_s3_x00287,
             extraout_s4_x00287,iRam0014d8d0,DAT_0014d8ec,DAT_0014d8f0);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x19,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1cc) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1cc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00288,extraout_s3_x00288,
                      extraout_s4_x00288,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1cc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00289,extraout_s3_x00289,
                      extraout_s4_x00289,iRam0014d8c4,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1cc),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00290,extraout_s3_x00290,
                      extraout_s4_x00290,iRam0014d8c4,0,DAT_0014d8f8);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1cc),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00291,extraout_s3_x00291,
             extraout_s4_x00291,DAT_0014d900,0,DAT_0014d8f8);
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pSVar3 = (ScreenElement *)operator_new(0x60);
  ScreenElement::ScreenElement(pSVar3,0,0,0,0,'\t',(ScreenElement *)0x0);
  *(ScreenElement **)(this + 0x160) = pSVar3;
  (*pcVar6)(piVar8,pSVar3);
  (**(code **)(**(int **)(this + 0x160) + 0x18))
            (*(int **)(this + 0x160),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  piVar8 = *(int **)(this + 0x14);
  pcVar6 = *(code **)(*piVar8 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0xf,false);
  pGVar2 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement(pGVar2,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true)
  ;
  *(GatyaEftImageElement **)(this + 0x1b0) = pGVar2;
  uVar11 = (*pcVar6)(piVar8,pGVar2);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00292,extraout_s3_x00292,
                      extraout_s4_x00292,0,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00293,extraout_s3_x00293,
                      extraout_s4_x00293,DAT_0014d904,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00294,extraout_s3_x00294,
                      extraout_s4_x00294,DAT_0014d904,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00295,extraout_s3_x00295,
                      extraout_s4_x00295,DAT_0014d90c,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00296,extraout_s3_x00296,
                      extraout_s4_x00296,DAT_0014d910,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00297,extraout_s3_x00297,
                      extraout_s4_x00297,DAT_0014d914,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00298,extraout_s3_x00298,
                      extraout_s4_x00298,DAT_0014d918,0,0);
  uVar11 = GatyaEftImageElement::SetKey
                     (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00299,extraout_s3_x00299,
                      extraout_s4_x00299,DAT_0014d91c,0,0);
  uVar7 = 0;
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(this + 0x1b0),(float)uVar11,
             (float)((ulonglong)uVar11 >> 0x20),extraout_s2_x00300,extraout_s3_x00300,
             extraout_s4_x00300,DAT_0014d920,0,0);
  FUN_00152bee();
  puVar4 = (undefined2 *)((uint)*(ushort *)(extraout_r1 + 4) << (uVar7 & 0xff));
  *puVar4 = (short)puVar4;
  *puVar4 = (short)puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


