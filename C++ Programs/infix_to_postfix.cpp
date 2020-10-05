#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Stack
{
public:
    char s[100];
    int head=-1;

    void push(char c)
    {
        head++;
        s[head]=c;
    }

    char pop()
    {
        if(head==-1) return '!';
        head--;
        return s[head+1];
    }

    char showtop()
    {
        if(head==-1) return '!';
        return s[head];
    }
};

int main()
{
    char s[100];
    Stack x;
    cout<<"ENTER THE INFIX EXPRESSION: ";
    cin>>s;
    cout<<"\n\nPOSTFIX EXPRESSION: ";
    for(int i=0;;i++)
    {
        if(s[i]=='\0') break;
        if(s[i]=='(') x.push(s[i]);
        else if(s[i]=='*'||s[i]=='/')
        {
            while(1)
            {
                char k;
                if(x.s[x.head]=='^'||x.s[x.head]=='*'||x.s[x.head]=='/') {k=x.pop(); cout<<k;}
                else break;
                if (k=='!') break;
            }
            x.push(s[i]);
        }
        else if(s[i]=='+'||s[i]=='-')
        {
            while(1)
            {
                char k;
                if(x.s[x.head]=='^'||x.s[x.head]=='*'||x.s[x.head]=='/'||x.s[x.head]=='+'||x.s[x.head]=='-') {k=x.pop(); cout<<k;}
                else break;
                if (k=='!') break;
            }
            x.push(s[i]);
        }
        else if(s[i]=='^') x.push(s[i]);
        else if(s[i]==')')
        {
            while(1)
            {
                char k=x.pop();
                if(k=='(') break;
                cout<<k;
            }
        }
        else cout<<s[i];
    }
    while(1)
    {
        char k=x.pop();
        if(k=='!') break;
        else cout<<k;
    }

    cout<<"\n..........\nPress any key to exit.";
    getch();
}
