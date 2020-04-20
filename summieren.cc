#include<iostream>
#include <fstream> 
#include<string>
using namespace std;

int main() { ;
std::ifstream dat("daten.txt"); 
int dat11 ;
int dat12 ;
std::string dattxt = "" ;

for (int i=1; i<= 233 ; ++i) {;
dat >> dat11 ;
dat >> dat12 ;
dattxt = dattxt + to_string( dat11 + dat12 ) + "\n" ;

};

dat >> dat11 ;
dat >> dat12 ;
dattxt = dattxt + to_string( dat11 + dat12 ) ;

dat.close() ;

std::ofstream datout("datensumme.txt"); 
datout << dattxt << std::endl; 
datout.close(); 

//std::cout << dattxt << std::endl ;

//test_Alex
}