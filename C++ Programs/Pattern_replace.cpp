#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int find(char str[],char pat[],int pos)
{
    int j=0;
    while(1)
    {
        if(pat[j]=='\0') break;
        if(str[pos+j]!=pat[j]||str[pos+j]=='\0') return 0;
        j++;
    }
    return 1;
}

int main()
{
    char str[1000],pat[1000],rep[1000];
    cout<<"ENTER STR, PAT, REP STRINGS:\n";
    cin>>str>>pat>>rep;
    cout<<"\nString STR after processing:\n";
    int count=0,i,j,k;
    i=0; j=0;
    while(1)
    {
        if(find(str,pat,i))
        {
            cout<<rep;
            count++;
            i+=strlen(pat);
        }
        else
        {
            cout<<str[i];
            i++;
        }
        if(str[i]=='\0') break;
    }
    cout<<endl;
    if(count) cout<<"\'"<<pat<<"\' was found "<<count<<" times in the string STR.\n";
    else cout<<rep<<" was not found in the string STR.\n";
    cout<<"..........\nPress any key to exit.";
    getch();
}
