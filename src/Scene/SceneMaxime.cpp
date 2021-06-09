/*
** EPITECH PROJECT, 2021
** Indie_Studio
** File description:
** SceneMaxime
*/

#include "SceneMaxime.hpp"

SceneMaxime::SceneMaxime()
{
    //init _objects
}

SceneMaxime::~SceneMaxime()
{
    _objects.clear();
}

void SceneMaxime::run(Raylib &lib)
{
    while (lib.gameLoop()) {
        //we will only use Raylib::printObjects(std::vector<unique_ptr<IObject>> objects) later
        BeginDrawing();
        //3D mode, 3D display and 2D display here.
        EndDrawing();
    }
}