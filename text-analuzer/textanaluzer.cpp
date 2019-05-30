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
    int a = text.length();
    int z = 0;
    for(int i = 0; i<a; i ++){
        if (!(text[i] > 64 && text[i] < 91|| text[i] > 96 && text[i] < 123)){
            z++;
        }
    }
    return a - z;
}

int textanaluzer::getWordsCount()
{
    int z = 0;
    int a = 0;
    a = text.length();
    for(int i = 0; i<a; i ++){
        if (text[i] > 64 && text[i] < 91|| text[i] > 96 && text[i] < 123){
            if (!(i == 0)){
                if (text[i-1] > 64 && text[i-1] < 91|| text[i-1] > 96 && text[i-1] < 123||text[i-1] == 44|| text[i-1] == 46|| text[i-1] == 33|| text[i-1] == ':'|| text[i-1] == 34|| text[i-1] == 59) {
                    if(text[i+1] > 64 && text[i+1] < 91|| text[i+1] > 96 && text[i+1] < 123|| text[i+1] == 32){
                        z++;
                    }
                }
            }
        }
    }
    for(int i = 0; i<a; i ++){
        if (text[i] == 33 && (text[i+1] > 64 && text[i+1] < 91|| text[i+1] > 96 && text[i+1] < 123)){
            z++;
        }
    }

    if (a > 1){
        z++;
    }
    return z;
}

int textanaluzer::getSymbolsCount()
{
    int a = text.length();
    return a;
}

int textanaluzer::getSentencesCount()
{
    int z = 0;
    int a = 0;
    a = text.length();
    for(int i = 0; i<a; i++){
        if (!(text[i] > 64 && text[i] < 91|| text[i] > 96 && text[i] < 123)){
            z++;
        }
    }
    if (z < 1){
        z--;
    }
    return z;
}

string textanaluzer::changeWords(string previous, string newWorld)
{
    return this->text;
}

