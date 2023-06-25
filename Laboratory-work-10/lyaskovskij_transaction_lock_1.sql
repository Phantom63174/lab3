-- 1
START TRANSACTION;
LOCK TABLE  worker IN EXCLUSIVE MODE;
SELECT * FROM worker WHERE w_id = 1;
UPDATE worker SET  name = 'nothing1' WHERE w_id = 1;
SELECT * FROM worker WHERE w_id = 1;
COMMIT;

--2
START TRANSACTION;
LOCK TABLE  worker IN EXCLUSIVE MODE;
SELECT * FROM worker WHERE w_id = 2;
UPDATE worker SET  name = 'something2' WHERE w_id = 2;
SELECT * FROM worker WHERE w_id = 2;
COMMIT;

