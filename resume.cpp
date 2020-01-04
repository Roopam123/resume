#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
int main()
{
fstream file;
file.open("roopam.txt",ios::out);
if(!file)
{cout<<"error in creating file!!!";
return 0;
}
cout<<"file created succesfully";
file<<"======================================================================"<<endl;
file<<"                         MY RESUME                                    "<<endl;
file<<"======================================================================"<<endl;
file<<"Roopam Rahangdale"<<endl;
file<<"roopamrahangdale241@gmail.com"<<endl;
file<<"24-11-2000"<<endl;
file<<"Add:- janamkhari,Distt-Seoni(M.P.)"<<endl;
file<<"Contt. No.:- +918226046346"<<endl<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"CAREER OBJECTIVE"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"Looking for a software engineering position with lead co. where my knowledge of coding  and system maintenance will be beneficial to the company."<<endl<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"EDUCATION"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<setw(7)<<"Sl. no."<<setw(15)<<"Qualifications"<<setw(30)<<"Institute"<<setw(7)<<"Score"<<setw(6)<<"Year"<<endl;
file<<setw(7)<<"1."<<setw(15)<<"10th"<<setw(30)<<"H.S. School Dharna Kalan,Seoni"<<setw(7)<<"83"<<setw(6)<<"2016"<<endl;
file<<setw(7)<<"2."<<setw(15)<<"12th"<<setw(30)<<"H.S. School Dharna Kalan,Seoni"<<setw(7)<<"81"<<setw(6)<<"2018"<<endl;
file<<"----------------------------------------------------------------------"<<endl<<endl;
file<<"SKILLS"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"Programming languages:- C,Cpp, HTML, CSS"<<endl;
file<<"Tools:- MS Office, MS Excel, "<<endl<<endl;
file<<"SOCIAL PROFILES"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"Github- github.com/Roopam123"<<endl;
file<<"Linkedin - in.linkedin.com"<<endl;
file<<"Facebook - Facebook.com"<<endl;
file.close();
getch();
return 0;
}
