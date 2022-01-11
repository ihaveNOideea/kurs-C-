#include<iostream>
#include<string>

using namespace std;

int main()
{
  string imie, nazwisko;
  int wiek;
    cout<<"Witaj, podaj swoje imie i nazwisko. \n";
    cin>>imie>> nazwisko;
    cout<<"Hej "<< imie << nazwisko<<".\n";
    cout<<"Ile masz lat?\n";
    cin>>wiek;
    cout<<"Dotej pory przezyles " << imie <<  wiek <<" lat.";


  return 0;
}
