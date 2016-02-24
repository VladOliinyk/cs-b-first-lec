#include <stdio.h>
void classicOutput();
void classicInput();
void sqrX();


#include <iostream>
void streamOutput();
void streamInput();

using namespace std;
int main()
{
    //classicOutput();
    //sqrX();
    //classicInput();

    //streamOutput();
    //streamInput();
    return 0;
}

void classicOutput()
{
    //preview
    printf("Hello, world!");

    double pi = 3.1415926;
    printf("Pi = [%5.2lf]", pi);

    //control characters
    printf("\nNext line");
    printf("\n\tTab & next line");
    printf("\n\vVerticat tab");

    printf("\nSome text");
    printf("\bT");
    printf("\b\bXT");
    //printf("\b\b\bEXT");
    //printf("\b\b\b\bTEXT");

    printf("\nSome another text");
    printf("\rHA! ");

    printf("\nHmm..\a");

    //formats
    int x = 15;
    printf("\nx = %d //dec", x);
    printf("\nx = %x //hex", x); //trouble with tabulation (!) %2x
    printf("\nx = %o //oct", x);

    float big_pi = 314159.26;
    printf("\nPi = %f", big_pi);
    printf("\nPi = %e", big_pi);

    char a = 'a';
    printf("\n%c", a);
}

#include <math.h>
void sqrX()
{
    double x = 0;
    double y = 0;

    for (x = 0; x < 10; x+=0.5) {
        y = x*x;
        printf("|  x = %lf  |  y = %lf  | \n", x, y);
        //looks pretty terrible
    }
}

void classicInput()
{
    char name[32];
    printf(" Hey, what is your name?\n  > ");
    scanf("%s", name);
    printf(" Hi, %s! Welcome!\n", name);

    printf(" Tell me about your age and iq, please!\n  > ");
    int age = 0;
    int iq = 0;
    scanf("%d%d", &age, &iq);
    printf(" Wow! You are sooo young my %d-years old friend, but already very intelligent!\n", age);
    printf(" %d iq point is great!\n", iq);
}

#include <iomanip>
void streamOutput()
{
    //preview
    cout << "Hello, world!";

    double pi = 3.1415926;
    cout << pi << endl;

    //controls
    cout << "Next line" << endl << "now";
    cout << "\n\t Tab & next character is working too";

    //formats
    int x = 15;
    cout << endl << "x = " << dec << x;
    cout << endl << "x = " << hex << setw(2) << x;    //trouble with tabulation (!) setw(2)
    cout << endl << "x = " << oct << x;

    char a = 'a';
    cout << endl << a;
}

void streamInput()
{
    char name[32];
    cout << " Hey, what is your name?" << endl << " > ";
    cin >> name;
    cout << " Hi, " << name << " Welcome!" << endl;

    cout << " Tell me about your age and iq, please!" << endl << " > ";
    int age = 0;
    int iq = 0;
    cin >> age >> iq;
    cout << " Wow! You are sooo young my " << age << "-years old friend, but already very intelligent!" << endl;
    cout << " " << iq << " iq point is great!" << endl;
}
