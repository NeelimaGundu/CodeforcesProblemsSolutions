#include<iostream>
using namespace std;

class student
{
	int s1,s2,s3,total,avg;
	string roll;
	public:
	void getdata();
	void id();
	void total_marks();
	void cal_avg();	
};

void student :: id()
{
	cout<<"Enter ID: ";
	cin>>roll;
}

void student :: getdata()
{
	cout<<"Enter 3 subjects' marks: \n";
	cin>>s1>>s2>>s3;
}

void student :: cal_avg()
{
	avg = (s1+s2+s3)/3;
	cout<<"Average: "<<avg;
}

void student :: total_marks()
{
	int t = (s1 + s2 + s3);
	cout<<"Total marks: "<<t<<" / 300\n";
}

int main()
{
	student t;
	t.id();
	t.getdata();
	t.total_marks();
	t.cal_avg();
	return 0;
}
