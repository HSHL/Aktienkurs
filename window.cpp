#include "window.h"


window::window(repository *repo){
    this->repo = repo;
    
    QVBoxLayout *mainlayout=new QVBoxLayout(this);
    
    QGridLayout *inputtable=new QGridLayout;
    
    QLineEdit *aktie=new QLineEdit;
    QLabel *aktietext=new QLabel;
    aktietext->setText("Aktie:");
    QLabel *textstartdate=new QLabel;
    textstartdate->setText("Anfangsdatum:");
    QLineEdit *startdateday=new QLineEdit;
    QLineEdit *startdatemonth=new QLineEdit;
    QLineEdit *startdateyear=new QLineEdit;
    QLabel *textenddate=new QLabel;
    textenddate->setText("Enddatum:");
    QLineEdit *enddateday=new QLineEdit;
    QLineEdit *enddatemonth=new QLineEdit;
    QLineEdit *enddateyear=new QLineEdit;
    QPushButton *GoButton=new QPushButton("GO");
    
    QPushButton *testbutton=new QPushButton("Hier kommt das Diagramm hin.");//das hier weg

    inputtable->addWidget(aktietext,0,0);
    inputtable->addWidget(aktie,0,1);
    
    inputtable->addWidget(textstartdate,1,0);
    inputtable->addWidget(startdateday,1,1);
    inputtable->addWidget(startdatemonth,1,2);
    inputtable->addWidget(startdateyear,1,3);
    
    inputtable->addWidget(textenddate,2,0);
    inputtable->addWidget(enddateday,2,1);
    inputtable->addWidget(enddatemonth,2,2);
    inputtable->addWidget(enddateyear,2,3);
    inputtable->addWidget(GoButton,3,3);
    
    mainlayout->addLayout(inputtable,0);
    
    mainlayout->addWidget(testbutton,1);//diagram
    
    
};