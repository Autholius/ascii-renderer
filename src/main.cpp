#include <stdio.h>

#include <glm/vec3.hpp>

#include "screen.h"

arend::Screen OurScreen;

int main() {
  glm::vec3 some_vector = {0, 0, 0};
  printf("Hello Riley.\n");

  OurScreen.Render();
  return 0;
}
