SELECT ROUND(100 * (
    SELECT COUNT(*)
    FROM Delivery
    WHERE order_date = customer_pref_delivery_date
) / (SELECT COUNT(*) FROM Delivery), 2) as immediate_percentage
