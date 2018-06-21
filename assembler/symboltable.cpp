#include "symboltable.h"

using namespace std;

SymbolTable::SymbolTable(){
    symbolAddressTable["R0"] = 0 ;
    symbolAddressTable["R1"] = 1 ;
    symbolAddressTable["R2"] = 2 ;
    symbolAddressTable["R3"] = 3 ;
    symbolAddressTable["R4"] = 4 ;
    symbolAddressTable["R5"] = 5 ;
    symbolAddressTable["R6"] = 6 ;
    symbolAddressTable["R7"] = 7 ;
    symbolAddressTable["R8"] = 8 ;
    symbolAddressTable["R9"] = 9 ;
    symbolAddressTable["R10"] = 10 ;
    symbolAddressTable["R11"] = 11 ;
    symbolAddressTable["R12"] = 12 ;
    symbolAddressTable["R13"] = 13 ;
    symbolAddressTable["R14"] = 14 ;
    symbolAddressTable["R15"] = 15 ;
    symbolAddressTable["SCREEN"] = 16384 ; 
    symbolAddressTable["KEYBOARD"] = 24576 ;
    symbolAddressTable["SP"] = 0 ;
    symbolAddressTable["LCL"] = 1 ;
    symbolAddressTable["ARG"] = 2 ;
    symbolAddressTable["THIS"] = 3 ;
    symbolAddressTable["THAT"] = 4 ;

}
void SymbolTable::addEntry(string symbol , int address){
    if (symbolAddressTable.find(symbol) == symbolAddressTable.end()){
        symbolAddressTable[symbol] = address ;
    }
}
bool SymbolTable::contains(string symbol){
    return (symbolAddressTable.find(symbol) != symbolAddressTable.end());
}
int SymbolTable::getAddress (string symbol){
    if (symbolAddressTable.find(symbol) != symbolAddressTable.end()){
        return symbolAddressTable[symbol];
    }
    return 0 ;
}