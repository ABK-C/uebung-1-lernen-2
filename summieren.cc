#include<iostream>
#include <fstream> 

int main () {

std::ifstream datin("daten.txt");            //Dokumente öffnen
std::ofstream datout("datensumme.txt"); 

char c;                                      //Variablen definieren
char e;

while (datin.get(c))                         //schleife immer nächstes char aus datin bis zum Dokumentenende

{  
if (( 57 >= c ) && ( c >= 48 ))              //wenn char c zwischen '0' (=48) oder '9' (=57) ist
{

for (char d = 0 , f = 0 ; (((d > 57)  ||( d < 48 )) && (f<100)); ++f ) //suchen der zweiten zahl aus chars
{                                                                      //falls Dokument zu ende f=100 Abbruchbedingung
datin.get(d);                                                          //zweiten char bekommen
e = d;                                                                 //char speichern um außerhalb von while zu benutzen
}
if (( 57 < e ) || ( e < 48 )) { e= 48 ;}     //entfernen des Rest chars falls while durch f beendet wurde
datout <<  c+e-96 << std::endl;              //chars addieren und zu Zahlen umwandel (-2* '0' = - 96)

}}
datout.close();                              //Dokumente schließe
datin.close();
}