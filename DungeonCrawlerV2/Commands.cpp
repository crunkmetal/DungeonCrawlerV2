#include "Commands.h"

/*
List of commands
/help - shows list of all commands
/playerstats - shows player stats
/inventory - shows player their inventory
/drop - deletes item from inventory
/playeritem - shows item details of specific item
/equip - equips item to player like ring, sword, armor
/dequip - dequips item from player like ring, sword, armor
/equipped - shows list of all items equipped to player
/save - saves player progress
/quit - checks if user wants to save first then exits the program
*/


void Commands(std::string command, Player* player)
{

	if (command == "/help") {

	}
	else if (command == "/playerstats") {

	}
	else if (command == "/inventory") {

	}
	else if (command.find("/drop")) {

	}
	else if (command.find("/playeritem")) {

	}
	else if (command.find("/equip")) {

	}
	else if (command.find("/dequip")) {

	}
	else if (command == "/equipped") {

	}
	else if (command == "/save") {

	}
	else if (command == "/quit") {

	}
	else {

	}

}
