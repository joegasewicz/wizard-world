/**
* Created on 03/09/2023.
* Contact pymailio@gmail.com
*
* Anyone is free to copy, modify, publish, use, compile, sell, or
* distribute this software, either in source code form or as a compiled
* binary, for any purpose, commercial or non-commercial, and by any
* means. THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY.
*/

#ifndef WIZARD_WORLD_GAME_H
#define WIZARD_WORLD_GAME_H

#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Game
{
private:
    // variables
    sf::RenderWindow *window;
    sf::Event sfEvent;
    sf::Clock *clock;
    float dt; // How long for 1 update & render call

    // initializers
    void initWindow();

public:
    Game();
    virtual ~Game();

    // methods
    void updateDT();
    void updateSFMLEvents();
    void update();
    void render();
    void run();
};


#endif //WIZARD_WORLD_GAME_H
