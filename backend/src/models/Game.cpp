#include "Game.h"
#include <iostream>

Game::Game() : currentTurn(WHITE) {
    board.initializeBoard();
}

void Game::start() {
    // Starting logic if needed
}

bool Game::movePiece(int startX, int startY, int endX, int endY) {
    if (board.movePiece(startX, startY, endX, endY)) {
        switchTurn();
        return true;
    }
    return false;
}

void Game::switchTurn() {
    currentTurn = (currentTurn == WHITE) ? BLACK : WHITE;
}
