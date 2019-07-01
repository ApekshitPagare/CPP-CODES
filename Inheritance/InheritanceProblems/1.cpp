#include<iostream>
using namespace std;

class Staff
{
	const char* cname;
	const char* N;
	const char* education;
	const char* pqualification;
	int id;
	public:
	Staff()
	{
		id=0;
		cname="";
		N="";
		education="";
		pqualification="";
	}
	Staff(int id,const char* cname,const char* N,const char* education,const char* pqualification)
	{
		this->id=id;
		this->cname=cname;
		this->N=N;
		this->education=education;
		this->pqualification=pqualification;
	}
	int get_id()
	{
		return id;
	}
	
	const char* get_cname()
	{
		return cname;
	}
	const char* get_N()
	{
		return N;
	}
	const char* get_education()
	{
		return education;
	}
	const char* get_pqualification()
	{
		return pqualification;
	}
	void display_details()
	{
		cout<<"\n";
		cout<<"\tID: "<<get_id()<<endl;
		cout<<"\tCode Name: "<<get_cname()<<endl;
		cout<<"\tName: "<<get_N()<<endl;
		cout<<"\tEducation: "<<get_education()<<endl;
		cout<<"\tProfessional Qualification: "<<get_pqualification()<<endl;
	}
};






class Teachers : public Staff
{
	const char* subject;
	public:

	Teachers()
	{
		subject="";
	}

	Teachers(int id,const char* cname,const char* N,const char* education,const char* pqualification,const char* subject) : 			Staff(id,cname,N,education,pqualification)
	{
		this->subject=subject;
	}
	
	const char* get_subject()
	{
		return subject;
	}

	void display_teacherdetails()
	{
		cout<<"\n";
		cout<<"\tTeacher Details"<<endl;
		cout<<"\tSubject: "<<get_subject()<<endl;
	}
};






class Officers : public Staff
{
	int grade;
	public:

	Officers()
	{
		grade=0;
	}

	Officers(int id,const char* cname,const char* N,const char* education,const char* pqualification,int grade) : 				     Staff(id,cname,N,education,pqualification)
	{
		this->grade=grade;
	}
	
	int get_grade()
	{
		return grade;
	}

	void display_officersdetails()
	{
		cout<<"\n";
		cout<<"\tOfficers Details"<<endl;
		cout<<"\tGrade: "<<get_grade()<<endl;
	}
};






class Typist : public Staff
{
	double salary;
	int speed;
	public:

	Typist()
	{
		salary=0.0;
		speed=0;
	}

	Typist(int id,const char* cname,const char* N,const char* education,const char* pqualification,int speed,double salary) : 				     Staff(id,cname,N,education,pqualification)
	{
		this->speed=speed;	
		this->salary=salary;
	}
	
	double get_salary()
	{
		return salary;
	}
	int get_speed()
	{
		return speed;
	}

	void display_typistdetails()
	{
		cout<<"\n";
		cout<<"\tTypist Details"<<endl;
		cout<<"\tSalary Per Day: "<<get_salary()<<endl;
		cout<<"\tSpeed: "<<get_speed()<<endl;
	}
};


class School 
{
	int Id;
	Staff staffs[10];
	int count=0;
	public:
	School()
	{
		Id=0;
		count=0;
	}
	School(int Id)
	{
		this->Id=Id;
		count=0;
	}
	
	void hire(Staff staff)
	{
		int found=1;
		for(int i=0;i<count;i++)
		{
			if(staff.get_id()==staffs[i].get_id())
			{
				found=0;
			}
		}
		
		if(found==1 && count<10)
		{
			staffs[count]=staff;
			count++;
		}
	}
	
	void display(Staff staff)
	{
		for(int i=0;i<count;i++)
		{
			if(staffs[i].get_id()==staff.get_id())
			{
				staffs[i].display_details();
			}
		}
	}

};


int main()
{
	School s(1);
	Teachers t(1,"Teacher","Varun","B.Tech","M.tech","Data Structures");
	Officers of(2,"Officer","Abhinandan","B.A","M.Ed",5);
	Typist tp(3,"Typist","Rakesh","College","B.Com",50,500.0);
	int x=0;
	do
	{
		cout<<"\n";
		cout<<"\tDatabase Options: "<<endl;
		cout<<"\t1.Add Teacher"<<endl;
		cout<<"\t2.Add Officer"<<endl;
		cout<<"\t3.Add Typist"<<endl;
		cout<<"\t4.Show Teacher Details"<<endl;
		cout<<"\t5.Show Officer Details"<<endl;
		cout<<"\t6.Show Typist Details"<<endl;
		cout<<"\t7.Exit"<<endl;
		cout<<"\tSelect Your Option: "<<endl;
		cin>>x;

		switch(x)
		{
			case 1:
			s.hire(t);
			break;

			case 2:
			s.hire(of);
			break;
				
			case 3:
			s.hire(tp);
			break;
		
			case 4:
			t.display_teacherdetails();
			s.display(t);
			break;
		
			case 5:
			of.display_officersdetails();
			s.display(of);
			break;

			case 6:
			tp.display_typistdetails();
			s.display(tp);
			break;
		
			case 7:
			cout<<"\n";
			cout<<"\tExiting!"<<endl;
			exit(0);
		}
	}while(x!=8);

	return 0;
}
