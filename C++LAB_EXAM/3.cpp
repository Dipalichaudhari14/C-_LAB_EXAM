/* Question -3
	Create a class 'Student' with three data members which are name, age and address. 
	The constructor of the class assigns default values to name as "unknown", age as '0' and address as "not available". 
	It has two functions with the same name 'setInfo'. 
	First function has two parameters for name and age and assigns the same whereas the second function takes has 
	three parameters which are assigned to name, age and address respectively. 
	the name, age and address of 10 students.
	Hint - Use array of objects.
*/
#include <iostream>
using namespace std;
class Student{
	private :
		string s ,add;
		int a;
	public:
		Student(){
			s = "Unknown";
			a = 0;
			add = "not availble";
		}
		void setinfo(string n, int p) {
        	s = n;
        	a = p;
    	}
		void setinfo(string n, int p, string addr) {
        	s = n;
        	a = a;
        	add = addr;
    	}
		void show(){
			cout<<"\nName :- "<<s;		
			cout<<"\nAge :- "<<a;
			cout<<"\nAddress :- "<<add;		
		}
};
main(){
		Student s1[10];
		s1[0].setinfo("Dipali", 18);
    		s1[1].setinfo("vibha", 19, "nashik");
    		s1[2].setinfo("yamini", 18);
    		s1[3].setinfo("devesh", 19, "pune");
    		s1[4].setinfo("kartik", 18);
    		s1[5].setinfo("pooja", 19, "goa");
    		s1[6].setinfo("srushti", 18);
    		s1[7].setinfo("durva", 19, "dubai");
    		s1[8].setinfo("riya", 18);
    		s1[9].setinfo("diya", 19, "mumbai");
		for(int i=0 ; i<10 ; i++){
			s1[i].show();
		}
}
