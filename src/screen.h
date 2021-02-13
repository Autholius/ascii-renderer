#include <assert.h>
#include <stdint.h>
#include <stdio.h>

#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 50

namespace arend {

class Screen {
 public:
  Screen();

  uint8_t PixelValueToCharacterRamp(uint8_t value);

  void SetPixel(uint32_t x, uint32_t y, uint8_t value);

  void SetPixelRaw(uint32_t x, uint32_t y, uint8_t value);

  void Render();

  uint8_t buffer_[(SCREEN_WIDTH + 1) * SCREEN_HEIGHT + 1];

  static constexpr const char* kCharacterRamp =
      "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/"
      "\\|()1{}[]?-_+~<>i!lI;:,\"^`'. ";
  static constexpr uint32_t kCharacterRampSize = 70;
};

}  // namespace arend
