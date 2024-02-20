


#include "score.h"



int main()
{
    //struct person me;
    //struct person you;
   // PERSON me;
   // PERSON you;
   //     
   ///* const char* name = "유재석";
   // name = "강호동";

   // strcpy("강호동", "유재석");
   // 10 = 20;*/

   // strcpy(me.name, "유재석");
   // me.age = 20;

   // strcpy(you.name, "박명수");
   // you.age = 25;

   // printf("me.name = %s\nme.age = %u\n", me.name, me.age);
   // printf("you.name = %s\nyou.age = %u\n", you.name, you.age);

    SCORE *scores = NULL;   // 배열
    uint score_count = 0;

    SCORE input_score;      // 입력받은 값

    
    show_menu();
    while (1)
    {
        int menu = _getch();
        switch (menu)
        {
        case '1':   // 입력
            input_score2(&input_score);
            score_count = append_score(&scores, &input_score, score_count);
            break;

        case '2':
            show_scores(scores, score_count);
            break;

        case 'x':
        case 'X':
            printf("프로그램을 종료합니다\n");
            goto RELEASE_AREA;  // RELEASE_AREA 영역으로 처리를 이동시킴
        }

        printf("============================\n");
        printf("계속하려면 아무키나 누르세요\n");
        _getch();
        
        show_menu();
    }




    //input_score3(&scores, 0);

    //
    //// SCORE score;

    ////printf("score변수의 크기 : %llu\n", sizeof(score));
    ////printf("score 변수의 주소 : %p\n", &score);


    ////// score = input_score();
    ////input_score2(&score);

    //printf("학생 이름 : %s\n", scores[0].name);
    //printf("국어 : %u\n", scores[0].kor);
    //printf("영어 : %u\n", scores[0].eng);
    //printf("수학 : %u\n", scores[0].math);
    //printf("총점 : %u\n", scores[0].total);
    //printf("평균 : %.1f\n", scores[0].avg);
    //printf("학점 : %c\n", scores[0].grade);


RELEASE_AREA:   // 코드 영역의 태깅(tagging)

    if (scores)
    {
        // Memory Leak
        free(scores);
        scores = NULL;
    }

    return 0;
}
