/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae6d8 CCGFX::CompileShader */

/* CCGFX::CompileShader(unsigned int*, unsigned int, char const*) */

undefined8 CCGFX::CompileShader(uint *param_1,uint param_2,char *param_3)

{
  void *pvVar1;
  size_t __size;
  uint uVar2;
  uint *local_20;
  void *local_1c;
  char *pcStack_18;
  
  local_20 = param_1;
  local_1c = (void *)param_2;
  pcStack_18 = param_3;
  pvVar1 = (void *)CCAssetManager::doesFileExist(param_3);
  if (pvVar1 != (void *)0x0) {
    __size = CCAssetManager::fileSize(param_3);
    pvVar1 = (void *)0x0;
    if (__size != 0xffffffff) {
      pvVar1 = malloc(__size);
      if (pvVar1 != (void *)0x0) {
        local_1c = pvVar1;
        CCAssetManager::readFile(param_3,pvVar1,__size);
        *(undefined1 *)((int)local_1c + (__size - 1)) = 0;
        uVar2 = glCreateShader(param_2);
        *param_1 = uVar2;
        glShaderSource(uVar2,1,&local_1c,0);
        glCompileShader(*param_1);
        free(local_1c);
        glGetShaderiv(*param_1,DAT_002ae750,&local_20);
        pvVar1 = (void *)0x1;
        if (local_20 == (uint *)0x0) {
          glDeleteShader(*param_1);
          pvVar1 = (void *)0x0;
        }
      }
    }
  }
  return CONCAT44(local_20,pvVar1);
}


