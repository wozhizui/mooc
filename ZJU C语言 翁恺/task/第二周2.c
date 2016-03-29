// 信号报告（5分）
// 题目内容：
// 无线电台的RS制信号报告是由三两个部分组成的：
// R(Readability) 信号可辨度即清晰度.
// S(Strength)    信号强度即大小.
// 其中R位于报告第一位，共分5级，用1—5数字表示.
// 1---Unreadable
// 2---Barely readable, occasional words distinguishable
// 3---Readable with considerable difficulty
// 4---Readable with practically no difficulty
// 5---Perfectly readable
// 报告第二位是S，共分九个级别，用1—9中的一位数字表示
// 1---Faint signals, barely perceptible
// 2---Very weak signals
// 3---Weak signals
// 4---Fair signals
// 5---Fairly good signals
// 6---Good signals
// 7---Moderately strong signals
// 8---Strong signals
// 9---Extremely strong signals
// 现在，你的程序要读入一个信号报告的数字，然后输出对应的含义。如读到59，则输出：
// Extremely strong signals, perfectly readable.
// 输入格式:
// 一个整数，信号报告。整数的十位部分表示可辨度，个位部分表示强度。输入的整数范围是[11,59]，这个范围外的数字不可能出现在测试数据中。

// 输出格式：
// 一句话，表示这个信号报告的意义。按照题目中的文字，先输出表示强度的文字，跟上逗号和空格，然后是表示可辨度的文字，跟上句号。注意可辨度的句子的第一个字母是小写的。注意这里的标点符号都是英文的。

// 输入样例：
// 33

// 输出样例：
// Weak signals, readable with considerable difficulty.
#include <stdio.h>
int main()
{
    int rs, r = 0, s = 0;
    char *a,*b;
    scanf("%d", &rs);
    s = rs % 10;
    if (rs >= 11 && rs <= 59 && s != 0)
    {
        r = rs / 10;
        s = rs % 10;
        switch (r)
        {
            case 1:
            a = "unreadable";
            break;
            case 2:
            a = "barely readable, occasional words distinguishable";
            break;
            case 3:
            a = "readable with considerable difficulty";
            break;
            case 4:
            a = "readable with practically no difficulty";
            break;
            case 5:
            a = "perfectly readable";
            break;
        }
        switch (s)
        {
            case 1:
            b = "Faint signals, barely perceptible";
            break;
            case 2:
            b = "Very weak signals";
            break;
            case 3:
            b = "Weak signals";
            break;
            case 4:
            b = "Fair signals";
            break;
            case 5:
            b = "Fairly good signals";
            break;
            case 6:
            b = "Good signals";
            break;
            case 7:
            b = "Moderately strong signals";
            break;
            case 8:
            b = "Strong signals";
            break;
            case 9:
            b = "Extremely strong signals";
            break;
        }

        printf("%s, %s.", b, a);

    }
    return 0;

}

