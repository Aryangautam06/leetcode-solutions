-- ======================================
-- LeetCode Problem: combine two tables
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/combine-two-tables/
-- Synced by: LinkCode
-- Date: 05/10/2026, 14:06:16
-- ======================================


# Write your MySQL query statement below
SELECT 
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
ON p.personId = a.personId;