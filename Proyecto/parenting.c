#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t, ac, aj;
    int c[5], d[5], j[5], k[5];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &ac, &aj);

        for (int m = 0; m < ac; m++)
            scanf("%d %d", &c[m], &d[m]);
        for (int m = 0; m < aj; m++)
            scanf("%d %d", &j[m], &k[m]);

        int result = 2;

        if (ac == 2 &&
            ( (d[1] > 720 && d[0] <= 720) ||  (d[1] <= 720 && d[0] > 720) ))
            result = 4;
        if (aj == 2 &&
         ( (k[1] > 720 && k[0] <= 720) ||  (k[1] <= 720 && k[0] > 720) ))
            
            result = 4;

        printf("Case #%d: %d\n", i + 1, result);
    }

    return 0;
}
