//PRAGITH CHENTHURAN
//MAD LIBS
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <cstdlib>

using namespace std;

class madlib {//With this class the program will run faster and appears better. Since there are 3 madlibs it is smarter to create one class and connect the others to the 1 class.
public: 
    string word1;
    string word2;
    string word3;
    string word4;
    string word5;
    string word6;
    string word7;
    string word8;
    string word9;
    string word10;
};

int main() { //Prints the title
  cout <<
" ███╗   ███╗ █████╗ ██████╗     ██╗     ██╗██████╗ ███████╗"<<endl<<" ████╗ ████║██╔══██╗██╔══██╗    ██║     ██║██╔══██╗██╔════╝"<<endl<<" ██╔████╔██║███████║██║  ██║    ██║     ██║██████╔╝███████╗"<<endl<<" ██║╚██╔╝██║██╔══██║██║  ██║    ██║     ██║██╔══██╗╚════██║"<<endl<<" ██║ ╚═╝ ██║██║  ██║██████╔╝    ███████╗██║██████╔╝███████║"<<endl<<" ╚═╝     ╚═╝╚═╝  ╚═╝╚═════╝     ╚══════╝╚═╝╚═════╝ ╚══════╝"<<endl;
                                                          

  cout << " "<< endl;
  int choice = 9;//random number to run the program
  while (choice != 0){//creates a while loop which will run the program
    cout << "Pick Your Mad Lib (Out of 3, O to QUIT): ";
    cin >> choice;
    //Mad Libs 1
    if (choice == 1) {//If person picks input 1 then it runs this
      madlib x;
      cout << " "<<endl;
      cout << "Enter an Adjective:";
      cin >> x.word1;
      cout << "Enter an Adjective:";
      cin >> x.word2;
      cout << "Enter an Adjective:";
      cin >> x.word3;
      cout << "Enter an Noun:";
      cin >> x.word4;
      cout << "Enter an Plural Noun:";
      cin >> x.word5;
      cout << "Enter an Game:";
      cin >> x.word6;
      cout << "Enter an Plural Noun:";
      cin >> x.word7;
      cout << "Enter an Adjective:";
      cin >> x.word8;
      cout << "Enter an Number:";
      cin >> x.word9;
      cout << "Enter an Adjective:";
      cin >> x.word10;
      cout << " "<<endl;
      cout << "A vacation is when you go to some "<<x.word1<<" place with your "<<x.word2<<" family. "<<endl<<"Usually you go to some " <<x.word3<< " place near a(n) " <<x.word4<<"." <<endl<< "A good vacation place is one where you can ride " <<x.word5<< " or "<<endl<<"play " <<x.word6<< " or go hunting for " <<x.word7<< "." <<endl<< "Parents need vacations more than kids because parents are "<<endl<<"always very " <<x.word8<< " because they have to work " <<x.word9<< " hours every day all year "<<endl<<"making enough " <<x.word10<< " money to pay for the vacation." << endl;
      cout << " "<<endl;
    }
    else {
      if (choice == 2) {//If person picks input 2 then it runs this
        madlib x;
        cout << " "<<endl;
        cout << "Enter an Adjective:";
        cin >> x.word1;
        cout << "Enter an Noun (Name/Animal):";
        cin >> x.word2;
        cout << "Enter an Past Tense Verb:";
        cin >> x.word3;
        cout << "Enter an Adverb:";
        cin >> x.word4;
        cout << "Enter an Adjective:";
        cin >> x.word5;
        cout << "Enter an Noun (Name/Animal):";
        cin >> x.word6;
        cout << "Enter an Noun (Name/Animal):";
        cin >> x.word7;
        cout << "Enter an Adjective:";
        cin >> x.word8;
        cout << "Enter an Verb:";
        cin >> x.word9;
        cout << "Enter an Adverb:";
        cin >> x.word10;
        cout << " "<<endl;
        cout <<"Today I went to the zoo. "<<endl<<"I saw a(n) "<< x.word1<<" "<<x.word2<<" jumping up and down in its tree. "<<endl<<"He "<<x.word3<<" "<<x.word4<<" through the large tunnel "<<endl<<"that led to its "<<x.word5<<" "<<x.word6<<" I got my bag and fed the animal. "<<endl<<"Then I passed through the tunnel to a gigantic gray "<<x.word7<<" towering "<<endl<<"above my head. "<<endl<<"After I fed that animal I was hungry. "<<endl<<"I went to get a  "<<x.word8<<" scoop of ice cream. "<<endl<<"It filled my stomach. "<<endl<<"Afterwards I had to "<<x.word9<<" "<<x.word10<<" to catch our bus."<<endl;
        cout << " "<<endl;
      }
      else {
        if (choice == 3) {//If person picks input 3 then it runs this
        madlib x;
        cout << " "<<endl;
        cout << "Enter an Adjective:";
        cin >> x.word1;
        cout << "Enter an Plural Noun:";
        cin >> x.word2;
        cout << "Enter an Adjective:";
        cin >> x.word3;
        cout << "Enter an Adverb:";
        cin >> x.word4;
        cout << "Enter an Number:";
        cin >> x.word5;
        cout << "Enter an Adjective:";
        cin >> x.word6;
        cout << "Enter an Adjective (-est):";
        cin >> x.word7;
        cout << "Enter an Adjective:";
        cin >> x.word8;
        cout << "Enter an Adverb:";
        cin >> x.word9;
        cout << "Enter an Adjective:";
        cin >> x.word10;
        cout << " "<<endl;
        cout <<"Today, my fabulous camp group went to a(n) "<< x.word1<<" amusement park. "<<endl<<"It was a fun park with lots of cool "<<x.word2<<" and enjoyable play structures."<<endl<<"When we got there, my counselor shouted loudly, 'Everybody off "<<endl<<"the "<<x.word3<<" bus.'"<<endl<<"We all pushed out in a terrible hurry."<<endl<<"My counselor handed out yellow tickets, and we scurried in."<<endl<<"I was so excited!"<<endl<<"I couldn't figure out what exciting thing to do first."<<endl<<"I saw a scary roller coaster I "<<endl<<"really liked so, I "<<x.word4<<" ran over to get in the long line that had about "<<x.word5<<" people in it."<<endl<<"When I finally got on the roller coaster I was "<<x.word6<<"."<<endl<<"In fact I was so nervous my two knees were knocking together."<<endl<<"This was the "<<x.word7<<" ride I had ever been on! "<<endl<<"In about two minutes I heard the crank and grinding of the gears."<<endl<<"That’s when the ride began!"<<endl<<"When I got to the bottom, I was a little "<<x.word8<<" but "<<endl<<"I was proud of myself."<<endl<<"The rest of the day went "<<x.word9<<"."<<endl<<"It was a(n) "<<x.word10<<" day at the park. "<<endl;
        cout << " "<<endl;
        }
        else {
          if (choice == 0){//If person quits hence this will be displayed
            cout << "Thanks for Playing!"<< endl;
          }
          else{
            cout << "Incorrect Entry"<< endl;//if person puts wrong entry this will be displayed
            cout << " "<<endl;
          }
        }
      }
    }
  }
}
//Credit for Stories
//Mad Libs: Vacation
//Mad Libs: Zoo Trip
//Mad Libs: Day at the Park
//Stories edited and fitted by Pragith Chenthuran