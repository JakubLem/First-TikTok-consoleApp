#include<iostream>
#include<cstdlib>
using namespace std;


int Czek(int T[8],int gracz)
{
  if(T[0]==gracz && T[1]==gracz && T[2]==gracz) return 1;
  if(T[3]==gracz && T[4]==gracz && T[5]==gracz) return 1;
  if(T[6]==gracz && T[7]==gracz && T[8]==gracz) return 1;
  if(T[0]==gracz && T[3]==gracz && T[6]==gracz) return 1;
  if(T[1]==gracz && T[4]==gracz && T[7]==gracz) return 1;
  if(T[2]==gracz && T[5]==gracz && T[8]==gracz) return 1;
  if(T[0]==gracz && T[4]==gracz && T[8]==gracz) return 1;
  if(T[2]==gracz && T[4]==gracz && T[6]==gracz) return 1;

  return 0;
}

void show(int T[9],int gracz)
{
  system( "cls" );
  int licznik = 0,pole;
  //wyswietlanie
  cout<<endl<<"  ----- ----- -----  "<<endl;

  for(int i = 1 ; i<=3 ; i++)
  {
    cout<<" | ";
    for(int a = 1 ; a<=3 ; a++)
    {
      if(T[licznik]==3)
      {
        cout<<"  ";
      }
      else
      {
        if(T[licznik]==1)
        {
          cout<<" X";
        }
        else
        {
          cout<<" O";
        }
      }
      cout<<"  | ";
      licznik++;
    }
    cout<<endl<<"  ----- ----- -----  "<<endl;
  }
  cout<<endl;
  cout<<"Teraz jest kolej gracza ";
  if(gracz==1)
  {
    cout<<"X";
  }
  else
  {
    cout<<"O";
  }
  cout<<endl<<"Wybierz pole: ";

  while(true)
  {
    cin>>pole;
    if(T[pole-1]==3)
    {
      break;
    }
    cout<<endl<<"To pole jest zajete!! Wybierz inne pole: ";
  }
  T[pole-1]=gracz;



}



int main()
{
  while(true)
  {
  //tworzenie tablicy
  int T[9],koniecgry;
  for(int i = 0 ; i<=8 ; i++)
  {
    T[i]=3;
  }



  int gracz;
  while(true)
  {
    //zamiana gracza co rundę
    if(gracz==1)
    {
      gracz=0;
    }
    else
    {
      gracz=1;
    }
    //procedura ukazująca planszę
    show(T,gracz);
    //funkcja sprawdzająca czy ktoś wygrał
    if(Czek(T,gracz)==1)
    {
      break;
    }
  }
  //wypisanie ostatecznej planszy i wygranego
  system( "cls" );
  int licznik = 0,pole;
  //wyswietlanie
  cout<<endl<<"  ----- ----- -----  "<<endl;

  for(int i = 1 ; i<=3 ; i++)
  {
    cout<<" | ";
    for(int a = 1 ; a<=3 ; a++)
    {
      if(T[licznik]==3)
      {
        cout<<"  ";
      }
      else
      {
        if(T[licznik]==1)
        {
          cout<<" X";

        }
        else
        {
          cout<<" O";

        }
      }
      cout<<"  | ";
      licznik++;
    }
    cout<<endl<<"  ----- ----- -----  "<<endl;
  }
  cout<<endl;

  cout<<endl<<"Koniec gry!!!    "<<" Wygral gracz ";
  if(gracz==1)
  {
    cout<<"X!!!"<<endl;
  }
  else
  {
    cout<<"O!!!"<<endl;
  }
  //zapytanie czy ktoś chce jeszcze grać

  cout<<endl<<"Wcisnij dowolny numer aby zagrac kolejny raz, aby zakonczyc kliknij zero"<<endl<<endl;

  cin>>koniecgry;
  if(koniecgry==0)
  {

    break;

  }
}
cout<<"--------------------------------------------";
cout<<endl<<"Dziekujemy za gre!!"<<endl<<endl<<endl<<endl;


  return 0;
}

