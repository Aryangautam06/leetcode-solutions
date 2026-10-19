-- ======================================
-- LeetCode Problem: department highest salary
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/department-highest-salary/
-- Synced by: LinkCode
-- Date: 19/10/2026, 16:24:08
-- ======================================


# Write your MySQL query statement below
SELECT d.Name AS 'Department',e.Name AS 'Employee', e.Salary
FROM (SELECT Name, Salary, DepartmentId,
dense_rank() OVER(PARTITION BY DepartmentId ORDER BY Salary DESC) AS 'rank' FROM Employee) AS e
JOIN Department AS d ON e.DepartmentId = d.Id
WHERE e.rank = 1;