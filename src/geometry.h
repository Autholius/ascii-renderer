#pragma once

#include <stdint.h>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

namespace arend {

struct Mesh {
  // Constructor
  Mesh();

  // Members
  glm::vec3 *points_;
  uint32_t *simplices_;
};

struct Entity {
 public:
  // Constructor
  Entity(Mesh* mesh);

  // Getters and Setters
  glm::mat4x4 GetTransform();

  glm::mat4x4 GetScalingMatrix();
  void SetScalingMatrix();

  glm::mat4x4 GetRotationMatrix();
  void SetRotationMatrix();

  glm::mat4x4 GetTranslationMatrix();
  void SetTranslationMatrix();

 private:
  void SetTransform();

 public:
  // Public Members
  Mesh* mesh;

 private:
  // Private Members
  glm::mat4x4 transform_;
  glm::mat4x4 scaling_matrix_;
  glm::mat4x4 rotation_matrix_;
  glm::mat4x4 translation_matrix_;
};

struct SceneTree {
  // Constructor
  SceneTree();

  // Members
  Mesh *meshes_;
  glm::mat4x4 *transforms_;
};

}