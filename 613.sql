SELECT MIN(ABS(pleft.x - pright.x)) as shortest
FROM point pleft
INNER JOIN point pright
ON pleft.x <> pright.x;
