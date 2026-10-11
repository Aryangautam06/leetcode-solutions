-- ======================================
-- LeetCode Problem: product sales analysis i
-- Language: SQL (generic)
-- Link: https://leetcode.com/problems/product-sales-analysis-i/
-- Synced by: LinkCode
-- Date: 11/10/2026, 10:06:05
-- ======================================


# Write your MySQL query statement below
SELECT
    p.product_name,
    s.year,
    s.price
FROM Product p
JOIN Sales s
    ON p.product_id = s.product_id;