//PROBLEM 1
#include<iostream>
#include<string.h>
using namespace std;

    string str="5*6/(2-1)+5*3/2";
    int size=15;
    char convertionStack[15];
    int top=0, k=0;
    char postfix[15];

    bool isEmpty()
    {
        if(top==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if(top==size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool push(char element)
    {
        if(isFull()==true)
        {
            return false;
        }   
        else
        {
            convertionStack[top]=element;
            top++;
            return true;
        }
    }

    bool pop()
    {
        if(isEmpty()==true)
        {
            return false;
        }
        else
        {
            top--;
            return true;
        }
    }

    char getTopElemenmt()
    {
        if(isEmpty()==true)
        {
            return 'x';
        }
        else
        {
            return convertionStack[top-1];
        }
    }

    void show()
    {
        for(int i=top-1; i>=0; i--)
        {
            cout<<convertionStack[i]<<" ";
        }
        cout<<endl;
    }

void infixToPostfix()
{
    for(int i=0; i<size; i++)
    {
        if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
        {
            postfix[k]=str[i];
            k++;
        }
        else if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            push(str[i]);
        }
        else if(str[i]==')')
        {
            while(getTopElemenmt()!='(')
            {
                
                postfix[k]=getTopElemenmt();
                k++;
                pop();
            }
            pop();
        }
        else if(str[i]=='}')
        {
            while(getTopElemenmt()!='{')
            {
                
                postfix[k]=getTopElemenmt();
                k++;
                pop();
            }
            pop();
        }
        else if(str[i]==']')
        {
            while(getTopElemenmt()!='[')
            {
                
                postfix[k]=getTopElemenmt();
                k++;
                pop();
            }
            pop();
        }
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {
            if(isEmpty()==true || getTopElemenmt()=='(' || getTopElemenmt()=='{' || getTopElemenmt()=='[')
            {
                push(str[i]);
            }
            else
            {
                                
                if(str[i]=='+' || str[i]=='-')
                {
                    while(getTopElemenmt()=='+'||getTopElemenmt()=='-'||getTopElemenmt()=='*'||getTopElemenmt()=='/')
                    {
                        postfix[k]=getTopElemenmt();
                        k++;
                        pop();
                    }
                    push(str[i]);
                        
                }
                
                   
                
                
                else if(str[i]=='*' || str[i]=='/')
                    {
                        if(getTopElemenmt()=='*' || getTopElemenmt()=='/')
                        {
                            while(getTopElemenmt()=='*'||getTopElemenmt()=='/')
                            {
                                postfix[k]=getTopElemenmt();
                                k++;
                                pop();
                            
                            }
                            push(str[i]);
                        }
                        else
                        {
                            push(str[i]);
                        }
                    }
                
            }
        }       

    }
    for(int i=top-1; i>=0; i--)
    {
        postfix[k]=convertionStack[i];
        k++;
    }

}

int evaluationStack[13];
int top2=0;
int a,b, result;

bool isEmpty2()
    {
        if(top2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

bool isFull2()
{
    if(top2==k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool push2(int element)
{
    if(isFull2()==true)
    {
        return false;
    }   
    else
    {
        evaluationStack[top2]=element;
        top2++;
        return true;
    }
}

bool pop2()
{
    if(isEmpty2()==true)
    {
        return false;
    }
    else
    {
        top2--;
        return true;
    }
}

int getTopElemenmt2()
{
    if(isEmpty2()==true)
    {
        return -9999;
    }
    else
    {
        return evaluationStack[top2-1];
    }
}

void show2()
{
    for(int i=top2-1; i>=0; i--)
    {
        cout<<evaluationStack[i]<<" ";
    }
    cout<<endl;
}

void evaluation()
{
    for(int i=0; i<k; i++)
    {
        if(postfix[i]>='0' && postfix[i]<='9')
        {
            int num=postfix[i]-48;
            push2(num);
        }
        
        else if(postfix[i]=='+')
        {
            a=getTopElemenmt2();
            pop2();
            b=getTopElemenmt2();
            pop2();
            result=b+a;
            push2(result);
        }
        else if(postfix[i]=='-')
        {
            a=getTopElemenmt2();
            pop2();
            b=getTopElemenmt2();
            pop2();
            result=b-a;
            push2(result);
        }
        else if(postfix[i]=='*')
        {
            a=getTopElemenmt2();
            pop2();
            b=getTopElemenmt2();
            pop2();
            result=b*a;
            push2(result);
        }
        else if(postfix[i]=='/')
        {
            a=getTopElemenmt2();
            pop2();
            b=getTopElemenmt2();
            pop2();
            result=b/a;
            push2(result);
        }
    }

    result=getTopElemenmt2();
}


int main()
{
    infixToPostfix();
    cout<<"Postfix Expression: ";
    for(int i=0; i<k; i++)
    {
        cout<<postfix[i]<<" ";
    }
    
    evaluation();
    cout<<endl<<"Result = "<<result<<endl;
    

    return 0;
}   

    