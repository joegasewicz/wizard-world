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


#ifndef WIZARD_WORLD_STATE_H
#define WIZARD_WORLD_STATE_H

#include <vector>
#include <stack>
#include <map>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


class State {
private:
    sf::RenderWindow* window;
    std::vector<sf::Texture> textures;

public:
    State(sf::RenderWindow* window);
    virtual ~State();

    virtual void endState() = 0;
    virtual void update(const float& dt) = 0;
    virtual void render(sf::RenderTarget* target = nullptr) = 0;
};


#endif //WIZARD_WORLD_STATE_H
