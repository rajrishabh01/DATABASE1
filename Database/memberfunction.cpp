#include <iostream>

using namespace std;
class student
{
  private:

      char name[50];
      char USN[9];
      int  Year;
      char password[6];
      int passwordset=0;
      char passwordtrial[6];
//      void readdata();
//      void writedata();
//      void checkpassword;
      void createpassword();
  public:
      void opendatabase();
      void firsttime();



};

