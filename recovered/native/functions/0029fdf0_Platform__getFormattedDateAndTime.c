/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fdf0 Platform::getFormattedDateAndTime */

/* Platform::getFormattedDateAndTime(double) */

String * Platform::getFormattedDateAndTime(double param_1)

{
  String *in_r0;
  char *pcVar1;
  
  pcVar1 = (char *)javaGetDateString(0);
  String::String(in_r0,pcVar1);
  return in_r0;
}


