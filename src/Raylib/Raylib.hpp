/*
** EPITECH PROJECT, 2021
** B-YEP-400-PAR-4-1-indiestudio-clement1.ruat
** File description:
** Raylib
*/

#define XBOX360_LEGACY_NAME_ID  "Xbox Controller"
#if defined(PLATFORM_RPI)
    #define XBOX360_NAME_ID     "Microsoft X-Box 360 pad"
    #define PS3_NAME_ID         "PLAYSTATION(R)3 Controller"
#else
    #define XBOX360_NAME_ID     "Xbox 360 Controller"
    #define PS3_NAME_ID         "PLAYSTATION(R)3 Controller"
#endif

#ifndef RAYLIBENCAPSULATION_HPP_
#define RAYLIBENCAPSULATION_HPP_

#include <cstddef>
#include <string>
#include <utility>
#include <memory>
#include <iostream>
#include "raylib.h"

class Raylib
{
public:
    enum type {
            BASIC,
            GRADIENT,
            LINES,
            WIRES
    };

    Raylib();
    ~Raylib();

    void createWindow(int screenWidth, int screenHeight, std::string const &title, std::size_t const Fps);
    void destroyWindow() const;

    void drawingLoopBegun() const;
    void drawingLoopEnd() const;

    void printText(std::string const &text, std::pair<int, int> const position, int const fontSize, Color const color) const;
    void printCircle(type const type, std::pair<int, int> const position, float const radius, std::pair<Color, Color> const color) const;
    void printRectangle(type const type, std::pair<int, int> const position, std::pair<int, int> const size, std::pair<Color, Color> const color) const;
    void printGrid(int const slices, float const space) const;
    void printCube(type const type, Vector3 const position, Vector3 const size, Color const color) const;
    void printSphere(type const type, Vector3 const position, float const size, std::pair<int, int> const Vertex ,Color const color) const;
    void printFps(std::pair<int, int> const pos) const;

    void setCamera(Vector3 pos, Vector3 target, Vector3 up, float fovy, int projection);
    Camera getCamera() const;

    void set3d(bool is3d);
    bool get3d() const;

    bool isControllerDetected(int const idx) const;
    bool isControllerValid(int const idx, std::string const &ControllerName) const;
    std::string getControllerName(int const idx) const;

protected:
private:
    std::pair<int, int> _screenSize;
    Camera _camera;
    bool _is3D;
};

#endif /* !RAYLIBENCAPSULATION_HPP_ */
