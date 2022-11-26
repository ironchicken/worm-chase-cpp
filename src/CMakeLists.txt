add_executable(
  worm_chase
  Obstacle.cpp
  main.cpp
)
target_link_libraries(worm_chase PRIVATE sfml-graphics)
