#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {

/*   initialize random seed. Do this only once at the beginning of the main-function
*/
srand ( time(NULL) ); 
char choice;
int randomNumber;    // this variable will hold the random number
do
{   

/* 
generate secret number: between 1 and 10. Change the 10 to a different value to
generate random numbers up to that maximum value 
*/ 
    randomNumber = rand() % 10 + 1;  
    
    int guessNumber;
    cout<<"Guess the computer's number: ";
    cin>>guessNumber;

    if (guessNumber == randomNumber)
    {
        cout<<"You, guessed correctly! You win!";
    }
    else 
    {
        cout<<"You were off by "<< abs(guessNumber - randomNumber)<<". Sorry, you lose.";
    }
    
    cout<<"\nWould you like to play guess game again? (Y/N)";
    cin>>choice;
    if (choice == 'N' || choice == 'n')
	 {
	    cout<<"\nThanks for playing!";
	 }
	} while(choice =='Y');
}
