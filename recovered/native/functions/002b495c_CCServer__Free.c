/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b495c CCServer::Free */

/* CCServer::Free(void*) */

void CCServer::Free(void *param_1)

{
  CCUrlConnection::Free(*(void **)((int)param_1 + 0x364));
  CCUrlConnection::Free(*(void **)((int)param_1 + 0x338));
  CCUrlConnection::Free(*(void **)((int)param_1 + 0x34c));
  CCUrlConnection::Free(*(void **)((int)param_1 + 800));
  CCUrlConnection::Free(*(void **)((int)param_1 + 0x288));
  CCUrlConnection::Free(*(void **)((int)param_1 + 0x380));
  CCUrlConnection::Free(*(void **)((int)param_1 + DAT_002b49bc));
  free(*(void **)((int)param_1 + 0x22c));
  CCOptions::Free(*(void **)((int)param_1 + 8));
  free(param_1);
  return;
}


