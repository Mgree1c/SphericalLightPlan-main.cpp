#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
 void mapPractice();
 
  int yearReleased;
  string act;
  
}
void movieTitle(){
  std:: cout << "movie title" << '\n';
  std:: vector < std:: string > title(5);
  title[0] = "Rambo";
  title[1] = "John Wick";
  title[2] = "Fast and Furious";
  title[3] = "Half Past Dead";
  title[4] = "Equalizer";
  std:: cout << title [0] << '\n';
}
void aquireActor(){
  string actor;

  std:: cout << "Enter Actor's name and press enter; stop with Actor named x " << '\n';
  std:: string act = "";
  //std:: string <std:: string > act(5);
  while(act != "x"){
    std:: cin >> act;
    actor.push_back(act);
  }
  }
void displayTitle(){
string title;
for(int i = 0; i < title.size(); i++){
  std:: cout <<title[i];
}
}
void mapPractice(){
  map< string, string > titleMap;
  titleMap ["Rambo"] = "Sylvester Stallone";
  titleMap ["John Wick"] = "Keanu Reeves";
  titleMap ["Fast and Furious"] ="Vin Diesel";
  titleMap ["Half Past Dead"] = "Steven Seagal";
  titleMap ["Equalizer"] = "Denzel Washington";
  cout << "name:" << '\t' << "title" << '\n';

}
