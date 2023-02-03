#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{
    while(1){
    int guessNum,Rand_Num;
    cout<<"Enter Your Guess Number Between 1 to 5: ";
    cin>>guessNum;

    Rand_Num=1+ rand()%5;
    if(guessNum==Rand_Num)
    {
        cout<<"Your Guess is Correct. Congrats!"<<endl<<endl;
    }
    else
    {
        cout<<"Opps!Your Guess is not Correct. Try Again:)"<<endl;
        cout<<" Random Number Was: "<<Rand_Num<<endl<<endl;
    }
    }
    getch();
}
