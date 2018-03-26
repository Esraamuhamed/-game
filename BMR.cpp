
#include <iostream>

using namespace std;

int main()
{   cout<<"Welcome ya fit"<<endl;
double weight, height,age , BMR ;
int  nCholateBars;
string gender ;
cout<<endl<<"Write your weight in pound"<<endl;
cin>>weight;
cout<<"Write your height in inches"<<endl;
cin>>height;
cout<<"write your age in year"<<endl;
cin>>age;
cout<<"1-Male"<<endl<<"2-Female"<<endl<<"1 or 2 ???"<<endl;
cin>>gender;
if (gender=="1")
{BMR=66+(6.3*weight)+(12.9*height)-(6.8*age);
}
else if (gender=="2");
{
    BMR=655+(4.3*weight)+(4.7*height)-(4.7*age);

}
nCholateBars=BMR/230;
cout<<"The number of chocolate bars that should be consumed to maintain one's weight is "<<nCholateBars<<" Bars";
    return 0;
}
