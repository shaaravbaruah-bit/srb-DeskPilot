#include <iostream>
#include <fstream>
#include <map>
using namespace std;

map<string, string> commands;

// Load commands from file
void loadCommands() {
    ifstream file("commands.txt");

    if (!file) {
        cout << "Error: commands.txt not found!\n";
        return;
    }

    string line;

    while (getline(file, line)) {
        int pos = line.find('=');

        if (pos == string::npos) continue;

        string key = line.substr(0, pos);
        string value = line.substr(pos + 1);

        commands[key] = value;
    }
}

// Add new command
void addCommand(string input) {
    string rest = input.substr(4);

    int pos = rest.find(' ');
    if (pos == string::npos) {
        cout << "❌ Invalid format\n";
        return;
    }

    string key = rest.substr(0, pos);
    string value = rest.substr(pos + 1);

    // Save to file
    ofstream file("commands.txt", ios::app);
    file << key << "=" << value << endl;

    // Update map instantly
    commands[key] = value;

    cout << "✅ Command added successfully\n";
}

int main() {
    loadCommands();

    string input;

    cout << "🔥 DeskPilot Started (type 'exit' to quit)\n";

    while (true) {
        cout << "DeskPilot > ";
        getline(cin, input);

        if (input == "exit") break;

        // ADD COMMAND FEATURE
        if (input.rfind("add ", 0) == 0) {
            addCommand(input);
        }
        // RUN COMMAND
        else if (commands.find(input) != commands.end()) {
            system(commands[input].c_str());
        }
        else {
            cout << "❌ Command not found\n";
        }
    }

    cout << "Exiting DeskPilot...\n";
    return 0;
}