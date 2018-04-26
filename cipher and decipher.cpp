#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    char answer0;
    cout<<"Ahlan Ya user Yhabibi  "<<endl;
    cout<<"Choose the programe you want"<<endl;

    cout<<"3- ROT13 Cipher \n"<<"4- Baconian Cipher \n"<<"5- Simple Substitution Cipher. \n"<<"7- Morse Code \n";
    cin>>answer0;

    while(answer0=='3')
        {
      char a[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
        char A[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
        char U[27]={'n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m',' '};

                cout<<"Choose what do you want to do today"<<endl<<"1-cipher "<<endl<<"2-decipher"<<endl<<"3-If you End what you want"<<endl;
    string choiceNum;
    cin>>choiceNum;
    cin.ignore();
    string message, newMessage, message2;
    int i,k, j ;
    if (choiceNum=="1")
    {
        cout<<"Enter your message/s to cipher ya man-.-"<<endl;

        while (true)
        {
            newMessage="";
            getline(cin,message);
            if (message=="3")
            {
                cout<<"End";
                break;
            }
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
    }

    if (choiceNum=="2")
    {
        cout<<"Enter your message/s to decipher ya man-.- :"<<endl;

        while (true)
        {
            newMessage="";
            message2="";

            getline(cin,message);

            if (message=="3")
            {
                cout<<"End";
                break;
            }



        for(i=0 ; i<message.length() ; i++)

            {
                for (j=0 ; j<27 ; j++)
                {
                    if (message[i]==U[j] )
                    {
                        newMessage=newMessage+a[j];
                    }

                }
            }
            cout<<newMessage<<endl;
        }
    }


    return 0;

        }
    while(answer0=='4')
{//assignment 2 :
    // mas2la  numbaer 4:

{
    char a[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
    char A[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
    string U[27]= {"AAAAA","AAAAB","AAABA","AAABB","AABAA","AABAB","AABBA","AABBB","ABAAA","ABAAB","ABABA","ABABB","ABBAA","ABBAB","ABBBA","ABBBB","BAAAA","BAAAB","BAABA","BAABB","BABAA","BABAB","BABBA","BABBB","BBAAA","BBAAB"," "};
    cout<<"Choose what do you want to do today"<<endl<<"1-cipher "<<endl<<"2-decipher"<<endl<<"3-If you End what you want"<<endl;
    string choiceNum;
    cin>>choiceNum;
    cin.ignore();
    string message, newMessage, message2;
    int i,k, j ;
    if (choiceNum=="1")
    {
        cout<<"Enter your message/s to cipher ya man-.-"<<endl;

        while (true)
        {
            newMessage="";
            getline(cin,message);
            if (message=="3")
            {
                cout<<"End";
                break;
            }
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
    }

    if (choiceNum=="2")
    {
        cout<<"Enter your message/s to decipher ya man-.- :"<<endl;

        while (true)
        {
            newMessage="";
            message2="";
            getline(cin,message);

            if (message=="3")
            {
                cout<<"End";
                break;
            }


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


    }


    return 0;
}}

    while(answer0=='5')
        {
             string message, newMessage, message2,A,C,key,l, n;
    l="";
    C="ABCDEFGHIJKLMNOPQRSTUVWXYZ ";

    int i,k, j ;
    cout<<"AHLAN YA HABEBY-.-"<<endl<<"The key??"<<endl;
    cin>>key;
    for (j=0 ; j<26 ; j++)
    {
        if ( C[j]!=key[0] && C[j]!=key[1] &&C[j]!=key[2] && C[j]!=key[3] && C[j]!=key[4] && C[j]!=key[5])
        {
            l=l+C[j];
        }
    }
    l=key+l;


    cout<<"Choose what do you want to do today"<<endl<<"1-cipher "<<endl<<"2-decipher"<<endl<<"3-If you End what you want"<<endl;
    string choiceNum;
    cin>>choiceNum;
    cin.ignore();
    if (choiceNum=="1")
    {
        cout<<"Enter your message/s to cipher ya man-.-"<<endl;
        while (true)
        {
            newMessage="";
            getline(cin,message);
            if (message=="3")
            {
                cout<<"End";
                break;
            }

            for(i=0 ; i<message.length() ; i++)
            {
                for (j=0 ; j<27 ; j++)
                {
                    if ( message[i]==C[j] )
                    {
                        newMessage=newMessage+l[j];
                    }
                }
            }
            cout<<newMessage<<endl;
        }
    }
    if (choiceNum=="2")
    {l=l+' ';
        cout<<"Enter your message/s to decipher ya man-.- :"<<endl;

        while (true)
        {
            newMessage="";
            message2="";

            getline(cin,message);

            if (message=="3")
            {
                cout<<"End";
                break;
            }

            for(i=0 ; i<message.length() ; i++)
            {
                for (j=0 ; j<27 ; j++)
                {
                    if (message[i]==l[j] )
                    {
                        newMessage=newMessage+C[j];
                    }
                }
            }
            cout<<newMessage<<endl;
        }
    }
    return 0;
        }


    while(answer0=='7')
        {

//assignment 2:
//mas2ala number 7;

{

    cout<<"Ahlan \n choose what do you want ??"<<endl<<"1-cipher "<<endl<<"2-decipher"<<endl<<"3-End "<<endl;
    string choiceNum;
    cin>>choiceNum;
    cin.ignore();
    string message, newMessage, message2;
    int i,k, j ;


    while (choiceNum=="1")
    {
        newMessage="";
        cout<<"Enter your message to cipher : "<<endl;


        getline(cin,message);
        if (message=="3")
            {
                cout<<"End";
                break;
            }

        for(i=0 ; i<message.length() ; i++)

        {
            for (j=0 ; j<27 ; j++)
            {
                char a[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
                char A[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
                string U[27]= {" .-"," -..."," -.-."," -.."," ."," ..-."," --."," ...."," .."," .---"," -.-"," .-.."," --"," -."," ---"," .--."," --.-"," .-."," ..."," -"," ..-"," ...-"," .--"," -..-"," -.--"," --..","  "};
                if (message[i]==a[j]|| message[i]==A[j] )
                {
                    newMessage=newMessage+U[j];
                }

            }
        }
        cout<<newMessage<<endl;
}
    while (choiceNum=="2")
    {


        cout<<"Enter your message/s to decipher :"<<endl;

        string U[28]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","  "," "};
        char A[28]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','  ',' '};

        getline(cin,message);
        if (message=="3")
            {
                cout<<"End";
                break;
            }
        string t="";


        for(k=0 ; k<message.length() ; ++k)
        {

if(message[k]==' ')
            {
                for(int j=0; j<28; ++j)
                {
                    if(t==U[j])
                    {
                        cout<<A[j];
                        t="";
                    }
                }

            }
            if(message[k]!=' ')
            {
                t=t+message[k];
            }


        }


        for(int j=0; j<28; ++j)
        {
            if(t==U[j])
            {
                cout<<A[j];

                t="";
            }
        }

        cout<<endl;
return 0 ;
    }
}




return 0;
}}


