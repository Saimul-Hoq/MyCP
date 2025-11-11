#include<iostream>
int main()
{
    int mult=1, count=5;
    while(count>=1)
    {
        mult= mult*count;
        count=count-1;
    }
    std::cout<<"The factorial of 5 is "<<mult<<std::endl;
    return 0;
}