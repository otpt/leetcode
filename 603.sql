SELECT c1.seat_id
FROM cinema c1
LEFT JOIN cinema c2
    ON c1.seat_id + 1 = c2.seat_id
LEFT JOIN cinema c3
    ON c1.seat_id - 1 = c3.seat_id
WHERE c1.free = 1 AND (c2.free = 1 OR c3.free = 1)
