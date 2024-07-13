#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

#include "game_logic/Game.h"
#include <unordered_map>

class GameController {
public:
    void startNewGame();
    bool makeMove(int gameId, int startX, int startY, int endX, int endY);
private:
    std::unordered_map<int, Game> games;
    int nextGameId = 1;
};

#endif // GAME_CONTROLLER_H
