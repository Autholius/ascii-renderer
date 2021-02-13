project('ascii-renderer', 'cpp')

cmake = import('cmake')

glm_subproject = cmake.subproject('glm')
glm_lib = glm_subproject.dependency('glm')

sources = [
  'src/main.cpp',
  'src/screen.cc',
  ]

executable('renderer', sources, dependencies: [glm_lib])
