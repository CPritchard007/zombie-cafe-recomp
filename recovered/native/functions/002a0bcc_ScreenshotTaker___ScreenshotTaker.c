/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0bcc ScreenshotTaker::~ScreenshotTaker */

/* ScreenshotTaker::~ScreenshotTaker() */

ScreenshotTaker * __thiscall ScreenshotTaker::~ScreenshotTaker(ScreenshotTaker *this)

{
  ~ScreenshotTaker(this);
  operator_delete(this);
  return this;
}


