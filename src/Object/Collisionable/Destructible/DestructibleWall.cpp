/*
** EPITECH PROJECT, 2024
** IndieStudio
** File description:
** Created by antoine,
*/

#include "DestructibleWall.hpp"
#include <iostream>

DestructibleWall::DestructibleWall(const coords &pos,
    const std::pair<int, int> &size, const std::pair<std::string, std::string> &path)
    : DestructibleObject(pos, size, path)
{
    _life = 3;
    _typeField.isWall = true;
    _rotationAngle = 90.0f;
    _rotationAxis = {0, 1, 0};
    // changer le sprite
}
