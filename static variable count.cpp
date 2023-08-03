#include<iostream>
#include<cstring>
using namespace std;

class track{
    int a;
    int static count;

    public:
    void tracker(int k)
    {
        a=k;
        cout<<"This is the value of a:"<<a<<endl;
        cout<<"This is the value of count:"<<++count<<endl;
        cout<<endl;
    }
};

int track::count=0;

int main(){

    track obj[3];
    for (int i = 0; i < 3; i++)
    {
        obj[i].tracker(i+2);
    }
    return 0;
}
