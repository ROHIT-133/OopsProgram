#include<iostream>
#include<cstring>
using namespace std;

class sharedres{

    static int rescount;

    public:
    sharedres()
    {
        rescount++;
    }

    ~sharedres()
    {
        rescount--;
    }

    void accessres()
    {
        if (rescount>1)
        cout<<"Resource already being used by another object."<<endl;
        else
        cout<<"Resource accessed."<<endl;
    }

};

int sharedres::rescount=0;

int main(){

    sharedres obj1;
    obj1.accessres();

    sharedres obj2;
    obj2.accessres();


    return 0;


}
