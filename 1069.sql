SELECT product_id, SUM(quantity) as total_quantity
FROM Sales
GROUP BY product_id;
