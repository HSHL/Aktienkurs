#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <QApplication>
#include <QWidget>
#include <QObject>
#include <QLineEdit>
#include <QComboBox>

class repository : public QObject {
    Q_OBJECT
public:
    repository();
    QLineEdit aktie;
    QLineEdit timerange;
    QLineEdit startdateday;
    QLineEdit startdatemonth;
    QLineEdit startdateyear;
    QLineEdit enddateday;
    QLineEdit enddatemonth;
    QLineEdit enddateyear;
    QComboBox timerangeunit;
};


#endif /* REPOSITORY_H */

