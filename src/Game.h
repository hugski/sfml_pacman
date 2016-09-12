//
// Created by zpf on 16/9/12.
//

#ifndef SFML_PACMAN_GAME_H
#define SFML_PACMAN_GAME_H


#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "GameState.h"
#include <array>
class Game
{
public:

    Game();
    ~Game();
    void run();
    void changeGameState(GameState::State gameState);
private:
    sf::RenderWindow m_window;
    GameState* m_currentState;
    std::array<GameState*, GameState::Count> m_gameStates;
};


#endif //SFML_PACMAN_GAME_H
