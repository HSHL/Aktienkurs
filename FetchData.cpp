/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "FetchData.h"

FetchData::FetchData() {

};

void FetchData::GetPage(QString url) {
    
    // content
    QByteArray content("a=root&b=root&c=submit");
 
    // header
    QHttpRequestHeader header("POST", "/nyphel/Essais_stage/essai.php");
    header.setValue("Host", "www.membres.lycos.fr");
    header.setContentType("application/x-www-form-urlencoded"); // important
    header.setContentLength(content.length());
    
    // request
    QHttp http("www.membres.lycos.fr");
    http.request(header, content);
     
};