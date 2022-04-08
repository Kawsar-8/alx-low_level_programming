1 #include <stdio.h>
  2
  3 /**
  4  * main - Entry point
  5  *
  6  * Return: Always 0 (Success)
  7  */
  8
  9 int main(void)
 10 {
 11         int n1 = 48;
 12         int a = 0;
 13         int b;
 14         int com = 44;
 15
 16         while (a <= 99)
 17         {
 18                 b = a + 1;
 19                 while (b <= 99)
 20                 {
 21                         putchar((a / 10) + n1);
 22                         putchar((a % 10) + n1);
 23                         putchar(32);
 24                         putchar((b / 10) + n1);
 25                         putchar((b % 10) + n1);
 26                         if (a != 98 || b != 99)
 27                         {
 28                                 putchar(com);
 29                                 putchar(32);
 30                         }
 31                         b += 1;
 32                 }
 33                 a += 1;
 34         }
 35         putchar('\n');
 36         return (0);
 37 }
