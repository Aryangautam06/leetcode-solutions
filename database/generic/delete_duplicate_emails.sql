-- ======================================
-- LeetCode Problem: delete duplicate emails
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/delete-duplicate-emails/
-- Synced by: LinkCode
-- Date: 16/09/2026, 15:01:09
-- ======================================


# Write your MySQL query statemen
DELETE p1
FROM Person p1
JOIN Person p2
ON p1.email = p2.email
AND p1.id > p2.id;