#include <iostream>
#include <random>

const int TRACK_LENGTH = 15;
const int NUM_HORSES = 5;

void printTrack(int, int);
/*void moveHorse(int*);
void determineWinner(int, int*);*/

int main(){
	// Defining the horse positions.
	int horses[] = {0, 0, 0, 0, 0};
	
	// Printing the starting horse positions.
	std::cout << "STARTING POSITIONS" << std::endl;
	// One loop of this prints one line of the track.
	for(int i = 0; i < NUM_HORSES; i++){
		printTrack(i, horses[i]);
	} // End for

	int testing = 0;
	bool keepGoing = true;
	while(keepGoing == true && testing < 100){
		testing += 1;
		char choice[] = {};
		std::cout << "Hit enter to continue, or 'q' to quit." << std::endl;
		std::cin.ignore();
		std::cin >> choice;
		// Error here, figuring out.
		if(choice[0] != "q"){
			keepGoing = true;
		} else {
			keepGoing = false;
		}
	}

	return 0;
} // End main.

// Printing one line of the track.
void printTrack(int horse, int position){
	for(int i = 0; i < TRACK_LENGTH; i++){
		// Uses horse position to print horse number.
		if(i == position){
			std::cout << horse;
		} else {
			// Otherwise prints "."
			std::cout << ".";
		} // End if
	} // End for loop
	std::cout << std::endl;
} // End printTrack


