#ifndef ENTITY_HPP__
#define ENTITY_HPP__
#include "Vector2.h"

class Entity {
public:
    Vector2 Position;
    float Width;   
    float Height;

    Entity(Vector2 position, float width, float height)
        : Position(position), Width(width), Height(height) {};

};


#endif // !ENTITY_H__