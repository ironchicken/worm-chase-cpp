#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "HasPosition.hpp"
#include "Renderable.hpp"

template <class WorldDim>
class Obstacle : public HasPosition<WorldDim>, public Renderable {
public:
    Obstacle();
    WorldDim getX() override;
    WorldDim getY() override;
    void render() override;

private:
    WorldDim x;
    WorldDim y;
};

#endif
