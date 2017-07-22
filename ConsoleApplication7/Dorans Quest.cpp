#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <windows.h>
#include <mmsystem.h>
//#include <Winmm.lib>
//#pragma comment(lib, "winmm.lib")

using namespace std;
using std::flush;
using std::this_thread::sleep_for;
using chrono::milliseconds;

void slow_print(const string& message, unsigned int millis_per_char)
{// Range loops are "for each" constructs; here: for each character in the string
	for (const char c : message)
	{// flush is used to make sure the buffer is emptied to the terminal immediately
		cout << c << flush;
		// Ask the thread to sleep for at least n millis.
		sleep_for(milliseconds(millis_per_char));
	}
}

void ELDERSHIRE()
{
	string message;
	char action;
	bool leave = false;
	system("pause");
	//PlaySound(TEXT("Erang.wav"), NULL, SND_ASYNC);
	bool backagain = false;
	do {	
		if (backagain == true) {
			message = "Ah the town Square,things are peaceful here...\n";
			slow_print(message, 30);
		}
		if (backagain == false) {
			message = " You walk into the town square, This must be eldershire.. \n";
			slow_print(message, 30);
		}
		cin >> action;
		//enum action {Inspect,leaveroom};
		
		switch (action)
		{
		case 'i':
			message = "\n";
			slow_print(message, 30);
			if (backagain == false) {
				message = " faint memories torment your mind, best find something to do before you go insain.\n";
				slow_print(message, 30);
				backagain = true;
			}
			break;
		case 'x' :
			message = "you cannot leave the town yet, your not ready. best go back to the inn.\n";
			slow_print(message, 30);
			leave = true;
			//INN();
			system("pause");
			break;
		case 'm':
			message = "You look at the map.\n";
			slow_print(message, 30);
			cout << "	.........................................................N......." << endl;
			cout << "	...........########.......##..{ISLE OF kALDOR}.......#...#...#..." << endl;
			cout << "	.......#################..##...........................#.#.#....." << endl;
			cout << "	.....#######################..........##...........W.#########.E." << endl;
			cout << "	.....#######################.......#####...............#.#.#....." << endl;
			cout << "	....#####################........##########..........#...#...#..." << endl;
			cout << "	......################.............##########............S......." << endl;
			cout << "	.....##################...............######.........##.........." << endl;
			cout << "	.....####################.........##############...########......" << endl;
			cout << "	...########################....#############################....." << endl;
			cout << "	...#####{DARK FOREST}#################{STONE COVE}########......." << endl;
			cout << "	..##############################################......#####......" << endl;
			cout << "	.#############################################.......#######....." << endl;
			cout << "	.##############################################.......######....." << endl;
			cout << "	..###########################################..........####......" << endl;
			cout << "	...####.{ELDERSHIRE}.######################.............#####...." << endl;
			cout << "	.....###########################################.........##......" << endl;
			cout << "	........#######################################.................." << endl;
			cout << "	............##################################..................." << endl;
			cout << "	.................#########################......................." << endl;
			cout << "	......................###############............................" << endl;
			cout << "	................................................................." << endl;
			system("pause");
			break;
		default:
			message = "You cannot do that here, type x to go back to the INN.\n";
			slow_print(message, 30);
			break;

		}
	} while (!leave);
}
void INN()
{
	string message;
	char action;
	bool leave = false;
	system("pause");
	//PlaySound(TEXT("Digital Native.wav"), NULL, SND_ASYNC);
	bool backagain = false;
	do {
		if (backagain == true) {
			message = "You are inside the INN...\n";
			slow_print(message, 30);
		}
		if (backagain == false) {
			message = "You enter the INN and make your way to a bedroom that Dordan has left for you, type i for inspect to look around.\n";
			slow_print(message, 30);
		}
		cin >> action;
		//enum action {Inspect,leaveroom};

		switch (action)
		{
		case 'i':
			message = "The room is of average size, the bed seems to be stuffed with what looks like straw.\n";
			slow_print(message, 30);
			if (backagain == false) {
				message = "It would seem that Doran has left you a map, how thoughtful, type m to view map.\n";
				slow_print(message, 30);
				backagain = true;
			}
			break;
		case 'x':
			message = "you leave the INN and enter the town square.\n";
			slow_print(message, 30);
			leave = true;
			ELDERSHIRE();
			system("pause");
			break;
		case 'm':
			message = "You look at the map.\n";
			slow_print(message, 30);
			cout << "	.........................................................N......." << endl;
			cout << "	...........########.......##..{ISLE OF kALDOR}.......#...#...#..." << endl;
			cout << "	.......#################..##...........................#.#.#....." << endl;
			cout << "	.....#######################..........##...........W.#########.E." << endl;
			cout << "	.....#######################.......#####...............#.#.#....." << endl;
			cout << "	....#####################........##########..........#...#...#..." << endl;
			cout << "	......################.............##########............S......." << endl;
			cout << "	.....##################...............######.........##.........." << endl;
			cout << "	.....####################.........##############...########......" << endl;
			cout << "	...########################....#############################....." << endl;
			cout << "	...#####{DARK FOREST}#################{STONE COVE}########......." << endl;
			cout << "	..##############################################......#####......" << endl;
			cout << "	.#############################################.......#######....." << endl;
			cout << "	.##############################################.......######....." << endl;
			cout << "	..###########################################..........####......" << endl;
			cout << "	...####.{ELDERSHIRE}.######################.............#####...." << endl;
			cout << "	.....###########################################.........##......" << endl;
			cout << "	........#######################################.................." << endl;
			cout << "	............##################################..................." << endl;
			cout << "	.................#########################......................." << endl;
			cout << "	......................###############............................" << endl;
			cout << "	................................................................." << endl;
			system("pause");
			break;
		default:
			message = "You flail your arms randomly... mayby you need some air.. type x to leave the INN.\n";
			slow_print(message, 30);
			break;

		}
	} while (!leave);
}


int main() {
	//PlaySound(TEXT("04 All of Us.wav"), NULL, SND_ASYNC);
	
	cout << endl;
	string message;
	message="	------------------------------------------------------------------\n";
	slow_print(message, 10);
	cout << "	.########...#######..########.....###....##....##..######." << endl;
	cout << "	.##.....##.##.....##.##.....##...##.##...###...##.##....##" << endl;
	cout << "	.##.....##.##.....##.##.....##..##...##..####..##.##......" << endl;
	cout << "	.##.....##.##.....##.########..##.....##.##.##.##..######." << endl;
	cout << "	.##.....##.##.....##.##...##...#########.##..####.......##" << endl;
	cout << "	.##.....##.##.....##.##....##..##.....##.##...###.##....##" << endl;
	cout << "	.########...#######..##.....##.##.....##.##....##..######." << endl;
	message = "	------------------------------------------------------------------\n";
	slow_print(message, 10);
	cout << endl;
	message = "	------------------------------------------------------------------\n";
	slow_print(message, 10);
	cout << "	..#######..##.....##.########..######..########" << endl;
	cout << "	.##.....##.##.....##.##.......##....##....##..." << endl;
	cout << "	.##.....##.##.....##.##.......##..........##..." << endl;
	cout << "	.##.....##.##.....##.######....######.....##..." << endl;
	cout << "	.##..##.##.##.....##.##.............##....##..." << endl;
	cout << "	.##....##..##.....##.##.......##....##....##..." << endl;
	cout << "	..#####.##..#######..########..######.....##..." << endl;
	message = "	------------------------------------------------------------------\n";
	slow_print(message, 10);
	//cout << "Made by Ibby.b" << endl;

	message = "		A text RPG programmed by Ibby.b in C++\n";
	slow_print(message, 30);
	cout << endl;
	message = "	------------------------------------------------------------------\n";
	slow_print(message, 10);

	system("pause");
	//
	PlaySound(TEXT("Erang.wav"), NULL, SND_ASYNC);
	
	message = "You find yourself in dark forest, suddenly someone appears from a bush nearby.\n";
	slow_print(message, 30);
	
	message = "Greetings and Salutations traveler, i am Doran and i will be your guide.\n";
	slow_print(message, 30);
	
	message = "What is your name Traveler?\n";
	slow_print(message, 30);
	string name;
	cin >> name;
	char letsgo;
	bool startgame = false;

	do {
		message = "Are you ready to start your adventure, Y or N " + name + "?\n";
		slow_print(message, 30);
		cin >> letsgo;
		
		switch (letsgo) {
		case 'y':
		case 'Y':
			 message = "You follow Doran to the town.. he seems trust worthy enough...\n";
			slow_print(message, 30);
			//system("pause");
			INN();
			startgame = true;
			break;
		case 'n':
		case 'N':
			 message = "Well then... i bid you fairwell, till the next time we meet traveler, godspeed.\n";
			slow_print(message, 30);
			//system("quit")
			break;
		default:
			message = "Sorry i dont understand, do you want to start your adventure or not" + name + "?\n";
			slow_print(message, 30);
			break;
		}
	} while (!startgame);
	
	
	//system("pause");
	//cin.get();
	//out << "what is you name traveler" << endl;


	return 0;
}

