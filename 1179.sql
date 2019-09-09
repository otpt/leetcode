SELECT id,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Jan") as Jan_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Feb") as Feb_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Mar") as Mar_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Apr") as Apr_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "May") as May_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Jun") as Jun_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Jul") as Jul_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Aug") as Aug_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Sep") as Sep_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Oct") as Oct_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Nov") as Nov_Revenue,
    (SELECT revenue FROM Department d WHERE d.id = ids.id AND month = "Dec") as Dec_Revenue
FROM (SELECT DISTINCT id FROM Department) ids
