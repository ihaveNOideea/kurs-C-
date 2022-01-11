#include<iostream>
#include<string>

using namespace std;

int main()
{
  int banany1=15, banany2=34, banany3=853;
  int *wsk_banany1=&banany1, *wsk_banany2=&banany2, *wsk_banany3=&banany3;

    cout<<"Banany1 + banany2="<< *wsk_banany1+ *wsk_banany2<< endl;
    cout<<"Banany3 - banany2="<< *wsk_banany3- *wsk_banany2<< endl;
    cout<<"Banany3 * banany1="<< *wsk_banany3**wsk_banany1;

  return 0;
}
