#pragma once
#include <iostream>
#include <fstream>
#include "NODE.h"
#include "INSERT.h"

using namespace std;

bool ExistColonk(const string& tableName, const string& columnName, Node* Tablehead);
bool parseWhereClause(istringstream& iss2, string& table, string& column, string& value, const string& tableName, const TableJson& json_table);
bool deleteRowsFromTable(const string& tableName, const string& column, const string& value, const TableJson& json_table);
void delet(const string& command, const TableJson& json_table) ;