#include <bits/stdc++.h>
using namespace std;

char buf[100000];

int breakAll = 0;
char* name;
int L = 0;
int R = 0;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream�� str�� ��´�.
    string buffer;                      // �����ڸ� �������� ����� ���ڿ��� ������� ����

    vector<string> result;

    // istringstream�� istream�� ��ӹ����Ƿ� getline�� ����� �� �ִ�.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // ����� ���ڿ��� vector�� ����
    }

    return result;
}

int main()
{
    string mystring;
    getline(cin, mystring);
    cout<<mystring<<endl;


    cin.getline(buf, 100000);

    for(int i2 = 0, i3_start = 0, i3_end = 0; i2 < 100000; i2++)
    {
        str = buf;
    }


    printf("%s\n", str);

    for(int i2 = 0, i3_start = 0, i3_end = 0; i2 < 100000; i2++)
    {

        if(buf[i2] == '<')
        {
            L = 1;
            printf("%c", buf[i2]);
            i3_start = i2 + 1;
            continue;
        }

        if(buf[i2] == '>')
        {
            L = 2;
            printf("%c", buf[i2]);
            i3_start = i2 +1;
        }

        if(buf[i2] == ' ' || buf[i2] == '\0' || L == 1)
        {
            i3_end = i2;
            for(int i3 = i3_end; i3 >= i3_start; i3--)
            {
                printf("%c", buf[i3]);
            }
            i3_start = i2 + 1;

        }
        else if(L == 1)
            printf("%c", buf[i2]);




        if(buf[i2] == '\0')
            break;


    }





    return 0;

}

