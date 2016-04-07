// Generated by Creer at 11:41PM on April 07, 2016 UTC, git hash: 'e7ec4e35c89d7556b9e07d4331ac34052ac011bd'
// There's an infestation of enemy spiders challenging your queen broodmother spider! Protect her and attack the other broodmother in this turn based, node based, game.

#include "game.h"
#include "gameManager.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add additional #includes(s) here.
// <<-- /Creer-Merge: includes -->>




void Spiders::Game::deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta)
{
    Joueur::BaseGame::deltaUpdateField(fieldName, delta);

    if (fieldName == "currentPlayer")
    {
        this->currentPlayer = (Spiders::Player*)this->gameManager->unserializeGameObject(delta);
    }
    else if (fieldName == "currentTurn")
    {
        this->currentTurn = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "maxTurns")
    {
        this->maxTurns = this->gameManager->unserializeInt(delta);
    }
    else if (fieldName == "nests")
    {
        this->nests = this->gameManager->unserializeVectorOfGameObjects<Spiders::Nest*>(delta, &this->nests);
    }
    else if (fieldName == "players")
    {
        this->players = this->gameManager->unserializeVectorOfGameObjects<Spiders::Player*>(delta, &this->players);
    }
    else if (fieldName == "session")
    {
        this->session = this->gameManager->unserializeString(delta);
    }
    else if (fieldName == "webs")
    {
        this->webs = this->gameManager->unserializeVectorOfGameObjects<Spiders::Web*>(delta, &this->webs);
    }
}




// <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// if you forward declaired additional methods to the Game then you can code them here.
// <<-- /Creer-Merge: methods -->>
