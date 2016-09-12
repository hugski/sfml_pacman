//
// Created by zpf on 16/9/12.
//

#ifndef SFML_PACMAN_GAMESTATE_H
#define SFML_PACMAN_GAMESTATE_H
#include <SFML/Graphics.hpp>
class Game;

class GameState
{
public:
    enum State{
        NoCoin,
        GetReady,
        Playing,
        Won,
        Lost,
        Count
    };
//    void handleInput();
//
    GameState(Game *game);
    Game* getGame() const;
    virtual void insertCoin() = 0;
    virtual void pressButton() = 0 ;
    virtual void moveStick(sf::Vector2i direction) = 0;

    virtual void update(sf::Time delta) = 0;
    virtual void draw(sf::RenderWindow& window) = 0;
private:
    Game* m_game;
};

class NoCoinState: public GameState{
public:

    NoCoinState(Game *m_game);
    void insertCoin();
    void pressButton();
    void moveStick(sf::Vector2i direction);
    void update(sf::Time delta);
    void draw(sf::RenderWindow& window);
};

class GetReadyState: public GameState{
public:

    GetReadyState(Game *m_game);
    void insertCoin();
    void pressButton();
    void moveStick(sf::Vector2i direction);
    void update(sf::Time delta);
    void draw(sf::RenderWindow& window);
};

class PlayingState: public GameState{
public:

    PlayingState(Game *m_game);
    void insertCoin();
    void pressButton();
    void moveStick(sf::Vector2i direction);
    void update(sf::Time delta);
    void draw(sf::RenderWindow& window);
};
class WonState: public GameState{
public:

    WonState(Game *m_game);
    void insertCoin();
    void pressButton();
    void moveStick(sf::Vector2i direction);
    void update(sf::Time delta);
    void draw(sf::RenderWindow& window);
};
class LostState: public GameState{
public:

    LostState(Game *m_game);
    void insertCoin();
    void pressButton();
    void moveStick(sf::Vector2i direction);
    void update(sf::Time delta);
    void draw(sf::RenderWindow& window);
};
#endif //SFML_PACMAN_GAMESTATE_H
