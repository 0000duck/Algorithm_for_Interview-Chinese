/*
�ַ��������� https://www.nowcoder.com/practice/fe6b651b66ae47d7acce78ffdd9a96c7?tpId=13&tqId=11180&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking

��Ŀ��Դ����ָOffer

��Ŀ����
    ����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc,���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
��������:
    ����һ���ַ���,���Ȳ�����9(�������ַ��ظ�),�ַ�ֻ������Сд��ĸ��

ʱ�����ƣ�1�� �ռ����ƣ�32768K �ȶ�ָ����180797
����֪ʶ�㣺 �ַ���

����˼·��
    DFS �ҳ���������
    ����

�ύ��¼��

*/
#pragma once

#include "../all.h"

class Solution {
public:
    vector<string> ret;

    vector<string> Permutation(string str) {
        int sl = str.length();
        char *cs = new char[sl + 1];
        strcpy(cs, str.c_str());

        return ret;
    }

    void dfs(char cs[]) {

    }
};

void solve() {

}