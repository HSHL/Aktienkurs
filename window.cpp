#include "window.h"


window::window(repository *repo){
    this->repo = repo;
    this->setMinimumSize(500,300);
    
    QVBoxLayout *mainlayout=new QVBoxLayout(this);
    
    QVBoxLayout *inputtable=new QVBoxLayout;
    
    QLineEdit *aktie=new QLineEdit;
    aktie->setFixedWidth(112);
    QLabel *aktietext=new QLabel;
    aktietext->setText("Aktie:");
    QLabel *textstartdate=new QLabel;
    textstartdate->setText("Anfangsdatum:");
    QLineEdit *startdateday=new QLineEdit;
    startdateday->setText("01");
    startdateday->setFixedWidth(25);
    startdateday->setMaxLength(2);
    QLineEdit *startdatemonth=new QLineEdit;
    startdatemonth->setText("01");
    startdatemonth->setFixedWidth(25);
    startdatemonth->setMaxLength(2);
    QLineEdit *startdateyear=new QLineEdit;
    startdateyear->setText("2010");
    startdateyear->setFixedWidth(50);
    startdateyear->setMaxLength(4);
    QLabel *textenddate=new QLabel;
    textenddate->setText("Enddatum:");
    QLineEdit *enddateday=new QLineEdit;
    enddateday->setText("01");
    enddateday->setFixedWidth(25);
    enddateday->setMaxLength(2);
    QLineEdit *enddatemonth=new QLineEdit;
    enddatemonth->setText("01");
    enddatemonth->setFixedWidth(25);
    enddatemonth->setMaxLength(2);
    QLineEdit *enddateyear=new QLineEdit;
    enddateyear->setText("2016");
    enddateyear->setFixedWidth(50);
    enddateyear->setMaxLength(4);
    QPushButton *GoButton=new QPushButton("GO");
    GoButton->setMaximumWidth(100);
    
    QPushButton *testbutton=new QPushButton("Hier kommt das Diagramm hin.");//das hier weg
    
    QLabel *testlabel=new QLabel("<img src=\"http://chart.finance.yahoo.com/t?s=EURUSD%3dX\">");
    
    QHBoxLayout *firstinputline=new QHBoxLayout;
    QHBoxLayout *secondinputline=new QHBoxLayout;
    QHBoxLayout *thirdinputline=new QHBoxLayout;
    QHBoxLayout *fourthinputline=new QHBoxLayout;
    
    //1.line
    inputtable->addLayout(firstinputline,0);
    firstinputline->addStretch(1);
    firstinputline->addWidget(aktietext,0);
    firstinputline->addWidget(aktie,1);
    
      //2.line
    inputtable->addLayout(secondinputline,1);
    secondinputline->addStretch(1);
    secondinputline->addWidget(textstartdate,0);
    secondinputline->addWidget(startdateday,1);
    secondinputline->addWidget(startdatemonth,2);
    secondinputline->addWidget(startdateyear,3);
    
      //3.line
    inputtable->addLayout(thirdinputline,2);
    thirdinputline->addStretch(1);
    thirdinputline->addWidget(textenddate,0);
    thirdinputline->addWidget(enddateday,1);
    thirdinputline->addWidget(enddatemonth,2);
    thirdinputline->addWidget(enddateyear,3);
    
        //4.line
    inputtable->addLayout(fourthinputline,2);
    fourthinputline->addStretch(2);
    fourthinputline->addWidget(GoButton,2);
    
    
    mainlayout->addLayout(inputtable,0);
    mainlayout->addStretch(1);
    mainlayout->addWidget(testlabel,1);//diagram
    
    
};