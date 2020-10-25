#include <iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
//declare vector with zero elements
//in global scope
vector<string> candList;

//read a name in from the console
//and write it to the end of candidateList
void getCandidateNames(){//beginning of void statement
    //loop over entry logic until "stop" is read
    //temporaplements in the most rudimentary functionality as brain
    //food fory holding
    string candName = "";
    while(true){//beginning of while loop
        cout << " Enter candidate name then enter; 'stop' to end" << '\n';
        //read value from user, store in codeName
        cin >> candName;
        if(candName == "stop"){//beginning of if loop
            break;
        }//close of the if loop
        //test input by reading to console
        cout << "Pushing " << candName << " onto list" << '\n';
        //write name to the end of candidate list(global)

        candList.push_back(candName);
    }//end of while loop

    cout << "exiting loop" << '\n';

}//end of function called getCandidateNames

//Iterates over candidate list and writes to cout
void displayCandidateList(){//beginning of function call displayCandidateList
    cout << "Printing list" << '\n';
    //Print contents of list with for
    for(int i = 0; i<candList.size(); i = i + 1){//beginning of for loop
        cout << candList[i] << '\n';
    }//end of for loop
}//end of void loop

void mapPractice(){//beginning of void loop
//create new empty map string: int
map <string, int> ageMap;
//write in a key "edith" mapped to value 2
ageMap[ "edith"] = 2;
ageMap["sylvia"] = 15;
ageMap["delores"] = 22;
//lookup the value of key "sylvia";
cout << ageMap.at("") <<'\n';
}//end of void method


//front door program   
int main() {//beginning of main statement
   getCandidateNames();
   displayCandidateList();
//call our functions in logical order
//getmapPractice();
//go to ageMap, give me key-value pairs one at a time until //I have seen all of them. each key-value pair in a variable called kvPair
//for(const auto & kvPair: ageMap){//beginning of for loop
  //cout << kuPair.first << ":" << '\t' kuPair.second << '\n';

   // }//end of for loop
}//end of main = end of program
  