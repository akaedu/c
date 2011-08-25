#include <stdio.h>

#define N 3

typedef struct student
{
        int id;
        char name[10];
        int score;
}stu_t;

int main(int argc, const char *argv[])
{
        stu_t stu[N], tmp;
        int i, j, pos;

        for(i = 0; i < N; i++)
                scanf("%d %s %d", &stu[i].id, stu[i].name, &stu[i].score);
        
        for(i = 0; i < N-1; i++)
        {
                pos = i;
                for(j = i+1; j < N; j++)
                {
                        if(stu[pos].score < stu[j].score)
                                pos = j;
                }
                if(pos != i)
                {
                        tmp = stu[pos];
                        stu[pos] = stu[i];
                        stu[i] = tmp;
                }
        }

        printf("id\tname\tscore\n");
        for(i = 0; i < N; i++)
        {
                printf("%d\t%s\t%d\n", stu[i].id, stu[i].name, stu[i].score);
        }

        return 0;
}
