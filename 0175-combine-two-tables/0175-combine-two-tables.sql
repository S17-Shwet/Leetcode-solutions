# Write your MySQL query statement below
-- “List all people and their addresses if available; otherwise show NULL.”
SELECT
 p.firstName,
 p.lastName,
 a.city, 
 a.state

 FROM Person p
 LEFT JOIN Address a
 ON p.personId=a.personId;
