#include <stdio.h>
#include <math.h>
main()
{
    int num,n,rem, i = 1;
    long binarynum = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    n=num;
    while (n!=0)
    {
        rem = n%2;
        n /= 2;
        binarynum += rem*i;
        i *= 10;
    }
    printf("%d in decimal = %ld in binary", num,binarynum );
}
