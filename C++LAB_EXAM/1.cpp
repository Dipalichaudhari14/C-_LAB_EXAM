/*Q.No 1
Employee Management System
File handling has been effectively used for each feature of this project
Operation
1. Add Employee Information
1. Search Employee Information
1. Delete Employee Data
2. Search Employee Record.*/

#include<iostream>
#include<fstream>
using namespace std;
class employee_managment
{
private:
       char name[100];
      int id;

public:
      void add()
{
      ofstream  onfile;
      string str;
      onfile.open("abc.txt");
      getline(cin,str);

     cout<<"\nEnter name :           "<<name<<"\nid : "<<id;
       onfile.close();

    }

void search()
{
      ifstream infile;
     string str;
     infile.open("abc.txt");
      while(getline(infile,str))
{
     cout<<str;
   cout<<"\nsearch employee     information: ";
    }
    infile.close();
}

   void delete_data()
{
        int value=remove("abc.txt");
   if (value==0)
{
   cout<<"employee data deleted successfully";
}else
{
    cout<<"\nFile not found";
}
}

};
int main()
{
      employee_managment m;
      m.add();
      m.search();
       m.delete_data();
      m.search();
return 0;
}
