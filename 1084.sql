SELECT p.product_id, p.product_name FROM Sales s
JOIN Product p
ON p.product_id=s.product_id
WHERE s.sale_date BETWEEN '2019-01-01' AND '2019-04-1';
