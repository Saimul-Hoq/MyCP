#include<iostream>
int main()
{
    int mult=1, n;
    std::cout<<"Enter the number you want to do factorial: ";
    std::cin>>n;
    while(n>=1)
    {
        mult=mult*n;
        n=n-1;
    }
    std::cout<<"The factorial is "<<mult<<std::endl;
    return 0;


}