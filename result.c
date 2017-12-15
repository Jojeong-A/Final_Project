#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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

    int wnans[50][11];
    int jg1[20];
    int jg2[20];
    int jg3[20];
    int bs = 0;
    int bss[50];
    int ttt = 0;

    int srand(time(NULL));
    for (int o = 0; o < 12; o++)
    {
        jg1[o] = 20 + rand() % 10 + 1;
    }
    for (int o = 0; o < 12; o++)
    {
        jg2[o] = 20 + rand() % 10 + 1;
    }
    for (int o = 0; o < 12; o++)
    {
        jg3[o] = 20 + rand() % 10 + 1;
    }
    int c = 0;
    int d = 0;
    int nn = 1;

    printf(" ++++++++++++++++++++++++++++++\n");
    printf("            WELCOME            \n");
    printf(" ++++++++++++++++++++++++++++++\n");
    printf("      HJ convenience store     \n");
    printf("            ORDER              \n");
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
        { " Other drinks ",11 },{ "the drink",12 }
    };


    int start;
    scanf("%d", &start);

    if (start != 0)


        char id[num][name] = { 0, };
    char pw[num][name] = { 0, };
    int temp = 0, count = 0, ch, in = 0;

    while (1)
    {
        printf("***********************************\n");
        printf("***1.       Customer mode       ***\n");
        printf("***2.    Store  manager mode    ***\n");
        printf("***********************************\n");

        int select;
        scanf("%d", &select);

        if (select == 1)
            while (1)
            {
                printf("================\n");
                printf("1. Sign Up \n2. login\n3. Log out \n");
                printf("================\n");
                printf(" Select a task: ");
                scanf("%d", &ch);
                printf("\n");

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
                    printf("\n");
                    printf("Enter Password : ");
                    scanf("%s", &pw[in]);
                    printf("\n");
                    printf("++++++++++++++++++++++++\n");
                    printf("!!Completed membership!!\n");
                    printf("++++++++++++++++++++++++\n");
                    printf("\n");
                    break;

                }

                if (ch == 2)
                {

                    temp = 0;

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
                                d = 0;

                                printf("++++++++++++++++\n");
                                printf("    Signed in  \n");
                                printf("    welcome %s  \n", id[0]);
                                printf("++++++++++++++++\n");

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
                                    printf("4. 알림\n");
                                    printf("================\n");

                                    scanf("%d", &t); // order or rogout 

                                    printf("\n");

                                    if (t == 1) // 주문 
                                    {
                                        for (int z = 0; z < 10; z++)
                                        {
                                            wnans[c][d] = nn;
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
                                                printf("===========================================\n");
                                                printf("Store Name : %10s\nStore Number : %5d\n", list[a].S_name, list[a].J_num);
                                                printf("===========================================\n");
                                            }


                                            printf("input Store Name number: \n ");
                                            scanf("%d", &wnans[c][d]); // 점포 명 변수 입력 

                                            printf("\n");
                                            printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                                            printf(" You choose %10s Store! (Store Number %3d) \n", list[wnans[c][d] - 1].S_name, list[wnans[c][d] - 1].J_num);
                                            printf("             Check store selection         \n");
                                            printf("             YES : input 1 <-> NO: input 0 \n");
                                            printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");


                                            scanf("%d", &YN2); // Yes or No

                                            if (YN2 == 1) {
                                                printf("***********************\n");
                                                printf("**         YES       **\n");
                                                printf("***********************\n");

                                            }
                                            else if (YN2 == 0) {
                                                printf("***********************\n");
                                                printf("**        NO         **\n");
                                                printf("***********************\n");
                                                t = 0;
                                                continue;
                                            }
                                            else {
                                                printf("*********************************\n");
                                                printf("**Wrong number,   Check number!**\n");
                                                printf("*********************************\n");
                                                t = 0;
                                                continue;
                                            }


                                            printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
                                            printf("           input product name number           \n");
                                            printf(" Enter the Product Number  you wish to select. \n");
                                            printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");

                                            for (s = 1; s < 13; s++) // 상품명 출력 
                                            {
                                                printf("=======================================\n");
                                                printf("Product Name : %15s\n Product Number : %10d\n", list2[s - 1].P_name, list2[s - 1].P_num);
                                                printf("=======================================\n");
                                            }

                                            int i = 0; // 상품 입력 횟수 

                                            // 주문 입력 
                                            d++;

                                            printf("#Product Number input# \n");
                                            scanf("%d", &wnans[c][d]); // 상품 정보 입력 
                                            printf("+++++++++++++++++++++++++++++++++++++++\n");
                                            printf("Number : %2d -> Product : %5s\n", list2[wnans[c][d] - 1].P_num, list2[wnans[c][d] - 1].P_name);
                                            printf("+++++++++++++++++++++++++++++++++++++++\n");
                                            printf("\n");
                                            printf("=================\n");
                                            printf("Quantity input: ");

                                            d++;
                                            scanf("%d", &wnans[c][d]); // 상품 갯수 입력 

                                            printf("\n");

                                            printf("+++++++++++++++++++++++++++++++++++++\n");
                                            printf("Product : %5s\nQuantity : %2d\n", list2[wnans[c][d - 1] - 1].P_name, wnans[c][d]);
                                            printf("+++++++++++++++++++++++++++++++++++++\n");

                                            printf("=======================================\n");
                                            printf("    YES (correct order)    : input 1 \n");
                                            printf("    NO  (incorrect order)  : input 2 \n");
                                            printf("=======================================\n");

                                            scanf("%d", &YN);
                                            printf("\n");

                                            if (YN == 1)
                                            {
                                                printf("=======================================\n");
                                                printf("         YES(CORRECT ORDER)        \n");
                                                printf("=======================================\n");
                                                i++;

                                            }

                                            else if (YN == 2)
                                            {
                                                printf("=======================================\n");
                                                printf("         NO (INCORRECT ORDER)          \n");
                                                printf("         Re-enter Order!!              \n");
                                                printf("=======================================\n");
                                                z = 0; // 다시 주문 입력 
                                            }

                                            else // 이외의 번호 입력시 다시 주문으로 돌아가기  
                                            {
                                                printf("=======================================\n");
                                                printf("       Wrong number,  Check number!    \n");
                                                printf("=======================================\n");
                                                continue;
                                            }

                                            printf("**************************************************\n");
                                            printf("***             Continue your order?           ***\n");
                                            printf("*** If you enter 0, the number entry will end. ***\n");
                                            printf("**************************************************\n");

                                            int ppp;
                                            scanf("%d", &ppp);
                                            printf("\n");

                                            if (ppp == 0) {
                                                break;
                                            }
                                            else
                                                c++;
                                            continue;
                                        }
                                    }

                                    if (t == 2) // 로그아웃 
                                        break;

                                    if (t == 3) // 주문 내역 
                                    {
                                        printf("\n");
                                        for (int h = 0; h < c + 1; h++)
                                        {
                                            for (int y = 0; y < 12; y++)
                                            {
                                                if (wnans[h][1] != *id[0])
                                                    continue;
                                                else if (wnans[h][1] == *id[0])
                                                {
                                                    printf("+++++++++++   order list ++++++++++++\n");
                                                    printf("Order Num:   %d \n", wnans[h][0]);
                                                    printf("Order ID :   %c \n", wnans[h][1]);
                                                    printf("Store    :   %s \n", list[wnans[h][2] - 1].S_name);
                                                    printf("Product  :   %s \n", list2[wnans[h][3] - 1].P_name);
                                                    printf("Quantity :   %d \n", wnans[h][4]);

                                                }
                                            }
                                            printf("\n");
                                        }
                                    }
                                    if (t == 4)
                                    {

                                        for (int rrr = 0; rrr<c + 1; rrr++)
                                        {
                                            if (bss[0] == 0)
                                                break;


                                            else
                                            {

                                                if (wnans[bss[rrr] - 1][1] == *id[0])
                                                {

                                                    printf("%c, %d Product %d  Your order has arrived..\n", wnans[bss[rrr] - 1][1], wnans[bss[rrr] - 1][3], wnans[bss[rrr] - 1][4]);
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

                            printf("*******************\n");
                            printf("Password incorrect.\n");
                            printf("*******************\n");

                            break;
                        }
                        break;
                    }
                    else
                    {
                        printf("++++++\n");
                        printf("No ID.\n");
                        printf("++++++\n");

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
            printf("+++++++++++++++++++++++++++++++++++\n");
            printf("**Please select a store to log in**\n");
            printf("+++++++++++++++++++++++++++++++++++\n");
            printf("\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("1.     Marine University  Store     \n");
            printf("2.   sangmyeong University Store    \n");
            printf("3.    Bupyeong  Station  Store      \n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

            int jselect;
            int pww;
            int jumss = 0;
            int jums;
            scanf("%d", &jselect);

            if (jselect == 1)
            {
                while (1)
                {
                    printf("*******************\n");
                    printf("Enter your password.\n");
                    printf("*******************\n");
                    scanf("%d", &pww);
                    if (pww == 111)
                        break;
                    else {
                        printf("*******************\n");
                        printf("Password incorrect.\n");
                        printf("*******************\n");
                    }

                }

                while (1)
                {
                    printf(" ******* Maritime University Store *******\n");
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("**1.   View Order Status Notifications **\n");
                    printf("**2.          Inventory check           **\n");
                    printf("**3.        Notify customer            **\n");
                    printf("**4.            Log out                **\n");
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

                    scanf("%d", &jums);
                    int ll = 0;
                    int bb = 0;

                    if (jums == 1)
                    {
                        printf("**************************\n");
                        printf("***customer orders list***\n");
                        printf("**************************\n");
                        printf("\n");
                        for (int h = 0; h < c + 1; h++)
                        {
                            for (int y = 0; y < 4; y++)
                            {
                                if (wnans[h][2] != 1)
                                    continue;
                                else if (wnans[h][2] == 1) {
                                    printf("*****************\n");
                                    printf("Order Num: %d \n", wnans[h][0]);
                                    printf("Order ID : %c \n", wnans[h][1]);
                                    printf("Store : %s \n", list[wnans[h][2] - 1].S_name);
                                    printf("Product: %s \n", list2[wnans[h][3] - 1].P_name);
                                    printf("Quantity : %d\n", wnans[h][4]);
                                    printf("*****************\n");

                                    printf("\n");
                                    break;
                                }

                            }
                            printf("\n");
                        }
                    }
                    if (jums == 2)
                    {
                        printf("***************\n");
                        printf("Inventory check\n");
                        printf("***************\n");
                        printf("\n");
                        printf("++++++++++++++++++++++++\n");
                        printf("1.  Snack        : %d\n", jg1[0]);
                        printf("2.  Fruit        : %d\n", jg1[1]);
                        printf("3.  Egg          : %d\n", jg1[2]);
                        printf("4.  Kimbab       : %d\n", jg1[3]);
                        printf("5.  Sausage      : %d\n", jg1[4]);
                        printf("6.  Bread        : %d\n", jg1[5]);
                        printf("7.  Ice cream    : %d\n", jg1[6]);
                        printf("8.  Frozen Food  : %d\n", jg1[7]);
                        printf("9.  Milk         : %d\n", jg1[8]);
                        printf("10. Coffee       : %d\n", jg1[9]);
                        printf("11. Other drinks : %d\n", jg1[10]);
                        printf("12. the drink    : %d\n", jg1[11]);
                        printf("++++++++++++++++++++++++\n");
                    }
                    if (jums == 3)
                    {
                        printf(" Inform customer \n");
                        while (1)
                        {

                            printf("Please select an order to send the goods\n");

                            scanf("%d", &bs);
                            printf("Order number %dNum %c customer %dProduct %dQ Send it.\n", bs, wnans[bs - 1][1], wnans[bs - 1][3], wnans[bs - 1][4]);

                            jg1[wnans[bs][3]] = jg1[wnans[bs][3]] - wnans[bs][4];
                            bss[ttt] = bs;
                            ttt++;
                            if (bs == -1)
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
                    printf("*******************\n");
                    printf("Enter your password.\n");
                    printf("*******************\n");
                    scanf("%d", &pww);
                    if (pww == 222)
                        break;
                    else {
                        printf("*******************\n");
                        printf("Password incorrect.\n");
                        printf("*******************\n");
                    }

                }



                while (1)
                {
                    printf("******  sangmyeong University Store ******\n");
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("**1.   View Order Status Notifications **\n");
                    printf("**2.          Inventory check           **\n");
                    printf("**3.        Notify customer            **\n");
                    printf("**4.            Log out                **\n");
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

                    scanf("%d", &jums);

                    if (jums == 1)
                    {
                        printf("**************************\n");
                        printf("***customer orders list***\n");
                        printf("**************************\n");
                        for (int h = 0; h < c + 1; h++)
                        {
                            for (int y = 0; y < 5; y++)
                            {
                                if (wnans[h][2] != 2)
                                    continue;
                                else if (wnans[h][2] == 2) {
                                    printf("*****************\n");
                                    printf("Order Num: %d \n", wnans[h][0]);
                                    printf("Order ID : %c \n", wnans[h][1]);
                                    printf("Store : %s \n", list[wnans[h][2] - 1].S_name);
                                    printf("Product: %s \n", list2[wnans[h][3] - 1].P_name);
                                    printf("Quantity : %d\n", wnans[h][4]);
                                    printf("*****************\n");
                                    break;
                                }
                                printf("\n");
                            }
                            printf("\n");
                        }
                    }
                    if (jums == 2)
                    {
                        printf("***************\n");
                        printf("Inventory check\n");
                        printf("***************\n");
                        printf("\n");
                        printf("++++++++++++++++++++++++\n");
                        printf("1.  Snack        : %d\n", jg2[0]);
                        printf("2.  Fruit        : %d\n", jg2[1]);
                        printf("3.  Egg          : %d\n", jg2[2]);
                        printf("4.  Kimbab       : %d\n", jg2[3]);
                        printf("5.  Sausage      : %d\n", jg2[4]);
                        printf("6.  Bread        : %d\n", jg2[5]);
                        printf("7.  Ice cream    : %d\n", jg2[6]);
                        printf("8.  Frozen Food  : %d\n", jg2[7]);
                        printf("9.  Milk         : %d\n", jg2[8]);
                        printf("10. Coffee       : %d\n", jg2[9]);
                        printf("11. Other drinks : %d\n", jg2[10]);
                        printf("12. the drink    : %d\n", jg2[11]);
                        printf("++++++++++++++++++++++++\n");
                    };
                }
                if (jums == 3)
                {
                    printf(" Inform customer \n");
                    while (1)
                    {

                        printf("Please select an order to send the goods\n");

                        scanf("%d", &bs);
                        printf("Order number %dNum %c customer %dProduct %dQ Send it.\n", bs, wnans[bs - 1][1], wnans[bs - 1][3], wnans[bs - 1][4]);

                        jg2[wnans[bs][3]] = jg2[wnans[bs][3]] - wnans[bs][4];
                        bss[ttt] = bs;
                        ttt++;
                        if (bs == -1)
                            break;

                    }
                    printf("Convenience Store> Customer Notification Function");
                }
                if (jums == 4)
                    break;

            }


            if (jselect == 3)
            {
                while (1)
                {
                    printf("*******************\n");
                    printf("Enter your password.\n");
                    printf("*******************\n");

                    scanf("%d", &pww);

                    if (pww == 333)
                        break;
                    else
                    {
                        printf("*******************\n");
                        printf("Password incorrect.\n");
                        printf("*******************\n");
                    }
                }

                while (1)
                {
                    printf("********  Bupyeong Station Store  ********\n");
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("**1.   View Order Status Notifications **\n");
                    printf("**2.          Inventory check           **\n");
                    printf("**3.        Notify customer            **\n");
                    printf("**4.            Log out                **\n");
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

                    scanf("%d", &jums);
                    if (jums == 1)
                    {
                        printf("**************************\n");
                        printf("***customer orders list***\n");
                        printf("**************************\n");
                        for (int h = 0; h < c + 1; h++)
                        {
                            for (int y = 0; y < 5; y++)
                            {
                                if (wnans[h][2] != 3)
                                    continue;
                                else if (wnans[h][2] == 3) {
                                    printf("*****************\n");
                                    printf("Order Num: %d \n", wnans[h][0]);
                                    printf("Order ID : %c \n", wnans[h][1]);
                                    printf("Store : %s \n", list[wnans[h][2] - 1].S_name);
                                    printf("Product: %s \n", list2[wnans[h][3] - 1].P_name);
                                    printf("Quantity : %d\n", wnans[h][4]);
                                    printf("*****************\n");
                                    break;
                                }
                            }
                            printf("\n");
                        }

                    }
                    if (jums == 2)

                    {
                        printf("***************\n");
                        printf("Inventory check\n");
                        printf("***************\n");
                        printf("\n");
                        printf("++++++++++++++++++++++++\n");
                        printf("1.  Snack        : %d\n", jg3[0]);
                        printf("2.  Fruit        : %d\n", jg3[1]);
                        printf("3.  Egg          : %d\n", jg3[2]);
                        printf("4.  Kimbab       : %d\n", jg3[3]);
                        printf("5.  Sausage      : %d\n", jg3[4]);
                        printf("6.  Bread        : %d\n", jg3[5]);
                        printf("7.  Ice cream    : %d\n", jg3[6]);
                        printf("8.  Frozen Food  : %d\n", jg3[7]);
                        printf("9.  Milk         : %d\n", jg3[8]);
                        printf("10. Coffee       : %d\n", jg3[9]);
                        printf("11. Other drinks : %d\n", jg3[10]);
                        printf("12. the drink    : %d\n", jg3[11]);
                        printf("++++++++++++++++++++++++\n");
                    }
                }
                if (jums == 3)
                {
                    printf("<Inform customer>\n");
                    while (1)
                    {
                        printf("Please select an order to send the goods\n");

                        scanf("%d", &bs);
                        printf("Order number %dNum %c customer %dProduct %dQ Send it.\n", bs, wnans[bs - 1][1], wnans[bs - 1][3], wnans[bs - 1][4]);

                        jg1[wnans[bs][3]] = jg3[wnans[bs][3]] - wnans[bs][4];
                        bss[ttt] = bs;
                        ttt++;

                        if (bs == -1)
                            break;

                        printf("Convenience Store> Customer Notification Function");
                    }
                    if (jums == 4)
                        break;
                }
            }
        }
    }
    return 0;
}
