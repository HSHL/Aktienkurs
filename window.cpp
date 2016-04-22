#include "window.h"
#include <QApplication>
#include <QWidget>
#include <QObject>
#include <QMainWindow>
#include <QPushButton>
#include "repository.h"

window::window(repository *repo){
    this->repo = repo;
    
    QVBoxLayout *mainlayout=new QVBoxLayout(this);
    
    QPushButton *testbutton=new QPushButton("testbutton");
    mainlayout->addWidget(testbutton,0);
    
};