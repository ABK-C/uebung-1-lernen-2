#include<iostream>
#include <fstream> 
using namespace std;

int main(){
ifstream fin ("daten.txt");
ofstream fout("datensumme.txt");
int zahl1;
int zahl2;
for(int i=1; i<=234; i++){
fin >> zahl1 >> zahl2;
fout << zahl1 + zahl2 << endl;
}
fin.close();
fout.close();
//test_zoe
}