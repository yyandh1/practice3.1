#include "PARCER.h"
#include "INSERT.h"
#include "DELETE.h"
#include "SELECT.h"

int main() {
    TableJson json_table;
    PARCER(json_table);

    string command;
    while (true) {
        cout << "Введите команду:";
        getline(cin, command);
        if (command == "") {
            continue;
        }
        if (command == "EXIT") {
            return 0;
        }
        else if (command.find("INSERT") == 0) {
            INSERT(command, json_table);
        }
        else if (command.find("DELETE") == 0) {
            DELETE(command, json_table);
        }
        else if (command.find("SELECT") == 0) {
            SELECT(command, json_table);
        }
        else {
            cerr << "Некорректная команда.\n";
        }
    }
    return 0;
}