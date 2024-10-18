# Write your MySQL query statement below


select distinct i1.num as ConsecutiveNums  from Logs i1,Logs i2,Logs i3 where
 i1.id=i2.id+1 and  i2.id=i3.id+1 and 
 i1.num=i2.num and  i2.num=i3.num