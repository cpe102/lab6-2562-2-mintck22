#include<iostream>
#include<string>
using namespace std;

int main(){

    string name ;
    int id;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
    cout << "?????: ";
    getline(cin,name);

    cout << "Fahsai: Wow!!! " << name << " that is a really cool name."<< "\n";
    cout << "Fahsai: I think you are Engineering student. What is your student ID?"<< "\n";
    cout << name << ": ";
    cin >> id;
    cin.ignore();

    int gear = id/10000000 - 12;
    
    cout << "Fahsai: I think you may be GEAR " << gear << " .  I have a free movie tickets for you."<< "\n";
    cout << "Fahsai: Let's go to cinema together!!!"<<"\n";

    string movie, day, text;

    cout << "Fahsai: What movie do you want to watch?"<< "\n";
    cout << name << ": ";
    getline(cin,movie);

    cout << "Fahsai: So....which day are you free to go with me?"<< "\n";
    cout << name << ": ";
    getline(cin,day);

    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watch " << movie << " with you."<< "\n";
    cout << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye ";

    char x = 92;
    cout << x << "(^ ^)/";


}

/*


Luke Skywalker: Next Monday

Luke Skywalker: May the Force be with you krub
 
*/
