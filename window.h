
#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QString>
#include <QPushButton>
#include <QWidget>
#include <QObject>
#include <QMainWindow>
#include <QLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QLabel>
#include <Qtwebkit/QWebView>
#include <QUrl>
#include <QComboBox>
#include "repository.h"

class window : public QWidget {
    Q_OBJECT
public:
    window(repository *repo);

private:
    char timerangeletter();
    repository *repo;
    QVBoxLayout *mainlayout;
    QVBoxLayout *inputtable;
    QHBoxLayout *firstinputline;
    QHBoxLayout *secondinputline;
    QHBoxLayout *thirdinputline;
    QHBoxLayout *fourthinputline;
    QPushButton *GoButton;

    QLabel *aktietext;
    QLabel *textstartdate;
    QLabel *textenddate;
    QLabel *texttimerange;


};


#endif /* WINDOW_H */

