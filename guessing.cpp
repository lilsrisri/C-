#include <cstdlib>
#include <iostream>

/*
  Sriram S
  Guessing Game
  C++ Period 7
  no global variables
  no strings ever
  always include <iostream> not stdio
  only use break/continue if you must
*/

using namespace std;

int main() {
  srand(time(NULL)); //srand to generate random numbers
  int randomnumber = rand() % 100 + 1; //modulus 100 to get a number between 1 and 100, +1 so I dont get 0

  int guess = 0; // Variables I need
  int count = 0;

  while (guess != randomnumber) { //This loop runs as long as the guess the user put in and randomnumber isnt the same
    // cout << randomnumber;
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;

    if (guess < randomnumber) { //If the guess is lower then randomnumber, ask the user for a higher number
      cout << "Too low, guess higher!" << endl;
      count++;
    }
    else if (guess > randomnumber) { //If the guess is higher then randomnumber, ask the user for a lower number
      cout << "Too high, guess lower!" << endl;
      count++;
    }
    else { //Only other scenario is if the user gets the number right
      cout << "You got it!" << endl;
      count++;
  }
  }
    cout << "You guessed " << count << " times!" << endl; //Everytime something happens in the while statement I updated count, so I can output it here
  char playAgain;
  cout << "Would you like to play again?" << endl;
  cin >> playAgain;
  if (playAgain == 'y' || playAgain == 'Y') { //if the user asks to play again, reruns the main statement
    main();
  }
  else if (playAgain == 'n' || playAgain == 'N') { //if the user has had enough, exit the program
    return 0;
  }
}
    
