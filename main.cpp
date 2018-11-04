
#include "./includes/Shuffle.h"
using namespace std;
int main () {


    cout<<"Welcome to Jurassic Park! Wait, wrong intro. Welcome to Euchre! What is your name?"<<endl;
    string name;
    cin>>name;
    cout<<"Hello " + name + ""<<endl;
    cout<<"Let's not waste time."<<endl;
    HandNumber = 1;
    shuffle();
    shuffle();
    Deal();
}

