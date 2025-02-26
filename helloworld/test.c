#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    struct stu
    {
        int num;
        float score1;
        float score2;
        float score3;
    }s1 = { 0,0.0f,0.0f,0.0f };

scan:
    scanf("%d;%f,%f,%f", &s1.num, &s1.score1, &s1.score2, &s1.score3);
    if (s1.num > 20000000 || s1.num < 1)
    {
        printf("ÊäÈë´íÎó\n");
        goto scan;
    }
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", s1.num, s1.score1, s1.score2, s1.score3);
    return 0;
}