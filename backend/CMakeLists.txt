cmake_minimum_required(VERSION 3.10)
project(chess_game)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/game_logic
    ${PROJECT_SOURCE_DIR}/src
)

# Source files
set(SOURCES
    src/controllers/GameController.cpp
    src/controllers/UserController.cpp
    src/models/User.cpp
    src/models/Game.cpp
    src/routes/UserRoutes.cpp
    src/routes/GameRoutes.cpp
    src/routes/GRPCRoutes.cpp
    src/routes/SOAPRoutes.cpp
    src/graphql/Schema.cpp
    src/graphql/Resolvers.cpp
    src/grpc/ChessService.cpp
    src/soap/ChessService.cpp
    src/game_logic/Board.cpp
    src/game_logic/Game.cpp
    src/game_logic/Piece.cpp
    src/main.cpp
    src/server.cpp
)

# Executable
add_executable(chess_game ${SOURCES})
