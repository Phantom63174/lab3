## «Основи програмного керування процесами в Unix-подібних ОС»

### 2.1 Перегляд інформації про процес

![2 1 1(1)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/7407a2f9-6b59-4813-b27f-371c811a65db)
![2 1 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/e81f514f-fc54-42c7-bc4e-28d478dff33c)

Рис. 1 - фрагмент екрану з рiшення "2.1.1 Створити C-програму з назвою за шаблоном «ваше прізвище_process_info»,
наприклад, blazhko_process_info яка виводить на екран таку інформацію:
- ідентифікатор групи процесів, до якої належить процес;
- ідентифікатор процесу, що викликав цю функцію;
- ідентифікатор parent-процесу;
- ідентифікатор користувача процесу, який викликав цю функцію;
- ідентифікатор групи користувача процесу, який викликав цю функцію."

![2 1 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/8a9974c0-8938-48a2-8b03-00efd56cdcdc)

- паралельне виконнання

![2 1 2(1)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/e8dc1a7a-5e68-41e3-ac3e-9fa3a897c5bc)

использовал этот но может докопаться 
вот его лучше использовать
- конвеєрне виконання

Рис. 2 - фрагмент екрану з рiшення "2.1.2 Скомпілювати створену С-програму та запустити її дві копії у двох режимах за
прикладами з рисунку 4:
- паралельне виконання двох процесів;
- конвеєрне виконання двох процесів."

### 2.2 Створення процесу

![2 2 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/e352482a-6e1b-4593-b193-162f1991f31e)

Рис. 3  - фрагмент екрану з рiшення "2.2.1 Створити C-програму, яка породжує процес та замінює образ процесу на
команду у відповідності із варіантом з таблиці 3. Назва програми повинна співпадати з
назвою команди з таблиці 3, але з додатком у вигляді транслітерації вашого прізвища,
наприклад, touch_blazhko."

![2 2 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/1a47d01a-c2e0-4edb-8fc2-6225333404bf)

Рис. 4 - фрагмент екрану з рiшення "2.2.2 Скомпілювати програму та перевірити її роботу."

### 2.3 Обмін сигналами між процесами

![2 3 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/a8cedbbe-501c-46bb-a984-a23b348f519c)

Рис. 5 - фрагмент екрану з рiшення "2.3.1 Створити C-програму з назвою «ваше прізвище_get_signal», в якій процес
очікує отримання сигналу SIGUSR2 та виводить повідомлення типу Process of Students
Surname got signal після отримання сигналу, де замість слова Students Surname в
повідомленні повинно бути ваше прізвище в транслітерації."

![2 3 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/6167880c-e21e-4b8b-addb-7ec06010b836)

Рис. 6 - фрагмент екрану з рiшення "2.3.2 Скомпілювати програму та запустити її."

![2 3 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/5f3d49fc-9f4d-4d8f-ac2b-11cae6ccc637)

Рис. 7 - фрагмент екрану з рiшення "2.3.3 Використовуючи інший псевдотермінал, створити C-програму з назвою «ваше
прізвище_set_signal», яка надсилає сигнал SIGUSR2 процесу, запущеному в попередньому
пункті завдання."

![2 3 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/686158e3-9df7-4cc7-ae04-4adfb9e52e6f)

Рис. 8 - фрагмент екрану з рiшення "2.3.4 Скомпілювати другу створену С-програму та запустити її в іншому
псевдотерміналі, проаналізувавши повідомлення, які в першому псевдотерміналі виводить
перша програма.
Завершити процес, запущений в попередньому пункті завдання."

### 2.4 Створення процесу-сироти

![2 4 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/c8248b51-ae35-42bf-a9ef-73d8a914758b)

Рис. 9 - фрагмент екрану з рiшення "2.4.1 Створити C-програму з назвою «ваше прізвище_orphan», в якій parent-процес
несподівано завершується раніше child-процесу. Parent-процес повинен очікувати
завершення n+1 секунд.
Child-процес повинен в циклі (2*n+1) разів із затримкою в 1 секунду виводити
повідомлення, наприклад, «Parent of Students Surname», за шаблоном як в попередньому
завданні, і додатково виводити PPID parent-процесу.
Значення n – номер вашого варіанту."

![2 4 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/2f46fdb5-61a3-42c1-bee4-95e817469b74)
![2 4 2(1)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/929a7a31-9ed7-437c-910d-f3dfc140460e)

Рис. 10 - фрагмент екрану з рiшення "2.4.2 Скомпілювати програму та перевірити її роботу.
Переглянути вміст таблиці процесів зі станами процесів та зробити висновки."

### 2.5 Створення zombie-процесу

![2 5 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/a972e4cb-e47e-464b-a0b1-b443445ea56c)

Рис. 11 - фрагмент екрану з рiшення "2.5.1 Створити C-програму з назвою «ваше прізвище_zombie.c», в якій child-процес
несподівано завершується раніше parent-процесу, перетворюється на zombie-процес,
виводячи в результаті повідомлення, наприклад, «I am Zombie-process of Students Surname»,
за шаблоном як в попередньому завданні."

![2 5 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/9afbfad8-82cb-4956-bee6-717bbe167938)
![2 5 2(1)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/c88a833c-43bc-4d76-8beb-510180c7095e)

Рис. 12 - фрагмент екрану з рiшення "2.5.2 Скомпілювати програму та запустити її у фоновому режимі.
Переглянути вміст таблиці процесів зі станами процесів та зробити висновки."

### 2.6 Попередження створення zombie-процесу

![2 6 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/aa180950-cebc-4dd3-a0d9-6e2d066ba1b7)

Рис. 13 - фрагмент екрану з рiшення "2.6.1 Створити C-програму з назвою «ваше прізвище_zombie_stop.c», в якій child-
процес також як в попередньому завданні може перетворитися на zombie-процес, але ця
подія вже повинна контролюватися parent-процесом.
Child-процес повинен виводити повідомлення, наприклад, «Child of Students'
Surname is finished», за шаблоном як в попередньому завданні.
Parent-процес повинен очікувати (3*n) секунд.
Значення n – номер вашого варіанту."

![2 6 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/41dd04ac-dc3a-4534-b9a3-e08f9b830349)
![2 6 2(1)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/a8a3212b-7c19-4c9d-934d-ebe25ce19de5)

Рис. 14 - фрагмент екрану з рiшення "2.6.2 Скомпілювати програму та запустити її у фоновому режимі.
Переглянути вміст таблиці процесів зі станами процесів та зробити висновки."