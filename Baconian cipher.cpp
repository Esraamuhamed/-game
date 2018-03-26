// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: baconian cipher.cpp
// Last Modification Date: xx/3/2018
// Author1 and ID and Group: 20170044 G2
// Author2 and ID and Group: 20170048 G2
// Author3 and ID and Group: 20170051 G2
// Teaching Assistant: Eng. Menna youssif
// Purpose:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
    char A[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
    string U[27]= {"AAAAA","AAAAB","AAABA","AAABB","AABAA","AABAB","AABBA","AABBB","ABAAA","ABAAB","ABABA","ABABB","ABBAA","ABBAB","ABBBA","ABBBB","BAAAA","BAAAB","BAABA","BAABB","BABAA","BABAB","BABBA","BABBB","BBAAA","BBAAB"," "};
    string choiceNum;
    while (true)
        {
    cout<<"Choose what do you want to do today"<<endl<<"1-cipher "<<endl<<"2-decipher"<<endl<<"3-If you End what you want"<<endl;
    cin>>choiceNum;
    cin.ignore();
    string message, newMessage, message2;
    int i,k, j ;
    if (choiceNum=="1")
    {
        cout<<"Enter your message to cipher ya man-.-"<<endl;


            newMessage="";
            getline(cin,message);

            for(i=0 ; i<message.length() ; i++)

            {
                for (j=0 ; j<27 ; j++)
                {
                    if (message[i]==a[j]|| message[i]==A[j] )
                    {
                        newMessage=newMessage+U[j];
                    }

                }
            }
            cout<<newMessage<<endl;
        }


    if (choiceNum=="2")
    {
        cout<<"Enter your message to decipher ya man-.- :"<<endl;


            newMessage="";
            message2="";
            getline(cin,message);
            for(i=0 ; i<message.length() ; ++i)
            {
                if (message[i]=='a' || message[i]=='A')
                {
                    message[i]='A';
                }
                else if (message[i]=='b' || message[i]=='B')
                {
                    message[i]='B';
                }


            }

            for(k=0 ; k<message.length() ; ++k)
            {
                message2=message2+message[k];

                for (j=0 ; j<27 ; ++j)
                {

                    if (message2==U[j])
                    {

                        newMessage=newMessage+A[j];
                        message2="";
                    }
                }
            }


            cout<<newMessage<<endl;

 }
if (choiceNum=="3")
            {
                cout<<"End";
                break;
            }

              }



    return 0;
}
