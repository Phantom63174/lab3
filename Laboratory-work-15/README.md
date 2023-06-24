## «Основи контейнерної віртуалізації програмного забезпечення» як заголовок 2-го рівня Markdown-форматування;

### 1 Встановлення програми контейнерної віртуалізації Docker

![2 1 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/5d222ec6-5e09-43cd-a46f-ac8f04fcc36a)

Рис 1 - 2.1.1 На вашому локальному комп’ютері встановити програмне забезпечення Docker під будь-яку host-ОС (Windows, Linux, MacOS).

![2 1 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/8a79238d-bf11-4b13-8a6b-8aa56043c2fe)

Рис 2 - 2.1.2 Перевірити успішність встановлення Docker через запуск контейнера на основі тестового образу hello-world.

### 2 Керування контейнерною віртуалізацією ОС Linux через інтерфейс командного рядку
![2 2 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/02b5fc08-70a1-410e-a319-9e1ccbd1e07d)

Рис 3 - 2.2.1 Через командний рядок виконати пошук контейнернего образу ОС Linux.
![2 2 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/4a881d0d-7d84-42b9-aa71-5d63c1ebcc35)

Рис 4 - 2.2.2 Отримати перелік версій контейнерного образу ОС fedora, назва яких містить тільки цифри.
![2 2 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/31c60ace-ce80-4ef6-ba30-a44eafd949fd)

Рис 5 - 2.2.3 Завантажити контейнерний образ ОС fedora версії, номер якої відповідає останнім цифрам вашої групи, наприклад, 21, 22, 23.
![2 2 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/55cd27c9-21a9-4de9-8c64-f34632655bab)

Рис 6 - 2.2.4 Запустити контейнер з образом, завантаженим у попередньому пункті, який має назву «fedora-for-surname», де surname – ваше прізвище транслітерацією, наприклад «fedora-
for-blazhko», для подальшої взамодії з користовучем через команду bash.
![2 2 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/6c7219ba-b77f-4d72-bfb4-1afd0cbbe56f)

Рис 7 - 2.2.5 Після отримання доступу до терміналу ОС переглянути опис дистрибутиву ОС.
![2 2 6](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/b4553c89-e509-499b-b09a-a4cee1022dc7)

Рис 8 - 2.2.6 В другому псевдотерміналі host-ОС виконати команду отримання списку запущених контейнерів.
![2 2 7](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/d1596985-41c7-4dca-ad3e-3e16b50c9034)

Рис 9 - 2.2.7 В першому псевдотерміналі завершити роботу із контейнером.
![2 2 8](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/91403aad-44ef-4a6b-90f3-87c96cd5dfba)

Рис 10 - 2.2.8 В другому псевдотерміналі host-ОС виконати команду отримання списку створених контейнерів.
![2 2 9](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/c7037961-614d-48e8-b189-073792de0cdf)

Рис 11 - 2.2.9 Видалити створений контейнер.

### 3 Керування файловою віртуалізацією ОС Linux через команду chroot
![2 3 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/32baca22-d5f1-49c0-ae42-57c9c354994f)

Рис 12 - 2.3.1 Створити каталог за шаблоном /tmp/surname_root, де surname – ваше прізвище транслітерацією, наприклад, /tmp/blazhko_root
![2 3 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/b232a482-8d7b-4341-aa4d-307024b3e2a5)

Рис 13 - 2.3.2 Розмістити у створеному каталозі програму bash та всі необхідні файли динамічних бібліотек.
![2 3 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/2cd80913-21d0-486c-b56b-2c891c2f4ed2)

Рис 14 - 2.3.3 Змінити розташування root-каталогу на створений каталог.
![2 3 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/3e2643d3-1f20-415f-aeea-b3940aa7bc43)

Рис 15 - 2.3.4 Спробувати змінити каталог на каталог поточного користувача.
![2 3 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/9e710fe6-6c72-4953-8a49-70ba8872f035)

Рис 16 - 2.3.5 Отримати назву поточного каталогу.
![2 3 6](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/36d41804-3e80-4925-900d-a6aff8ee7efc)

Рис 17 - 2.3.6 Змінити значення змінної HOME на назву поточного каталогу.
![2 3 7](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/68a294f9-253a-43fd-9b34-a36c0f493046)

Рис 18 - 2.3.7 Змінити каталог на каталог поточного користувача.
![2 3 8](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/eb03ab56-3479-4ce3-9cc9-5213f936e981)

Рис 19 - 2.3.8 Спробувати виконати команду отримання переліку файлів каталогу.
![2 3 9](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/4915f0c8-1a17-4721-be61-0f697fbf1e95)

Рис 20 - 2.3.9 Повернутися до старого root-каталогу.

### 4 Керування контейнерною віртуалізацією СКБД PostgreSQL через інтерфейс командного рядку
![2 4 1](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/655e799e-fabb-46e3-912e-0a6ada3910b0)

Рис 21 -  2.4.1 Завантажити образ контейнера postgres останньої стабільної версії.
![2 4 2](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/0d5c1dce-9f31-4811-9099-88d85aefacdf)
 
Рис 22 - 2.4.2. Запустити образ postgres зі створенням контейнеру з назвою за шаблоном
«surname-postgres», де surname – ваше прізвище транслітерацією, паролем адміністратора 5432 та подальшою роботою сервера СКБД PostgreSQL у фоновому режимі
![2 4 3](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/73def424-964c-46d1-9807-757c5d086c0d)

Рис 23 - 2.4.3 Виконати в контейнері surname-postgres команду bash, щоб розпочати роботу із оболонкою командного рядку.
![2 4 4](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/1651571c-65e3-4355-a6fa-2526cdfda6e8)

Рис 24 - 2.4.4 В оболонці командного рядку створити БД із назвою за шаблоном «surname_db»
![2 4 5](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/eb93ccc4-9ebb-4793-8079-426c9cccfd50)

Рис 25 - 2.4.5 В оболонці командного рядку створити користувача СКБД PostgreSQL за шаблоном «surname».
![2 4 6](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/51af0cc2-cdc9-4998-bace-923d433923c1)

Рис 26 - 2.4.6 В оболонці командного рядку встановити з’єднання зі створеною БД від імені створеного користувача.
![2 4 7](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/2c0acc34-c603-447c-82fb-d6ca69ed9a92)

Рис 27 - 2.4.7 Завершити роботу з командою psql та завершити роботу з контейнером.
![2 4 8](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/dd56ae24-7507-4952-8d07-8985659368f8)

Рис 28 - 2.4.8 Виконати команду отримання списку запущених контейнерів.
![2 4 9](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/4d2b097b-ba95-4af3-adec-cbeac8d507c9)

Рис 29 - 2.4.9 Зупинити роботу контейнера surname-postgres.
![2 4 10](https://github.com/oleksandrblazhko/ai222-lyaskovskij/assets/127392217/587292a4-4cee-401c-95e2-862a4ad5474a)

Рис 30 - 2.4.10 Видалити контейнер surname-postgres.
