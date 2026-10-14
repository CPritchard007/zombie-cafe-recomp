/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b75a8 Task::start */

/* Task::start() */

void __thiscall Task::start(Task *this)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
  while( true ) {
    puVar1 = *(undefined4 **)(this + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    pcVar2 = (char *)*puVar1;
    *(undefined4 *)(this + 0x14) = puVar1[1];
    if (pcVar2 == (char *)0x0) break;
    if (*pcVar2 == '\0') {
      (**(code **)(pcVar2 + 4))(*(undefined4 *)(pcVar2 + 8),this);
    }
  }
  return;
}


