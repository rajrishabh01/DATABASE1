//#include<iostream>
//
//using namespace std;
//
//class student{
//private :
//    char name[50];
//    int sem;
//    int roll;
//    float cgpa;
//
//public :
//    void readdata();
//    void printdata();
//
//};
//void student :: readdata(void){
//    cout << "Enter the name of the student : ";
//    cin >> name;
//    cout << "Enter the semester of the student : ";
//    cin >> sem;
//    cout << "Enter the roll no. : ";
//    cin >> roll;
//    cout << "Enter the cgpa of the student : ";
//    cin >> cgpa;
//}
//
//void student :: printdata(void){
//    int ch;
//    cout<<"Enter 0 for name...1 for sem...2 for roll....3 for cgpa...4 for all : ";cin>>ch;
//    switch(ch)
//    {
//        case 0:cout << "The name is : " << name << endl;break;
//
//        case 1:cout << "The sem is : " << sem << endl;break;
//
//        case 2: cout << "The roll is : " << roll << endl;break;
//
//        case 3:cout << "The cgpa is : " << cgpa << endl;break;
//
//        case 4:
//            cout << "The name is : " << name << endl;
//
//            cout << "The sem is : " << sem << endl;
//
//            cout << "The roll is : " << roll << endl;
//
//            cout << "The cgpa is : " << cgpa << endl;
//            break;
//    }
//}
//student s[60];
//int main()
//{
//   int i;
//   int j;
//
//while(1){
//   cout<<"Enter Your Roll Number : "<<endl;
//   cin>>i;
//
//
//    cout<<"Enter What to do  j=0  for write j=1 read "<<endl;
//    cin>>j;
//        if(j==0)
//            s[i].readdata();
//        else if(j==1)
//            s[i].printdata();
//        else
//            break;
//   }
//
//}
//
