 #include<iostream>
using namespace std;
int hms_to_sec(int hour,int min, int sec);
int main()
{
int hour,min,sec;
          ///////////////////////////////////////Result///////////////////////////////////////////////////
int result =hms_to_sec(hour,min,sec);
cout << "result = " << result;
system("pause");
return 0;
}
int hms_to_sec(int hour,int min, int sec)
{
int seconds =0;
cout << "enter hours" << endl;
cin >> hour;
cout << " enter minutes" << endl;
cin >> min;
cout << " enter seconds" << endl;
cin >> sec;
seconds = (hour*60*60)+(min*60)+sec;
return seconds;
}
