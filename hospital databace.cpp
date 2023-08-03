#include<iostream>
#include<cstring>
using namespace std;

class hospitdb{
    public:

    char name[30];
    int age;
    void set_dat();
};

class condit:public hospitdb{
    public:
    void get();
};

void hospitdb::set_dat()
{
    cout<<"Enter the name of patient:";
    cin>>name;
    cout<<"Enter the age of patient:";
    cin>>age;
    cout<<endl;
}

void condit::get()
{
    if(age<12)
    {
    cout<<"Printing age pedriatics:"<<endl;
    cout<<"Name of patient:"<<name<<endl;
    cout<<"Age of patient:"<<age<<endl;
    cout<<endl;
    }
}

int main(){
    condit d,d1;
    d.set_dat();
    d1.set_dat();
    d.get();
    d1.get();

    return 0;
}
