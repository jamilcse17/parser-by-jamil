#include<bits/stdc++.h> using namespace std;

/// fp = first parenthesis, sp = second parenthesis, tp = third parenthesis.

string lines[100];
 int linelen=0;

struct node { char data; struct node *next; }*topfp=NULL,*topsp=NULL,*toptp=NULL;

struct errorlist { int data; struct errorlist *next; }*head=NULL,*tail=NULL;

void checklist(int val); void createlist(int val); void print(); void pushfp(char x); void popfp(int x); void pushsp(char x); void popsp(int x); void pushtp(char x); void poptp(int x);

map<string,int>mp; map<string,int>mp1;

int fun(string st) {

int i,j,flag=0,flag1=1;
vector<string>res;
/*for(i=0; i<st.size(); i++)
{
    if(st[i]=='(' || st[i]==')' || st[i] == '=' )return 1;
}*/


if(st.size()<3)flag=0;
else if(flag1==1)
{
    for(i=0; i<st.size()-2; i++)
    {

        if(st[i]=='i' && st[i+1]=='n' && st[i+2]=='t')
        {
            flag=1;
            break;
        }

    }
}
if(st.size()>5)
{
     for(i=0; i<st.size()-5; i++)
    {

        if(st[i]=='r' && st[i+1]=='e' && st[i+2]=='t' && st[i+3]=='u' && st[i+4]=='r' && st[i+5]=='n')
        {
            return 1;

        }
        if(st[i]=='m' && st[i+1]=='a' && st[i+2]=='i' && st[i+3]=='n' )return 1;
    }
}



if(flag==1)
{
    string st1;
    flag1=0;
    for(i=0; i<st.size(); i++)
    {
        if(st[i]==' ')flag1=1;
        else if(flag1==1)
        {
            st1.push_back(st[i]);
        }
    }
    string st3;
    for(i=0; i<st1.size(); i++)
    {
        if(st1[i]==',' || st1[i]==';')
        {
            mp[st3]=1;
            st3.clear();
        }
        else st3.push_back(st1[i]);

    }

}


if(flag==0)
{
    string st2;

    int i;
for(i=0; i<st.size(); i++)
{
    st2.push_back(st[i]);

}
    string st3;
    for(i=0; i<st2.size(); i++)
    {
        char ch=st2[i];

        if(ch=='=' || ch=='*' || ch=='/' || ch==';' || ch=='+' || ch=='-' || ch == '>' || ch== '<' || ch=='(' || ch==')' || ch=='[' || ch==']')
        {

            mp1[st3]=1;
            st3.clear();
            }

        else st3.push_back(st2[i]);

    }

}

return flag;
