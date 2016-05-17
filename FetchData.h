
#ifndef FETCHDATA_H
#define FETCHDATA_H

//#include <regex>
#include <String>
#include <QObject>
#include <qtnetwork/qhttp>

class FetchData {
    //Q_OBJECT
public:
    FetchData();
    void GetPage(QString url);
    int test;

private:

};


#endif /* FETCHDATA_H */

