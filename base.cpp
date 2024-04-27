#include <iostream>
#include <string.h>
using namespace std;
class voter
{
    char name[20];
    char vid[20];
    int reg;
    char vot[20];
    int v = 0;

public:
    void getdata()
    {
        cout << "enter voter name:" << endl;
        cin >> name;
        cout << "enter the voter id:" << endl;
        cin >> vid;
        cout << "enter the state:" << endl;
        cout << "1.Andhra Pradesh" << endl;
        cout << "2.Arunachal Pradesh" << endl;
        cout << "3.Assam" << endl;
        cout << "4.Bihar" << endl;
        cout << "5.Chhattisgarh" << endl;
        cout << "6.Goa" << endl;
        cout << "7.Gujarat" << endl;
        cout << "8.Haryana	" << endl;
        cout << "9.Himachal Pradesh" << endl;
        cout << "10.Jharkhand" << endl;
        cout << "11.Karnataka" << endl;
        cout << "12.Kerala" << endl;
        cout << "13.Madhya Pradesh" << endl;
        cout << "14.Maharashtra" << endl;
        cout << "15.Manipur" << endl;
        cout << "16.Meghalaya" << endl;
        cout << "17.Mizoram" << endl;
        cout << "18.Nagaland" << endl;
        cout << "19.Odisha" << endl;
        cout << "20.Punjab" << endl;
        cout << "21.Rajasthan" << endl;
        cout << "22.Sikkim" << endl;
        cout << "23.Tamil Nadu" << endl;
        cout << "24.Telangana" << endl;
        cout << "25.Tripura" << endl;
        cout << "26.Uttar Pradesh" << endl;
        cout << "27.Uttarakhand	" << endl;
        cout << "28.West Bengal" << endl;
        cout << "29.Andaman and Nicobar Islands" << endl;
        cout << "30.Chandigarh	" << endl;
        cout << "31.Dadra & Nagar Haveli and Daman & Diu" << endl;
        cout << "32.Delhi" << endl;
        cout << "33.Jammu and Kashmir" << endl;
        cout << "34.Lakshadweep" << endl;
        cout << "35.Puducherry" << endl;
        cout << "36.Ladakh" << endl;
        cin >> reg;
    }
    void display();
    int check()
    {
        if (v == 0)
        {
            cout << "voter is eligible to vote" << endl;
            return 0;
        }
        else
        {
            cout << "voter is not eligible to vote" << endl;
            return 1;
        }
    }
    friend void vote(voter A);
    friend int login(voter A[], int max);
};
class politician
{
    char pname[20];
    char pid[20];
    int reg;
    int votes;

public:
    void getdata()
    {
        cout << "enter party name:" << endl;
        cin >> pname;
        cout << "enter the party id:" << endl;
        cin >> pid;
        cout << "enter the state:" << endl;
        cout << "1.Andhra Pradesh" << endl;
        cout << "2.Arunachal Pradesh" << endl;
        cout << "3Assam" << endl;
        cout << "4.Bihar" << endl;
        cout << "5.Chhattisgarh" << endl;
        cout << "6.Goa" << endl;
        cout << "7.Gujarat" << endl;
        cout << "8.Haryana	" << endl;
        cout << "9.Himachal Pradesh" << endl;
        cout << "10.Jharkhand" << endl;
        cout << "11.Karnataka" << endl;
        cout << "12.Kerala" << endl;
        cout << "13.Madhya Pradesh" << endl;
        cout << "14.Maharashtra" << endl;
        cout << "15.Manipur" << endl;
        cout << "16.Meghalaya" << endl;
        cout << "17.Mizoram" << endl;
        cout << "18.Nagaland" << endl;
        cout << "19.Odisha" << endl;
        cout << "20.Punjab" << endl;
        cout << "21.Rajasthan" << endl;
        cout << "22.Sikkim" << endl;
        cout << "23.Tamil Nadu" << endl;
        cout << "24.Telangana" << endl;
        cout << "25.Tripura" << endl;
        cout << "26.Uttar Pradesh" << endl;
        cout << "27.Uttarakhand	" << endl;
        cout << "28.West Bengal" << endl;
        cout << "29.Andaman and Nicobar Islands" << endl;
        cout << "30.Chandigarh	" << endl;
        cout << "31.Dadra & Nagar Haveli and Daman & Diu" << endl;
        cout << "32.Delhi" << endl;
        cout << "33.Jammu and Kashmir" << endl;
        cout << "34.Lakshadweep" << endl;
        cout << "35.Puducherry" << endl;
        cout << "36.Ladakh" << endl;
        cin >> reg;
    }

    friend void vote(voter A);
    friend int login(voter A[], int max);
    friend int login1(politician A[], int max);
};
politician Poli[1000];
void vote(voter A)
{
    int i;char bt;
    switch (A.reg)
    {
    case 1:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 1)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }
            case 2:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 2)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 3:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 3)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 4:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 4)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 5:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 5)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 6:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 6)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 7:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 7)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 8:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 8)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 9:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 9)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 10:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 10)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 11:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 11)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 12:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 12)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 13:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 13)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 14:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 14)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 15:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 15)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 16:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 16)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 17:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 17)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 18:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 18)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 19:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 19)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 20:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 20)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 21:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 21)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 22:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 22)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 23:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 23)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 24:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 24)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 25:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 25)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 26:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 26)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 27:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 27)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 28:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 28)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 29:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 29)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 30:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 30)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 31:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 31)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 32:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 32)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }case 33:
    {
        cout << "please choose :-" << endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == 33)
            {
                cout << Poli[i].pname << endl;
                cout<<"vote for him Y?N:"<<endl;
                cin>>bt;
                if(bt=='y'||bt=='Y'){
                    Poli[i].votes++;
                    strcpy(A.vot,Poli[i].pname);
                    break;
            }else{
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }
                    strcpy(A.vot,'INDEPENDANT');
        }
        break;
    }
    }
}
int login(voter A[], int max)
{
    char sname[20];
    char vt[20];
    int i, j, b, c;
    cout << "please enter your name:" << endl;
    cin >> sname;
    cout << "please enter your voter id:" << endl;
    cin >> vt;
    for (i = 0; i <= max; i++)
    {
        b = strcmp(sname, A[i].name);
        c = strcmp(vt, A[i].vid);
        if ((b == 0) && (c == 0))
        {
            j = i;
            break;
        }
        cout << j;
        j = 0;
    }
    return j;
}
int main()
{
    voter s[10000];
    int a, b, c;
    int i = 0;
    do
    {
        cout << "choose from following:" << endl;
        cout << "1.voter registration" << endl;
        cout << "2.voter login" << endl;
        cout << "3.exit" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            s[i].getdata();
            i++;
            break;
        case 2:
            b = login(s, i);
            if (b == 0)
            {
                cout << "voter not found" << endl;
            }
            else
            {
                c = s[b].check();
                if (c == 0)
                {
                    vote(s[b]);
                }
            }
        }
    } while (a < 3);
}