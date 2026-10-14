/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c0e6 sqlite3_bind_value */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0026c0f4) */
/* WARNING: Removing unreachable block (ram,0x0026c0f4) */

void sqlite3_bind_value(undefined4 param_1,undefined4 param_2,int param_3)

{
  switch(*(undefined1 *)(param_3 + 0x1e)) {
  case 1:
    sqlite3_bind_int64(param_1,param_2,*(undefined4 *)(param_3 + 0x10),
                       *(undefined4 *)(param_3 + 0x14));
    break;
  case 2:
    sqlite3_bind_double(param_1,param_2,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc))
    ;
    break;
  case 3:
    FUN_0026bf64(param_1,param_2,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x18),
                 0xffffffff,*(undefined1 *)(param_3 + 0x1f));
    break;
  case 4:
    if ((int)((uint)*(ushort *)(param_3 + 0x1c) << 0x11) < 0) {
      sqlite3_bind_zeroblob
                (param_1,param_2,*(undefined4 *)(param_3 + 0x10),(uint)*(ushort *)(param_3 + 0x1c),
                 param_1);
    }
    else {
      sqlite3_bind_blob(param_1,param_2,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x18)
                        ,0xffffffff,param_2,param_3);
    }
    break;
  default:
    sqlite3_bind_null(param_1);
  }
  return;
}


