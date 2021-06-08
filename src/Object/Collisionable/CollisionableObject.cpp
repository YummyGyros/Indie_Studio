/*
** EPITECH PROJECT, 2024
** IndieStudio
** File description:
** Created by antoine,
*/

#include "CollisionableObject.hpp"

CollisionableObject::CollisionableObject(const std::pair<int, int> &pos,
    const std::pair<int, int> &size
) : AObject(pos, size)
{
    _type_field.is_collisionable = true;
}

bool CollisionableObject::hit(const CollisionableObject &) const noexcept
{
    return false;
}