#include <iostream>
#include <conio.h> //untuk mengaktifkan perintah gotoxy(x,y) dan clrscr()
#include <stdio.h>

#define Nmaks 10
typedef int matrik[Nmaks] [Nmaks] ;
using namespace std;
int main()
{


    int n,i,j;
    matrik A,B,C;
    n=3;
    cout<<"Program Penjumlahan Matrik A 2x2 dan B 3X3\n";

    cout<<"\n";
    cout<< "masukkan entri-entri matriks A \n";
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {

            printf("A[%d,%d]= ",i,j);
            cin>> A[i][j];
        }

    }
    clrscr ();

    cout<<"Masukkan entri-entri matriks B\n";
    cout<<"\n";
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            printf("b[%d,%d]= ",i,j);
            cin >> B[i][j];
        }

    }

    clrscr ();

    cout<<"\n";

//proses penjumlahan matrik C =  A + B
    for ( i= 1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            
        }
    }
    clrscr();
    cout<<"entri-entri matriks A,B, dan C \n";
        cout<<"\n";

//proses output matrik A
    gotoxy (1,5);
    cout<<"A = " ;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            gotoxy (2+4*j,2+2*i);
            cout<<A[i][j];
        }
    }
    cout << endl<<endl;
//proses output matrik B
    gotoxy(1,10);
    cout<<"B = " ;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            gotoxy (2+4*j,2+2*i+5);
            cout<<B[i][j];
           
        }

    }
    cout <<endl<<endl;
//proses output matrik C
    cout <<endl;
    gotoxy(1,20);
    cout<<"C = " ;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            gotoxy (2+4*j,3+3*i+11);
            cout<<A[i][j];
        }
    }
    gotoxy(18,20);
    cout<<"   +   " ;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            gotoxy (19+4*j,3+3*i+11);
            cout<<B[i][j];
        }
    }
    gotoxy(36,20);
    cout<<"  =  " ;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            gotoxy (37+4*j,3+3*i+11);
            cout<<C[i][j];
         }
     }
    
}