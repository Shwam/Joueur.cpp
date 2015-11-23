#ifndef CURRENTGAME_H
#define CURRENTGAME_H

// This file will need to be manually edited when a new game is created

#include "games/checkers/game.h"
#include "games/checkers/ai.h"
#include "games/checkers/gameManager.h"

#include "games/chess/game.h"
#include "games/chess/ai.h"
#include "games/chess/gameManager.h"

#include "games/anarchy/game.h"
#include "games/anarchy/ai.h"
#include "games/anarchy/gameManager.h"

struct CurrentGame
{
    Joueur::BaseGame* game = nullptr;
    Joueur::BaseAI* ai = nullptr;
    Joueur::BaseGameManager* gameManager = nullptr;
};

CurrentGame getCurrentGame(std::string gameName)
{
    CurrentGame c;
    if (gameName == "Checkers")
    {
        c.gameManager = new Checkers::GameManager();
    }
    else if (gameName == "Chess")
    {
        c.gameManager = new Chess::GameManager();
    }
    else if (gameName == "Anarchy")
    {
        c.gameManager = new Anarchy::GameManager();
    }

    if (c.gameManager != nullptr)
    {
        c.game = c.gameManager->game;
        c.ai = c.gameManager->ai;
    }

    return c;
}

#endif
