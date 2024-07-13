#include "Game.h"
#include <iostream>

Game::Game() : currentTurn(WHITE) {
    board.initializeBoard();
}

void Game::start() {
    // This method can be kept for interactive testing, but it's not used in the backend controller
    int startX, startY, endX, endY;
    while (true) {
        std::cout << "Enter move (startX startY endX endY): ";
        std::cin >> startX >> startY >> endX >> endY;
        if (board.movePiece(startX, startY, endX, endY)) {
            switchTurn();
        } else {
            std::cout << "Invalid move" << std::endl;
        }
    }
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
