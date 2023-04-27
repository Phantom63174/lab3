## Основи операційного керування процесами в Unix-подібних ОС

### №1 Перегляд таблиці процесів:

![image](https://user-images.githubusercontent.com/127392217/234853407-0281d67f-ad51-4e57-ba05-18a38042bca6.jpg)

![image](https://user-images.githubusercontent.com/127392217/234853414-4bf2ff26-5943-46b5-86fc-09a541e52425.jpg)

Рис.1 Отримати ієрархію процесів у вигляді дерева процесів, враховуючи наступне.

![image](https://user-images.githubusercontent.com/127392217/234853757-4d95332e-36fa-4020-8b2a-9bf9272c22f6.jpg)

Рис.2 Отримати на екран назви запущених процесів ОС, враховуючи, що, ймовірно, вони можуть бути процесами-даймонами.

![image](https://user-images.githubusercontent.com/127392217/234853791-f9d421ae-5359-4a36-905a-84a62bd501e9.jpg)

Рис.3 Отримати таблицю процесів, враховуючи наступне.

![image](https://user-images.githubusercontent.com/127392217/234853817-8dd22df2-b83d-461a-b3a4-267523ad6641.jpg)

Рис.4 Отримати таблицю процесів, враховуючи наступне.

![image](https://user-images.githubusercontent.com/127392217/234853836-e635307e-bcf3-4604-b85d-142a3289a205.jpg)

Рис.5 Отримати таблицю процесів, враховуючи наступне.

![image](https://user-images.githubusercontent.com/127392217/234853861-fdb5cebf-4743-4e2b-81dd-c3e461c55b55.jpg)

Рис.6 Використовуючи команду TOP, отримати список процесів, відсортованих за % використання оперативної пам’яті.

### №2 Керування станами процесів:

![image](https://user-images.githubusercontent.com/127392217/234856028-e4dd3e81-602d-40de-b9a7-3283c64090d3.jpg)

Рис.7 У поточному (1-му) псевдотерміналі виконати команду ping localhost у фоновому режимі.

![image](https://user-images.githubusercontent.com/127392217/234856040-5ab55bd5-b97f-4d3f-929f-9decadf16090.jpg)

![image](https://user-images.githubusercontent.com/127392217/234856058-e8ea0d9b-e108-4705-bdb0-51b2acc8bf97.jpg)

![image](https://user-images.githubusercontent.com/127392217/234856088-dc02ad8a-b15b-4547-bf43-409493bf7b11.jpg)

![image)](https://user-images.githubusercontent.com/127392217/234856119-6e68a8f4-60fa-443c-87f7-bacaccc23cf3.jpg)

![image](https://user-images.githubusercontent.com/127392217/234856148-4c106ccd-48cf-4e83-b045-0d8350435cf1.jpg)

Рис.8 Запустити 2-й псевдотермінал роботи з Linux-сервером.

![image](https://user-images.githubusercontent.com/127392217/234856160-b686a3fd-807b-4640-8e1c-674f0ec36edb.jpg)

![image](https://user-images.githubusercontent.com/127392217/234856191-e9907159-abc9-408b-a904-4253dc64212e.jpg)

Рис.9 У 1-му псевдотерміналі запустити команду ping у режимі «background without hanging up».

![image](https://user-images.githubusercontent.com/127392217/234856249-094994c8-d7b8-42f4-9f45-d9571e87ace2.jpg)

Рис.10 Закрити перший псевдотермінал.

![image](https://user-images.githubusercontent.com/127392217/234856262-c3d4152c-ff73-45d4-a373-001b7ad55e55.jpg)

Рис.11 Завершити роботу процесу команди ping.

### №3 Керування пріоритетами виконання процесів:

![image](https://user-images.githubusercontent.com/127392217/234856309-e6b2363f-be31-46a1-90b6-df02104b3054.jpg)

![image)](https://user-images.githubusercontent.com/127392217/234856324-b702ca88-0ed1-4fc8-b746-274f20dab07a.jpg)

Рис.12 Створити скрипт-файл на мові програмування bash, який виконує операцію безкінечного циклічного складання за формулою: x = x + n, де початкове значення х =
номер вашого варіанту, значення n - номер вашого варіанту. Назва файлу збігається з
транслітерацією вашого прізвища із розширенням .sh, наприклад, blazhko.sh
Надати скрипт-файлу права на виконання та запустити його у фоновому режимі.

![image](https://user-images.githubusercontent.com/127392217/234856339-1f435d9c-e707-4d2a-91b7-8e7260e1b47b.jpg)

Рис.13 Переглянути таблицю процесів для процесу, пов'язаного із запущеним скрипт-файлом із урахуванням набору стовпчиків: PID, PPID, TTY, STAT, NI,% CPU, CMD.

![image](https://user-images.githubusercontent.com/127392217/234856356-af5f7cc0-227f-4295-8d0b-f9e49ea0091a.jpg)

Рис.14 Виконати команду призупинення процесу, запущеного у пункті 2.3.1.

![image](https://user-images.githubusercontent.com/127392217/234856382-6a5ee90e-6b44-4f28-92c3-eba17f4545a4.jpg)

Рис.15 Повторити попереднє завдання, запустивши команду ps із затримкою не менше 1 хвилини, наприклад, через командний ланцюжок sleep 1m ; ps ...

![image](https://user-images.githubusercontent.com/127392217/234856398-dc44e373-f683-41a7-a257-05d6841ac0b4.jpg)

Рис.16 Відновити роботу призупиненого процесу.

![image](https://user-images.githubusercontent.com/127392217/234856547-25c99b01-6ac7-4018-a9fa-a39ee84c7a18.jpg)

Рис.17 Cтворити два файли як символічні зв’язки на створений скрипт-файл із
іменами як імена поточного файлу з додаванням цифр 2 і 3, відповідно, наприклад:
blazhko2.sh, blazhko3.sh.

![image](https://user-images.githubusercontent.com/127392217/234856574-84dfc9b5-ae49-4fce-9dba-38dc26ce8692.jpg)

Рис.18 Створити скрипт-файл на мові програмування bash, який.
