#include <iostream>
#include <cstdlib>
#include "../include/commands.h"

using namespace std;

void executeCommand(string command){

    if(command == "open chrome"){
        system("start chrome");
    }

    else if(command == "open vscode"){
        system("code");
    }

    else if(command == "open youtube"){
        system("start https://youtube.com");
    }

    else if(command == "open downloads"){
        system("start C:\\Users\\%USERNAME%\\Downloads");
    }

    else{
        cout<<"Command not found\n";
    }
}