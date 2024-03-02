#include <stdio.h>

//memory block definition
char A[8] = {(char)0xcd,(char)0xcc,(char)0xcc,(char)0xcc,
             (char)0xcc,(char)0xcc,(char)0xf4,(char)0xbf};

int main()
{
    //pointers definition and assignment
    short int           *sint   =   A;
    unsigned short      *usint  =   A;
    char                *ct     =   A;
    unsigned char       *uct    =   A;
    int                 *cint   =   A;
    unsigned int        *ucint  =   A;
    float               *fint   =   A;
    double              *dint   =   A;
    //output pointers' values
    printf("*sint:\t%d\n",*sint);       //*sint = 0xcccd = -13107
    printf("*usint:\t%u\n",*usint);     //*usint = 0xcccd = 52429
    printf("*cint:\t%d\n",*cint);       //*cint = 0xcccccccd = -858993459
    printf("*ucint:\t%u\n",*ucint);     //*ucint = 0xcccccccd = 3435973857
    printf("*ct:\t%d\n",*ct);           //*ct = 0xcd = -51
    printf("*uct:\t%u\n",*uct);         //*uct = 0xcd = 205
    printf("*fint:\t%f\n",*fint);       //*fint = 0xcccccccd = -107374184
    printf("*dint:\t%lf\n",*dint);      //*dint = 0xbff4cccccccccccd = -1.3

    return 0;
}
