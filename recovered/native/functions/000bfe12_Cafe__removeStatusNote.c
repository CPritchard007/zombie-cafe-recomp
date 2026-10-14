/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfe12 Cafe::removeStatusNote */

/* Cafe::removeStatusNote(StatusNote*) */

void __thiscall Cafe::removeStatusNote(Cafe *this,StatusNote *param_1)

{
  CapcomLinkedList<CafeUIElement*>::remove
            ((CapcomLinkedList<CafeUIElement*> *)(this + 0x68),(CafeUIElement *)param_1);
  return;
}


