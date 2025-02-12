#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
	setlocale(LC_ALL,"Rus");	//Функция для Dev-c++, отображает кириллицу.

//Задача на условия.
//Запросить у пользователя любое целое число. Написать программу которая проверит, 
//входит ли введённое число в диапазон (например, от 0 до 100, включительно) и 
//выведет на экран сообщение о результате проверки.

	const int min = 0;
	const int max = 100;
	int input;

	printf("Проверим число на соответствие диапазону.\n");
	printf("Введите число для проверки: ");
	scanf("%d", &input);
		printf("Введенное число '%d' %sпопадает в диапазон от %d до %d.\n", 
			input,
				((input >= min) && (input <= max))? "" : "не ", min, max);
				//Тернарный оператор подставляет строку с пробелом или "не"
				
//Задача на циклы.
//Запросить у пользователя десять чисел. Вывести на экран среднее арифметическое введённых чисел.

	int num;
	int i = 0;
	float mean = 0;
	
	printf("\nПосчитаем среднее арифметическое.");
	printf("\nСколько чисел нужно ввести? ");
	scanf("%d",&num);
	
		do {			
			printf("Введите число %d: ",i+1);
			scanf("%d", &input);				//Циклом вводим числа
				mean += input;				//и подсчитываем их сумму
				i++;
		} while (i < num);
		
	printf("Среднее арифметическое введенных чисел: %.2f\n", mean / i);
			//Выводим сумму, деленную на количество чисел

//Спец задание.
//Запросить у пользователя количество используемых для вывода строк. Написать программу,
//которая при помощи циклов и символа ^ будет рисовать на указанном количестве строк
//равнобедренный треугольник.
 
	int lines;
	int n;
	
	printf("\nНарисуем ёлочку.");
	printf("\nВведите число строк: ");
	scanf("%d", &lines);
	printf("\n");

		for (i = lines; i > 0; i--) {					//Общий цикл по строкам
			for (n = 1; n <= 2 * lines - i; n++){		//Цикл по столбцам
				printf("%s", (i > n)? " ": "^");	    //Заполняем знаками
				}
			printf("\n");
		}
		
return 0;
}
