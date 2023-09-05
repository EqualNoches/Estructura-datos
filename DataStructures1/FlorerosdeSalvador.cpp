#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for(int i = 0; i <= 100; i++)
    {
        int totalFlores = 100;//Flores que compro salvador
        totalFlores -= i;

        //If in charge of determine if the number is a mutliple of 6.
        if(totalFlores % 6 == 0)
        {
            totalFlores -=8;

            //if in charge of determine a mutliple of 11.
            if (totalFlores % 11 == 0)
            {
                cout<<"Salvador vendio: "<< i <<" floreros esta semana.\n Luego de haber vendido los 8, le quedaron "<< totalFlores <<endl;   
            }
        }
    }
    return 0;
}
