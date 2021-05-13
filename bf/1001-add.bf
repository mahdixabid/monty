,       ; read character and store it in p1
>       ; move pointer to p2 (second byte)
,       ; read character and store it in p2
[           ; enter loop
    <       ; move to p1
    +       ; increment p1
    >       ; move to p2
    -       ; decrement p2
]           ; we exit the loop when the last cell is empty
<       ; go back to p1
------------------------------------------------ ; subtract 48 (ie ASCII char code of '0')
.       ; print p1