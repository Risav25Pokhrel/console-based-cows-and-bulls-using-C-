/*The game works like this:

Randomly generate a 4-digit number. Ask the user to guess a 4-digit number. 
For every digit the user guessed correctly in the correct place, they have a 'cow'. 
For every digit the user guessed correctly in the wrong place is a 'bull.'
Every time the user makes a guess, tell them how many “cows” and 'bulls'
 they have. Once the user guesses the correct number, the game is over. 
 Keep track of the number of guesses the user makes throughout the game and tell the user at the end.*/
#include<iostream>
#include<cmath>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    int ran[4],user[4];
    char a='y';
    cout<<"~~~~Welcome to Cows(number correctly placed) and Bulls(number incorrectly placed)~~~~\n";
   
      cout<<"\n\t\t\t###HOW TO PLAY###"<<endl;
   cout<<"\n For every digit the you guessed correctly in the correct place, you have"<<endl; 
   cout<<" a 'cow'. For every digit the you guessed correctly in the wrong place is a  "<<endl;
   cout<<"'bull'.Every time the you makes a guess, computer tells how many 'cows' and "<<endl;
   cout<<"'bulls' you have. Once you guesses the correct number, the game is over." <<endl<<endl;
    while(a=='y'){
	int attempts=0;
   for (int i = 0; i < 4; i++)
    {
       ran[i]=rand()%10; 
       rand();
    }
  while (true) {
    int cows = 0;
    int bulls = 0;
    attempts += 1;

   cout<<endl<<"Enter the 4 digit number\n";
    for (int i = 0; i < 4; i++)
    {
         user[i]=getch()-'0';
         cout<<user[i]; 
    }
    cout<<endl;
    
    if (user[0]== ran[0]&&user[1]== ran[1]&&user[2]== ran[2]&&user[3]== ran[3]) {
     cout<<endl<<"Congratulation! You took " <<attempts <<" attempts"<<endl;
      break;
    }
     for ( int i = 0; i < 4; i++) 
     {
      for(int j=0;j<4;j++)  
      { 
      if (user[i] == ran[i]) 
      {
        cows += 1;
        cout<<endl<<"cow's number="<<user[i];
        break;
      }
       else if (user[j]==ran[i]) 
      {
        cout<<endl<<"Bull's number="<<ran[i]<<endl;;
        bulls += 1;
        
      }
    }
     }
    cout<<"\nAttempts: "<<attempts <<"\nCows: "<<cows <<" Bulls:" <<bulls<<endl;
  }
   cout<<"DO you want to play again[y/n]"<<endl;
   cin>>a;
}
}   
  
