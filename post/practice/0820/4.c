#include <stdio.h>

typedef struct stu{
    int ID;
    char name[20];
    int score[4];
    float aver;
}student_t;

void print_stu(student_t s)
{
    printf("%d\t%10s\t%d\t%d\t%d\t%d\t%f\n", s.ID, s.name, s.score[0], s.score[1], s.score[2], s.score[3], s.aver);
}

int calc_aver(student_t *s, int size)
{
    int i;
    for (i = 0; i < size; i++) 
    {
        s[i].aver = (float)(s[i].score[0] + s[i].score[1] + s[i].score[2] + s[i].score[3]) / 4;
    }
}

int main(int argc, const char *argv[])
{
    student_t s[5];
    int i;
    for (i = 0; i < 5; i++)
        scanf("%d %s %d %d %d %d", &s[i].ID, s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2], &s[i].score[3]);

    calc_aver(s, 5);
    for (i = 0; i < 5; i++) 
    {
        print_stu(s[i]);
    }
    return 0;
}
