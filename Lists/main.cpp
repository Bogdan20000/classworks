#include <QCoreApplication>
#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   list<int> allNums(5, 0);
   for(auto iter = allNums.begin(); iter != allNums.end(); iter++){
        cout << "d";
   }
    return a.exec();
}
