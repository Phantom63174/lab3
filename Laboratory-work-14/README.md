### Основи керування віртуальними ОС

## 2.1 Створення віртуальної машини через графічний інтерфейс

![2 1 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/94f59696-2527-4d31-962c-9582f3fe320a)

Рис.1-2.1.1 Встановити програмне забезпечення Oracle VM Virtual Box

![2 1 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/a64f7a21-9592-4c07-87f4-a1c3afb82bfc)

Рис.2-2.1.2 Отримати з інтернету ISO-образ для 32-бітної ОС Server Linux Ubuntu 14.04.6.

![2 1 3 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/ce313f77-d902-4442-8a92-56fee15f5ca3)
![2 1 3 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/89921694-4554-4e28-8436-23283586bbbb)
![2 1 3 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/ace694f8-edeb-4e7b-8aff-315623126045)
![2 1 3 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/64addcad-9625-4f1a-ac93-8ff0baeaacb2)

Рис.3-2.1.3 Створити віртуальну машину, використовуючи графічний інтерфейс та
враховуючи наступні значення параметрів:
 назва = «Linux of Surname», де Surname – ваше прізвище транслітерацією, наприклад
«Linux of Blazhko»;
 файл ISO-образу = ubuntu-14.04.6-server-i386.iso;
 розмір оперативної пам’яті (Мб) = 10 * group + var, де group – номер вашої групи,
var – номер вашого варіанту, наприклад, 10 * 221 + 5 = 2215 Мб;
 кількість ядер процесору = 1;
 розмір жорсткого диску (Мб) = 40 * group, наприклад, 40 * 221 = 8840 Мб = 8,84 Гб;
 правило Port Forwarding на першу мережеву карту, яке буде перенаправляти
мережеві пакети для з’єднання через SSH-протокол із guest-ОС (IP-address=10.0.2.15, SSH-
port=22) на IP-адресу=127.0.0.1 з використанням SSH-port=1234.

![2 1 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/8ed7b0b3-8ee2-4372-8043-f08234b17d94)

Рис.4-2.1.4 Запустити віртуальну машину, створену у пункті 2.1.3, та виконати інсталяцію
віртуальної ОС, враховуючи параметри:
 hostname = os-surname, наприклад, os-blazhko;
 user account = surname, наприклад, blazhko;
 time zone = Kiev;
 Software = OpenSSH server;

![2 1 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/3d268d53-0b16-46e6-b11c-70de22b6cdae)

Рис.5-2.1.5 Після інсталяції та перезапуску віртуальної машини виконати вхід до віртуальної
ОС, використовуючи створений обліковий запис.

![2 1 6](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/3a832cb2-713e-4265-9651-5a72e0071a72)

Рис.6-2.1.6 Повторити вхід до віртуальної машини через SSH-протокол.

## 2.2 Створення віртуальної машини через інтерфейс командного рядку

![2 2 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/4d847b50-bbc6-4d01-b2e3-11116cfdc211)
![2 2 1(2)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/914779a1-71c9-4f4f-8546-a2678cea1859)

Рис.7-2.2.1 Створити віртуальну машину, використовуючи інтерфейс командного рядку та
враховуючи наступні значення параметрів:
 назва = «Linux of Surname 2», де Surname – ваше прізвище транслітерацією,
наприклад «Linux of Blazhko»;
 файл ISO-образу = ubuntu-14.04.6-server-i386.iso;
 розмір оперативної пам’яті (Мб) = 10 * group + var, де group – номер вашої групи,
var – номер вашого варіанту, наприклад, 10 * 221 + 5 = 2215 Мб;
 кількість ядер процесору = 1;
 розмір оперативної пам’яті графічної карти (Мб) = 100 + group2, останні дві цифри
номеру групи, наприклад, 100 + 21 = 121 Мб;
 перша мережева карта з конфігурацією NAT;
 правило Port Forwarding на першу мережеву карту, яке буде перенаправляти
мережеві пакети для з’єднання через SSH-протокол із guest-ОС (IP-address=10.0.2.15, SSH-
port=22) на IP-адресу=127.0.0.1 з використанням SSH-port=1234;
 контролер IntelAHCI з інтерфейсом sata-типу за назвою SurnameSATA, Surname –
ваше прізвище транслітерацією, наприклад «BlazhkoSATA»;
 контролер PIIX4 з інтерфейсом ide-типу за назвою SurnameIDE, де Surname – ваше
прізвище транслітерацією, наприклад «BlazhkoIDE»;
 віртуальне сховище даних, розміщене у файлі з назвою DiskSurname.vdi, наприклад,
DiskBlazhko.vdi, та розміром (Мб) = 40 * group, наприклад, 40 * 221 = 8840 Мб;
 ISO-файл ubuntu-14.04.6-server-i386.iso з інсталяцією ОС Linux

![2 2 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/da1a85da-a95f-46a1-aa63-36685700ba7b)

Рис.8-2.2.2 Запустити віртуальну машину, створену у пункті 2.2.1, використовуючи інтерфейс
командного рядку.

![2 2 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/b62ccd47-d302-464a-8993-107bcdc2de78)

Рис.9-2.2.3 Перебуваючи на першому екрані процесу інсталяції віртуальної ОС, призупинити
роботу віртуальної машини.

![2 2 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/d1e61a70-41b2-4a1a-8b6e-b4a585174ca3)

Рис.10-2.2.4 Повторно запустити призупинену віртуальну машину, створену у пункті 2.2.1.

![2 2 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/8f21f23d-4f76-4041-b7e7-9cd6fa163852)

Рис.11-2.2.5 Зупинити віртуальну машину, створену у пункті 2.2.1.

![2 2 6](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/4e839674-401f-45e0-a3b8-370f6714a065)

Рис.12-2.2.6 Зняти з реєстрації віртуальну машину та видалити всі пов’язані з нею файли.

![2 2 7](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/cd6830a0-eb16-420d-bd0a-fab96df48930)

Рис.13-2.2.7 Зберегти всі команди керування віртуальною машиною, які було виконано у
попередніх пунктах, у файлі CreateVMSurname.sh, де Surname – ваше прізвище
транслітерацією, наприклад «CreateVMBlazhko.sh»;

### 3 Створення групи користувача та облікового запису користувача ОС Linux

![2 3 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/d5d0adab-568e-4853-ac18-6ad9a73fd311)

2.3.1 Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду.

![2 3 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/aae5be6a-bc06-43a9-9e3c-009d365225f1)

2.3.2 Створити групу користувача, назва якої співпадає з назвою вашої студентської групи транслітерацією, наприклад, AI211;

![2 3 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/f07dd9b5-dc68-4c3a-a85d-a39104b4eb46)

2.3.3 З використанням не інтерактивної команди створити обліковий запис користувача з урахуванням того, що:
- ім'я користувача співпадає з об’єднаними вашим прізвищем та іменем транслітерацією, наприклад, blazhko_oleksandr;
- каталог користувача співпадає з вашим ім’ям;
- шлях до оболонки командного рядка = /bin/bash
- користувач входить до раніше створеної групи.

![2 3 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/d132eb16-9df8-4a7a-9ed9-15205100db74)

2.3.4 В окремому псевдотерміналі увійти з’єднатися з віртуальною машиною під іменем створеного користувача. Вийти із псевдотерміналу.

![2 3 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/e2ae6ea4-d304-43be-8c8a-a24f42e4611e)

2.3.5 Видалити створений обліковий запис користувача.

![2 3 6](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/9e504545-cdcd-4126-95a7-a4e8f8270d04)

2.3.6 Видалити створену групу.

### Встановлення СКБД PostgrеSQL та налаштування роботи

![2 4 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/0ba3433f-3076-4783-88a2-bb38deec04e5)

2.4.1 Використовуючи команду керування програмними пакунками, наприклад, apt, встановити програмний пакунок СКБД PostgrеSQL

![2 4 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/9c00c569-a3e7-4bfa-896a-0bbd51b2b1f2)

2.4.2 Від імені користувача postgres створити БД Surname, де Surname – ваше прізвище транслітерацією.

![2 4 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/89f4f2f4-3da2-4ad2-9309-7d22434a4277)

2.4.3 Від імені користувача postgres створити користувача СКБД з іменем Surname, де Surname – ваше прізвище транслітерацією.

![Снимок экрана 2023-06-09 163527](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/19a15636-4e2a-4b12-ad14-bb24fe24d9e2)

2.4.4 З’єднатися з СКБД PostgrеSQL, використовуючи створеного користувача та БД.

![2 4 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/bf3c8d87-b733-4164-995e-b80f30065c7d)

2.4.5 Від імені користувача postgres зупинити сервер СКБД.

![2 4 6](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/2b8e3881-e8d6-4256-a613-6bfc397c94e4)

2.4.6 Видалити програмний пакунок СКБД PostgrеSQL.

### 5 Встановлення останньої верcії СКБД PostgreSQL із сирцевих кодів

![2 5 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/789aa8e9-8000-463e-a169-e472f25104da)

2.5.1 Встановити програмні пакунки, від яких залежить побудова СКБД PostgreSQL версії 15.3 із сирцевих кодів

![2 5 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/ac2e81d3-c9a8-4ed3-8557-35e986006946)

2.5.2 Виконати процес побудови СКБД PostgreSQL версії 15.3 із сирцевих кодів та виконати інсталяцію програм серверу.

![2 5 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/8e1e9700-bf1a-4a04-88b5-98c21294cfcf)

2.5.3 Запустити сервер СКБД PostgreSQL версії 15.3.

![2 5 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/47afc6e8-672b-4279-9c28-2765b834b946)

2.5.4 Перевірити з’єднання програми-клієнта із сервером СКБД PostgreSQL, використовуючи параметри зазамовчуванням.

![2 5 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/14843cd9-7f7f-46f0-8d79-2d5542f8aed8)

2.5.5 Зупинити сервер СКБД PostgreSQL.

### 6 Керування обмеженням використання ресурсів ОС

![2 6 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/9ba3bf3c-b11b-4b29-a43d-4f91e43adf1a)

2.6.1 Встановити з’єднання із віртуальною машиною, яка створена у розділі 2.1., через SSH-команду від імені користовувача, створеного під час інсталяції віртуальної ОС.

![2 6 2(3)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/e33066ba-5e04-49c9-a7e6-62d9e3907f43)
![2 6 2(4)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/41918f50-a551-4b72-9dbd-5bcdfb6edd16)
![2 6 2(5)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/ec293b20-995e-4054-b90a-3a7290b9d6e6)
![2 6 2(1)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/e6211e2f-9d20-4ac9-983f-2ab4a7eb107c)
![2 6 2(2)](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/b9eea2d3-55f9-4187-afbb-379b90d9639a)

2.6.2 Перевірити роботу команди ulimit за всіма прикладами з таблиці 1 з підрозділу
1.3.5, показавши на екрані:
 приклад кожної команд;
 приклад операції, яка порушує обмеження;
 приклад повідомлення про помилку щодо порушення обмеження.
