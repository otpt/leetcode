SELECT seller_id
FROM (
    SELECT seller_id, SUM(price) as total
    FROM Sales
    GROUP BY seller_id
) as grouped
WHERE grouped.total IN (
    SELECT MAX(total)
    FROM grouped
)

