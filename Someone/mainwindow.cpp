#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    srand(time(NULL));
    int a = rand() % 20;
    int b = rand() % 20;
    int c = rand() % 19;
    int d = rand() % 37;
    int e = rand() % 16;
    int f = rand() % 100;
    int g = rand() % 10;
    QString* names = new QString[20] {"Vasia", "Petia", "Stanislav", "Andrey", "Vika", "Sasha", "Vova", "Alex", "Sergy", "Sophia", "Gora", "Misha", "Stasia", "Dania", "Diana", "Nekto", "Costia", "Lena", "Zlata", "Bogdan"};
    QString* surnames = new QString[20] {"Ivanov", "Sidorov", "Katsarov", "Kirilyk", "Gorpunich", "Cherneha", "Kazimirov", "Varga", "Vasilets", "Bilokur", "Kovalov", "Boboshko", "Nektovich", "Arutynan", "Kolesnik", "Gaidamaka", "Zabuga", "Vasylenko", "Zakrenychny", "Gricaenko"};
    QString* second_surnames = new QString[19] {"Bogdanovich", "Olexandrovich", "Vasilevich", "Sidorovich", "Ivanovich", "Kazimirovich", "Popovich", "Sophievich", "Andrievich", "Giorgovich", "Motveevich", "Olexeovich", "Nictokovich", "Narkamanovich", "Zabugailovich", "Lomonosovich", "Lermontovich", "Sashokusovich", "Olegovich"};
    QString* country_of_Residences = new QString[37] {"Ukrain", "France", "Angolia", "Australia", "Canada", "Russia", "Brazil", "Bolivia", "China", "Chile", "Colombia", "Cuba", "Dominica", "Egupt", "Estonia", "Georgia", "Finland", "Gambia", "German", "Haiti", "India", "Indonesia", "Iran", "Iraq", "Italy", "Japan", "Kenya", "Laos", "Latvia", "Mali", "Malta", "Mexico", "Monaco", "Nepal", "Niger", "Oman", "Palau"};
    QString* Professions = new QString[16] {"accountant", "actor", "actress", "programist", "web desiner", "teacher", "asistent", "footballer", "hacker", "volleyboller", "joker", "card player", "internet searcher", "User", "Hokeist", "Basketballer"};
    int* Ages = new int[100];
    for (int i = 1; i < 101; i++){
        Ages[i-1] = i;
    }
    QString* Hobbies = new QString[10] {"sport", "work", "busnes", "money", "eating", "drinking", "smoaking", "paying card games", "ITishing", "styding"};
    QString ages = QString::number(Ages[f]);
    ui->name->setText(names[a]);
    ui->surname->setText(surnames[b]);
    ui->second_surname->setText(second_surnames[c]);
    ui->country_of_Residence->setText(country_of_Residences[d]);
    ui->profession->setText(Professions[e]);
    ui->age->setText(ages);
    ui->hobby->setText(Hobbies[g]);
}
