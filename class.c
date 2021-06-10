
// #include <stdio.h>
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// }
// int main()
// {
//     int n, i = 0;
//     printf("Enter a number upto which you want fibonacci series: ");
//     scanf("%d", &n);
//     printf("The series upto %d is : ", n, fib(i));
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", fib(i));
//     }
//     return 0;
// }

// #include <stdio.h>
// void number(int n)
// {
//     if (n)
//     {
//         number(n - 1);
//     }

//     printf("%d ", n);
// }
// int main()

// {
//     int n = 50;
//     printf("natural nos are:");
//     number(n);
//     return 0;
// }

// #include <stdio.h>
// int count = 0;
// int counter(int n)
// {
//     if (n != 0)
//     {
//         n = n / 10;
//         count++;
//         counter(n);
//     }

//     return count;
// }
// int main()
// {
//     int n;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     counter(n);
//     printf("The number of digits are: %d ", count);
//     return 0;
// }

// #include <stdio.h>
// int gdc(int n1, int n2)
// {
//     if (n2 != 0)
//     {
//         return n1 % n2;
//     }
//     else
//     {
//         return n1;
//     }
//     gdc(n1,n2);
// }
// int main()
// {
//     int n1, n2;
//     printf("Enter two numbers:");
//     scanf("%d %d", &n1, &n2);
//     printf("%d",gdc(n1,n2));

//     return 0;
// }

#include <stdio.h>
void towerofHanoi(int n, char src, char des, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerofHanoi(n - 1, src, helper, des);
    printf("Move from %c to %c\n", src, des);  
    towerofHanoi(n - 1, helper, des, src);
}
int main()
{
    towerofHanoi(3, 'A', 'C', 'B');
    return 0;
}