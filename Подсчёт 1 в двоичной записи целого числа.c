#include <stdio.h>

//Вывод битов любого целого числа типа char
void Print_Bit(char a)
{
    for(int i = 7; i >= 0; --i)
    {
        if((a >> i) & 1)
            printf("%d", 1);
        else
            printf("%d", 0);
    }
    printf("\n");
}

//функция для подсчёта 1 в двоичной записи числа из множество Z
 void Count_Bit(int num)
 {
     int count = 0;
     
     for(int i = 0; i < sizeof(int) * 8; i++)
     {
         if(num & 1)
             count++;
         num = num >> 1;
     }
     
     printf("%d\n", count);
 }


int main()
{
    return 0;
}
//  -1 = 11 11 11 11 + 00 00 00 01 (1)  = 0
//  -2 = 11 11 11 10 + 00 00 00 10 (2)  = 0
// -45 = 00 10 11 01 + 11 01 00 11 (45) = 0
