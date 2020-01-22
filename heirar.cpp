#include<iostream>
using namespace std;

class person{
public:
	char name[20];
	int age;
	char gender;
	void enter();
	void display();
};

void person::enter(){
	cout<<"enter name age and gender";
	cin>>name>>age>>gender;
}

void person::display(){
	cout<<"\nname   :  "<<name;
    cout<<"\nage    : "<<age;
    cout<<"\ngender : "<<gender;
}

class student:public person{
public:
int regno;
char branch[5];
int sem;
void enter();
void display();
};

void student::enter(){
	cout<<"student details";
	person::enter();
	cout<<"\nreg no  :";
	cin>>regno;
	cout<<"\nbranch  :";
	cin>>branch;
	cout<<"\nsem  :";
	cin>>sem;
}

void student::display(){
	    person::display();
	     cout<<"\nreg no   :  "<<regno
	     <<"\nbranch   :  "<<branch
	     <<"\nsem      :  "<<sem;
}

class teacher : public person{
public:
	char dpt[10];
	int salary;
	void enter();
	void display();
};

void teacher::enter(){
     cout<<"\n teacher details";
	person::enter();
	cout<<"enter dpt and salary";
	cin>>dpt>>salary;
}

void teacher::display(){
	person::display();
	cout<<"dpt   :  "<<dpt;
	cout<<"salary  : "<<salary;
}

int main(){
	student s;
	teacher t;
	s.enter();
	s.display();
	t.enter();
	t.display();
}
