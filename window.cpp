#include "window.h"

window::window(repository *repo) {
    this->repo = repo;
    //this->setMinimumSize(300, 200);
    this->setFixedSize(320,250);

    QVBoxLayout *mainlayout = new QVBoxLayout(this);

    QVBoxLayout *inputtable = new QVBoxLayout;

    //QLineEdit *aktie=new QLineEdit;
    repo->aktie.setFixedWidth(110);
    repo->timerange.setFixedWidth(25);
    QLabel *aktietext = new QLabel;
    aktietext->setText("Aktie:");
    QLabel *textstartdate = new QLabel;
    textstartdate->setText("Anfangsdatum:");
    QLabel *texttimerange = new QLabel;         /////
    texttimerange->setText("Zeitspanne:");  /////////
    
    //QComboBox *timerangeunit = new QComboBox;
    repo->timerangeunit.addItem(tr("Tage"));
    repo->timerangeunit.addItem(tr("Monate"));
    repo->timerangeunit.addItem(tr("Jahre"));
    repo->timerangeunit.setFixedWidth(80);

    
    repo->aktie.setText("^GDAXI");
    repo->timerange.setText("5");
    //QLineEdit *startdateday=new QLineEdit;
    repo->startdateday.setText("01");
    repo->startdateday.setFixedWidth(25);
    repo->startdateday.setMaxLength(2);
    //QLineEdit *startdatemonth=new QLineEdit;
    repo->startdatemonth.setText("01");
    repo->startdatemonth.setFixedWidth(25);
    repo->startdatemonth.setMaxLength(2);
    //QLineEdit *startdateyear=new QLineEdit;
    repo->startdateyear.setText("2010");
    repo->startdateyear.setFixedWidth(50);
    repo->startdateyear.setMaxLength(4);
    QLabel *textenddate = new QLabel;
    textenddate->setText("Enddatum:");
    //QLineEdit *enddateday=new QLineEdit;
    repo->enddateday.setText("01");
    repo->enddateday.setFixedWidth(25);
    repo->enddateday.setMaxLength(2);
    //QLineEdit *enddatemonth=new QLineEdit;
    repo->enddatemonth.setText("01");
    repo->enddatemonth.setFixedWidth(25);
    repo->enddatemonth.setMaxLength(2);
    //QLineEdit *enddateyear=new QLineEdit;
    repo->enddateyear.setText("2016");
    repo->enddateyear.setFixedWidth(50);
    repo->enddateyear.setMaxLength(4);
    QPushButton *GoButton = new QPushButton("GO");
    GoButton->setMaximumWidth(100);

    //QPushButton *testbutton=new QPushButton("Hier kommt das Diagramm hin.");//das hier weg

    //QLabel *testlabel=new QLabel("<object type=\"application/x-shockwave-flash\" id=\"yfi_chart_swf\" data=\"https://s.yimg.com/bm/lib/fi/common/p/d/static/swf/2.0.356981/2.0.0/de-DE/largechart.swf\" width=\"824\" height=\"516\" style=\"visibility: visible; height: 433px;\"><param name=\"allowscriptaccess\" value=\"always\"><param name=\"wmode\" value=\"opaque\"><param name=\"flashvars\" value=\"sigDevEnabled=false&amp;changeSymbolEnabled=false&amp;state=symbol=EURUSD%3DX;range=1y;compare=;indicator=volume;charttype=area;crosshair=on;ohlcvalues=0;logscale=off;source=;\"></object>");
    QWebView *view = new QWebView();
    //view->load(QUrl("http://chart.finance.yahoo.com/t?s=EURUSD%3dX"));
    //QString htmlcode("<img src=\"http://chart.finance.yahoo.com/t?s=EURUSD%3dX\" width=400/>");
    
    //QString htmlcode("<img src=\"http://ichart.finance.yahoo.com/instrument/1.0/%1/chart;range=%2/image;size=260x115\" width=350>");
    //QString test;//(htmlcode.arg(repo->aktie).arg("5d"));
    QString htmlcode("<img src=\"http://ichart.finance.yahoo.com/instrument/1.0/"+repo->aktie.text()+"/chart;range="+repo->timerange.text()+timerangeletter()+"/image;size=260x115\" width=260>");
    
    //QString bla("<iframe><object type='application/x-shockwave-flash' id='yfi_chart_swf' data='https://s.yimg.com/bm/lib/fi/common/p/d/static/swf/2.0.356981/2.0.0/de-DE/largechart.swf' width='824' height='516' style='visibility: visible; height: 433px;'><param name='allowscriptaccess' value='always'><param name='wmode' value='opaque'><param name='flashvars' value='sigDevEnabled=false&amp;changeSymbolEnabled=false&amp;state=symbol=EURUSD%3DX;range=1y;compare=;indicator=volume;charttype=area;crosshair=on;ohlcvalues=0;logscale=off;source=;'></object></iframe>");
    
    //view->page("http://chart.finance.yahoo.com/t?s=EURUSD%3dX");
    //view->load(QUrl("http://google.de"));
    view->setHtml(htmlcode);
    //view->load(QUrl("http://google.de"));

    QHBoxLayout *firstinputline = new QHBoxLayout;
    QHBoxLayout *secondinputline = new QHBoxLayout;
    QHBoxLayout *thirdinputline = new QHBoxLayout;
    QHBoxLayout *fourthinputline = new QHBoxLayout;

    //1.line
    inputtable->addLayout(firstinputline, 0);
    firstinputline->addStretch(1);
    firstinputline->addWidget(aktietext, 0);
    firstinputline->addWidget(&repo->aktie, 1);

    //2.line
    
    
    inputtable->addLayout(secondinputline, 1);
    secondinputline->addStretch(1);
    secondinputline->addWidget(texttimerange, 0);
    secondinputline->addWidget(&repo->timerange, 1);
    secondinputline->addWidget(&repo->timerangeunit,2);
    /*
    secondinputline->addWidget(textstartdate, 0);
    secondinputline->addWidget(&repo->startdateday, 1);
    secondinputline->addWidget(&repo->startdatemonth, 2);
    secondinputline->addWidget(&repo->startdateyear, 3);
     */
    //3.line
    /*
    inputtable->addLayout(thirdinputline, 2);
    thirdinputline->addStretch(1);
    thirdinputline->addWidget(textenddate, 0);
    thirdinputline->addWidget(&repo->enddateday, 1);
    thirdinputline->addWidget(&repo->enddatemonth, 2);
    thirdinputline->addWidget(&repo->enddateyear, 3);*/

    //4.line
    inputtable->addLayout(fourthinputline, 2);
    fourthinputline->addStretch(2);
    fourthinputline->addWidget(GoButton, 2);


    mainlayout->addLayout(inputtable, 0);
    mainlayout->addStretch(0);
    mainlayout->addWidget(view, 1); //diagram


};

char window::timerangeletter(){
    
    if(repo->timerangeunit.currentText()=="Monate")return 'm';
    else if(repo->timerangeunit.currentText()=="Jahre")return 'y';
    else if(repo->timerangeunit.currentText()=="Tage")return 'd';
    
};