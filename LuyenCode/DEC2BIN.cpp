#include <stdio.h>
#include <math.h>

long long Dec2Bin(int decimalNumber) // Ctrl H => find & replace
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int main()
{
    int decimalNumber;
    printf("\nNhap so thap phan: ");
    scanf("%d", &decimalNumber);
    printf("Bin = %d", Dec2Bin(decimalNumber));
}
