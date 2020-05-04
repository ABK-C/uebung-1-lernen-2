#include<iostream>
#include <fstream>
#include<string>
#include<cmath> 
using namespace std;

int main(){

ifstream fin1 ("datensumme.txt");
ifstream fin2 ("datensumme.txt");

double sum, mitW, vari1, vari, stdabw;
int N = 234;

for(int i=1 ; i<= N; i++){
  double a_i;
  fin1 >> a_i;
  sum += a_i;
}

mitW = sum / N;

for(int i=1; i<= N; i++){
  double a_i;
  fin2 >> a_i;
  vari1 += pow (a_i - mitW , 2);
}

vari = vari1 / N;
stdabw = sqrt(vari);

cout << mitW << "\r\n" << vari << "\r\n" << stdabw << endl;

fin1.close();
fin2.close();
}