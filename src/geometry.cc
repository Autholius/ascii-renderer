#include "geometry.h"
#include <stdio.h>

namespace arend {

Mesh::Mesh() {
  printf("Hello Mesh.\n");
}

Entity::Entity(Mesh* mesh) {
  printf("Hello Entity.\n");
}

glm::mat4x4 Entity::GetTransform() {
  printf("Hello GetTransform.\n");
}

void Entity::SetTransform() {
  printf("Hello SetTransform.\n");
}

glm::mat4x4 Entity::GetScalingMatrix() {
  printf("Hello GetScalingMatrix.\n");
}

void Entity::SetScalingMatrix() {
  printf("Hello SetScalingMatrix.\n");
}

glm::mat4x4 Entity::GetRotationMatrix() {
  printf("Hello GetRotationMatrix.\n");
}

void Entity::SetRotationMatrix() {
  printf("Hello SetRotationMatrix.\n");
}

glm::mat4x4 Entity::GetTranslationMatrix() {
  printf("Hello GetTranslationMatrix.\n");
}

void Entity::SetTranslationMatrix() {
  printf("Hello SetTranslationMatrix.\n");
}

SceneTree::SceneTree() {
  printf("Hello SceneTree.\n");
}

}