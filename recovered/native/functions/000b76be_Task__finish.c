/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b76be Task::finish */

/* Task::finish() */

void __thiscall Task::finish(Task *this)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  if (this[4] == (Task)0x0) {
    this[4] = (Task)0x1;
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
    while (puVar1 = *(undefined4 **)(this + 0x14), puVar1 != (undefined4 *)0x0) {
      pcVar2 = (char *)*puVar1;
      *(undefined4 *)(this + 0x14) = puVar1[1];
      if (pcVar2 == (char *)0x0) {
        return;
      }
      if (*pcVar2 == '\x01') {
        (**(code **)(pcVar2 + 4))(*(undefined4 *)(pcVar2 + 8),this);
      }
    }
  }
  return;
}


