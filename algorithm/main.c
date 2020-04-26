#include <stdio.h>


int main(void){
    int ii = 0;
    while(ii < 1) {
        double level;
        double score[5];
        int select;
        
        printf("\n");
        printf("난이도를 입력하세요 : ");
        scanf("%lf",&level);

        for(int i = 0; i < 5; i++) {
            printf("%d번 채점관 점수 : ", i+1);
            scanf("%lf", &score[i]);
            
        };

        double max = 0;
        double min = 99;
        double sumScore = 0;
        
        for(int i = 0; i < 5; i++) {
            if(max < score[i]) {
                max = score[i];
            }
            if(min > score[i]) {
                min = score[i];
            }
            sumScore += score[i];
        };
        
        double res = (sumScore-max-min)*level;
        
        for(int i = 0; i < 5; i++) {
            if(score[i] == min) {
                printf("%.1lf (m)",score[i]);
            } else if(score[i] == max) {
                printf("%.1lf (M)",score[i]);
            } else {
                printf("%.1lf",score[i]);
            }
        };
        printf("Score : %.1lf", res);
            
        printf("\n계속하시겠습니까? (1:계속/2:중지) ");
        scanf("%d", &select);
        
        if(select == 2) {
            ii = 1;
            break;
        } else {
            select = 1;
        }

        printf("\n");
    }
    return 0;
}

