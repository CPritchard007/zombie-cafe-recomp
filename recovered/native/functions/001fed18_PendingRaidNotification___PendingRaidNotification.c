/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fed18 PendingRaidNotification::~PendingRaidNotification */

/* PendingRaidNotification::~PendingRaidNotification() */

PendingRaidNotification * __thiscall
PendingRaidNotification::~PendingRaidNotification(PendingRaidNotification *this)

{
  ~PendingRaidNotification(this);
  operator_delete(this);
  return this;
}


