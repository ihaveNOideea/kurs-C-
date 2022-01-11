#include<iostream>
#include<string>

using namespace std;

int main()
{
  string kamienie[5]={"kamienie małe", "kamienie średnie", "kamienie wielkie", "kamienie białe", "kamienie czarne"};
  double ceny[5]={3.66, 4.78, 2.54, 45.99, 85.56};
  int numerwdol_kamienie;

    cout<<"Witaj klienicie, o to nasza ofertra: kamienie małe, kamienie średnie, kamienie wielkie, kamienie białe, kamienie czarne. \n";
    cout<<"Wybierz artykuł od 1 do 5.\n";
    cin>> numer_kamieni;

  --numer_kamieni;
    
    cout<<"Wybrany artykuł to "<< kamienie[numer_kamieni]<<" i kosztuje "<< ceny[numer_kamieni];
  

  return 0;
}
