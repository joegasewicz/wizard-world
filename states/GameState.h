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


#ifndef WIZARD_WORLD_GAMESTATE_H
#define WIZARD_WORLD_GAMESTATE_H

#include "State.h"


class GameState : public State {
private:
public:
    GameState();
    virtual ~GameState();

    // methods
    void update();
    void render();
};


#endif //WIZARD_WORLD_GAMESTATE_H
