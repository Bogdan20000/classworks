#ifndef TEXTANALUZER_H
#define TEXTANALUZER_H
#include <string>
using namespace std;

class textanaluzer
{
    string text;
public:
    textanaluzer();
    void setText(string text);
    int getlettersCount();
    int getWordsCount();
    int getSymbolsCount();
    int getSentencesCount();
    string changeWords(string previous, string newWorld);
};

#endif // TEXTANALUZER_H
