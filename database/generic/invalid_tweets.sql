-- ======================================
-- LeetCode Problem: invalid tweets
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/invalid-tweets/
-- Synced by: LinkCode
-- Date: 20/09/2026, 13:40:41
-- ======================================


# Write your MySQL query statement below
SELECT tweet_id FROM Tweets WHERE CHAR_LENGTH(content) > 15;