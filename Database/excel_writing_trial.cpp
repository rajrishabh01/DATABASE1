
#include <iostream>
#include <fstream>


using namespace std;


int main(int args, char * argv[])
{ char name[500];
ofstream MyExcelFile;
MyExcelFile.open("Data.txt");

MyExcelFile << "First Name, Last Name, Middle Initial" << endl;
MyExcelFile << "Michael, Jackson, B." << endl;
MyExcelFile.close();
return 0;
}
