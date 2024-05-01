#include <iostream>
#include <string.h>
#include <regex>
#include <cstdlib>
#include <ctime>
using namespace std;
class voter
{
    char name[20];
    char vid[20];
    int reg;
    char vot[20];
    int v = 0;
    string pno;
    string pn;
    int age;

public:
    int getdata(voter A[],int d)
    {int i;int j=10;int k=1;int ct;
        cout << "enter voter name:" << endl;
        cin >> name;
        cout<<"enter voter age:"<<endl;
        cin>>age;
        if(age<18){
            cout<<"not eligible to vote [underage]"<<endl;
            return 1;
        }
        do{cout<<"enter your aadhar registered contact no."<<endl;
        cin>>pn;j=0;k=0;
        for(ct=0;pn[ct]!='\0';ct++){
            if(pn[ct]!='0'&&pn[ct]!='1'&&pn[ct]!='2'&&pn[ct]!='3'&&pn[ct]!='4'&&pn[ct]!='5'&&pn[ct]!='6'&&pn[ct]!='7'&&pn[ct]!='8'&&pn[ct]!='9'){
                k=1;
                break;
            }
        j++;}
        if(k!=0||j!=10){
            cout<<"please enter 10 digit phone no."<<endl;
        }
        }while((j!=10)||k==1);int dt=0;
        for(ct=0;ct<=d;ct++){
            if(d!=0){
            if(pn==A[d].pn){
                cout<<"phone no. already registered please do the process again"<<endl;
                dt=1;
                break;
            }else {dt=0;}}
        }if(dt==1){
            return dt;
        }else{
        do{cout << "create your password:" << endl;
        cin >> vid;
        string a=generateRandomPassword();
        cout<<"your pin no. is:"<<a<<endl;
        pno=a;
        i=isAllPresent(vid);
        if(i==1){
            cout<<"please check if you password has at least 1 special character,1 uppercase character,1 lowercase character and 1 number"<<endl;
        }
        }while(i!=0);
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
    return dt;}
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

     int isAllPresent(string str)
        {
            const regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");
            if (str.empty())
  {
    
    return 1;
  }
 
  // Print Yes If the string matches
  // with the Regex
  if(regex_match(str, pattern))
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
friend std::string generateRandomPassword();
std::string generateRandomPassword() {
    const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string password;
    for (int i = 0; i <12; ++i) {
        int index = rand() % (sizeof(alphanum) - 1);
        password += alphanum[index];
    }
    return password;
}
friend void display(voter A[],int n);
};
void display(voter A[],int n){
    string a,b;
    cout<<"enter your aadhar registered mobile no. : "<<endl;
    cin>>a;
    int i;
    for(i=0;i<=n;i++){
        if(a==A[i].pn){
            cout<<"enter your pin :"<<endl;
            cin>>b;
            if(b==A[i].pno){
                cout<<"your username and password is:"<<endl;
                cout<<A[i].name<<endl<<A[i].vid<<endl;
            }
        }
    }
}
 int isAllPresent(string str)
        {
            const regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");
            if (str.empty())
  {
    
    return 1;
  }
 
  // Print Yes If the string matches
  // with the Regex
  if(regex_match(str, pattern))
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Function to generate a random password of a given length
std::string generateRandomPassword() {
    std::string password;
    for (int i = 0; i <12; ++i) {
        int index = rand() % (sizeof(alphanum) - 1);
        password += alphanum[index];
    }
    return password;
}
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
    void display(){
        cout<<"party name:-"<<pname<<endl;
        cout<<"party id:- "<<pid<<endl;
        cout<<"party region:-"<<reg<<endl;
        cout<<"party votes:- "<<votes<<endl;
    }

    friend void vote(voter A);
    friend int login(voter A[], int max);
};
class BJP{
    char name[20];
    int votes=0;
    char pid[20];
    public:
     BJP(){
       char b[]="BJP";
        strcpy(name,b);
        char c[]="BJP2323";
        strcpy(pid,c);
    }
        void display(){
        cout<<"party name:-"<<name<<endl;
        cout<<"party id:- "<<pid<<endl;
        
        cout<<"party votes:- "<<votes<<endl;
    }

    friend void vote(voter A);
    friend int login(voter A[], int max);
};
class Cong{
    char name[20];
    int votes=0;
    char pid[20];
    public:
    Cong(){
        char b[]="congress";
        strcpy(name,b);
        char c[]="CNG";
        strcpy(pid,c);
    }
        void display(){
        cout<<"party name:-"<<name<<endl;
        cout<<"party id:- "<<pid<<endl;
       
        cout<<"party votes:- "<<votes<<endl;
    }

    friend void vote(voter A);
    friend int login(voter A[], int max);

};
BJP bjp;
Cong CONG;
politician Poli[1000];
void vote(voter A)
{
    int i;int bt;char ind[]="Independant";
    A.v=1;
     cout << "please choose :-" << endl;int j=3;
        cout<<"1.BJP\n2.CONGRESS"<<endl;
        for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == A.reg)
            {
                cout <<j<< Poli[i].pname << endl;
                j++;
                }
                }cout<<"enter "<<j+1<<" for staying independent"<<endl;
                cout<<"enter your choice :-"<<endl;
                cin>>bt;
             if(bt==1){
                bjp.votes+=1;
            }else if(bt==2){
                CONG.votes+=1;
            }else if(bt>j){
                strcpy(A.vot,ind);
            }
                A.v=1;
                int a=3;
                for (i = 0; i < 1000; i++)
        {
            if (Poli[i].reg == A.reg)
            {if(a<=j){
                if(a==bt){
                    Poli[i].votes++;
                }
                a++;
                }}
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
    if(j==0){
        return -1;
    }else{
    return j;
}}
int main()
{
    srand(time(nullptr)); 
    voter s[10000];
    int a, b, c,j,e;
    int i = 0,d=0;
    do
    {
        cout << "choose from following:" << endl;
        cout << "1.voter interface" << endl;
        cout << "2.party interface" << endl;
        cout << "3.exit" << endl;
        cin>>b;
        switch(b){
        case 1:{
        cout << "1.voter registration" << endl;
        cout << "2.voter login" << endl;
        cout << "3.display" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            e=s[i].getdata(s,i);
            if(e==0){
            i++;
            }
            break;
        case 2:
            b = login(s, i);
            if (b == 0)
            {
                cout << "voter not found" << endl;
            }
            else if(b==-1)
            {
                
                c = s[b+1].check();
                if (c == 0)
                {
                    vote(s[b+1]);
                }
            }
            else
                {
                c = s[b].check();
                if (c == 0)
                {
                    vote(s[b]);
                }
            }
            
            break;
        case 3:
        display(s,i);
        break;}
        break;}
        case 2:{
        cout<<"1.party registration\n2.exit"<<endl;
        cin>>c;
        switch(c)
        {case 1:

         Poli[d].getdata();
         d++;
         break;
        }break;}
    }
} while (b < 3);
    cout<<"the results are:- "<<endl;
    bjp.display();
    CONG.display();
    for(j=0;j<d;j++){
        Poli[j].display();
        cout<<endl;
    }
}
