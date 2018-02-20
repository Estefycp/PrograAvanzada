Background
A huge dancing-hall was constructed for the Ural State University’s 80-th anniversary celebration. The size of the hall is 2000 × 2000 metres! The floor was made of square mirror plates with side equal to 1 metre. Then the walls were painted with an indelible paint. Unfortunately, in the end the painter flapped the brush and the beautiful mirror floor was stained with the paint. But not everything is lost yet! The stains can be covered with a carpet.
Nobody knows why, but the paint on the floor formed an arc of a circle (a centre of the circle lies inside the hall). The dean of the Department of Mathematics and Mechanics measured the coordinates of the arc's ends and of some other point of the arc (he is sure that this information is quite enough for any student of the Ural State University). The dean wants to cover the arc with a rectangular carpet. The sides of a carpet must go along the sides of the mirror plates (so, the corners of the carpet must have integer coordinates).
Problem
You should find the minimal square of such a carpet.
Input
Input consists of six integers. The first two lines contain the coordinates of the arc's ends. The coordinates of an inner point of the arc follow them. Absolute values of all coordinates don't exceed 1000. The points don't belong the same straight line. The arc lies inside the square [-1000,1000]2.
Output
You should write the minimal square of the carpet covering this arc.
Sample
input	output
476 612
487 615
478 616
66


My first approach- angles with quadrants, i thought that i could see the behavior of the circle along the quadrant, then I noticed than in a 90 degree angle
if I change the position the third point may be higher, so how to know when to use the center + the radius?

Then I noticed that was only when the arc passed by the 4 highest point so...

I though that the solution may be that if the arc pass trhough the highest point in any quadrant, minx maxx miny maxy should be change as
necessary, otherwise, they stay the same.

So i searched for a equation, that given the 3 points i could make the center of the circle and the radius, when i had the center and the radius then
i searched for another equation to know if my arc pass for any of the 4 highest point, that was in order to changed the minx maxx miny maxy

My first problem was when I was doing the division, but then I remembered that I had to cast it first to double for the division take into account the floating point

At the end I solved it!! but not all the cases because I had a problem that when a parameter was double the answer was right, but the other case was wrong
If I changed to long then the other case was right but the first one became wrong. I couldnt fix it, I try it like for 7 hours but I think thas was just precision

This problem was a challenging one 

Difficulty: 1543
