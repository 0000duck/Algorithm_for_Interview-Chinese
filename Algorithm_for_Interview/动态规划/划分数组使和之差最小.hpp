/*
imhuay/Deep_Learning_Notes_for_Interview-Chinese https://github.com/imhuay/Deep_Learning_Notes_for_Interview-Chinese/tree/master/�����澭/#1-����ͷ��-�㷨����ʦ-ʵϰ

��Ŀ��Դ������ͷ��ʵϰ���ԡ����֮��

��Ŀ������
    ������Ԫ�ػ��ֳ������֣�ʹ�����ֺ͵Ĳ���С������˳��ɱ䣻
    ������Ԫ�صĲ�ֵ
    ���� OJ ���⣬ֻ��֤�������������ܴ��� BUG��

����˼·��
    ������Եȼ��ڡ���������ȡ������Ԫ�أ�ʹ���ǵĺ���ӽ� sum/2������ sum Ϊ��������ĺ͡���

    ˼· 1��
        > ������ֳ�������ʹ�������ֵĺ͵Ĳ���С - �ƿ� https://www.tuicool.com/articles/ZF73Af
        ��ʱ���Խ�ԭ���⿴��һ����������
        ��һ����ά���� dp[i][j] ��ʾ��ǰ i ������װ����Ϊ j �ı����ܹ�װ�µ����ֵ
        ״̬ת�Ʒ��̣�
            dp[i][j] = max{dp[i-1][j-ns[i]]+ns[i], dp[i-1][j]}
        ����
            dp[i-1][j-ns[i]]+ns[i] ��ʾ�� i ��������뱳�������Σ�
            dp[i-1][j] ��ʾ�� i �����岻���뱳��������

        ����ֵ
            sum - 2 * dp[n-1][sum/2]

        ���Ϸ�����Ȼ���У������൱�˷ѿռ䣺���� j ��Ȼ������������Ȼ�������п��ܷ������

    ˼· 2��
        �������� N �������Ӽ� I���� 2*abs(sum(N)/2 - sum(I))��ȡ��С����Ϊ����ֵ

*/
#pragma once

#include "../all.h"

class Solution {
public:
    int getMaxDiff(vector<int>& nums) {
        int sum = 0;
        for (auto i : nums)
            sum += i;

        int n = nums.size();
        int dp[N1000][N1000];
        for (size_t i = 0; i < n; i++) {


        }


    }
};

void
solve()
{

}