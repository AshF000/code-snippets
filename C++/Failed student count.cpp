#include <bits/stdc++.h>
using namespace std;

struct stdinfo
{
    long long id;
    char gender;
    float ct_score, mt_score, fe_score, t_score;
};


int failed(stdinfo stdnt[],int n)
{
    int count =0;
    for(int i=0; i<n; i++)
    {
        if((stdnt[i].ct_score+stdnt[i].mt_score+stdnt[i].fe_score)<50)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    stdinfo stdnt[n];
    for(int i=0; i<n; i++)
    {
        cout<<endl;
        cout<<"For Student - "<<i+1<<":"<<endl;
        cout<<"Registration Number: ";
        cin>>stdnt[i].id;
        cout<<"Gender (M/F): ";
        cin>>stdnt[i].gender;
        cout<<"Class Test marks: ";
        cin>>stdnt[i].ct_score;
        cout<<"Mid Term marks: ";
        cin>>stdnt[i].mt_score;
        cout<<"Final Exam marks: ";
        cin>>stdnt[i].fe_score;
    }

    cout<<"Failed: "<<failed(stdnt,n)<<endl;
    return 0;
}


/*

for(int i=0;i<n;i++)
{
    cout<<"Student - "<<i+1<<":"<<endl<<"ID: "<<stdnt[i].id<<endl<<"Gender: "<<stdnt[i].gender<<endl<<"CT Score: "<<stdnt[i].ct_score<<endl<<"Mid Score: "<<stdnt[i].mt_score<<endl<<"Final Score: "<<stdnt[i].fe_score<<endl<<endl;
}
*/


/*
Input:

2

23101106
M
30
10
30

23101132
F
25
15
32

*/
