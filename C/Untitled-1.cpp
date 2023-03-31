#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    char name[50];
    int mark1,mark2,mark3;
    public:
    void setrollno();
    void setmark1();
    void setmark2();
    void setmark3();
    void setname();
    
    char getname();
    int getmark1();
    int getmark2();
    int getmark3();
    int total_marks();
    void grade();
    ~student();

};
int student::setrollno()
{
    int r;
    cout<<"Enter the rollno: ";
    cin>>r;
    rollno=r;

}
char student::setname()
{
    char s[50];
    cout<<"Enter the name: ";
    cin>>name;
   

}
int student::setmark1()
{
    int x;
    cout<<"Enter marks for 1 subjects: ";
    cin>>x;
    mark1=x;
 
}
int student::setmark2()
{
    int y;
    cout<<"Enter marks for 2 subjects: ";
    cin>>y;
    mark2=y;
 
}
int student::setmark3()
{
    int z;
    cout<<"Enter marks for 3 subjects: ";
    cin>>z;
    mark3=z;
 
}
int student::getrollno()
{ 
    cout<<"Rollno: ";
    return rollno;
}

int student::getmark1()
{
    cout<<"Mark1: ";
    return mark1;
}
int student::getmark2()
{
    cout<<"Mark2: ";
    return mark2;
}
int student::getmark3()
{
    cout<<"Mark3: ";
    return mark3;
}
int student::total_marks()
{
    cout<<"Total marks: ";
    return mark1+mark2+mark3;
}
void student::grade()
{
    if(mark1+mark2+mark3>=90 && mark1+mark2+mark3<100)
    {
        cout<<"A";
    }
     else if(mark1+mark2+mark3>=80 && mark1+mark2+mark3<90)
    {
        cout<<"B";
    }
    else  if(mark1+mark2+mark3>=70 && mark1+mark2+mark3<80)
    {
        cout<<"C";
    }
    else  if(mark1+mark2+mark3>=60 && mark1+mark2+mark3<70)
    {
        cout<<"D";
    }
    else if(mark1+mark2+mark3>=50 && mark1+mark2+mark3<60)
    {
        cout<<"E";
    }
    else
    {
        cout<<"F";
    }

}

int main()
{
    student r;
    r.setrollno();
    r.setname();
    r.setmark1();
    r.setmark2();
    r.setmark3();
    r.total_marks();
    r.grade();

    return 0;
}