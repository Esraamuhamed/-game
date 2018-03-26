#include <iostream>

using namespace std;

int main()
{
string a[17]= {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16"};
    cout<<a[1]<<"\t"<<a[2]<<"\t"<<a[3]<<"\t"<<a[4]<<endl<<a[5]<<"\t"<<a[6]<<"\t"<<a[7]<<"\t"<<a[8]<<endl<<a[9]<<"\t"<<a[10]<<"\t"<<a[11]<<"\t"<<a[12]<<endl<<a[13]<<"\t"<<a[14]<<"\t"<<a[15]<<"\t"<<a[16]<<endl;
    int playturn=1;
    int m,n;
    while(true)
    {
        cout<<"enter square num.: ( "<<playturn<<" ) ";
        cin>>m>>n;

        if((((m>0 && (m<=16)) && (n>0) && (n<=16))&&((a[m]!="x") && (a[n]!="x")))&&(((n>m) && (n-m==1) && (m%4!=0))||((n>m) && (n-m==4))||((m>n) && (m-n==1) && (n%4!=0))||((m>n) && (m-n==4))))
        {
            a[m]="x";
            a[n]="x";
            cout<<a[1]<<"\t"<<a[2]<<"\t"<<a[3]<<"\t"<<a[4]<<endl<<a[5]<<"\t"<<a[6]<<"\t"<<a[7]<<"\t"<<a[8]<<endl<<a[9]<<"\t"<<a[10]<<"\t"<<a[11]<<"\t"<<a[12]<<endl<<a[13]<<"\t"<<a[14]<<"\t"<<a[15]<<"\t"<<a[16]<<endl;

        }
        else
            while (true)
            {
                cout<< " stupid!enter another two num-.-:  ";
                cin>>m>>n;
                if((((m>0 && (m<=16)) && (n>0) && (n<=16))&&((a[m]!="x") && (a[n]!="x")))&&(((n>m) && (n-m==1) && (m%4!=0))||((n>m) && (n-m==4))||((m>n) && (m-n==1) && (n%4!=0))||((m>n) && (m-n==4))))
                {
                    a[m]="x";
                    a[n]="x";
                    cout<<a[1]<<"\t"<<a[2]<<"\t"<<a[3]<<"\t"<<a[4]<<endl<<a[5]<<"\t"<<a[6]<<"\t"<<a[7]<<"\t"<<a[8]<<endl<<a[9]<<"\t"<<a[10]<<"\t"<<a[11]<<"\t"<<a[12]<<endl<<a[13]<<"\t"<<a[14]<<"\t"<<a[15]<<"\t"<<a[16]<<endl;
                    break;
                }
            }
            int cnt=0;
            for(int i=1;i<17;i++){
                 if(( ((i==16 )||( a[i+1]=="x")) && (i>=13 || (a[i+4]=="x"))) ||( a[i]=="x"))
                    cnt++;
            }
            if (cnt==16){
                if(playturn==1)
                    cout<<" player1 is the winner ^0^ \n";

                else
                    cout<<" player2 is the winner ^0^ \n";
                break;
            }
            if (playturn==1)
                playturn=2;
            else
                playturn=1;
    }





    return 0;
}
