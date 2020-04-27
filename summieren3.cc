#include<iostream>
#include <fstream> 
#include<string>
using namespace std;

int main() { ;
std::ifstream dat("daten.txt"); 
int dat11 ;
int dat12 ;
std::string dattxt = "#include<iostream>\n#include <fstream>\n#include<string>\nusing namespace std;\nint main() { ;\nstd::ofstream datout(\"datensumme.txt\");\n";

for (int i=1; i<= 234 ; ++i) {;
dat >> dat11 ;
dat >> dat12 ;
dattxt = dattxt + "datout << " + to_string( dat11 ) + " + " + to_string( dat12 ) + " << std::endl;\n" ;
};

dattxt =  dattxt + "datout.close();\n}" ;

dat.close() ;

std::ofstream datout("summieren4.cc"); 
datout << dattxt << std::endl; 
datout.close(); 

//Bitte in Konsole eingeben:    g++ summieren4.cc -o summieren4      und      ./summieren4

}