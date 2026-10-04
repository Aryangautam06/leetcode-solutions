-- ======================================
-- LeetCode Problem: second highest salary
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/second-highest-salary/
-- Synced by: LinkCode
-- Date: 04/10/2026, 13:24:28
-- ======================================


# Write your MySQL query statement below
SELECT (
    SELECT DISTINCT salary
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;