#include<stdio.h>
#include<math.h>

#define MAX 1001

int main(){
    int cases, students;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++){
        int grades[MAX], above_avg = 0, sum_grades = 0, grade;
        float avg_grade = 0;

        scanf("%d", &students);

        for (int j = 0; j < students; j++){
            scanf("%d", &grade);
            sum_grades += grade;
            grades[j] = grade;
        }
        avg_grade = (sum_grades / students);
        for (int k = 0; k < students; k++){
            if (grades[k] > avg_grade){
                above_avg++;
            }
        }
        printf("%.3f%%\n", ((float)above_avg / students) * 100);
    }

    return 0;
}