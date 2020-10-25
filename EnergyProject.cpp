#include<string>
#include<iostream>
#include<cmath>
using namespace std;
int main(){

double kiloM;
cout << " Please enter the amount of water in kilograms: \n ";  
cin >> kiloM;

double finTemp;
cout << " Please enter a final temperature: \n ";
cin >> finTemp;

double intTemp;
cout << " Please enter an initial temperature: \n ";
cin >> intTemp;

double Q;
Q = kiloM * (finTemp - intTemp ) * 4184;
cout << " The energy needed is: " << Q << "\n ";
}
