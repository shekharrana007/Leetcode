SELECT
    ROUND(COUNT(DISTINCT a.player_id) * 1.0 / COUNT(*), 2) AS fraction
FROM  (
    SELECT player_id, MIN(event_date) AS first
    FROM Activity
    GROUP BY player_id
) b
LEFT JOIN Activity a
ON a.player_id = b.player_id
   AND a.event_date = DATE_ADD(b.first, INTERVAL 1 DAY);