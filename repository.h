#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <QApplication>
#include <QWidget>
#include <QObject>
#include <QLineEdit>
#include <QComboBox>
#include <QWebView>

class repository : public QObject {
    Q_OBJECT
public:
    repository();
    QLineEdit aktie;
    QLineEdit timerange;
    QComboBox timerangeunit;
    QWebView view;
    QString htmlcode;
};


#endif /* REPOSITORY_H */

