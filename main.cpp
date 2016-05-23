#include <QApplication>
#include <QTextCodec>
#include "repository.h"
#include "window.h"



int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    

    QApplication app(argc, argv);

    repository repo;
    //:D

    window Window(&repo);
    Window.show();


    // create and show your widgets here

    return app.exec();
}
