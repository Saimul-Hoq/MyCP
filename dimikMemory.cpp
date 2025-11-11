#include<iostream>
using namespace std;

//Programme 1.2:
/*int main()
{
    int i;
    for(i=33; i<=126; i++)
    {
        printf("ASCII value for %c is %d\n", i,i);
    }

    char ch;
    printf("Enter a small letter: ");
    ch = getchar();
    printf("Capital letter is: %c", ch-32);

    return 0;
}*/


//Check Digit:
/*int digit(char ch)
{
    if(ch>=48 && ch<=57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char ch;
    printf("Enter anything: ");
    ch = getchar();

    if(digit(ch)==1)
    {
        cout<<endl<<"Digit"<<endl;
    }
    else
    {
        cout<<endl<<"Non-Digit"<<endl;
    }

    return 0;
}*/

/*int main()
{
    char ch='A';
    int i=3;

    printf("Value of ch = %c\n", ch);
    printf("Address of ch = %p\n", &ch);

    printf("Value of i = %d\n", i);
    printf("Address of i = %p\n", &i);

    return 0;

}*/

int main()
{
    int arr[4]={1,2,3,4};
    int i=7;
    char ch='d';
    register int num = 5;

    cout<<"Values of arr = "<<arr[0]<<" , "<<arr[1]<<" , "<<arr[2]<<" , "<<endl;
    cout<<"Address of arr = "<<arr<<endl;
    cout<<"Address of arr[0] = "<<&arr[0]<<endl;
    cout<<"Address of arr[1] = "<<&arr[1]<<endl;
    cout<<"Address of arr[2] = "<<&arr[2]<<endl;
    cout<<"Address of arr[3] = "<<&arr[3]<<endl;
    cout<<"Size of int = "<<sizeof(int)<<endl;
    cout<<"Size of i = "<<sizeof(i)<<endl;
    cout<<"Size of char = "<<sizeof(char)<<endl;
    cout<<"Size of ch = "<<sizeof(ch)<<endl;
    cout<<"Num = "<<num<<endl;



    return 0;


}