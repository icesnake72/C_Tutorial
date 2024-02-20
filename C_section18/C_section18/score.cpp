#include "score.h"


void show_menu()
{
    system("cls");  // 명령 프롬프트 화면(콘솔, DOS), 화면 클리어

    printf("1. 성적 입력\n");
    printf("2. 성적 조회\n");
    printf("============\n");
    printf("메뉴를 선택하세요 >>> \n");
}



SCORE input_score()
{
    SCORE score;
    printf("이름을 입력하세요 >>> ");
    gets_s(score.name);

    printf("국어 점수를 입력하세요 >>> ");
    scanf("%d", &score.kor);

    printf("영어 점수를 입력하세요 >>> ");
    scanf("%d", &score.eng);

    printf("수학 점수를 입력하세요 >>> ");
    scanf("%d", &score.math);

    score.total = score.kor + score.eng + score.math;
    score.avg = score.total / 3.F;

    if (score.avg >= 90.F)
        score.grade = 'A';
    else if (score.avg >= 80.F)
        score.grade = 'B';
    else if (score.avg >= 70.F)
        score.grade = 'C';
    else if (score.avg >= 60.F)
        score.grade = 'D';
    else
        score.grade = 'F';

    return score;
}


void input_score2(SCORE* pScore)
{
    if ( !pScore )
        return;

    //printf("pScore 변수의 크기 : %llu\n", sizeof(pScore));
    //printf("pScore 변수의 내용 : %p\n", pScore);
    //printf("pScore 변수의 주소 : %p\n", &pScore);

    system("cls");
       
    printf("이름을 입력하세요 >>> ");
    gets_s(pScore->name);

    printf("국어 점수를 입력하세요 >>> ");
    scanf("%d", &pScore->kor);

    printf("영어 점수를 입력하세요 >>> ");
    scanf("%d", &pScore->eng);

    printf("수학 점수를 입력하세요 >>> ");
    scanf("%d", &pScore->math);

    pScore->total = pScore->kor + pScore->eng + pScore->math;
    pScore->avg = pScore->total / 3.F;

    if (pScore->avg >= 90.F)
        pScore->grade = 'A';
    else if (pScore->avg >= 80.F)
        pScore->grade = 'B';
    else if (pScore->avg >= 70.F)
        pScore->grade = 'C';
    else if (pScore->avg >= 60.F)
        pScore->grade = 'D';
    else
        pScore->grade = 'F';
}


uint input_score3(SCORE** ppScore, uint count)
{
    // if ((*ppScore==NULL) || count==0)
    if (!*ppScore || !count)
    {
        // sizeof(변수명)
        // sizeof(타입명)

        size_t size = sizeof(SCORE);
        *ppScore = (SCORE*)malloc(size);
        if (!*ppScore)
            return 0;
    }

    SCORE* pScore = *ppScore;

    printf("이름을 입력하세요 >>> ");
    gets_s(pScore->name);

    printf("국어 점수를 입력하세요 >>> ");
    scanf("%d", &pScore->kor);

    printf("영어 점수를 입력하세요 >>> ");
    scanf("%d", &pScore->eng);

    printf("수학 점수를 입력하세요 >>> ");
    scanf("%d", &pScore->math);

    pScore->total = pScore->kor + pScore->eng + pScore->math;
    pScore->avg = pScore->total / 3.F;

    if (pScore->avg >= 90.F)
        pScore->grade = 'A';
    else if (pScore->avg >= 80.F)
        pScore->grade = 'B';
    else if (pScore->avg >= 70.F)
        pScore->grade = 'C';
    else if (pScore->avg >= 60.F)
        pScore->grade = 'D';
    else
        pScore->grade = 'F';


    return 1;
}


uint append_score(SCORE** ppScore, SCORE* pSrcScore, uint count)
{
    if (!*ppScore || !count)
    {
        size_t size = sizeof(SCORE);
        *ppScore = (SCORE*)malloc(size);
        if (!*ppScore)
            return 0;

        memcpy(*ppScore, pSrcScore, size);        
        return count + 1;
    }

    return 0;
}


void show_scores(SCORE* pScores, uint count)
{
    if (!pScores || !count)
        return;

    system("cls");
    printf("이름\t국어\t영어\t수학\t총점\t평균\t학점\n");
    printf("========================================\n");

    for (int i = 0; i < count; i++)
    {
        printf("%s\t", pScores[i].name);
        printf("%d\t", pScores[i].kor);
        printf("%d\t", pScores[i].eng);
        printf("%d\t", pScores[i].math);
        printf("%d\t", pScores[i].total);
        printf("%.1f\t", pScores[i].avg);
        printf("%c\n", pScores[i].grade);
    }
}