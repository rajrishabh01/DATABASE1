#include<iostream>
using namespace std;

class student{

private :
    char name[50];
    int sem;
    int roll;
    float cgpa;
    char password[11];
    int passwordset=0;
    char passwordtrial[6];
    void readdata();
//      void checkpassword;
      void createpassword();



public :
    void printdata();
 void opendatabase();
      void firsttime();

};
void student :: readdata(void){
    cout << "Enter the name of the student : ";
    cin >> name;
    cout << "Enter the semester of the student : ";
    cin >> sem;
    cout << "Enter the roll no. : ";
    cin >> roll;
    cout << "Enter the cgpa of the student : ";
    cin >> cgpa;
}

void student :: printdata(void){
    cout << "The name is : " << name << endl;
    cout << "The sem is : " << sem << endl;
    cout << "The roll is : " << roll << endl;
    cout << "The cgpa is : " << cgpa << endl;

}
void student::firsttime()
{
    cout<<"Enter your name :";
    cin>>name;
    cout<<name;
    createpassword();
};

void student::createpassword()
{
    cout<<"Please enter your 6 character password..";
    cin>>password;
};
student s1[999999];
int main()
{
  int i,j=0;
 while(1)
{
    cout<<"Enter your ACC number : ";
//     check account number if it exits
//else direct to firsttimeuser
//Hey user welcome to bmsdbms
//ask wat next
     cout<<"read"<<'\n'<<"write"<<"      0 to exit";
     cout<<'\n'<<"Enter your choice : ";
     cin>>i;

     switch(i)
     {

         case 1: s1[j].printdata();
                break;

         case 2 :s1[j].firsttime();break;


         default : cout<<"THANK YOU ";
                   return 0;

     }

 }
}
