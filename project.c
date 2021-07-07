#include <stdio.h> // подключаю библиотеку стандартного ввода & вывода

int main()
{ // функция main - это точка входа в программу
    printf("HelloWorld\nHi\n");

    int a = 50; // integer type - занимает в памяти 4 байта
    // переменная - это именованный контейнер, у каждого контейнера есть собственный адрес в ОП (оперативной памяти)
    // язык Си позволяет узнать этот адрес и работать с ним
    printf("%5d%%\n", a);

    printf("значение переменной а: %1d%%\n", a); // чтобы узнать адрес переменной нужно поставить перед ней знак амперсанд &
    printf("адрес переменной а: %p", &a);        // для вывода в консоль адреса используется специальный заполнитель %p

    printf("%5d%%", a); // общение с пользователем происходит через консоль, для этого используеся функция printf
    // данная функция описана в заголовке <stdio.h> => для этого мы и включили данный заголовок в нашу программу

    int number = -56; // int - integer (задаю тип данных), number - название переменной
    int true = 1;     // нет булевых значений, используется 1 - для обозначения истины
    int false = 0;    // и используется 0 - для обозначения лжи

    return 0; // программы, написанные на языке С, работают на одном уровне с ОС
    // поэтому программы должны сообщать ОС, что они отработали нормально
    // возвращаю код 0 (тип inreger) => тем самым сообщаю ОС, что команда была выполнена успешно
    // любой другой возвратный код сообщает системе, что программа завершена некорректно
    // и необходимо освобождать занятый ею ресурс

    // test new git version
}

// 1. ЭКРАНИРОВАННЫЕ ПОСЛЕДОВАТЕЛЬНОСТИ:
// \n - это абзац (новая строка)
// \t - это пробел (табуляция)
// \\ - двойной слэш (символ обратного слэша)
// \0 - символ конца строки

// 2. PLACEHOLDERS - ЗАПОЛНИТЕЛЬ начинается со знака % и обозначает тип вставляемой переменной (тип данных)
// %d - integer (decimal)
// %s - string
// %c - char (целые числа)
// %p - pointers (указатели)
// %f - float (числа с плавающей точкой)
// %lf - long float (double)
// %x
// %.2f - количество знаков после запятой
// %2d - общее количество знаков целого числа
// чтобы вставить символ % - нужно дважды написать процент %%
