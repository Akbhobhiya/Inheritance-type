#include<iostream>
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
	student_result::calc_rslt();
	 prize::calc_amount(total);

}

void student::display(){
	 cout<<"\n\nname     :  "<<name
	     <<"\nreg no   :  "<<regno
	     <<"\nage      :  "<<age
	     <<"\ngender   :  "<<gender
	     <<"\nbranch   :  "<<branch
	     <<"\nsem      :  "<<sem;
	     student_result::display();
	     prize::displayamount();

}

int main(){
	student s;
	s.enter();
	s.display();
}