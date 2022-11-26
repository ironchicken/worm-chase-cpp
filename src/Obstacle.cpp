#include "Obstacle.hpp"

template <class WorldDim>
Obstacle<WorldDim>::Obstacle() {}

template <class WorldDim>
WorldDim Obstacle<WorldDim>::getX() {
    return x;
}

template <class WorldDim>
WorldDim Obstacle<WorldDim>::getY() {
    return y;
}

template <class WorldDim>
void Obstacle<WorldDim>::render() { }
