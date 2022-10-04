#include <iostream>
#include <ctime>
using namespace std;

const int FROM = 3;
const int TO = 11;

int main(){
    string choice = "";
    int res = 0;
    cout << "Welcome to timing game, enter anyword at the right timing to win!" << endl;
    cout << "Enter any key to start" << endl;
    cin >> choice;
    system ("clear");

    int tim = rand()%TO +FROM;
    cout << "You need to enter anyword at the time of: " << tim << endl;
    cout << "Enter any key to start" << endl;
    cin >> choice;

    time_t start_time = time(NULL);

    cin >> choice;

    time_t end_time = time(NULL);

    res = end_time - start_time;

    if(res == tim){
        cout << "You successfully press it at the time of " << res << "!" << endl;
    }else if(res < tim){
        cout << "You press it on " << res << ", which is too early!" << endl;
    }else{
        cout << "You press it on " << res << ", which is too late!" << endl;
    }


    return 0;
}