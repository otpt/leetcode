SELECT player_id, device_id
FROM Activity
INNER JOIN (
    SELECT player_id, MIN(event_date) as event_date
    FROM Activity
    GROUP BY player_id
) mind
USING (player_id, event_date)

