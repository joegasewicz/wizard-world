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

#include "Game.h"


// static methods

// initializer methods
void Game::initWindow()
{
    this->window = new sf::RenderWindow(sf::VideoMode(624, 480), "Wizards");
    this->sfEvent = sf::Event();
    this->clock = new sf::Clock();
}

Game::Game()
{
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
    delete this->clock;
}

/** Updates the dt value with the time it takes for updating  & rendering a single frame */
void Game::updateDT()
{
    this->dt = this->clock->restart().asSeconds();
    std::cout << this->dt << std::endl;
}

void Game::updateSFMLEvents()
{
    while (this->window->pollEvent(this->sfEvent))
    {
        if (this->sfEvent.type == sf::Event::Closed)
            this->window->close();
    }
}

void Game::update()
{
    this->updateSFMLEvents();
}

void Game::render()
{
    this->window->clear();

    // add render items here

    this->window->display();
}

void Game::run()
{
    while(this->window->isOpen())
    {
        this->updateDT();
        this->update();
        this->render();
    }
}