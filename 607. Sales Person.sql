# Write your MySQL query statement below


select s.name from SalesPerson s where s.sales_id  not in
(select o.sales_id from Orders o inner join Company c on o.com_id =c.com_id where c.name ="Red" )

