#include "GameController.h"

void GameController::startNewGame() {
    Game game;
    game.start();
    games[nextGameId++] = game;
}

bool GameController::makeMove(int gameId, int startX, int startY, int endX, int endY) {
    auto it = games.find(gameId);
    if (it != games.end()) {
        return it->second.movePiece(startX, startY, endX, endY);
    }
    return false;
}
