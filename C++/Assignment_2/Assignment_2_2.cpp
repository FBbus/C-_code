#include<iostream>
#include<cstring>
using namespace std;

struct student
{

unsigned short pass: 1;

unsigned short grade: 3;

};


int main()
{

student s ={0};
    
double activity, exam;

char FW_y_n[2];

bool FinalWork; 

int amount, i, j, name_length, exam_mod=exam-40;

cout<<"how many students are you grading?";
cin>>amount;

char students[amount];

cout<<"give "<<amount<<" names"<<endl;
for(i=0;i<amount;i++)
{
    cin>>students[i];
}

for(i=0;i<amount;i++)
{

    cout<<"How active has the student "<<students[i]<<" been in class on a scale of 0 to 100"<<endl;
    cin>>activity;
    cout<<"the students activity level was"<<activity<<"\%"<<endl;
 
    cout<<"Did the student finnish the Final Work? y/n"<<endl;
    cin>>FW_y_n[0];

    if(FW_y_n[0] == 'Y' ||FW_y_n[0] ==  'y')
    {
        FinalWork=true;
    }
    
    else
    {
        FinalWork=false;
    }

    cout<<FinalWork<<endl;

    cout<<"what percentage of points did the student get from the exam? 0 to 100"<<endl;
    cin>>exam;
    cout<<"the student got "<<exam<<"\% from the exam"<<endl;

    if(exam >= 40 && FinalWork == true)
    {
        ++s.pass;
    }

    else

    if(s.pass == 1)
    {
        cout<<"the student passed the course"<<endl;
       
    }

    else
    {
        cout<<"the student didn't pass the course"<<endl;
    }
    
    if(s.pass == 1)
    {
        if(activity >= 50)
        {
            ++s.grade;
        }
        
        if(exam>=52 && exam<=64)
        {
            ++s.grade;
        }
        
        else if(exam>=64 && exam<=76)
        {
            ++s.grade;
            ++s.grade;
        }
        
        else if(exam>=76 && exam<=88)
        {
            ++s.grade;
            ++s.grade;
            ++s.grade;
        }
        
        else if(exam>=88 && exam<=100)
        {
            ++s.grade;
            ++s.grade;
            ++s.grade;
            ++s.grade;
        }
        
        cout<<"the students grade is "<<s.grade<<endl; 
    }
}
}