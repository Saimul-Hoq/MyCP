#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter amy number:";
    std::cin>>n;
    int sum= n*(n+1)/2;
    std::cout<<"The sum of 1 to "<<n<<" is "<< sum<<std::endl;
    return 0;
}