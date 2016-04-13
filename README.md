# appDev1
lab #1 for  school subj "AppDev" written on C++

task steps:


Задание 1.

Написать функцию определения что данный символ (типа char) присутствует в массиве delimeters[]={‘ ’,’\0’}. Прототип функции: 

int isDelimeter(char ch); 

 Функция должна поставлять значение типа int : 1-если символ есть в массиве, 0-если символа нет в массиве.

Задание 2.

Написать функцию ввода строки с консоли в заданный массив. Конец строки определяется символом ‘\n’. Предполагается, что массив уже определен в программе. Функции вида get* использовать нельзя. Адрес массива передается параметром.   Прототип функции: 

int fromConsole(char[] line); 

 Функция должна поставлять значение типа int – длина прочитанной строки. Предусмотреть ситуацию, когда вводимая строка длиннее массива символов. Получаемая строка должна быть терминирована нулевым символом. Все возможные ошибки должны обрабатываться программно.

Задание 3. 

Написать функцию, которая подсчитывает число слов в строке символов. Слова определяются массивом символов-разделителей. Строка передается параметром и терминирована нулем.
Прототип функции: 

int countWords(char[] line); 

 Функция должна поставлять значение типа int – количество слов в строке. Предусмотреть ситуацию, когда строка не содержит символов, отличных от разделителей. Все возможные ошибки должны обрабатываться программно.

Задание 4. 

Написать функцию, которая читает i-ю строку файла. Указатель на файл передается параметром данной функции. Файл открыт для чтения. Массив для строки также передается параметром. Прочитанная строка должна быть терминирована нулем. Функция возвращает количество прочитанных символов.
Прототип функции: 

int readFromFile(FILE* file, char[] line, int number); 

 Функция должна поставлять значение типа int – количество прочитанных символов. Предусмотреть ситуацию, когда строка не содержит символов, отличных от перевода строки. Все возможные ошибки должны обрабатываться программно.


Задание 5. 

Написать функцию, которая подсчитывает число слов в файле. Слова определяются массивом символов-разделителей. Указатель на файл передается параметром данной функции. Файл открыт для чтения.
Прототип функции: 

int countFileWords(FILE * file); 

 Функция должна поставлять значение типа int – количество слов в файле. Предусмотреть ситуацию, когда файл не содержит символов, отличных от разделителей. Все возможные ошибки должны обрабатываться программно.

Задание 6. 

Написать функцию, которая выводит на консоль содержимое файла. Указатель на файл передается параметром. Файл открыт для чтения. Прототип функции: 

int toConsole(FILE * file); 

 Функция должна поставлять значение типа int – количество слов в файле. Предусмотреть ситуацию, когда файл не содержит символов, отличных от разделителей. Все возможные ошибки должны обрабатываться программно.


Задание 7.

Написать функцию, которая записывает в файл текст, который вводится с консоли. Ввод текста завершается фразой «Конец текста». Указатель на файл передается параметром. Файл открыт для записи. Прототип функции: 

Int fromConsoleToFile(FILE * file); 

 Функция должна поставлять значение типа int – количество слов в записанном файле. Слова определяются массивом разделителей. Предусмотреть ситуацию, когда ввод не содержит символов, отличных от разделителей. Все возможные ошибки должны обрабатываться программно.

Задание 8.

Написать функцию, которая использует семафор <sys/ipc.h>, <sys/sem.h>, <sys/shm.h>) для блокировки доступа к сетевому файлу. Имя файла передается в виде строки с сетевым именем.  При удачном срабатывании на консоли выводится текст «Файл … блокирован». В случае неудачи выводится текст «Блокировка файла … не удалась». Для блокированного файла должен быть возможен ввод текста с консоли. Ввод текста завершается фразой «Конец текста». Указатель на файл передается параметром. Прототип функции: 

Int blockNetFile(char * fileName); 

 Функция должна поставлять значение типа int – количество слов в записанном файле. Слова определяются массивом разделителей. Предусмотреть ситуацию, когда ввод не содержит символов, отличных от разделителей. Все возможные ошибки должны обрабатываться программно.
