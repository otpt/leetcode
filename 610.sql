SELECT x, y, z, IF(y + z > x && x + z > y && x + y > z, 'Yes', 'No') as triangle
FROM triangle
