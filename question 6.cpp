#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class batsman 
{
private:
int bcode;
char bname[20];
int innings, runs , not_out;
float batavg;
void calcavg()
{
    cout<<"the average runs made by batsman is:"<<runs/(innings-not_out);
    
   
}

protected:
public:
void read_data()
{
    cout<<"batsman code is:";
    cin>>bcode;
    cout<<"batsman name is:";
    cin>>bname;
    cout<<"innings played by batsman:";
    cin>>innings;
    cout<<"runs made by batsman:";
    cin>>runs;
    cout<<"matches in which batsman is not out:";
    cin>>not_out;
    calcavg();
}
void display_data()
{
    cout<<endl;
cout<<"display data::";


cout<<"the code of batsman is:";
cout<<bcode<<endl;
cout<<"the  name of batsman:";
cout<<bname<<endl;
cout<<"innings played by batsman:";
cout<<innings<<endl;
cout<<"runs made by batsman:";
cout<<runs<<endl;
cout<<"matches in which batsman is not out";
cout<<not_out<<endl;
}

};
int main()
{
    class batsman s51, s53, s38;
    s51.read_data();
    s51.display_data();
    s53.read_data();
    s53.display_data();
    s38.read_data();
    s38.display_data();
}