# Write your MySQL query statement below
SELECT E.name,
UNI.unique_id
FROM Employees AS E 
LEFT JOIN EmployeeUNI AS UNI
ON E.id = UNI.id;