#include <iostream>
#include <string>
#include "../include/commands.h"

using namespace std;

int main(){

    string command;

    cout<<"===== DeskPilot =====\n";

    while(true){

        cout<<"\nDeskPilot > ";
        getline(cin, command);

        if(command == "exit"){
            cout<<"Closing DeskPilot...\n";
            break;
        }

        executeCommand(command);
    }

    return 0;
}