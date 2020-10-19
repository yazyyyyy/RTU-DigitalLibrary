#include <stdio.h>

int len=0;

int bintodec(char binary[], int pos)

{

    int temp;

    if (pos == len)

      return (binary[pos] - '0');/* ASCII '0'-'0'=0 and '1'-'0'=1 */

    /* Left shift & Add current, recur for remaining digits*/

    temp=(binary[pos]-'0') << (len-pos);

    return (temp + bintodec(binary,pos+1));

}

 

 

int main()

{

    char bin[100];

    printf("Enter binary digits(0 & 1):");

    scanf("%s",bin);

    while(bin[len]!=NULL) len++;

    len=len-1; /* coming before NULL*/

    printf("Decimal equivalent = %d\n",bintodec(bin,0));

    return (0);

}
