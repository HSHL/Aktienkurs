#include <QApplication>
#include <QTextCodec>
#include "repository.h"
#include "window.h"

//#include <regex>
//test 

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    // enable Flash Player in webview:
    //QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);

    QApplication app(argc, argv);

    repository repo;
    //:D

    window Window(&repo);
    Window.show();


    // create and show your widgets here

    return app.exec();
}
