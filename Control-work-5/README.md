## Задание: 
![image](https://github.com/Phantom63174/lab3/assets/127392217/a25e3ac9-a905-4e10-905a-2eabd53c114b)

## Ответ:
Завдання 1 Створити історію квазіпаралельного успішного виконання транзакцій для
протоколу 2-го ступеня блокування.
Описати таблицю блокування транзакцій до моменту першої фіксації змін однієї з
транзакцій у вигляді масиву на мові програмування С.
Завдання 2 Для створеної історії з попереднього завдання визначити наявність
Deadlock-стану транзакції, створивши граф очікування транзакцій, та зробити відповідний
висновок. Представити граф у вигляді масиву на мові програмування С.

H2(T1,T2,T3) = S1[K] R1[K] S2[M] R2[M] X3[K]-wait X1[K]-wait S2[B] R2[B] S3[B] R3[B] X2[M]-wait X3[K]-wait

char* lock_table[][3] = {
{ "B", "S2,S3", "" },
{ "К", "S1", "X1,X3" },
{ "М", "S2", "X2" }};

int wait[][3] = {{3, 1}, {1, 3}, {2, 2}};
Цикл знайдено, тому Deadlock-стан існує
