#include "screen.h"
namespace arend {

Screen::Screen() {
  for (uint32_t row = 0; row < SCREEN_HEIGHT; row++) {
    for (uint32_t col = 0; col < SCREEN_WIDTH; col++) {
      SetPixel(col, row, col % 20);
    }
    SetPixelRaw(SCREEN_WIDTH, row, '\n');
  }
}

uint8_t Screen::PixelValueToCharacterRamp(uint8_t value) {
  float ratio = static_cast<float>(255 - value) / 255;
  uint8_t ramp_index = kCharacterRampSize * ratio - 1;
  return kCharacterRamp[ramp_index];
}

void Screen::SetPixel(uint32_t x, uint32_t y, uint8_t value) {
  SetPixelRaw(x, y, PixelValueToCharacterRamp(value));
}

void Screen::SetPixelRaw(uint32_t x, uint32_t y, uint8_t value) {
  assert(x <= SCREEN_WIDTH || y < SCREEN_HEIGHT);
  buffer_[y * (SCREEN_WIDTH + 1) + x] = value;
}

void Screen::Render() { printf("%s", &buffer_[0]); }

}  // namespace arend
