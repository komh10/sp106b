#ifndef asm
#define asm

#include <iostream>
#include <map>

using namespace std;

class SymbolTable {
    public:
        SymbolTable();

        void addEntry(string symbol , int address);

        bool contains(string symbol);

        int getAddress(string symbol);
    private:
        map<string , int> symbolAddressTable;
};
#endif