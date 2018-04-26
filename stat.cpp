#include <iostream>
#include <fstream>
#include <cstring>
#include<bits/stdc++.h>

using namespace std;
double myfile[1000];
void median ();
void formula () ;
void MSE () ;
void creating();
void loading ();
void displaying();


int size = 0;


int main()
{

    string choice;
    while(true)
    {
        cout << "1-enter a new data set\n";
        cout << "2-load a data set\n";
        cout << "3-display a data set\n";
        cout << "4-median\n";
        cout << "5-formula\n";
        cout << "6-MSE\n";
        cout<<"E-End\n";
        cout << "choose 1 or 2 or 3 or 4 or 5 or 6 or E: \n";

        cin >> choice;
        if(choice=="1")
        {
            creating();

        }


        if (choice=="2")
        {
            loading();

        }

        if (choice=="3")
        {
            displaying();

        }


        if (choice=="E")
        {
            cout<<"the end";
            break;
        }

        if (choice=="4"){
            median();
        }

        if (choice=="5")
        {
            formula ();
        }
        if (choice=="6"){
            MSE();
        }
    }
    return 0;
}
void creating ()
{
    char newfile[1000];
    int i=0;

    string choice;
    int x;
    cout << "enter file name: " << endl;
    cin >> newfile;
    ofstream myfile;
    myfile.open(newfile,ios::out);
    cout << "enter size of data: \n";
    cin >> x;
    cout << "enter data you want: " << endl;
    while(i < x)
    {
        float Data;
        cin >> Data;
        myfile << Data << endl;
        i++;
    }
    myfile.close();
}
void loading()
{
    char newfile[1000];
    double data1;
    cout<<"enter the name of the file  that  you  want to load: ";
    cin>>newfile;
    ifstream newfile2(newfile);

    int sz = 0;
    if (newfile2.is_open())

        while(newfile2>>data1)
        {
            myfile[size++] = data1 ;

        }

    cout<<" Data is loaded \n "<<endl;

    newfile2.close();
}

void displaying()
{
    bool flag = 0 ;
    for (int i = 0 ; i<size ; ++i)
    {
        if (flag)
            cout<<",";
            cout<<myfile[i];
        flag = 1 ;

    }
    cout<<endl ;
}
void formula ()
{
    double sum=0, sum2=0;
    int n = size * 0.5;
    double arrx[n], arry[n];
    double xMean, yMean, p , b = 0,a = 0 , l=0, m=0 , x, y;
    int counx = 0, couny = 0;
    for (int i=0 ; i<(size) ; ++i)
    {
        if (i % 2 == 0)
        {
            sum= sum+myfile[i];
            arrx[counx++] = myfile[i];
        }
        else
        {
            sum2=sum2+myfile[i];
            arry[couny++] = myfile[i];
        }
    }
    cout <<endl;
    xMean=sum/(n) ;
    yMean=sum2/(n) ;
    p=xMean*yMean;

    for (int k=0 ; k< (size * 0.5) ; ++k)
    {
        l = l+(arrx[k]*arry[k]);
        m=m+(pow(arrx[k],2));

    }
    x=l-((size*0.5)*p);
    y=m-((size*0.5)*(pow(xMean,2)));
     b=  x/y ;
    a= yMean-(b*xMean);
    cout<< "the formula is "<<"y= "<<b<<" x"<<" + "<<a<<endl;

}



void MSE ()
{

    double sum=0, sum2=0;
    int n = size * 0.5;
    double arrx[n], arry[n];
    double xMean, yMean, p , b = 0,a = 0 , l=0, m=0 , x, y;
    int counx = 0, couny = 0;
    for (int i=0 ; i<(size) ; ++i)
    {
        if (i % 2 == 0)
        {
            sum= sum+myfile[i];
            arrx[counx++] = myfile[i];
        }
        else
        {
            sum2=sum2+myfile[i];
            arry[couny++] = myfile[i];
        }
    }
    cout <<endl;
    xMean=sum/(n) ;
    yMean=sum2/(n) ;
    p=xMean*yMean;

    for (int k=0 ; k< (size * 0.5) ; ++k)
    {
        l = l+(arrx[k]*arry[k]);
        m=m+(pow(arrx[k],2));

    }
    x=l-((size*0.5)*p);
    y=m-((size*0.5)*(pow(xMean,2)));
     b=  x/y ;
    a= yMean-(b*xMean);



    double  newY, error, errorSum=0, errorMean;
    for (int j=0 ; j<(size*0.5) ; ++j)
    {
        newY=  b*arrx[j]+a ;
        error= arry[j]-newY;
        errorSum=errorSum+pow(error,2);
    }
    errorMean=errorSum/(0.5*size);
    cout<<"the mean square error="<<errorMean<<endl;
}

void median (){
int maxx = 0, pos = 0;
    int temp = 0;
    for ( int i = 0; i < size ; i++ ){
        maxx = myfile[0]; pos = 0;
        for ( int j = 1; j < size - i; j++ ){
            if ( myfile[j] > maxx ){ maxx = myfile[j]; pos = j; }
        }
        temp = myfile[ size-1-i ];
        myfile[size-1-i ] = maxx;
        myfile[ pos ] = temp;

    }                                               //sorting

int med;
double median;

if (size%2==0)
{
    med=size/2;
    median=(myfile[med-1]+myfile[med])/2 ;

}
else {
    med=(size+1)/2;
    median=myfile[med-1];

} cout<<"median is "<<median<<endl;



}



