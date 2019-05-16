#include "textanaluzer.h"

textanaluzer::textanaluzer()
{

}

void textanaluzer::setText(string text)
{
    this->text = text;
}

int textanaluzer::getlettersCount()
{
    return 100;
}

int textanaluzer::getWordsCount()
{
    int z = 0;
    for(int i = 0; i<1000; i ++){
        if (text[i] == 32){
            z++
        }
    }
}

int textanaluzer::getSymbolsCount()
{
    return 100;
}

int textanaluzer::getSentencesCount()
{
    return 100;
}

string textanaluzer::changeWords(string previous, string newWorld)
{
    return this->text;
}

