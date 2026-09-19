-- ======================================
-- LeetCode Problem: rising temperature
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/rising-temperature/
-- Synced by: LinkCode
-- Date: 19/09/2026, 18:54:42
-- ======================================


# Write your MySQL query statement below
SELECT w1.id
FROM Weather w1
JOIN Weather w2 ON DATEDIFF(w1.recordDate, w2.recordDate) = 1 WHERE w1.temperature > w2.temperature;