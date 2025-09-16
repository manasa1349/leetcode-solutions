/* Write your PL/SQL query statement below */
select * 
from patients
where instr(conditions,'DIAB1')=1
or instr(conditions,' DIAB1')>0;
