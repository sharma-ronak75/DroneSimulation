#pragma once
#include <glm/glm.hpp>

namespace Drone
{
    class Point
    {
    public:
        glm::vec2 position{};
        glm::vec2 old_position{};
        glm::vec2 acceleration{};

        Point(): position(0), old_position(0) {}
        Point(glm::vec2 pos): position(pos), old_position(pos) {}

        void tick(float deltatime)
        {
            const glm::vec2 velocity = position - old_position;
            old_position = position;
            position += velocity + acceleration * deltatime * deltatime;
            acceleration = {};
        }

        void set_velocity(glm::vec2 velocity)
        {
            old_position = position - velocity;
        }

        void set_position(glm::vec2 pos)
        {
            position = pos;
            old_position = pos;
        }
    };
}