#include "strfunctions.h"

int find1stOccurence(std::string stringToBeSearched, char characterToFind)
// Findet die erste Vorkommnis des gesuchten Chars und seine Position 
// als Int zurückgibt
// 0 bis string.length-1 gibt -1 für nicht-Vorkommen zurück
// Leerer String gibt -1 zurück
// Keine eingebauten String-Funktionen (didaktische Gründe)
{
    if (stringToBeSearched=="") return -1;
    //for (int i = 0; (i < stringToBeSearched.length() && stringToBeSearched[i] != characterToFind); i++) return i+1;
    for (int i = 0; i < stringToBeSearched.length(); i++) 
    {
        if (stringToBeSearched[i] == characterToFind) return i;
    }
    return -1;
}

bool isPartOf(std::string stringToBeSearched, char characterToFind)
// true für kommt vor
// false für kommt nicht vor && Empty-String
{
    int charOccurrs = find1stOccurence(stringToBeSearched, characterToFind);
    if (charOccurrs == -1) return false;
    return true;
}


std::string reverse(std::string stringToBeReversed) 
// gibt den String in umgekehrter Reihenfolge zurück
{
    std::string reversedString = "";
    for (int i = 0; i < stringToBeReversed.length(); i++)
    {
        char currentBufferCharacter = stringToBeReversed[stringToBeReversed.length() - (i+1)];
        reversedString.append(1,currentBufferCharacter);
    }
    return reversedString;
}

