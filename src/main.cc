#include <stdio.h>

#include <glm/vec3.hpp>

#include "screen.h"

arend::Screen OurScreen;
#include "geometry.h"

int main() {
  glm::vec3 some_vector = {0, 0, 0};
  printf("Hello Riley.\n");

  arend::Mesh* mesh = new arend::Mesh();

  OurScreen.Render();
  
  delete mesh;

  return 0;
}
