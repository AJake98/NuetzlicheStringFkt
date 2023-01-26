#include "strfunctions.h"

int find1stOccurence(std::string stringToBeSearched, char characterToFind)
// Findet die erste Vorkommnis des gesuchten Chars und seine Position 
// als Int zur�ckgibt
// 0 bis string.length-1 gibt -1 f�r nicht-Vorkommen zur�ck
// Leerer String gibt -1 zur�ck
// Keine eingebauten String-Funktionen (didaktische Gr�nde)
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
// true f�r kommt vor
// false f�r kommt nicht vor && Empty-String
{
    int charOccurrs = find1stOccurence(stringToBeSearched, characterToFind);
    if (charOccurrs == -1) return false;
    return true;
}


std::string reverse(std::string stringToBeReversed) 
// gibt den String in umgekehrter Reihenfolge zur�ck
{
    std::string reversedString = "";
    for (int i = 0; i < stringToBeReversed.length(); i++)
    {
        char currentBufferCharacter = stringToBeReversed[stringToBeReversed.length() - (i+1)];
        reversedString.append(1,currentBufferCharacter);
    }
    return reversedString;
}

