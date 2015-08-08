// Generated by Creer at 04:55PM on August 08, 2015 UTC, git hash: '6ae07398e95534176c2e851c2d21269933edce81'
// The simple version of American Checkers. An 8x8 board with 12 checkers on each side that must move diagonally to the opposing side until kinged. Very simple.

#ifndef JOUEUR_CHECKERS_GAME_H
#define JOUEUR_CHECKERS_GAME_H

#include "checkers.h"
#include "../../joueur/baseGame.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add addtional #includes(s) here.
// <<-- /Creer-Merge: includes -->>

/// <summary>
/// The simple version of American Checkers. An 8x8 board with 12 checkers on each side that must move diagonally to the opposing side until kinged. Very simple.
/// </summary>
class Checkers::Game : public Joueur::BaseGame
{
    protected:
        virtual void deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta);

    public:
        /// <summary>
        /// The height of the board for the Y component of a checker.
        /// </summary>
        int boardHeight;

        /// <summary>
        /// The width of the board for X component of a checker.
        /// </summary>
        int boardWidth;

        /// <summary>
        /// The checker that last moved and must be moved because only one checker can move during each players turn.
        /// </summary>
        Checkers::Checker* checkerMoved;

        /// <summary>
        /// If the last checker that moved jumped, meaning it can move again.
        /// </summary>
        bool checkerMovedJumped;

        /// <summary>
        /// All the checkers currently in the game.
        /// </summary>
        std::vector<Checkers::Checker*> checkers;

        /// <summary>
        /// The player whose turn it is currently. That player can send commands. Other players cannot.
        /// </summary>
        Checkers::Player* currentPlayer;

        /// <summary>
        /// The current turn number, starting at 0 for the first player's turn
        /// </summary>
        int currentTurn;

        /// <summary>
        /// The maximum number of turns before the game will automatically end.
        /// </summary>
        int maxTurns;

        /// <summary>
        /// List of all the players in the game.
        /// </summary>
        std::vector<Checkers::Player*> players;

        /// <summary>
        /// A unique identifier for the game instance that is being played.
        /// </summary>
        std::string session;

        // <<-- Creer-Merge: fields -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional fields(s) here. None of them will be tracked or updated by the server.
        // <<-- /Creer-Merge: fields -->>



        /// <summary>
        /// Creates a new instance of Game. Used during game initialization, do not call directly.
        /// </summary>
        Game();


        // <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional method(s) here.
        // <<-- /Creer-Merge: methods -->>
};

#endif
