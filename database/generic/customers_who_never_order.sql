-- ======================================
-- LeetCode Problem: customers who never order
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/customers-who-never-order/
-- Synced by: LinkCode
-- Date: 26/10/2026, 08:56:25
-- ======================================


# Write your MySQL query statement below
SELECT name AS Customers
FROM Customers
WHERE id NOT IN (SELECT customerId FROM Orders);