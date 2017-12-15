#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <termio.h>
#define work 50
#define name 10 
#define num 11
#pragma warning (disable : 4996)



struct A
{
    char S_name[25]; // 점포 이름  
    int J_num; // 점포 번호 

}i[50];


struct B
{
    char P_name[30]; //  상품 이름 
    int P_num; // 상품 번호
};

struct C
{
    int S_Name; // 점포 번호 입력 
    int P_Name; // 상품 번호 입력 
    int P_Qua; // 상품 수량  입력 
};

int main(void) {

    int wnans[50][5];
    int jg1[20];
    int jg2[20];
    int jg3[20];
    int bs=0;
    int bss[50];
    int ttt=0; 
    srand(time(NULL));
    for(int o=0; o<12; o++)
    {
        jg1[o]=20 + rand()%10+1;
    }
    for(int o=0; o<12; o++)
    {
        jg2[o]=20 + rand()%10+1;
    }
    for(int o=0; o<12; o++)
    {
        jg3[o]=20 + rand()%10+1;
    }
    int c = 0;
    int d = 0;
    int nn=1;
    int jumss=0;

    printf("            WELCOME             \n");
    printf(" ++++++++++++++++++++++++++++++\n");
    printf("    HJ convenience store    \n");
    printf("          ORDER            \n");
    printf(" ++++++++++++++++++++++++++++++\n");
    printf(" ++  Press any key to start  ++\n");
    printf(" ++++++++++++++++++++++++++++++\n");

    struct A list[3] = {
        { "Marine University",1 },
        { "sangmyeong University",2 },
        { "Bupyeong Station",3 }
    };

    struct B list2[12] = {
        { "snack",1 },{ "fruit",2 },
        { "egg",3 },{ "Kimbab",4 },
        { "sausage",5 },{ "Bread",6 },
        { "Ice cream",7 },{ "Frozen Food",8 },
        { "milk",9 },{ "coffee",10 },
        {" Other drinks ",11 },{ "the drink",12 }
    };


    int start;
    scanf("%d", &start);

    if (start != 0)
        system("cls");

    char id[num][name] = { 0, };
    char pw[num][name] = { 0, };
    int temp = 0, count = 0, ch, in = 0;

    while (1)
    {
        printf("1. Customer mode\n");
        printf("2. Store  manager mode\n");
        printf("3. Distribution manager mode\n");

        int select;
        scanf("%d", &select);

        if (select == 1)
            while (1)
            {
                printf("1. Sign Up \n2. login\n3.Log out \n");
                printf(" Select a task: ");
                scanf("%d", &ch);


                if (ch == 1)
                {
                    temp = 0;


                    printf("<< Sign Up >>\n input ID : ");
                    scanf("%s", id[0]);
                    for (int i = 1; i < num; ++i)
                    {
                        if (strcmp(id[0], id[i]) == 0)
                        {

                            printf("The ID that already exists.\n");
                            temp = 1;
                            break;
                        }
                    }

                    if (temp == 1) break;
                    ++in;


                    strcpy(id[in], id[0]);
                    printf("Enter Password : ");
                    scanf("%s", &pw[in]);
                    printf("Completed membership\n");
                    break;

                }

                if (ch == 2)
                {

                    temp = 0;
                    system("cls");
                    printf("<< login >>\n Enter ID : ");
                    scanf("%s", id[0]);

                    for (int i = 1; i < num; ++i)
                    {

                        if (strcmp(id[0], id[i]) == 0)
                        {

                            temp = 1;
                            break;
                        }

                    }

                    if (temp == 1)
                    {

                        printf("Enter Password : ");
                        scanf("%s", pw[0]);

                        for (int i = 1; i < num; ++i)
                        {

                            if (strcmp(id[0], id[i]) == 0 && strcmp(pw[0], pw[i]) == 0)
                            {
                                printf("Signed in\n");
                                d = 0;

                                printf(" welcome %s \n", id[0]);





                                int YN; // yes or no
                                int YN2; // yes or no

                                int t; // 주문 or 로그아웃 
                                int a; //  점포 입력과 출력에 쓸 변수 
                                int s; // 상품 입력과 출력에 쓸 변수 


                                while (1)
                                {

                                    printf("================\n");
                                    printf("1. ORDER \n");
                                    printf("2. ROGOUT \n");
                                    printf("3. 내역확인\n");
                                    printf("4. 알림 \n");
                                    printf("================\n");

                                    scanf("%d", &t); // order or rogout 


                                    if (t == 1) // 주문 
                                    {


                                        for (int z = 0; z < 10; z++)
                                        {

                                            wnans[c][d]=nn;
                                            d++;
                                            nn++;

                                            wnans[c][d] = *id[0];
                                            d++;

                                            printf("\n");
                                            printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
                                            printf("                 Choose Store                \n");
                                            printf(" Enter the Store number  you wish to select. \n");
                                            printf("+++++++++++++++++++++++++++++++++++++++++++++\n");

                                            for (a = 0; a < 3; a++)// 점포 명 출력  
                                            {
                                                printf("======================================================\n");
                                                printf("Store Name : %10s : Store Number : %5d\n", list[a].S_name, list[a].J_num);
                                                printf("======================================================\n");
                                            }


                                            printf("input Store Name number: \n ");
                                            scanf("%d", &wnans[c][d]); // 상품 변수 입력 


                                            printf("\n");
                                            printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                                            printf(" You choose %5s Store! (Store Number %2d) \n", list[wnans[c][d] - 1].S_name, list[wnans[c][d] - 1].J_num);
                                            printf("               Check store selection \n");
                                            printf("             YES : input 1 <-> NO: input 0 \n");
                                            printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");


                                            scanf("%d", &YN2); // Yes or No

                                            if (YN2 == 1) {
                                                printf("┌─────────┐\n");
                                                printf("│        YES       │\n");
                                                printf("└─────────┘\n");
                                            }
                                            else if (YN2 == 0) {
                                                printf("┌─────────┐\n");
                                                printf("│        NO        │\n");
                                                printf("└─────────┘\n");
                                                continue;
                                            }
                                            else {
                                                printf("┌───────────────┐\n");
                                                printf("│ Wrong number,  Check number! │\n");
                                                printf("└───────────────┘\n");
                                                continue;
                                            }


                                            printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
                                            printf("           input product name number           \n");
                                            printf(" Enter the Product Number  you wish to select. \n");
                                            printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");

                                            for (s = 1; s < 13; s++) // 상품명 출력 
                                            {
                                                printf("======================================================\n");
                                                printf("Product Name : %10s , Product Number : %5d\n", list2[s - 1].P_name, list2[s - 1].P_num);
                                                printf("======================================================\n");
                                            }


                                            int i = 0; // 상품 입력 횟수 

                                            // 주문 입력 
                                            d++;

                                            printf("#Product Number input# \n");
                                            scanf("%d", &wnans[c][d]); // 상품 점포 입력 



                                            printf("+++++++++++++++++++++++++++++++++++++++\n");
                                            printf("Number : %2d -> Product : %5s\n", list2[wnans[c][d] - 1].P_num, list2[wnans[c][d] - 1].P_name);
                                            printf("+++++++++++++++++++++++++++++++++++++++\n");
                                            printf("\n");
                                            printf("=================\n");
                                            printf("Quantity input: ");

                                            d++;
                                            scanf("%d", &wnans[c][d]); // 상품 갯수 입력 


                                            printf("\n");

                                            printf("Product : %5s , Quantity : %2d\n", list2[wnans[c][d - 1] - 1].P_name, wnans[c][d]);
                                            i++;
                                            d++;

                                            printf("=======================================\n");
                                            printf("    YES (correct order)    : input 1 \n");
                                            printf("    NO  (incorrect order)  : input 2 \n");
                                            printf("=======================================\n");

                                            scanf("%d", &YN);

                                            if (YN == 1)
                                            {
                                                printf("┌────────────────┐\n");
                                                printf("│        YES(CORRECT ORDER)      │\n");
                                                printf("└────────────────┘\n");

                                            }

                                            else if (YN == 2)
                                            {
                                                printf("┌───────────────┐\n");
                                                printf("│      NO (INCORRECT ORDER)    │\n");
                                                printf("│       Re-enter Order!!       │\n");
                                                printf("└───────────────┘\n");
                                                z = 0; // 다시 주문 입력 
                                            }

                                            else // 이외의 번호 입력시 다시 주문으로 돌아가기  
                                            {
                                                printf("┌───────────────┐\n");
                                                printf("│ Wrong number,  Check number! │\n");
                                                printf("└───────────────┘\n");
                                                continue;
                                            }




                                            c++;
                                            d = 0;

                                            printf("Continue your order?\n");
                                            printf("*** If you enter 0, the number entry will end. ***\n");
                                            int ppp;
                                            scanf("%d", &ppp);
                                            if (ppp == 0)
                                                break;

                                        }
                                    }

                                    if (t == 2) // 로그아웃 
                                        break;

                                    if (t == 3) // 주문 
                                    {
                                        printf("\n");
                                        for (int h = 0; h<c + 1; h++)
                                        {
                                            for (int y = 0; y<5; y++)
                                            {
                                                if(wnans[h][1]!=*id[0])
                                                    continue;

                                                printf("%d \n", wnans[h][y]);
                                            }
                                            printf("\n");
                                        }
                                    }

                                    if (t == 4)
                                    {

                                        for(int rrr=0; rrr<c+1; rrr++)
                                        {
                                            if(bss[0]==0)
                                                break;


                                            else
                                            {

                                                if(wnans[bss[rrr]-1][1]==*id[0])
                                                {

                                                    printf("%c, %d상품 %d개 도착했습합니다.\n", wnans[bss[rrr]-1][1], wnans[bss[rrr]-1][3], wnans[bss[rrr]-1][4]);
                                                }

                                            }

                                        } 

                                    }


                                }
                                //로그인완료후 고객화면 함수


                            }

                            else if (strcmp(id[0], id[i]) == 0 && strcmp(pw[0], pw[i]) != 0)
                            {

                                temp = 2;

                            }

                        }

                        if (temp == 2)
                        {

                            printf("Password incorrect.\n");

                            break;

                        }


                        break;

                    }

                    else
                    {
                        printf("No ID.\n");

                        break;

                    }

                    if (temp == 2)
                        break;

                }

                if (ch == 3)
                {
                    break;

                }
                ++count;
            }


        if (select == 2)
        {
            printf("Please select a store to log in\n");
            printf("1. Marine University\n");
            printf("2. sangmyeong University\n");
            printf("3. Bupyeong Station\n");

            int jselect;
            int pww;
            int jumss;
            int jums;
            scanf("%d", &jselect);

            if (jselect == 1)
            {
                jumss++;

                while (1)
                {
                    printf("Enter your password.\n");
                    scanf("%d", &pww);
                    if (pww == 111)
                        break;
                    else
                        printf("Password incorrect.\n");
                }

                while (1)
                {

                    printf("Mokpo Maritime University screen\n");
                    printf("1.View Order Status Notifications \n");
                    printf("2.재고확인  \n");

                    printf("3. Notify customer\n");
                    printf("4. Log out\n");

                    scanf("%d", &jums);
                    int ll = 0;
                    int bb = 0;
                    if (jums == 1)
                    {

                        printf("Get customer orders\n");
                        for (int h = 0; h<c ; h++)
                        {
                            for (int y = 0; y<5; y++)
                            {
                                if(wnans[h][2]!=1)
                                    continue;

                                printf("%d \n", wnans[h][y]);
                            }
                            printf("\n");
                        }


                    }
                    if (jums == 2)
                    {
                        printf("<재고확인>\n");
                        printf("1.과자 : %d개\n", jg1[0]);
                        printf("2. 과일 : %d개\n", jg1[1]);
                        printf("3. 계란 : %d개\n", jg1[2]);
                        printf("4. 김밥 : %d개\n", jg1[3]);
                        printf("5. 핫바 : %d개\n", jg1[4]);
                        printf("6. 빵 : %d개\n", jg1[5]);
                        printf("7. 아이스크림 : %d개\n", jg1[6]);
                        printf("8. 냉동식품 : %d개\n", jg1[7]);
                        printf("9. 우유 : %d개\n", jg1[8]);
                        printf("10. 커피 : %d개\n", jg1[9]);
                        printf("11. 그외음료 : %d개\n", jg1[10]);
                        printf("12. 주류 : %d개\n", jg1[11]);



                    }
                    if (jums == 3)
                    {

                        printf("<고객에게 알림>\n");
                        while(1)
                        {

                            printf("상품을 발송할 주문을 선택하세요\n");




                            scanf("%d", &bs);
                            printf("주문번호 %d번 %c님께 %d상품 %d개 발송합니다.\n", bs, wnans[bs-1][1], wnans[bs-1][3], wnans[bs-1][4]);

                            jg1[wnans[bs][3]]=jg1[wnans[bs][3]]-wnans[bs][4];
                            bss[ttt]=bs;
                            ttt++;

                            if(bs==-1)
                                break;

                        }
                    }
                    if (jums == 4)
                        break;
                }

            }

            if (jselect == 2)
            {
                while (1)
                {
                    printf("Enter your password.\n");
                    scanf("%d", &pww);
                    if (pww == 222)
                        break;
                    else
                        printf("Password incorrect.\n");
                }



                while (1)
                {
                    printf("Sangmyeongdae dot screen\n");
                    printf("1.View Order Status Notifications \n");
                    printf("2. 재고확인 \n");
                    printf("3.Notify customer \n");
                    printf("4.Log out \n");

                    scanf("%d", &jums);

                    if (jums == 1)
                    {
                        printf("Customer> Convenience Store \n");
                        for (int h = 0; h<c + 1; h++)
                        {

                            for (int y = 0; y<5; y++)
                            {
                                if(wnans[h][2]!=2)
                                    continue;

                                printf("%d \n", wnans[h][y]);
                            }
                            printf("\n");
                        }
                    }
                    if (jums == 2)
                    {
                        printf("<재고확인>\n");
                        printf("1.과자 : %d개\n", jg2[0]);
                        printf("2. 과일 : %d개\n", jg2[1]);
                        printf("3. 계란 : %d개\n", jg2[2]);
                        printf("4. 김밥 : %d개\n", jg2[3]);
                        printf("5. 핫바 : %d개\n", jg2[4]);
                        printf("6. 빵 : %d개\n", jg2[5]);
                        printf("7. 아이스크림 : %d개\n", jg2[6]);
                        printf("8. 냉동식품 : %d개\n", jg2[7]);
                        printf("9. 우유 : %d개\n", jg2[8]);
                        printf("10. 커피 : %d개\n", jg2[9]);
                        printf("11. 그외음료 : %d개\n", jg2[10]);
                        printf("12. 주류 : %d개\n", jg2[11]);
                    }
                    if (jums == 3)
                    {
                        printf("<고객에게 알림>\n");
                        while(1)
                        {

                            printf("상품을 발송할 주문을 선택하세요\n");




                            scanf("%d", &bs);
                            printf("주문번호 %d번 %c님께 %d상품 %d개 발송합니다.\n", bs, wnans[bs-1][1], wnans[bs-1][3], wnans[bs-1][4]);

                            jg2[wnans[bs][3]]=jg2[wnans[bs][3]]-wnans[bs][4];
                            bss[ttt]=bs;
                            ttt++;

                            if(bs==-1)
                                break;

                        }
                    }
                    if (jums == 4)
                        break;

                }


                if (jselect == 3)
                {
                    while (1)
                    {
                        printf("Enter your password.\n");
                        scanf("%d", &pww);
                        if (pww == 333)
                            break;
                        else
                            printf("Password incorrect.\n");
                    }

                    while (1)
                    {
                        printf("Bupyeong Station Screen\n");
                        printf("1.View Order Status Notifications \n");
                        printf("2.재고확인  \n");
                        printf("3. Notify customer\n");
                        printf("4.Log out \n");

                        scanf("%d", &jums);
                        if (jums == 1)
                        {
                            printf(" Customer> Convenience Store\n");
                            for (int h = 0; h<c + 1; h++)
                            {

                                for (int y = 0; y<5; y++)
                                {
                                    if(wnans[h][2]!=3)
                                        continue;

                                    printf("%d \n", wnans[h][y]);
                                }
                                printf("\n");
                            }

                        }
                        if (jums == 2)
                        {
                            printf("<재고확인>\n");
                            printf("1.과자 : %d개\n", jg3[0]);
                            printf("2. 과일 : %d개\n", jg3[1]);
                            printf("3. 계란 : %d개\n", jg3[2]);
                            printf("4. 김밥 : %d개\n", jg3[3]);
                            printf("5. 핫바 : %d개\n", jg3[4]);
                            printf("6. 빵 : %d개\n", jg3[5]);
                            printf("7. 아이스크림 : %d개\n", jg3[6]);
                            printf("8. 냉동식품 : %d개\n", jg3[7]);
                            printf("9. 우유 : %d개\n", jg3[8]);
                            printf("10. 커피 : %d개\n", jg3[9]);
                            printf("11. 그외음료 : %d개\n", jg3[10]);
                            printf("12. 주류 : %d개\n", jg3[11]);
                        }
                        if (jums == 3)
                        {
                            printf("<고객에게 알림>\n");
                            while(1)
                            {

                                printf("상품을 발송할 주문을 선택하세요\n");




                                scanf("%d", &bs);
                                printf("주문번호 %d번 %c님께 %d상품 %d개 발송합니다.\n", bs, wnans[bs-1][1], wnans[bs-1][3], wnans[bs-1
                                ][4]);

                                jg3[wnans[bs][3]]=jg3[wnans[bs][3]]-wnans[bs][4];
                                bss[ttt]=bs;
                                ttt++;

                                if(bs==-1)
                                    break;

                            }
                        }

                        if (jums == 4)
                            break;

                    }


                }
            }






        }
    }
    return 0;
}

