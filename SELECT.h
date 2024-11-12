#pragma once
#include <iostream>
#include "NODE.h"
#include "DELETE.h"
#include "INSERT.h"


using namespace std;


void select(const string& query, const TableJson& json_table);
bool processConditionTable(const TableJson& json_table, const string& table1, const string& table2, const string& column1, const string& column2);
bool processConditionString(const TableJson& json_table, const string& table, const string& column, const string& s);
void crossJoinAndFilter(const TableJson& json_table, const string& table1, const string& table2, const string& column1, const string& column2);
bool findDot(const string& indication);
string ignoreQuotes(const string& indication);
void separationDot(const string& word, string& table, string& column, const TableJson& json_table);