#include <stdio.h>
int main()
{
    const float MILE_PER_KM = 0.621371;
    long long kms, miles;
    printf("Welcome to distance converter!\n");
    printf("Please enter the kms: ");
    scanf("%lld", &kms);
    miles = kms * MILE_PER_KM;
    printf("The number of miles are %lld.", miles);
    return 0;
}