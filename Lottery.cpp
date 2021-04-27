#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); //seed random number generator
    int lottery = rand() % 90 + 10; // random number between 10 and 99
	// Prompt the user to enter a guess

	cout << "Enter your lottery pick (two digits): ";
	int guess = 0;// enter a guess
	cin >> guess;
	// Get digits from lottery
	int lotteryDigit1 = lottery / 10;
	int lotteryDigit2 = lottery % 10;
	// Get digits from guess
	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;
	cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else if (guessDigit2 == lotteryDigit1
	&& guessDigit1 == lotteryDigit2){
		cout << "Match all digits: you win $3,000";
	}
	else if (guessDigit1 == lotteryDigit1
	|| guessDigit1 == lotteryDigit2
	|| guessDigit2 == lotteryDigit1
	|| guessDigit2 == lotteryDigit2){
		cout << "Match one digit: you win $1,000";
	}
	else{
		cout << "Sorry, no match";
	}
}
