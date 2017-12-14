#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termio.h>
#define work 50
#define name 10 
#define num 11
#pragma warning (disable : 4996)

void customer(void);
int Canlendar_Input(void);
void jumju();
void Calendar(int year, int month, int Day);
int Select_TimeInput(void);
void Select_Time(int AMPM, int H, int M);
int rogin(void);
void aram(int n);

int getch(void)

{

    int ch;

    struct termios buf;

    struct termios save;

    tcgetattr(0, &save);

    buf = save;

    buf.c_lflag &= ~(ICANON | ECHO);

    buf.c_cc[VMIN] = 1;

    buf.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &buf);

    ch = getchar();

    tcsetattr(0, TCSAFLUSH, &save);

    return ch;

}

[��ó] ������ getch|�ۼ��� IceStove



struct A
{
    char S_name[25]; // ���� �̸�  
    int J_num; // ���� ��ȣ 

}i[50];


struct B
{
    char P_name[30]; //  ��ǰ �̸� 
    int P_num; // ��ǰ ��ȣ
};

struct C
{
    int S_Name; // ���� ��ȣ �Է� 
    int P_Name; // ��ǰ ��ȣ �Է� 
    int P_Qua; // ��ǰ ����  �Է� 
};

int main(void) {

    int wnans[50][5];
    int c = 0;
    int d = 0;
    int nn=1;

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

                                int t; // �ֹ� or �α׾ƿ� 
                                int a; //  ���� �Է°� ��¿� �� ���� 
                                int s; // ��ǰ �Է°� ��¿� �� ���� 


                                while (1)
                                {

                                    printf("================\n");
                                    printf("1. ORDER \n");
                                    printf("2. ROGOUT \n");
                                    printf("3. ����Ȯ��\n");
                                    printf("================\n");

                                    scanf("%d", &t); // order or rogout 


                                    if (t == 1) // �ֹ� 
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

                                            for (a = 0; a < 3; a++)// ���� �� ���  
                                            {
                                                printf("======================================================\n");
                                                printf("Store Name : %10s : Store Number : %5d\n", list[a].S_name, list[a].J_num);
                                                printf("======================================================\n");
                                            }


                                            printf("input Store Name number: \n ");
                                            scanf("%d", &wnans[c][d]); // ��ǰ ���� �Է� 


                                            printf("\n");
                                            printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                                            printf(" You choose %5s Store! (Store Number %2d) \n", list[wnans[c][d] - 1].S_name, list[wnans[c][d] - 1].J_num);
                                            printf("               Check store selection \n");
                                            printf("             YES : input 1 <-> NO: input 0 \n");
                                            printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");


                                            scanf("%d", &YN2); // Yes or No

                                            if (YN2 == 1) {
                                                printf("����������������������\n");
                                                printf("��        YES       ��\n");
                                                printf("����������������������\n");
                                            }
                                            else if (YN2 == 0) {
                                                printf("����������������������\n");
                                                printf("��        NO        ��\n");
                                                printf("����������������������\n");
                                                continue;
                                            }
                                            else {
                                                printf("����������������������������������\n");
                                                printf("�� Wrong number,  Check number! ��\n");
                                                printf("����������������������������������\n");
                                                continue;
                                            }


                                            printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
                                            printf("           input product name number           \n");
                                            printf(" Enter the Product Number  you wish to select. \n");
                                            printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");

                                            for (s = 0; s < 12; s++) // ��ǰ�� ��� 
                                            {
                                                printf("======================================================\n");
                                                printf("Product Name : %10s , Product Number : %5d\n", list2[s - 1].P_name, list2[s - 1].P_num);
                                                printf("======================================================\n");
                                            }


                                            int i = 0; // ��ǰ �Է� Ƚ�� 

                                            // �ֹ� �Է� 
                                            d++;

                                            printf("#Product Number input# \n");
                                            scanf("%d", &wnans[c][d]); // ��ǰ ���� �Է� 



                                            printf("+++++++++++++++++++++++++++++++++++++++\n");
                                            printf("Number : %2d -> Product : %5s\n", list2[wnans[c][d] - 1].P_num, list2[wnans[c][d] - 1].P_name);
                                            printf("+++++++++++++++++++++++++++++++++++++++\n");
                                            printf("\n");
                                            printf("=================\n");
                                            printf("Quantity input: ");

                                            d++;
                                            scanf("%d", &wnans[c][d]); // ��ǰ ���� �Է� 


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
                                                printf("������������������������������������\n");
                                                printf("��        YES(CORRECT ORDER)      ��\n");
                                                printf("������������������������������������\n");

                                            }

                                            else if (YN == 2)
                                            {
                                                printf("����������������������������������\n");
                                                printf("��      NO (INCORRECT ORDER)    ��\n");
                                                printf("��       Re-enter Order!!       ��\n");
                                                printf("����������������������������������\n");
                                                z = 0; // �ٽ� �ֹ� �Է� 
                                            }

                                            else // �̿��� ��ȣ �Է½� �ٽ� �ֹ����� ���ư���  
                                            {
                                                printf("����������������������������������\n");
                                                printf("�� Wrong number,  Check number! ��\n");
                                                printf("����������������������������������\n");
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

                                    if (t == 2) // �α׾ƿ� 
                                        break;

                                    if (t == 3) // �ֹ� 
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


                                }
                                //�α��οϷ��� ��ȭ�� �Լ�


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
            int jums;
            scanf("%d", &jselect);

            if (jselect == 1)
            {
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
                    printf("2.order \n");
                    printf("3. Notify customer\n");
                    printf("4. Log out\n");

                    scanf("%d", &jums);
                    int ll = 0;
                    int bb = 0;
                    if (jums == 1)
                    {

                        printf("Get customer orders\n");
                        for (int h = 0; h<c + 1; h++)
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
                        printf("Making goods without a distribution center\n");
                    }
                    if (jums == 3)
                    {
                        printf(" Convenience Store> Customer Notification Function");
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
                    printf("2. order\n");
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
                        printf("Making goods without a distribution center\n");
                    }
                    if (jums == 3)
                    {
                        printf("Convenience Store> Customer Notification Function");
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
                        printf("2.order \n");
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
                            printf("Making goods without a distribution center\n");
                        }
                        if (jums == 3)
                        {
                            printf("Convenience Store> Customer Notification Function");
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

int Canlendar_Input(void)
{
    int year, month, Day;
    printf("===========================================\n");
    printf(" Enter date to visit (Year ,Month, Day)\n");
    printf("===========================================\n");

    scanf("%d %d", &year, &month);
    scanf("%d", &Day);

    Calendar(year, month, Day); // ��� 

    return 0;
}

void Calendar(int year, int month, int Day)
{
    int i, yun = 0;
    int C;

    int day, day1 = 0, day2 = 0, special = 0;
    int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    //���� ���ϱ�
    for (i = 1; i < year; i++)
    {
        if (i % 4 == 0 && !(i % 100 == 0))
        {
            special++;
            //printf("%d\n", i);
        }
        else if (i % 400 == 0)
        {
            special++;
            //printf("%d\n", i);
        }
    }
    //printf("����:%d��\n", special);


    /* 1)�Է³⵵ ���⵵���� �ϼ� */
    day1 = 365 * (year - 1) + special;
    //printf("�ϼ�1:%d\n", day1);


    /* 2)�Է³⵵ 1�� 1�Ϻ��� �Է¿� 1�ϱ��� �ϼ� */
    for (i = 0; i < month - 1; i++)
    {
        day2 += month_day[i];
    }
    day2 += 1;
    //������ ��
    if ((year % 4 == 0 && !(year % 100 == 0)) || (year % 400 == 0))
    {
        yun = 1;
        if (month >= 3)
            day2 += 1;
    }
    //������ �ƴ� ��
    else
    {
        yun = 0;
        day2 = day2;
    }
    //printf("�ϼ�2:%d\n", day2);

    /* 3) 1)�� 2)�� ���� ���ϼ� */
    day = day1 + day2;
    //printf("�� �ϼ�:%d\n", day);

    /* ���� ��� */
    printf("\n\t  %dY  %dM\n", year, month);
    printf("\t==============\n");
    printf("-----------------------------\n");
    printf(" SUN MON TUE WED THU FRI SAT \n");
    printf("-----------------------------\n");

    //���� ���Ͽ� ���� ����
    for (i = 0; i < day % 7; i++)
    {
        printf("    ");
    }

    int cnt = (day % 7);

    if (yun == 1 && month == 2)//���� 2���� ��
    {
        for (i = 1; i <= 29; i++)
        {
            cnt++;
            printf("%4d", i);
            if (cnt % 7 == 0)
                printf("\n");
        }
    }
    else//�� �� �Ϲ� ���
    {
        for (i = 1; i <= month_day[month - 1]; i++)
        {
            cnt++;
            printf("%4d", i);
            if (cnt % 7 == 0)
                printf("\n");
        }
    }
    printf("\n\n");
    printf("\n");
    printf("++++++++++++++++++++++++++++++++++++++\n");
    printf("  Confirm Visit Date : %d Y %d M %d D \n  ", year, month, Day);
    printf("++++++++++++++++++++++++++++++++++++++\n");
    printf("\n");

    printf("������������������\n");
    printf("��Yes : enter 1 ��\n");
    printf("������������������\n");

    printf("������������������\n");
    printf("��No : enter 0  ��\n");
    printf("������������������\n");


    scanf("%d", &C);

    if (C == 1) {

        printf("����������������������\n");
        printf("��        YES       ��\n");
        printf("����������������������\n");


        printf("\n");
        printf("++++++++++++++++++++++++++++++++++++++++\n");
        printf(" !! Employees are always at the store. !! \n");
        printf("++++++++++++++++++++++++++++++++++++++\n");
        printf("  Visit Date : %d Y %d M %d D \n", year, month, Day);
        printf("++++++++++++++++++++++++++++++++++++++\n");
        printf("\n");



    }
    else if (C == 0) {
        printf("����������������������\n");
        printf("��        NO        ��\n");
        printf("����������������������\n");

        Canlendar_Input();// �Է� �ݺ�

    }
    else {
        printf("����������������������������������\n");
        printf("�� Wrong number,  Check number! ��\n");
        printf("����������������������������������\n");

        Canlendar_Input(); // �Է� �ݺ�  
    }

}

int Select_TimeInput(void) // �ð� �Է� 
{
    int AMPM;
    int H, M;

    printf("\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("   input : [AM or PM number][hour][minute]  \n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n");

    printf("��������������������������\n");
    printf("��     AM : enter 1     ��\n");
    printf("��     PM : enter 0     ��\n");
    printf("��������������������������\n");

    scanf("%d%d%d", &AMPM, &H, &M);

    Select_Time(AMPM, H, M);

    return 0;
}

void Select_Time(int AMPM, int H, int M) // �ð� Ȯ�� ��� 
{

    int i;

    if (AMPM == 1) {




        printf("\n");
        printf("++++++++++++++++++++++++++++++++++++++\n");
        printf("    Confirm Visit TIME : AM %d:%d \n", H, M);
        printf("++++++++++++++++++++++++++++++++++++++\n");
        printf("\n");

        printf("������������������\n");
        printf("��Yes : enter 1 ��\n");
        printf("������������������\n");

        printf("������������������\n");
        printf("��No : enter 0  ��\n");
        printf("������������������\n");

        scanf("%d", &i);

        if (i == 1) {
            printf("����������������������\n");
            printf("��        YES       ��\n");
            printf("����������������������\n");


            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf(" !! Employees are always at the store. !! \n");
            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("    Visit TIME : AM %d:%d \n", H, M);
            printf("++++++++++++++++++++++++++++++++++++++\n");

        }
        else if (i == 0) {
            printf("����������������������\n");
            printf("��        NO        ��\n");
            printf("����������������������\n");


            Select_TimeInput();
        }
        else {
            printf("��������������������������������\n");
            printf("��Wrong number, Check number! ��\n");
            printf("��������������������������������\n");

            Select_TimeInput();

        }



    }
    else if (AMPM == 0) {

        printf("++++++++++++++++++++++++++++++++++++++\n");
        printf("  Confirm Visit TIME : PM %d:%d \n  ", H, M);
        printf("++++++++++++++++++++++++++++++++++++++\n");

        printf("������������������\n");
        printf("��Yes : enter 1 ��\n");
        printf("������������������\n");

        printf("������������������\n");
        printf("��No : enter 0  ��\n");
        printf("������������������\n");

        scanf("%d", &i);


        if (i == 1) {
            printf("����������������������\n");
            printf("��        YES       ��\n");
            printf("����������������������\n");


            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf(" !! Employees are always at the store. !! \n");
            printf("++++++++++++++++++++++++++++++++++++++\n");
            printf("    Visit TIME : AM %d:%d \n", H, M);
            printf("++++++++++++++++++++++++++++++++++++++\n");

        }
        else if (i == 0) {
            printf("����������������������\n");
            printf("��        NO        ��\n");
            printf("����������������������\n");


            Select_TimeInput();
        }
        else {
            printf("��������������������������������\n");
            printf("��Wrong number, Check number! ��\n");
            printf("��������������������������������\n");

            Select_TimeInput();

        }

    }
    else {

        printf("��������������������������������\n");
        printf("��Wrong number, Check number! ��\n");
        printf("��������������������������������\n");

        Select_TimeInput();
    }

}



