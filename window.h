
#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <QMainWindow>
#include <QLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QLabel>
#include "repository.h"

class window:public QWidget{
    Q_OBJECT
public:
    window(repository *repo);
    
private:
    repository *repo;   
    QVBoxLayout *mainlayout;
    QVBoxLayout *inputtable;
    QPushButton *testbutton;//der hier weg
    QPushButton *GoButton;
    QLineEdit *aktie;
    QLabel *aktietext;
    QLabel *textstartdate;
    QLineEdit *startdateday;
    QLineEdit *startdatemonth;
    QLineEdit *startdateyear;
    QLabel *textenddate;
    QLineEdit *enddateday;
    QLineEdit *enddatemonth;
    QLineEdit *enddateyear;
    

};


#endif /* WINDOW_H */

