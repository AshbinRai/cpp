#include<iostream>
using namespace std;
class Baba // this is the parent class
{
	public:
	string babakoGadi;
	string bajeykoGadi;
	void display(string a)
	{
	babakoGadi=a;
bajeykoGadi=babakoGadi;
	cout<<"Mero baba ko gadi ko naaaaam "<<bajeykoGadi<<" ho";
    }
};
class babaKoChora:public Baba // creation of child class
{
	public:
	string bajeykoGadi;
	
};
     class Grandson:public babaKoChora
     {
    	public:
    	void see()
    	{
    		cout<<"Bajey ko gadi" <<bajeykoGadi;
		}
    	
	  };
int main()
{
	babaKoChora hero;
	string a;
	cout<<"Timro baba ko gadi ko nam k ho?";
	getline(cin,a);
	hero.display(a);
    return 0;
}
