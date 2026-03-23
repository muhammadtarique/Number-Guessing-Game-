#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int number, guess ;
	srand(time(0));
	number = rand() % 100 + 1;
	
	cout<<"\n Welcome to Number Guessing Game"<<endl;
	
	do{
		cout<<" Enter your Guess ( 1 - 100 ) : ";
		cin>>guess;
		
		if(guess > number){
			cout<<" Guess is too big! Try Aqain "<<endl;
		}else if(guess < number ){
			cout<<" Guess is too low! Try Aqain "<<endl;
		}else{
			cout<<" Congratulations! You guessed the correct number "<<endl;
		}
		
	}while(guess != number);
	
	return 0;
}