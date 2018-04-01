Solución: 

Hice la solución para el small data set, el large data set lo intenté pero no llegué a resolverlo al 100.

En el small data set pensé primero en la solución más optima de cuando sólo hay 2 cambios, el dia lo divides en 2
de 00:00 hasta las 12:00 y de 12:00 hasta las 00:00.
Por los límites del problema sabes que hay 5 casos:
cuando es 2 0 (osea que Cameron tiene 2 actividades y Jamie 0)
cuando es 0 2 (Cameron 0 actividades pero Jamie 2)
cuando es 1 y 1 (Cameron 1 y Jamie 1)
cuando es 1 y 0 
cuando es 0 y 1

Hice un timline en mi libreta, una linea y la dividí en dos secciones (como lo mencioné arriba) con ello pude ver que los últimos 3 casos siempre su solución más óptima son dos 2 cambios, que cuando se necesitan 4 cambios solo es en los primeros dos casos:

cuando es 2 0 (Cameron tiene 2 actividades y Jamie 0)
cuando es 0 2 (Cameron tiene 0 actividades y Jamie 2)

Para eso guardo en dos arrays diferentes el inicio y comienzo de una actividad, por ejemplo en la de cameron el array c guarda los inicios y el array d guarda cuando termina. Hay muchas varias formas de como saber cuando se necesitan 4 cambios, yo me fui por la mas sencilla que se me ocurrió, que fue checar nada mas el array d que guarda cuando termina una actividad, entonces si las actividades de cameron eran 2 y una actividad termina después de las 12:00 y la otra termina antes de las 12 O si una actividad termina antes de las 12 y la otra termina despues de las 12 entonces se sabe que se tienen que hacer 4 cambios, de lo contrario solo serian dos cambios ya que las dos actividades de cameron estarian  o de 00:00-12:00 o de 12:00-00:00 y solo serían necesarios 2 cambios.
Lo mismo aplica cuando Jamie tiene 2 actividades.


Problem
Cameron and Jamie are longtime life partners and have recently become parents! Being in charge of a baby, exciting as it is, is not without challenges. Given that both parents have a scientific mind, they have decided to take a scientific approach to baby care.

Cameron and Jamie are establishing a daily routine and need to decide who will be the main person in charge of the baby at each given time. They have been equal partners their whole relationship, and they do not want to stop now, so they decided that each of them will be in charge for exactly 12 hours (720 minutes) per day.

Cameron and Jamie have other activities that they either need or want to do on their own. Cameron has AC of these and Jamie has AJ. These activities always take place at the same times each day. None of Cameron's activities overlap with Jamie's activities, so at least one of the parents will always be free to take care of the baby.

Cameron and Jamie want to come up with a daily baby care schedule such that:

Scheduled baby time must not interfere with a scheduled activity. That is, during Cameron's activities, Jamie has to be in charge of the baby, and vice versa.
Each of Cameron and Jamie must have exactly 720 minutes assigned to them.
The number of exchanges — that is, the number of times the person in charge of the baby changes from one partner to the other — must be as small as possible.
For example, suppose that Jamie and Cameron have a single activity each: Jamie has a morning activity from 9 am to 10 am, and Cameron has an afternoon activity from 2 pm to 3 pm. One possible but suboptimal schedule would be for Jamie to take care of the baby from midnight to 6 am and from noon to 6 pm, and for Cameron to take care of the baby from 6 am to noon and 6 pm to midnight. That fulfills the first two conditions, and requires a total of 4 exchanges, which happen at midnight, 6 am, noon and 6 pm. If there is an exchange happening at midnight, it is counted exactly once, not zero or two times.

A better option would be for Cameron to take care of the baby from midnight to noon, and Jamie to take care of the baby from noon to midnight. This schedule also fulfills the first two conditions, but it uses only 2 exchanges, which is the minimum possible.

Given Cameron's and Jamie's lists of activities, and the restrictions above, what is the minimum possible number of exchanges in a daily schedule?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing two integers AC and AJ, the number of activities that Cameron and Jamie have, respectively. Then, AC + AJ lines follow. The first AC of these lines contain two integers Ci and Di each. The i-th of Cameron's activities starts exactly Ci minutes after the start of the day at midnight and ends exactly Di minutes after the start of the day at midnight (taking exactly Di - Ci minutes). The last AJ of these lines contain two integers Ji and Ki each, representing the starting and ending time of one of Jamie's activities, in minutes counting from the start of the day at midnight (same format as Cameron's). No activity spans two days, and no two activities overlap (except that one might end exactly as another starts, but an exchange can still occur at that time).

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y the minimum possible number of exchanges, as described in the statement.

Limits
1 ≤ T ≤ 100.
0 ≤ Ci < Di ≤ 24 × 60, for all i.
0 ≤ Ji < Ki ≤ 24 × 60, for all i.
Any two of the intervals of {[Ci, Di) for all i} union {[Ji, Ki) for all i} have an empty intersection. (The intervals are closed on the left and open on the right, which ensures that two exactly consecutive intervals have nothing in between but do not overlap.)
sum of {Di - Ci for all i} ≤ 720.
sum of {Ki - Ji for all i} ≤ 720.
Small dataset
0 ≤ AC ≤ 2.
0 ≤ AJ ≤ 2.
1 ≤ AC + AJ ≤ 2.
