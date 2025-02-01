# Procedural-Horse-Race
For next assignment.

Algorithm:
Include iostream and random

const TRACK LENGTH = 15
const NUM HORSES = 5

main {
	// holds the position for each horse
	horses = [0, 0, 0, 0, 0]
	
	print the starting positions

	keepGoing = true
	while keepGoing == true{
		
		hit enter to continue		

		for loop NUM HORSES times{	
			// this is using the for loop sentry variable as the horse numbers
			flip the coin(for loop var, horses)	
			print the track(for loop var, horses[for loop var])
		} end for
		// It's probably better to have the for loop inside the functions rather than outside, but I didn't think of that until after I started coding. Oopsies!
		keepGoing = determine winner(horses[])
	} end while

} end main

flip the coin(horse, position){

	if coinflip is heads{
		position[horse]++
	} end if
} end coin flip

print the track(horse number, horse progress){
	for loop TRACK LENGTH times{
		if horse progress == for loop var{
			print horse number
		} else {
			print "."
		} end if/else
	} end for
} end track printing

bool determine winner(position){
	result = true
	for i in NUM HORSES{	
		if position[i] >= TRACK LENGTH{
			result = true
			print "Horse {num} wins!"
		} end if
	}
	return result
} end determine winner
