
#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <QMainWindow>
#include <QLayout>
#include "repository.h"

class window:public QWidget{
    Q_OBJECT
public:
    window(repository *repo);
    
private:
    repository *repo;   
    QVBoxLayout *mainlayout;
    QPushButton *testbutton;

};


#endif /* WINDOW_H */

