#include "../include/driver_framebuffer.h"
const uint8_t org_0136pt7bBitmaps[] = {
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xF8, 0xF8, 0x3F, 0xF0, 0x7F, 0xE0, 0xFF, 0xC1,
  0xFF, 0x83, 0xE0, 0x07, 0xC1, 0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x7C,
  0x00, 0xF8, 0x3E, 0x00, 0x7C, 0x1F, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xF0,
  0x7C, 0x00, 0xF8, 0x3E, 0x00, 0x7C, 0x1F, 0x00, 0x3E, 0x0F, 0x80, 0x1F,
  0x07, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7C, 0x1F, 0x00, 0x3E, 0x0F, 0x80,
  0x1F, 0x07, 0xC0, 0x0F, 0x83, 0xE0, 0x07, 0xC1, 0xF0, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xC1, 0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x7C, 0x00, 0xF8,
  0x3E, 0x00, 0x7C, 0x1F, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7C, 0x1F,
  0x00, 0x3E, 0x0F, 0x80, 0x1F, 0x07, 0xC0, 0x0F, 0x83, 0xE0, 0x07, 0xC1,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE,
  0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80,
  0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8,
  0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xFF, 0xC0,
  0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0x80,
  0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xF8, 0x3F, 0xFF, 0xFC, 0x1F, 0xFF, 0xFE,
  0x0F, 0xFF, 0xFF, 0x07, 0xC0, 0x0F, 0x83, 0xE0, 0x07, 0xC1, 0xF0, 0x03,
  0xE0, 0xF8, 0x01, 0xF0, 0x7C, 0x00, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x7C, 0x00, 0xF8, 0x3E, 0x00, 0x7C, 0x1F,
  0x00, 0x3E, 0x0F, 0xFF, 0xE0, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xF8, 0x3F,
  0xFF, 0xFC, 0x1F, 0xFF, 0xFE, 0x0F, 0x80, 0xFF, 0xFF, 0xFF, 0x80, 0x07,
  0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xFE, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F,
  0x83, 0xE0, 0xF8, 0x3E, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F, 0x83, 0xE0,
  0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC0, 0xF8, 0x3E, 0x0F, 0x83, 0xE0,
  0xF8, 0x01, 0xF0, 0x7C, 0x1F, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC1,
  0xF0, 0x7C, 0x1F, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0xF8, 0x3E, 0x0F, 0x83,
  0xE0, 0xF8, 0x00, 0xF8, 0x3F, 0xF0, 0x7F, 0xE0, 0xFF, 0xC1, 0xFF, 0x83,
  0xE0, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x83, 0xE0, 0xFF,
  0xC1, 0xFF, 0x83, 0xFF, 0x07, 0xFE, 0x0F, 0x80, 0x07, 0xC0, 0x0F, 0x80,
  0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00,
  0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00,
  0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00,
  0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F,
  0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00,
  0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00,
  0x03, 0xE0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xF8, 0x00, 0x0F,
  0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00,
  0x0F, 0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F,
  0x00, 0x00, 0x0F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xE0,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00,
  0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00,
  0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F,
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0,
  0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03,
  0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F,
  0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x01,
  0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x83,
  0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0x00, 0x03, 0xE0, 0x07,
  0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0x00, 0x03, 0xE0, 0x07, 0xC0, 0x0F,
  0x80, 0x1F, 0x00, 0x3E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07,
  0xC0, 0x0F, 0x80, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F,
  0x80, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x83, 0xE0,
  0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0x0F, 0x80, 0x1F, 0x00, 0x3E,
  0x00, 0x7C, 0x00, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0xC0, 0x0F, 0xFF, 0xE0, 0x07, 0xFF, 0xF0, 0x03, 0xFF, 0xF8, 0x01, 0xFF,
  0xFC, 0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C,
  0x1F, 0xF8, 0x3E, 0x0F, 0xFC, 0x1F, 0x07, 0xFE, 0x0F, 0xFF, 0xFF, 0x07,
  0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC,
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F,
  0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00,
  0x0F, 0x80, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xF8, 0x3F, 0xFF, 0xFC, 0x1F,
  0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0x07, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F,
  0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFC,
  0x1F, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0x83, 0xFF, 0xFF,
  0xC1, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00,
  0x03, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0x83, 0xFF,
  0xFF, 0xC1, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xF8, 0x3F, 0xFF,
  0xFC, 0x1F, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0x07, 0xC0, 0x00, 0x7F, 0xE0,
  0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE,
  0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F,
  0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07,
  0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF,
  0x83, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xF0, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00,
  0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x0F, 0xFF, 0xFF,
  0x07, 0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF,
  0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03,
  0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xF8, 0x00, 0x0F, 0xFC,
  0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF,
  0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F,
  0xFC, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xF8, 0x00,
  0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80,
  0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8,
  0x00, 0x0F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xF0, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x07, 0xC0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x07, 0xFF,
  0xFF, 0x83, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xF0, 0x7F,
  0xFF, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC1, 0xF0, 0x03, 0xE0,
  0xF8, 0x01, 0xF0, 0x7C, 0x00, 0xF8, 0x3E, 0x00, 0x7C, 0x1F, 0x00, 0x3E,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE,
  0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0xC1, 0xFF, 0x83,
  0xE0, 0xFF, 0xC1, 0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F, 0xF8,
  0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00,
  0x03, 0xFF, 0x00, 0x01, 0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F,
  0xF8, 0x3E, 0x0F, 0xFC, 0x1F, 0x07, 0xFE, 0x0F, 0x80, 0x00, 0xFF, 0xC0,
  0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0x80,
  0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1,
  0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F, 0xF8, 0x3E, 0x0F, 0xFC,
  0x1F, 0x07, 0xFE, 0x0F, 0x83, 0xFF, 0x07, 0xC1, 0xFF, 0x83, 0xE0, 0xFF,
  0xC1, 0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F, 0xF8, 0x3E, 0x0F,
  0xFC, 0x1F, 0x07, 0xFE, 0x0F, 0x83, 0xFF, 0x07, 0xC1, 0xFF, 0x83, 0xE0,
  0xFF, 0xC1, 0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F, 0xF8, 0x3E,
  0x0F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F,
  0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03,
  0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00,
  0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00,
  0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0,
  0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0x80, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00,
  0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80,
  0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8,
  0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xE0,
  0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00,
  0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F,
  0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x03,
  0xFF, 0xF8, 0x01, 0xFF, 0xFC, 0x00, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0x00,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x7C,
  0x00, 0xF8, 0x3E, 0x00, 0x7C, 0x1F, 0x00, 0x3E, 0x0F, 0x80, 0x1F, 0x07,
  0xC0, 0x0F, 0x83, 0xE0, 0x07, 0xC1, 0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03,
  0xE0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03,
  0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03,
  0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00,
  0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00,
  0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0,
  0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE,
  0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xF8, 0x00,
  0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80,
  0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8,
  0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF,
  0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3E, 0x0F, 0x83, 0xE0,
  0x07, 0xC1, 0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x7C, 0x00, 0xF8, 0x3E,
  0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0xF8, 0x3E, 0x0F, 0xFC, 0x1F, 0x07, 0xFE,
  0x0F, 0x83, 0xFF, 0x07, 0xC1, 0xFF, 0x83, 0xE0, 0xFF, 0xC1, 0xF0, 0x7F,
  0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F, 0xF8, 0x3E, 0x0F, 0xFC, 0x1F, 0x07,
  0xFE, 0x0F, 0x83, 0xFF, 0x07, 0xC1, 0xFF, 0x83, 0xE0, 0xFF, 0xC1, 0xF0,
  0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F, 0xF8, 0x3E, 0x0F, 0xFC, 0x1F,
  0x07, 0xFE, 0x0F, 0x83, 0xFF, 0x07, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0xF8, 0x3E, 0x0F, 0x80, 0x1F, 0x07, 0xC0, 0x0F, 0x83,
  0xE0, 0x07, 0xC1, 0xF0, 0x03, 0xE0, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x0F,
  0x83, 0xE0, 0x07, 0xC1, 0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x7C, 0x00,
  0xF8, 0x3E, 0x0F, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F,
  0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0x80, 0xF8, 0x00, 0x0F, 0xFC, 0x00,
  0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00, 0xFF, 0xC0,
  0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0x0F, 0xFC,
  0x00, 0x07, 0xC1, 0xF0, 0x7C, 0x00, 0xF8, 0x3E, 0x00, 0x7C, 0x1F, 0x00,
  0x3E, 0x0F, 0x80, 0x1F, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F, 0x83, 0xE0,
  0xF8, 0x3E, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F, 0x83, 0xE0, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC1,
  0xF0, 0x7C, 0x1F, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC1, 0xF0, 0x7C,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x07, 0xC0, 0x0F, 0x80,
  0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x1F, 0x07, 0xFE, 0x0F, 0xFC, 0x1F, 0xF8,
  0x3F, 0xF0, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0x80, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x1F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F,
  0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00,
  0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00,
  0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00,
  0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0x80, 0x1F,
  0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07,
  0xFE, 0x0F, 0xFC, 0x1F, 0xF8, 0x3F, 0xF0, 0x7F, 0xE0, 0xF8, 0x01, 0xF0,
  0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x83, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E,
  0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8,
  0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01,
  0xF0, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F,
  0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80,
  0x1F, 0xF8, 0x01, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC1,
  0xF0, 0x7C, 0x1F, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC1, 0xF0, 0x7C,
  0x1F, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8,
  0x00, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F,
  0x83, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80,
  0x1F, 0xF8, 0x01, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC1, 0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xF0, 0x7C, 0x1F, 0xF8, 0x3E, 0x0F,
  0xFC, 0x1F, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xFF, 0x80, 0x00,
  0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00, 0x1F, 0xF8, 0x00,
  0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01, 0xF0, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F,
  0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF,
  0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F,
  0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8,
  0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF,
  0x80, 0x1F, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00,
  0x0F, 0x80, 0x00, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF,
  0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F,
  0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3E, 0x00, 0x03,
  0xE0, 0x00, 0x3E, 0x00, 0x03, 0xE0, 0x00, 0x3E, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00,
  0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80,
  0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0xC0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00,
  0x7F, 0xFF, 0x07, 0xFF, 0xF0, 0x7F, 0xFF, 0x07, 0xFF, 0xF0, 0x7F, 0xFF,
  0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0xC0, 0x00, 0x03, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x0F, 0x80, 0x00,
  0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0xF8, 0x01, 0xFF, 0x80,
  0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8,
  0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF,
  0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80,
  0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8,
  0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xF0,
  0x7F, 0xFF, 0x07, 0xFF, 0xF0, 0x7F, 0xFF, 0x07, 0xFF, 0xF0, 0x7F, 0xFF,
  0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x3F, 0xF0, 0x00,
  0x1F, 0xF8, 0x00, 0x0F, 0xFC, 0x00, 0x07, 0xFE, 0x0F, 0x83, 0xFF, 0x07,
  0xC1, 0xFF, 0x83, 0xE0, 0xFF, 0xC1, 0xF0, 0x7F, 0xE0, 0xF8, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF0, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80,
  0x1F, 0xF8, 0x01, 0xF0, 0x7F, 0xE0, 0x07, 0xFE, 0x00, 0x7F, 0xE0, 0x07,
  0xFE, 0x00, 0x7F, 0xE0, 0x07, 0xFE, 0x00, 0x7F, 0xE0, 0x07, 0xFE, 0x00,
  0x7F, 0xE0, 0x07, 0xFE, 0x0F, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F,
  0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01,
  0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80,
  0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8,
  0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xF0, 0x00, 0x1F,
  0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x3E, 0x00, 0x03,
  0xE0, 0x00, 0x3E, 0x00, 0x03, 0xE0, 0x00, 0x3E, 0x0F, 0xFF, 0xE0, 0xFF,
  0xFE, 0x0F, 0xFF, 0xE0, 0xFF, 0xFE, 0x0F, 0xFF, 0xE0, 0xF8, 0x00, 0x0F,
  0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3E,
  0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0xF8, 0x01, 0xF0, 0x03,
  0xE0, 0x07, 0xC0, 0x0F, 0x83, 0xFF, 0x07, 0xFE, 0x0F, 0xFC, 0x1F, 0xF8,
  0x3F, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0x00,
  0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x00, 0xF8,
  0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F, 0xF8, 0x3F, 0xF0,
  0x7F, 0xE0, 0xFF, 0xC1, 0xFF, 0x83, 0xE0, 0x07, 0xC0, 0x0F, 0x80, 0x1F,
  0x00, 0x3E, 0x0F, 0x80, 0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x00 };

const GFXglyph org_0136pt7bGlyphs[] = {
  {     0,   1,   1,  30,    0,    0 },   // 0x20 ' '
  {     1,   5,  25,  10,    1,  -24 },   // 0x21 '!'
  {    17,  15,   5,  20,    1,  -24 },   // 0x22 '"'
  {    27,  25,  25,  30,    1,  -24 },   // 0x23 '#'
  {   106,  25,  25,  30,    1,  -24 },   // 0x24 '$'
  {   185,  25,  25,  30,    1,  -24 },   // 0x25 '%'
  {   264,  25,  25,  30,    1,  -24 },   // 0x26 '&'
  {   343,   5,   5,  10,    1,  -24 },   // 0x27 '''
  {   347,  10,  25,  15,    1,  -24 },   // 0x28 '('
  {   379,  10,  25,  15,    1,  -24 },   // 0x29 ')'
  {   411,  15,  15,  20,    1,  -19 },   // 0x2A '*'
  {   440,  15,  15,  20,    1,  -19 },   // 0x2B '+'
  {   469,   5,  10,  10,    1,   -4 },   // 0x2C ','
  {   476,  20,   5,  25,    1,  -14 },   // 0x2D '-'
  {   489,   5,   5,  10,    1,   -4 },   // 0x2E '.'
  {   493,  25,  25,  30,    1,  -24 },   // 0x2F '/'
  {   572,  25,  25,  30,    1,  -24 },   // 0x30 '0'
  {   651,   5,  25,  10,    1,  -24 },   // 0x31 '1'
  {   667,  25,  25,  30,    1,  -24 },   // 0x32 '2'
  {   746,  25,  25,  30,    1,  -24 },   // 0x33 '3'
  {   825,  25,  25,  30,    1,  -24 },   // 0x34 '4'
  {   904,  25,  25,  30,    1,  -24 },   // 0x35 '5'
  {   983,  25,  25,  30,    1,  -24 },   // 0x36 '6'
  {  1062,  25,  25,  30,    1,  -24 },   // 0x37 '7'
  {  1141,  25,  25,  30,    1,  -24 },   // 0x38 '8'
  {  1220,  25,  25,  30,    1,  -24 },   // 0x39 '9'
  {  1299,   5,  20,  10,    1,  -19 },   // 0x3A ':'
  {  1312,   5,  20,  10,    1,  -19 },   // 0x3B ';'
  {  1325,  15,  25,  20,    1,  -24 },   // 0x3C '<'
  {  1372,  20,  15,  25,    1,  -19 },   // 0x3D '='
  {  1410,  15,  25,  20,    1,  -24 },   // 0x3E '>'
  {  1457,  25,  25,  30,    1,  -24 },   // 0x3F '?'
  {  1536,  25,  25,  30,    1,  -24 },   // 0x40 '@'
  {  1615,  25,  25,  30,    1,  -24 },   // 0x41 'A'
  {  1694,  25,  25,  30,    1,  -24 },   // 0x42 'B'
  {  1773,  25,  25,  30,    1,  -24 },   // 0x43 'C'
  {  1852,  25,  25,  30,    1,  -24 },   // 0x44 'D'
  {  1931,  25,  25,  30,    1,  -24 },   // 0x45 'E'
  {  2010,  25,  25,  30,    1,  -24 },   // 0x46 'F'
  {  2089,  25,  25,  30,    1,  -24 },   // 0x47 'G'
  {  2168,  25,  25,  30,    1,  -24 },   // 0x48 'H'
  {  2247,  25,  25,  30,    1,  -24 },   // 0x49 'I'
  {  2326,  25,  25,  30,    1,  -24 },   // 0x4A 'J'
  {  2405,  25,  25,  30,    1,  -24 },   // 0x4B 'K'
  {  2484,  25,  25,  30,    1,  -24 },   // 0x4C 'L'
  {  2563,  25,  25,  30,    1,  -24 },   // 0x4D 'M'
  {  2642,  25,  25,  30,    1,  -24 },   // 0x4E 'N'
  {  2721,  25,  25,  30,    1,  -24 },   // 0x4F 'O'
  {  2800,  25,  25,  30,    1,  -24 },   // 0x50 'P'
  {  2879,  25,  25,  30,    1,  -24 },   // 0x51 'Q'
  {  2958,  25,  25,  30,    1,  -24 },   // 0x52 'R'
  {  3037,  25,  25,  30,    1,  -24 },   // 0x53 'S'
  {  3116,  25,  25,  30,    1,  -24 },   // 0x54 'T'
  {  3195,  25,  25,  30,    1,  -24 },   // 0x55 'U'
  {  3274,  25,  25,  30,    1,  -24 },   // 0x56 'V'
  {  3353,  25,  25,  30,    1,  -24 },   // 0x57 'W'
  {  3432,  25,  25,  30,    1,  -24 },   // 0x58 'X'
  {  3511,  25,  25,  30,    1,  -24 },   // 0x59 'Y'
  {  3590,  25,  25,  30,    1,  -24 },   // 0x5A 'Z'
  {  3669,  10,  25,  15,    1,  -24 },   // 0x5B '['
  {  3701,  25,  25,  30,    1,  -24 },   // 0x5C '\'
  {  3780,  10,  25,  15,    1,  -24 },   // 0x5D ']'
  {  3812,  15,  10,  20,    1,  -24 },   // 0x5E '^'
  {  3831,  25,   5,  30,    1,    1 },   // 0x5F '_'
  {  3847,   5,   5,  10,    1,  -24 },   // 0x60 '`'
  {  3851,  20,  20,  25,    1,  -19 },   // 0x61 'a'
  {  3901,  20,  25,  25,    1,  -24 },   // 0x62 'b'
  {  3964,  20,  20,  25,    1,  -19 },   // 0x63 'c'
  {  4014,  20,  25,  25,    1,  -24 },   // 0x64 'd'
  {  4077,  20,  20,  25,    1,  -19 },   // 0x65 'e'
  {  4127,  15,  25,  20,    1,  -24 },   // 0x66 'f'
  {  4174,  20,  25,  25,    1,  -19 },   // 0x67 'g'
  {  4237,  20,  25,  25,    1,  -24 },   // 0x68 'h'
  {  4300,   5,  20,  10,    1,  -19 },   // 0x69 'i'
  {  4313,  10,  25,  15,    1,  -19 },   // 0x6A 'j'
  {  4345,  20,  25,  25,    1,  -24 },   // 0x6B 'k'
  {  4408,   5,  25,  10,    1,  -24 },   // 0x6C 'l'
  {  4424,  25,  20,  30,    1,  -19 },   // 0x6D 'm'
  {  4487,  20,  20,  25,    1,  -19 },   // 0x6E 'n'
  {  4537,  20,  20,  25,    1,  -19 },   // 0x6F 'o'
  {  4587,  20,  25,  25,    1,  -19 },   // 0x70 'p'
  {  4650,  20,  25,  25,    1,  -19 },   // 0x71 'q'
  {  4713,  20,  20,  25,    1,  -19 },   // 0x72 'r'
  {  4763,  20,  20,  25,    1,  -19 },   // 0x73 's'
  {  4813,  25,  25,  30,    1,  -24 },   // 0x74 't'
  {  4892,  20,  20,  25,    1,  -19 },   // 0x75 'u'
  {  4942,  20,  20,  25,    1,  -19 },   // 0x76 'v'
  {  4992,  25,  20,  30,    1,  -19 },   // 0x77 'w'
  {  5055,  20,  20,  25,    1,  -19 },   // 0x78 'x'
  {  5105,  20,  25,  25,    1,  -19 },   // 0x79 'y'
  {  5168,  20,  20,  25,    1,  -19 },   // 0x7A 'z'
  {  5218,  15,  25,  20,    1,  -24 },   // 0x7B '{'
  {  5265,   5,  25,  10,    1,  -24 },   // 0x7C '|'
  {  5281,  15,  25,  20,    1,  -24 },   // 0x7D '}'
  {  5328,  25,  15,  30,    1,  -19 } }; // 0x7E '~'

const GFXfont org_0136pt7b = {
  (uint8_t  *)org_0136pt7bBitmaps,
  (GFXglyph *)org_0136pt7bGlyphs,
  0x20, 0x7E, 36 };//B

// Approx. 6047 bytes
