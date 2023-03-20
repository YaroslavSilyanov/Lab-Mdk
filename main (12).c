/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Сильянов Ярослав Дмитриевич 
#include <stdio.h>
int main() 
{
    int studentnomer, student1, student2, student3; //сумма всех начислений студентов
    studentnomer=0;
    student1=0;
    student2=0;
    student3=0;
    
    int i, klstud; //счётчик и кол-во студентов
    i=1;
    
    int nom_schet; // номер счёта
    
    int stependia; // сумма стипендии 
    
    printf("Число поступлений степендии студентам:  ");
    scanf("%d", &klstud);
    
    while (i <= klstud)
    {
        printf("Номер счёта | Сумма стипендии\n"); 
        scanf("%d%5d", &nom_schet, &stependia);
        
        if (nom_schet == 1)
            student1 += stependia; //если номер счёта равен 1, то добавить сумму введённой стипендии
            
            
        else if (nom_schet == 2)
            student2 += stependia; //если номер счёта равен 2, то добавить сумму введённой стипендии
            
            
        else if (nom_schet == 3)
            student3 += stependia; //если номер счёта равен 3, то добавить сумму введённой стипендии
            
            
        else 
            studentnomer = nom_schet; // иначе ошбка номера счёта
            
        i += 1;
    }
    
  printf("Номер счёта ФИО Группа Сумма\n"); 
  printf("1. Старцев Илья Витальевич 21ИС-21 %d руб.\n", student1);
  printf("2. Гаврюшкин Максим Викторович 21ИС-21 %d руб.\n", student2);
  printf("3. Сильянов Ярослав Дмитриевич 21ИС-21 %d руб.\n", student3);
  printf("Всего %d рублей 00 коп.\n", student1+student2+student3 );
  printf("Ошибка - введён неверный номер счёта: %d\n", studentnomer);
  
  return 0;
}
