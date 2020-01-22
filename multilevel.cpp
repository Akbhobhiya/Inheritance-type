#include<iostream>
using namespace std;

class student{
public:
char name[20];
int regno,age;
char gender, branch[5];
int sem;
void enter();
void display();
};

void student::enter(){
	cout<<"\nenter name :";
	cin.getline(name,20);
	cout<<"\nreg no  :";
	cin>>regno;
	cout<<"\nage  :";
	cin>>age;
	cout<<"gender  :";
	cin>>gender;
	cout<<"\nbranch  :";
	cin>>branch;
	cout<<"\nsem  :";
	cin>>sem;
}

void student::display(){
	 cout<<"\n\nname     :  "<<name
	     <<"\nreg no   :  "<<regno
	     <<"\nage      :  "<<age
	     <<"\ngender   :  "<<gender
	     <<"\nbranch   :  "<<branch
	     <<"\nsem      :  "<<sem;
}



class student_result:public student{
public:
	int sub1,sub2,sub3;
	int total,percent;
	char grade;
	void calc_rslt();
	void display();
};

void student_result::calc_rslt(){
	enter();
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
student::display();
cout<<"\npercent  :  "<<percent;
cout<<"\ngrade    :  "<<grade<<"\n";
}

class prize :public student_result{
	public :
	int amount;
	void calc_amount();
};

void prize::calc_amount(){
	calc_rslt();
	amount=total*100;
	student_result::display();
	cout<<"scholarship:  "<<amount<<"\n";
}

int main(){
	prize s;
	s.calc_amount();
}