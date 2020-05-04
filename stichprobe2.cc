#include<iostream>
#include <fstream>
#include<string>
#include<cmath> 
using namespace std;

int main(){

ifstream fin1 ("datensumme.txt");
ifstream fin2 ("datensumme.txt");
ofstream mout("mittelwerte.txt");
ofstream vout("varianzen.txt");

double sum, mitW, vari1, vari, GmitW, Gvari;
int N = 234;
int M = 9;

for(int i=1 ; i<= N/M; i++)
  {
  sum = 0;
  vari1 = 0;
  
  for(int j=1 ; j<= M; j++)

    {
    double a_j;
    fin1 >> a_j;
    sum += a_j;
  }

  mitW = sum /M;
  mout << mitW << endl;

  for(int j=1 ; j<= M; j++)

    {
    double a_j;
    fin2 >> a_j;
    vari1 += pow (a_j - mitW , 2);
  }
  
  vari = vari1 /M;
  vout << vari << endl;
  
  GmitW += mitW*M/N;
  Gvari += vari*M/N; 
  
}

cout << GmitW << endl;
cout << Gvari << endl;

fin1.close();
fin2.close();
mout.close();
vout.close();
}

//Die neune Berechnung des Mittelwertes kann zur Alten Mathematisch umgeformt werden, 
//sodass das Ergebniss natürlich gleich ist.
//Die neunen Varianzen werden mit dem jeweiligen Mittelwert der 9 Zahlen berechnet,
//welcher sich jedoch von dem Gesammtmittelwert unterscheidet, sodass der Mittelwert
//der neuen Varianzen nicht der Varianz aller Werte entspricht.