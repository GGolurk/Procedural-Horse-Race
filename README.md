# Procedural-Horse-Race
For next assignment.

Algorithm:
Include iostream and random

const TRACK LENGTH = 15

main {
	// holds the position for each horse
	horses = [0, 0, 0, 0, 0]
	
	print the starting positions

	keepGoing = true
	while keepGoing == true{
		
		hit enter to continue		

		for loop 5 times{	
			// this is using the for loop sentry variable as the horse numbers
			flip the coin(horses[for loop var])	
			print the track(for loop var, horses[for loop var])
		} end for
		// I split this into two for loops so that it prints the track before printing the winners
		for loop 5 times{
			keepGoing = determine winner(for loop var, horses[for loop var])
		} end for
	} end while

} end main

flip the coin(position){
	if coinflip is heads{
		position++
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

bool determine winner(num, position){
	result = false	
	if position > TRACK LENGTH{
		result = true
		print "Horse {num} wins!"
	} end if
	return result
} end determine winner
