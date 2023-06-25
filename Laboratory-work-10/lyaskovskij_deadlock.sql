-- 1

START TRANSACTION;
SELECT * FROM worker WHERE w_id = 1 FOR UPDATE;
UPDATE worker SET name = 'door1' WHERE w_id = 1;
SELECT * FROM worker WHERE w_id = 1;
SELECT pg_sleep(12);
UPDATE worker SET name = 'chest2' WHERE w_id = 2;
COMMIT;

-- 2

START TRANSACTION;
SELECT * FROM worker WHERE w_id = 2 FOR UPDATE;
UPDATE worker SET name = 'jem2' WHERE w_id = 2;
SELECT * FROM worker WHERE w_id = 2;
UPDATE worker SET name = 'cake1' WHERE w_id = 1;
COMMIT;
