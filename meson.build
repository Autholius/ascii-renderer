project('ascii-renderer', 'cpp')

cmake = import('cmake')

glm_subproject = cmake.subproject('glm')
glm_lib = glm_subproject.dependency('glm')

tinyobjloader_subproject = cmake.subproject('tinyobjloader')
tinyobjloader_lib = tinyobjloader_subproject.dependency('tinyobjloader')

sources = [
  'src/main.cc',
  'src/screen.cc',
  'src/geometry.cc',
  ]

executable('renderer', sources, dependencies: [glm_lib, tinyobjloader_lib])
