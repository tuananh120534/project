#include "Pokemon.h"
#include "Trainer.h"
#include "Battle.h"
#include "Charizard.h"
#include "Blastoise.h"
#include "Venusaur.h"
#include <iostream>
int main() {
    // Create some Pokemon
    Charizard charizard("Charizard");
    Blastoise blastoise("Blastoise");
    Venusaur venusaur("Venusaur");

    // Create a trainer and add some Pokemon
    Trainer trainer;
    trainer.addPokemon(&charizard);
    trainer.addPokemon(&blastoise);
    trainer.addPokemon(&venusaur);

    // Create an enemy Pokemon
    Blastoise enemyBlastoise("Enemy Blastoise");

    // Start a battle
    Battle battle(trainer.getPokedex(), &enemyBlastoise);

    // Perform turns until there is a winner
    while (true) {
        battle.playerTurn();
        if (battle.findWinner() != "No winner yet") {
            std::cout << "Winner: " << battle.findWinner() << std::endl;
            break;
        }
        battle.computerTurn();
        if (battle.findWinner() != "No winner yet") {
            std::cout << "Winner: " << battle.findWinner() << std::endl;
            break;
        }
    }

    return 0;
}
