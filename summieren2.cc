#include<iostream>
#include <fstream> 
#include<string>
using namespace std;

int main() { ;
std::ifstream dat("daten.txt");     //Eingabedokument öffnen
int dat11 ;                         //variablen definieren
int dat12 ;
std::string dattxt = "" ;

for (int i=1; i<= 234 ; ++i) {;     //schleife für alle Zeilen
dat >> dat11 ;                      //eine Zahl einlesen
dat >> dat12 ;                      //zweite Zahl der Zeile einlesen
dattxt = dattxt + to_string(dat11 + dat12) + "\n";  //string um Summe und Absatz erweitern
};

dat.close() ;                       //Eingabedokument schließen

std::ofstream datout("datensumme.txt");  //Ausgabedokument öffnen
datout << dattxt;                        //Ausgabestring drucken
datout.close();                          //Ausgabedokument schließen
}