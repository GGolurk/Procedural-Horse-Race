#include <iostream>
#include <cstdlib>

const int TRACK_LENGTH = 15;
const int NUM_HORSES = 5;

void printTrack(int, int);
void moveHorse(int, int*);
bool determineWinner(int*);

int main(){
	// Seeding the random number generator.
	srand(time(NULL));

	// Defining the horse positions.
	int horses[] = {0, 0, 0, 0, 0};
	
	// Printing the starting horse positions.
	std::cout << "STARTING POSITIONS" << std::endl;
	// One loop of this prints one line of the track.
	for(int i = 0; i < NUM_HORSES; i++){
		printTrack(i, horses[i]);
	} // End for

	// Initiating the best sentry variable.
	bool keepGoing = true;
	while(keepGoing == true){
		// It took me too long to remember how to use strings... even though I wrote it in my notes!
		std::string choice;
		std::cout << "Hit enter to continue." << std::endl;
		std::cin.ignore();
		// Using getline here because cin was uncooperative.
		getline(std::cin, choice);

		// Displays the current standings, after updating them.
		std::cout << "CURRENT STANDINGS" << std::endl;
		for(int j = 0; j < NUM_HORSES; j++){
			moveHorse(j, horses);
			printTrack(j, horses[j]);
		} // End for
		keepGoing = determineWinner(horses);
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


// Has a a 50% chance of moving a horse one time.
void moveHorse(int horse, int* position){
	// Gets a random number.
	int random = rand();
	// Uses the modulus operator to get one of two outcomes from the random number generator.
	if(random % 2 == 0){
		position[horse]++;
	} // End if
} // End moveHorses

// Determines if a horse has won.
bool determineWinner(int* position){
	bool result = true;
	for(int i = 0; i < NUM_HORSES; i++){
		// Tests if the horse position is past the track.
		if(position[i] >= TRACK_LENGTH){
			// Returns result to keepGoing as false, and celebrates the victory of one horse.
			result = false;
			std::cout << "HORSE " << i << " WINS!" << std::endl;
		} // End if
	} // End for
	return result;
} // End determineWinner
