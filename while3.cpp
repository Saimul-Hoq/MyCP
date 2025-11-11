#include<iostream>
int main()
{
    int sum=0, count=1, n;
    std::cout<<"Enter any number: ";
    std::cin>>n;
    while(count<=n)
         {
            sum=sum + count;
            count=count+1;
         }
    std::cout<<"The sum of 1 to "<<n<<" is "<<sum<<std::endl;
    return 0;     

}