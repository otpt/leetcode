SELECT project_id
FROM Project
GROUP BY project_id
HAVING COUNT(employee_id) = (
    SELECT MAX(number) 
    FROM (
        SELECT project_id, COUNT(employee_id) as number
        FROM Project
        GROUP BY project_id
    ) tmp2
)
