#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand((unsigned int) time(NULL));
int comnum = (rand() % 100) + 1;
int guess = 0;
do
{
cout <<"Enter Guess (1-100) :";
cin>>guess;
if(guess >  comnum)
cout << "your guess number is higher!"<<endl;
else if (guess < comnum)
cout << "your guess number is lower!"<<endl;
else
cout << "You Won ...congrats!"<<endl;
} while (guess != comnum);
return 0;
}