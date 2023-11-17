#include <iostream>

// cocacola

using namespace std;
int main(int argc, char const *argv[])
{
    
    for(int i = 1; i <= 100; i++)
    {
        int number = i % 3;
        if(i %3 == 0 && i % 5 == 0)
        {
            cout <<"Coca Cola"<<endl;
        }
        else if (i % 3 == 0)
        {
            cout<<"Coca"<<endl;
        }
        else if(i % 5==0) {
            cout<<"Cola"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
