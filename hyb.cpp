#include<iostream>
#include<string.h>
using namespace std;



class student_result{
public:
	int sub1,sub2,sub3;
	int total,percent;
	char grade;
	void calc_rslt();
	void display();
};

void student_result::calc_rslt(){
	cout<<"\nenter marks of three subjects out of 50\n";
	cin>>sub1>>sub2>>sub3;
	total=sub1+sub2+sub3;
	percent=(total/150)*100;
	if(total>=100)
		grade='A';
	else if(total>=50)
		grade='B';
	else
		grade='C';
}
void student_result::display(){
cout<<"\npercent  :  "<<percent;
cout<<"\ngrade    :  "<<grade<<"\n";
}

class prize {
	public :
	int amount;
	void calc_amount(int);
	void displayamount();
};

void prize::calc_amount(int t){
	
	amount=t*100;
	
}

void prize::displayamount(){
	
	cout<<"scholarship:  "<<amount<<"\n";
}


class student : public student_result,public prize{
public:
char name[20];
int regno,age;
char gender;
int sem;
void enter();
void display();
};

void student::enter(){
	cout<<"\nenter name :";
	cin>>name;
	cout<<"\nreg no  :";
	cin>>regno;
	cout<<"\nage  :";
	cin>>age;
	cout<<"gender  :";
	cin>>gender;
	cout<<"\nsem  :";
	cin>>sem;
	student_result::calc_rslt();
	 prize::calc_amount(total);

}

void student::display(){
	 cout<<"\n\nname     :  "<<name
	     <<"\nreg no   :  "<<regno
	     <<"\nage      :  "<<age
	     <<"\ngender   :  "<<gender
	     <<"\nsem      :  "<<sem;
	     student_result::display();
	     prize::displayamount();

}

class mechstudent:public student{
public:
	char department[50];
	char hod[20];
	mechstudent(){
	strcpy(department,"mech");
	}
	void enter();
	void display();
};

void mechstudent::enter(){
	student::enter();
	cout<<"hod";
	cin>>hod;
}

void mechstudent::display(){
	student::display();
	cout<<"dept   :  "<<department;
	cout<<"\nhod    :  "<<hod<<"\n";
}

class csstudent:public student{
public:
	char department[50];
	char hod[20];
	csstudent(){
		strcpy(department,"cs");
	}
	void enter();
	void display();
};

void csstudent::enter(){
	student::enter();
	cout<<" hod";
	cin>>hod;
}

void csstudent::display(){
	student::display();
	cout<<"dept   :  "<<department;
	cout<<"\nhod    :  "<<hod<<"\n";
}


int main(){
	mechstudent s;
	csstudent s2;
	cout<<"\nmechanical student\n";
	s.enter();
	s.display();
	cout<<"\ncs student\n";
	s2.enter();
	s2.display();
	
}