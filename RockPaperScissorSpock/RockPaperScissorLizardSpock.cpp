//Maeve Baksa - Rock Paper Scissor Lizard Spock - 09.24.2021

#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

  //fixes getting the same "random" number many times
  //in a row. This is due to the seed of the random numbers
  //remaining the same, doing this sets the thing to really
  //more random.

  //Source:
  //https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c?scrlybrkr=3864b9a8
  srand((unsigned)time(NULL));

  //create a random selection between 1-5;
  //source: https://www.cplusplus.com/reference/cstdlib/rand/
  int randomvalue;

  randomvalue = rand() % 5;

  //ask for user input:
  cout << "Please input one of the following: rock, paper, scissors, lizard, spock: ";
  string userinput;
  cin >> userinput;

  //check to see if you won firstly, it checks to see if it matches any of the words
  if(userinput == "rock" || userinput == "Rock" || userinput == "ROCK"){
    //checks the random value against rock to see if it wins, since user data is already known as rock.
    if (randomvalue == 0){
      cout << "Rock versus Rock. A tie! \n";
    }
    else if (randomvalue == 1){
      cout << "Rock versus Paper. You get covered by paper and lose. \n";
    }
    else if (randomvalue == 2){
      cout << "Rock versus Scissors. You destroy scissors and win. \n";
    }
    else if (randomvalue == 3){
      cout << "Rock versus Lizard. You crush lizard and win.\n";
    }
    else if (randomvalue == 4){
      cout << "Rock versus Spock. You get vaporized and lose.\n";
    }
  }

  //same for paper etc...
  else if (userinput == "paper" || userinput == "Paper" || userinput == "PAPER"){
    if (randomvalue == 0){
      cout << "Paper versus Rock. You cover rock and win. \n";
    }
    else if (randomvalue == 1){
      cout << "Paper versus Paper. A tie! \n";
    }
    else if (randomvalue == 2){
      cout << "Paper versus Scissors. You get cut by scissors and lose. \n";
    }
    else if (randomvalue == 3){
      cout << "Paper versus Lizard. You get eaten by lizard and lose.\n";
    }
    else if (randomvalue == 4){
      cout << "Paper versus Spock. You disprove Spock and win.\n";
    }
  }


  else if (userinput == "scissors" || userinput == "Scissors" || userinput == "SCISSORS"){
    if (randomvalue == 0){
      cout << "Scissors versus Rock. You get crushed by rock and lose. \n";
    }
    else if (randomvalue == 1){
      cout << "Scissors versus Paper. You cut paper and win. \n";
    }
    else if (randomvalue == 2){
      cout << "Scissors versus Scissors. A tie! \n";
    }
    else if (randomvalue == 3){
      cout << "Scissors versus Lizard. You decapitate lizard and win.\n";
    }
    else if (randomvalue == 4){
      cout << "Scissors versus Spock. You get smashed by Spock and lose.\n";
    }  
  }


  else if (userinput == "lizard" || userinput == "Lizard" || userinput == "LIZARD"){
    if (randomvalue == 0){
      cout << "Lizard versus Rock. You get crushed by rock and lose.\n";
    }
    else if (randomvalue == 1){
      cout << "Lizard versus Paper. You eat paper and win. \n";
    }
    else if (randomvalue == 2){
      cout << "Lizard versus Scissors. You get decapitataed by scissors and lose. \n";
    }
    else if (randomvalue == 3){
      cout << "Lizard versus Lizard. A tie!\n";
    }
    else if (randomvalue == 4){
      cout << "Lizard versus Spock. You poison spock and win.\n";
    }
  }


  else if (userinput == "spock" || userinput == "Spock" || userinput == "SPOCK"){
    if (randomvalue == 0){
      cout << "Spock versus Rock. You vaporize rock and win. \n";
    }
    else if (randomvalue == 1){
      cout << "Spock versus Paper. You get disproved by paper and lose. \n";
    }
    else if (randomvalue == 2){
      cout << "Spock versus Scissors. You smash scissors and win. \n";
    }
    else if (randomvalue == 3){
      cout << "Spock versus Lizard. You get poisoned by lizard and die.\n";
    }
    else if (randomvalue == 4){
      cout << "Spock versus Spock. A tie!\n";
    }    
  }


  else{
    //hey, there's no such thing as too much redundancy
    //if the user doesn't spell the word correctly, it throws an error.
    cout << "That doesn't seem to be a valid input, please restart the program and check your spelling\n";
  }
  
  
}