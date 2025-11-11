#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

/*int main()
{
    int *marks
    int n;
    cout<<"Enter student number: ";
    cin>>n;

    //marks = (int*)malloc(sizeof(int)*n);
    marks = (int*)calloc(n, sizeof(int));
    cout<<"Enter student marks: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Student "<<i+1<<" : ";
        cin>>marks[i];
    }
    cout<<endl;
    cout<<"Show Marks: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Student "<<i+1<<" : "<<marks[i]<<endl;
    }

    free(marks);
    return 0;


}*/

/*int main()
{
    int *mark[5], n[5];
    
    for(int i=0; i<5; i++)
    {
        cout<<"Class : "<<i+1<<endl;
        cout<<"Student : ";
        cin>>n[i];

        mark[i]=(int*)calloc(n[i], sizeof(int));

        if(mark[i]==NULL)
        {
            cout<<"Memory allocation failed."<<endl;
            return 1;
        }

        cout<<"Enter Marks: "<<endl;

        for(int c=0; c<n[i]; c++)
        {
            cin>>mark[i][c];
        }

        free(mark);
        return 0;

    }

    for(int r=0; r<5; r++)
    {
        cout<<"Class "<<r+1<<" : "<<endl;
        for(int c=0; c<n[r]; c++)
        {
            cout<<"Student "<<c+1<<", mark = "<<mark[r][c]<<endl;
        }
        cout<<endl;
    }

    return 0;
}*/

/*int main()
{
    int **mark, n[12], total_class;

    cout<<"How many class you want to add?";
    cin>>total_class;

    mark = (int**)calloc(total_class, sizeof(int*));

    for(int i=0; i<total_class; i++)
    {
        cout<<"Class "<<i+1<<" : "<<endl;
        cout<<"Total Student: ";
        cin>>n[i];

        mark[i]=(int*)calloc(n[i], sizeof(int));

        if(mark[i]==NULL)
        {
            cout<<"Memory Allocation Failed."<<endl;
            return 1;
        }

        cout<<"Enter Student's Marks: "<<endl;
        for(int j=0; j<n[i]; j++)
        {
            cout<<"Student "<<j+1<<" = ";
            cin>>mark[i][j];
        }
        cout<<endl;
    }

    cout<<"Output: "<<endl;
    for(int r=0; r<total_class; r++)
    {
        cout<<"Class "<<r+1<<endl;
        for(int c=0; c<n[r]; c++)
        {
            cout<<"Student "<<c+1<<" : "<<mark[r][c]<<endl;
            
        }
    }

    free(mark);
    return 0;

}*/

/*int main()
{
    char *str = "Bangladesh";

    printf("%c  %c  %c\n", *str, *(str+1), *str+1);

}*/

/*int main()
{
    void *ptr;
    int n=10;

    ptr=&n;

    cout<<"Address of n = "<<&n<<endl;
    cout<<"Value of ptr = "<<ptr<<endl;
    cout<<"Content of ptr = "<<*((int*)ptr)<<endl;

    return 0;
}*/


/*int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}


int operate(int (*op)(int, int), int a, int b)
{
    return op(a, b);
}


int main()
{
    int (*fnc)(int, int);

    fnc=&add;

    cout<<"Add = "<<fnc(10, 5)<<endl;

    fnc=&sub;
    cout<<"Sub = "<<fnc(10, 5)<<endl;

    cout<<"Add = "<<operate(add, 10, 5)<<endl;
    cout<<"Sub = "<<operate(sub, 10, 5)<<endl;



    return 0;

}*/

/*int compare(const void *a, const void *b)
{
    return (*((int*)a) - *((int*)b));
}

int main()
{
    int n, *arr;
    cout<<"Enter size: ";
    cin>>n;
    arr=(int*)calloc(n, sizeof(int));

    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    qsort(arr, n, sizeof(int), compare);

    cout<<"Sorted Elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    free(arr);
    return 0;



}*/

/*int compare(const void *a, const void *b)
{
    return (*((int*)a) - *((int*)b));
}

int main()
{
    int n, *arr, *item, key;
    cout<<"Enter size:";
    cin>>n;
    arr=(int*)calloc(n, sizeof(int));
    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Key: ";
    cin>>key;

    item = (int*)bsearch(&key, arr, n, sizeof(int), compare);

    if(item!=NULL)
    {
        cout<<"Item Found. Item = "<<*item<<endl;
    }
    else
    {
        cout<<"Item not Found."<<endl;
    }

    return 0;

}*/

/*int compare(const void *a, const void *b)
{
    return (*(char*)a - *(char*)b);
}

int main()
{
    int n;
    cout<<"Enter Size: ";
    cin>>n;

    char arr[n];

    cout<<"Enter Characters: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    qsort(arr, n, sizeof(char), compare);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}*/

/*int compare(const void *a, const void *b)
{
    return (*(char*)a - *(char*)b);
}

int main()
{
    char *arr, key, *item;
    int n;
    cout<<"Enter size: ";
    cin>>n;
    arr = (char*)malloc(n*sizeof(char));

    cout<<"Enter Elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter searched item: ";
    cin>>key;

    item = (char*)bsearch(&key, arr, n, sizeof(char), compare);

    if(item!=NULL)
    {
        cout<<"Item Found. Item = "<<*item<<endl;
    }
    else 
    {
        cout<<"Item not found"<<endl;
    }

    free(arr);
    

    return 0;

}*/

//Resize an Array:

/*int main()
{
    int *arr, size;
    cout<<"Enter size: ";
    cin>>size;

    arr = (int *)malloc(size*sizeof(int));

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Output:"<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        
    }

    //resizing:
    int value, index;
    cout<<"Enter Value: ";
    cin>>value;
    cout<<"Enter Index: ";
    cin>>index;

    size++;
    arr = (int *)realloc(arr, size*sizeof(int));

    int i;
    for(i=size-2; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=value;

    cout<<endl;
    cout<<"Output:"<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        
    }
    free(arr);
    return 0;
 
}*/

//Deleting:

/*int main()
{
    int *arr, size;
    cout<<"Enter size: ";
    cin>>size;

    arr = (int *)malloc(size*sizeof(int));

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Output:"<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        
    }

    //deleting:

    int index;
    cout<<"Index: ";
    cin>>index;

    for(int i=index; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    arr = (int *)realloc(arr, size*sizeof(int));

    cout<<"Output:"<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        
    }

    

    free(arr);

    return 0;

}*/

int main()
{
    int *arr, size;
    cout<<"Enter size: ";
    cin>>size;

    arr = (int *)malloc(size*sizeof(int));

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Output:"<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for(int i=0, j=size-1; i<=j; i++, j-- )
    {
        swap(arr[i], arr[j]);
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    free(arr);
    return 0;
}