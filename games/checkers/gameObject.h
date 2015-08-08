// Generated by Creer at 04:55PM on August 08, 2015 UTC, git hash: '6ae07398e95534176c2e851c2d21269933edce81'
// An object in the game. The most basic class that all game classes should inherit from automatically.

#ifndef JOUEUR_CHECKERS_GAMEOBJECT_H
#define JOUEUR_CHECKERS_GAMEOBJECT_H

#include "checkers.h"
#include "../../joueur/baseGameObject.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add addtional #includes(s) here.
// <<-- /Creer-Merge: includes -->>

/// <summary>
/// An object in the game. The most basic class that all game classes should inherit from automatically.
/// </summary>
class Checkers::GameObject : public Joueur::BaseGameObject
{
    protected:
        virtual void deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta);

    public:
        /// <summary>
        /// Any strings logged will be stored here when this game object logs the strings. Intended for debugging.
        /// </summary>
        std::vector<std::string> logs;

        // <<-- Creer-Merge: fields -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional fields(s) here. None of them will be tracked or updated by the server.
        // <<-- /Creer-Merge: fields -->>




        /// <summary>
        /// adds a message to this game object's log. Intended for debugging purposes.
        /// </summary>
        /// <param name="message">A string to add to this GameObject's log. Intended for debugging.</param>
        void log(std::string message);


        // <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional method(s) here.
        // <<-- /Creer-Merge: methods -->>
};

#endif
